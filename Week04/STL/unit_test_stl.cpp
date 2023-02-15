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
        cout << "stack1: ";
        while (!stack1.empty()) {
            cout << stack1.top() << " ";
            stack1.pop();
        }
        cout << endl;


        stack<int> stack2 = stack_from_file("nput.txt");
        cout << "stack2: ";
        while (!stack2.empty()) {
            cout << stack2.top() << " ";
            stack2.pop();
        }
        cout << endl;
    }

    SUBCASE("Testing queue implementation")
    {

    }
}