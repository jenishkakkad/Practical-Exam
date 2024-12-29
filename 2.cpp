// Q-2
#include <iostream>
using namespace std;


class Node {
public:
    int data;
    Node* next;

    
    Node(int value) {
        data = value;
        next = nullptr;
    }
};


Node* insert(Node* head, int value) {
    Node* newNode = new Node(value);  
    if (head == nullptr) 
    {
        return newNode; 
    } 

    else 
    {
        Node* temp = head;
        
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;  
    }

    return head;  
}


void findMiddle(Node* head) {
   

    Node* temp = head;
    int count = 0;

   
    while (temp != nullptr) 
    {
        count++;
        temp = temp->next;
    }

    
    int middle = count / 2;

    
    temp = head;
    for (int i = 0; i < middle; i++) 
    {
        temp = temp->next;
    }

    cout << "The middle element is: " << temp->data << endl;
}



int main() 
{
    Node* head = nullptr;

  
    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);
    head = insert(head, 5);

    
   

    
    findMiddle(head);

    
}