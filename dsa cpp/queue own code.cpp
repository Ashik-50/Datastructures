#include <iostream>
#define MAX_SIZE 100

using namespace std;

class Queue {
    private:
        int arr[MAX_SIZE];
        int front, rear;

    public:
        Queue() {
            front = -1;
            rear = -1;
        }


        void enqueue(int x) {
            

            if (front==rear) {
                front = 0;
                rear = 0;
            } 
            
            arr[rear] = x;
            rear=rear+1;

            cout << "Enqueued " << x << " successfully"<<endl;
        }

        void dequeue() {
            
            if (front == rear) {
                front = -1;
                rear = -1;
            } 
            
            else {
                front++;
            }

            cout << "Dequeued successfully"<<endl;
        }

        void display() {
            if (front==rear) {
                cout << "Queue is empty"<<endl;
                return;
            }

            cout << "Queue: ";
            for (int i = front; i <rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        int getFront() {
            if (front==rear) {
                cout << "Queue is empty"<<endl;
                return -1;
            }

            return arr[front];
        }

        int getRear() {
            if (front==rear) {
                cout << "Queue is empty"<<endl;
                return -1;
            }

            return arr[rear-1];
        }
};

int main() {
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    q.display();
    cout << "Front element of the queue: " << q.getFront() << endl;
    cout << "Rear element of the queue: " << q.getRear() << endl;

    q.dequeue();

    q.display();
    cout << "Front element of the queue after dequeue operation: " << q.getFront() << endl;
    cout << "Rear element of the queue after dequeue operation: " << q.getRear() << endl;

    return 0;
}

