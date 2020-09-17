#include "unity.h"
#include "check.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_positive(void)
{
  TEST_ASSERT_EQUAL(1, check(5));
}
void test_zero(void)
{
  TEST_ASSERT_EQUAL(0, check(0));
}
void test_negative(void)
{
  TEST_ASSERT_EQUAL(-1, factorial(-5));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_positive);
  RUN_TEST(test_zero);
  RUN_TEST(test_negative);

  /* Close the Unity Test Framework */
  return UNITY_END();
}