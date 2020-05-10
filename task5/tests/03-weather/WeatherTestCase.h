
#pragma once

#include <gtest/gtest.h>
#include "cpr/cpr.h"
#include "WeatherMock.h"

class WeatherTestCase : public ::testing::Test {
public:
    WeatherMock weather;
    
    cpr::Response town1;
    cpr::Response town2;
    cpr::Response code_401;

    
    void SetUp() override;
};



