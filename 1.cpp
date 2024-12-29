// Q-1
#include <iostream>
using namespace std;


void fun(int* array, int size) {
    cout << "Reversed Array: ";
    for (int i = size - 1; i >= 0; i--) 
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;

  
    cout << "Enter the size of the array: ";
    cin >> size;

    
    int* array = new int[size];

  
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) 
    {
        cin >> array[i];
    }

   
    cout << "Original Array: ";
    for (int i = 0; i < size; i++) 
    {
        cout << array[i] << " ";
    }
    cout << endl;

    
    fun(array, size);

   
    delete[] array;

   
}