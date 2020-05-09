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
    EXPECT_CALL(weather, Get("town1"))
        .Times(1)
        .WillRepeatedly(Return(town1));
    ASSERT_NO_THROW(weather.Get("town2"));
}

TEST_F(WeatherTestCase, test3) {
    EXPECT_CALL(weather, Get("town1"))
        .Times(1)
        .WillRepeatedly(Return(town1));
    EXPECT_CALL(weather, Get("town2"))
        .Times(1)
        .WillRepeatedly(Return(town2));
    
    ASSERT_EQ(weather.GetDifferenceString("town2", "town1"), "weather is good");
}

TEST_F(WeatherTestCase, test4) {
    EXPECT_CALL(weather, Get("town1"))
        .Times(1)
        .WillRepeatedly(Return(town1));
    EXPECT_CALL(weather, Get("town2"))
        .Times(1)
        .WillRepeatedly(Return(town2));
    
    ASSERT_EQ(weather.GetDifferenceString("London", "Moscow"), "weather is bad");
}

TEST_F(WeatherTestCase, test5) {
    EXPECT_CALL(weather, Get("ErrorCity"))
        .Times(1)
        .WillRepeatedly(Return(responce_with_code_401));
    
    ASSERT_THROW(weather.GetResponseForCity("ErrorCity"), std::invalid_argument);
}
