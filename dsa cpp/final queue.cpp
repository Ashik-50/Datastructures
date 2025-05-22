#include<iostream>
#include<limits.h>
using namespace std;
struct lnode{
	int data;
	struct lnode *next;
};
typedef struct lnode node;
struct Queue
{
	node *front;
	node *rear;
};

struct Queue* createQueue()
{
 struct Queue *p= new Queue();	
 p -> front = NULL;
 p -> rear = NULL;
 return p;
}
void enqueue(struct Queue *q,int value){
	 node *newnode = new node();
	newnode->data = value;
	newnode->next = NULL;
	if(q->rear == NULL){
		q->front =  newnode;
	}
	else
	{
		q->rear->next = newnode;
		q->rear = newnode;
	}
	cout<<"Enqueued is: "<<value<<endl;
}

int dequeue(struct Queue *q)
{
	if(q->front==NULL){
		cout<<"Queue is Empty";
		return INT_MIN;
	}
	node *del= q->front;
	q->front=q->front->next;
	if(q->front = NULL){
		q->rear = NULL;
	}
	int temp =del->data;
	//free(del);
	return temp;
}
int main(){
	struct Queue *Q1= createQueue();
	struct Queue *Q2= createQueue();
	
	enqueue(Q1,4);
	enqueue(Q1,8);
	enqueue(Q2,3);
	enqueue(Q2,5);
	
	dequeue(Q1);
	dequeue(Q1);
	
}
