//
// Created by akhtyamovpavel on 5/1/20.
//

#include "LeapTestCase.h"

#include <Functions.h>
#include <stdexcept>

TEST_F(LeapTestCase, test1) {
    ASSERT_THROW(IsLeap(-5), std::invalid_argument);
}

TEST_F(LeapTestCase, test2) {
    ASSERT_TRUE(IsLeap(800));
}

TEST_F(LeapTestCase, test3) {
    ASSERT_FALSE(IsLeap(2200));
}

TEST_F(LeapTestCase, test4) {
    ASSERT_TRUE(IsLeap(1996));
}

TEST_F(LeapTestCase, test5) {
    ASSERT_FALSE(IsLeap(777));
}

