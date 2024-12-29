// Q-10
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> tasks; 
    int choice;

    while (true) {
        
        cout << "\n1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            
            string task;
            cout << "Enter the task (single word): ";
            cin >> task; 
            tasks.push_back(task);
        } 
        else if (choice == 2) {
            
            if (tasks.empty()) {
                cout << "No tasks available." << endl;
            } else {
                cout << "Tasks:" << endl;
                for (int i = 0; i < tasks.size(); i++) {
                    cout << i + 1 << ". " << tasks[i] << endl;
                }
            }
        } 
        else if (choice == 3) {
          
            int taskNumber;
            cout << "Enter task number to mark as completed: ";
            cin >> taskNumber;

            if (taskNumber > 0 && taskNumber <= tasks.size()) {
                tasks.erase(tasks.begin() + taskNumber - 1);
                cout << "Task " << taskNumber << " marked as completed." << endl;
            } else {
                cout << "Invalid task number." << endl;
            }
        } 
        else if (choice == 4) {
            
            cout << "Exiting program." << endl;
            break;
        } 
        else {
           
            cout << "Invalid choice. Please try again." << endl;
        }
    }

  
}