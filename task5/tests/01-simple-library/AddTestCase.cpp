//
// Created by akhtyamovpavel on 5/1/20.
//

#include "AddTestCase.h"
#include "Functions.h"

TEST_F(AddTestCase, addtest) {
    ASSERT_EQ(Add(2, 4), 6);
}
