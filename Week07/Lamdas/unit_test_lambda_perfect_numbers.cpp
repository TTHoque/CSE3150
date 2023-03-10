#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "lambda_perfect_numbers.h"

// list of perfect numbers: 6, 28, 496, 8128, 33550336

TEST_CASE("Testing Functions")
{
    CHECK(perfect_number(6));
    CHECK(perfect_number(28));
    CHECK(!perfect_number(0));

    vector<int> perfect_numbers = perfect_numbers_generator(1, INT_MAX);
    //vector<int> perfect_numbers = perfect_numbers_generator(1, 500);
    cout << "perfect numbers: ";
    for (auto n: perfect_numbers) cout << n << " ";
    cout << endl;
}