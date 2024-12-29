// Q-4
#include <iostream>
#include <vector>
using namespace std;


class Student {
public:
    int id;
    string name;
    int marks;
};


void addStudent(vector<Student>& students) 
{
    Student s;
    cout << "Enter ID, Name, and Marks: ";
    cin >> s.id >> s.name >> s.marks;
    students.push_back(s);
    cout << "Student added.\n";
}


void displayStudents(const vector<Student>& students) {
    if (students.empty()) {
        cout << "No students to display.\n";
        return;
    }
    for (const auto& s : students) {
        cout << "ID: " << s.id << ", Name: " << s.name << ", Marks: " << s.marks << endl;
    }
}

// Update a student's marks
void updateStudent(vector<Student>& students) {
    int id, newMarks;
    cout << "Enter ID to update and new Marks: ";
    cin >> id >> newMarks;
    for (auto& s : students) {
        if (s.id == id) {
            s.marks = newMarks;
            cout << "Marks updated.\n";
            return;
        }
    }
    cout << "Student not found.\n";
}

// Delete a student
void deleteStudent(vector<Student>& students) {
    int id;
    cout << "Enter ID to delete: ";
    cin >> id;
    for (size_t i = 0; i < students.size(); i++) {
        if (students[i].id == id) {
            students.erase(students.begin() + i);
            cout << "Student deleted.\n";
            return;
        }
    }
    cout << "Student not found.\n";
}

int main() {
    vector<Student> students;
    int choice;

    do 
    {
        cout << "\n1. Add\n2. Display\n3. Update\n4. Delete\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
            addStudent(students);
        else if (choice == 2)
            displayStudents(students);
        else if (choice == 3)
            updateStudent(students);
        else if (choice == 4)
            deleteStudent(students);
        else if (choice != 5)
            cout << "Invalid choice.\n";

    } 
    while (choice != 5);

    cout << "Exiting program.\n";
   
}
