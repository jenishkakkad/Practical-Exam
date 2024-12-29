// Q-3
#include <iostream>
using namespace std;

class Stack {
    int *arr;
    int size;
    int top;

public:
    Stack(int s) 
    {
        size = s;
        top = -1;
        arr = new int[s];
    }

  
    void push(int value) 
    {
        if (top == size - 1) 
        {
            cout << "Stack Overflow\n";
            return;
        }
        top++;
        arr[top] = value;
        cout << "Pushed " << value << " into the stack\n";
    }

  
    void pop() 
    {
        if (top == -1) 
        {
            cout << "Stack Underflow\n";
            return;
        }
        cout << "Popped " << arr[top] << " from the stack\n";
        top--;
    }


    void display() 
    {
        if (top == -1) 
        {
            cout << "Stack is empty\n";
            return;
        }

        cout << "Stack elements are: ";
        for (int i = 0; i <= top; i++) 
        { 
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;

    Stack S(size);
    int choice, value;

    do 
    {
       
        cout << "\nMenu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display Stack\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1: 
                cout << "Enter the value to push: ";
                cin >> value;
                S.push(value);
                break;

            case 2: 
                S.pop();
                break;

            case 3: 
                S.display();
                break;

            case 4: 
                cout << "Exiting the program\n";
                break;

            default:
                cout << "Invalid choice, please try again\n";
        }

    } 
    while (choice != 4);
 
}