#include "test-framework/unity.h"
#include "square_root.h"

// Runs before every test.
void setUp(void)
{
}

// Runs after every test.
void tearDown(void)
{
}

static void test_print_sqrt(void)
{
   TEST_ASSERT_EQUAL_STRING("√", square_root());
}

int main(void)
{
   UnityBegin("test_square_root.c");

   RUN_TEST(test_print_sqrt);

   return UnityEnd();
}
