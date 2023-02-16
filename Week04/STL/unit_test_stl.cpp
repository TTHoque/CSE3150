#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "stack.h"
#include "queue.h"
#include <stack>

using namespace std;

TEST_CASE("Testing stl containers")
{
    SUBCASE("Testing stack implementation") 
    {
        stack<int> stack1 = get_stack(4);
        cout << "stack1" << endl;
        pop_and_print_stack(stack1);

        stack<int> stack2 = stack_from_file("bad input");
        cout << "stack2" << endl;
        pop_and_print_stack(stack2);

        stack<int> stack3 = stack_from_file("stack3.txt");
        cout << "stack3" << endl;
        pop_and_print_stack(stack3);

        stack<int> stack4 = stack_from_file("stack4.txt");
        cout << "stack4" << endl;
        pop_and_print_stack(stack4);
        
    }

    SUBCASE("Testing queue implementation")
    {

    }
}