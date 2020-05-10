//
// Created by Pavel Akhtyamov on 02.05.2020.
//

#include "WeatherTestCase.h"
#include "WeatherMock.h"

using ::testing::Return;

void WeatherTestCase::SetUp() {
    town1.status_code = 200;
    town1.text = "{\"cod\":\"200\",\"message\":0.0036,\"cnt\":40,\"list\":[{\"dt\":1485799200,\"main\":{\"temp\":15.00}}]}";

    town2.status_code = 200;
    town2.text = town1.text;

    code_401.status_code = 401;
}

TEST_F(WeatherTestCase, test1) {
    ASSERT_NO_THROW(weather.SetApiKey("badbadbad"));
}

TEST_F(WeatherTestCase, test2) {
    EXPECT_CALL(weather, Get("London"))
        .Times(1)
            .WillRepeatedly(Return(town1));
    ASSERT_NO_THROW(weather.Get("London"));
}

TEST_F(WeatherTestCase, test3) {
    EXPECT_CALL(weather, Get("London"))
        .Times(1)
            .WillRepeatedly(Return(town1));
    EXPECT_CALL(weather, Get("Moscow"))
        .Times(1)
            .WillRepeatedly(Return(town2));
    
    ASSERT_EQ(weather.GetDifferenceString("Moscow", "London"), "Weather in Moscow is warmer than in London by 0 degrees");
}

TEST_F(WeatherTestCase, test4) {
    EXPECT_CALL(weather, Get("London"))
        .Times(1)
            .WillRepeatedly(Return(town1));
    
    EXPECT_CALL(weather, Get("Moscow"))
        .Times(1)
            .WillRepeatedly(Return(town2));
    
    ASSERT_EQ(weather.GetDifferenceString("London", "Moscow"), "Weather in London is warmer than in Moscow by 0 degrees");
}

TEST_F(WeatherTestCase, test5) {
    EXPECT_CALL(weather, Get("ErrorCity"))
        .Times(1)
            .WillRepeatedly(Return(code_401));
    
    ASSERT_THROW(weather.GetResponseForCity("ErrorCity"), std::invalid_argument);
}
