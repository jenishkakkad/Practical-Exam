// Q-7
#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> numbers = {10, 20, 30, 40};

  
    cout << "Original vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    
    numbers.erase(numbers.begin() + 2);

   
    cout << "Updated Vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}