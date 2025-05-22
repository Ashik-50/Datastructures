#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<int> myQueue;
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    cout << "Queue after enqueuing 10, 20, 30:" << endl;
    while (!myQueue.empty()) {
        cout << "Front element: " << myQueue.front() << endl;
        myQueue.pop();                                       
    }
    cout << "Queue is empty now." << endl;
    if (myQueue.empty()) {
        cout << "The queue is empty!" << endl;
    }
    myQueue.push(40);
    myQueue.push(50);
    cout << "Queue after enqueuing 40 and 50:" << endl;
    cout << "Queue size: " << myQueue.size() << endl;
    if (!myQueue.empty()) {
        cout << "Front element: " << myQueue.front() << endl;
        cout << "Back element: " << myQueue.back() << endl;
    }
    return 0;
}