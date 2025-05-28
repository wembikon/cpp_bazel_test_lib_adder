#define BOOST_TEST_MODULE AdderTest
#include <boost/test/unit_test.hpp>

#include <adder/adder.h>

BOOST_AUTO_TEST_CASE(should_add_two_numbers) {
  Adder adder(1, 2);
  BOOST_TEST(adder.result() == 3);
}

BOOST_AUTO_TEST_CASE(should_add_two_numbers_again) {
  Adder adder(3, 4);
  BOOST_TEST(adder.result() == 7);
}
