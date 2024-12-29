// Q-8
#include <iostream>
using namespace std;


class Node {
public:
    int data;    
    Node* next;   

    
    Node(int value) 
    {
        data = value;
        next = nullptr;
    }
};


class Queue 
{
private:
    Node* front; 
    Node* rear;  

public:
   
    Queue() 
    {
        front = rear = nullptr;
    }

   
    void enqueue(int value) 
    {
        Node* newNode = new Node(value); 

        if (rear == nullptr) 
        { 
            front = rear = newNode;
        } 

        else 
        {
            rear->next = newNode; 
            rear = newNode;       
        }

        cout << "Enqueued: " << value << endl;
    }

 
    void dequeue() 
    {
        if (front == nullptr) 
        { 
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }

        Node* temp = front;   
        front = front->next;  

        if (front == nullptr) 
        { 
            rear = nullptr;
        }

        cout << "Dequeued: " << temp->data << endl;
        delete temp; 
    }

  
    void display() 
    {
        if (front == nullptr) 
        { 
            cout << "Queue is empty." << endl;
            return;
        }

        Node* temp = front;
        cout << "Queue: ";
        while (temp != nullptr) 
        { 
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);

    cout << "After enqueuing elements: " << endl;
    q.display();

    q.dequeue();

    cout << "After dequeuing one element: " << endl;
    q.display();

  
}