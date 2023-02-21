#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "stack.h"
#include "queue.h"

using namespace std;

TEST_CASE("Testing stl containers")
{
    SUBCASE("Testing stack implementation") 
    {
        cout << "stack1----------------------------" << endl;
        stack<int> stack1 = get_int_stack(4);
        for (int i=3; i>=0; i--) {
            CHECK(stack1.top() == i);
            cout << stack1.top() << endl;
            stack1.pop();
        }

        cout << "stack2----------------------------" << endl;
        stack<int> stack2 = int_stack_from_file("bad input");
        CHECK(stack2.empty());
        pop_and_print_stack(stack2);

        cout << "stack3----------------------------" << endl;
        stack<int> stack3 = int_stack_from_file("stack3.txt");
        pop_and_print_stack(stack3);

        cout << "stack4----------------------------" << endl;
        stack<int> stack4 = int_stack_from_file("stack4.txt");
        pop_and_print_stack(stack4);

        cout << "stack5----------------------------" << endl;
        stack<struct node> stack5 = get_node_stack(5);
        pop_and_print_nodes(stack5);

        cout << "stack6----------------------------" << endl;
        stack<struct node> stack6 = get_node_stack(6);
        struct node last = stack6.top();
        CHECK(last.next->value == last.value);
        delete last.next;
        stack6.pop();
        struct node cur = stack6.top();
        while(stack6.size() > 1) {
            last = cur;
            stack6.pop();
            cur = stack6.top();
            CHECK(cur.value == last.prev->value);
            delete cur.next;
        }
        delete cur.prev;   

        cout << "stack7----------------------------" << endl;
        stack<struct node> stack7 = node_stack_from_file("bad input");
        pop_and_print_nodes(stack7);

        cout << "stack8----------------------------" << endl;
        stack<struct node> stack8 = node_stack_from_file("stack3.txt");
        pop_and_print_nodes(stack8);
        
        cout << "stack9----------------------------" << endl;
        stack<struct node> stack9 = node_stack_from_file("negative_stack.txt");
        
        cout << "stack10---------------------------" << endl;
        stack<int> stack10 = int_stack_from_file("negative_stack.txt");
    }

    SUBCASE("Testing queue implementation")
    {

    }
}