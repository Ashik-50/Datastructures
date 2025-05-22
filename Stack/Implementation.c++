#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> myStack;
    cout<<"Enter the number of elements : ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        myStack.push(a);
    }
    while (!myStack.empty()) {
        cout << "Top element: " << myStack.top() << endl; 
        myStack.pop();                                   
    }
    cout << "Stack is empty now." << endl;
    if (myStack.empty()) {
        cout << "The stack is empty!" << endl;
    }
    myStack.push(40);
    myStack.push(50);

    cout << "Stack after pushing 40 and 50:" << endl;

    // Display the size of the stack
    cout << "Stack size: " << myStack.size() << endl;

    // Access the top element without removing it
    if (!myStack.empty()) {
        cout << "Top element: " << myStack.top() << endl;
    }

    return 0;
}
