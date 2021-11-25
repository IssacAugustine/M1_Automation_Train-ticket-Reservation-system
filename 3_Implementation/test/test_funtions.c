#include "unity.h"
#include "function.h"

#define PROJECT_NAME  "TRAIN_TICKET_RESERVATION_SYSTEM"

void test_booking(void){
TEST_ASSERT_EQUAL(pass,booking(1));
}
void test_cancellation(void){
TEST_ASSERT_EQUAL(pass,cancellation(1));
}
void test_chart(void){
TEST_ASSERT_EQUAL(pass,chart());
}
int main()
{
UNITY_BEGIN();

	RUN_TEST(test_booking);
	RUN_TEST(test_cancellation);
	RUN_TEST(test_chart);

return UNITY_END();
}
