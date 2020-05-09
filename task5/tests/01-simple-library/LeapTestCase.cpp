//
// Created by akhtyamovpavel on 5/1/20.
//

#include "LeapTestCase.h"

#include <Functions.h>
#include <stdexcept>

TEST_F(LeapTestCase, test1) {
    ASSERT_THROW(IsLeap(-5), std::invalid_argument);
}

test_f(leaptestcase, test2) {
    ASSERT_TRUE(IsLeap(800));
}

test_f(leaptestcase, test3) {
    ASSERT_FALSE(IsLeap(2200));
}

test_f(leaptestcase, test4) {
    ASSERT_TRUE(IsLeap(1996));
}

test_f(leaptestcase, test5) {
    ASSERT_FALSE(IsLeap(777));
}

