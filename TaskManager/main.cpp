#include <iostream>
#include <vector>
#include "Task.h"

using namespace std;

int main() {
    vector<Task> tasks;
    int choice;

    while (true) {
        cout << "\n--- Task Manager ---\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Delete Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            string title;
            cout << "Enter task title: ";
            getline(cin, title);
            Task t(title);
            tasks.push_back(t);
            cout << "Task added!\n";

        } else if (choice == 2) {
            cout << "\n--- Tasks ---\n";
            if (tasks.empty()) {
                cout << "No tasks available.\n";
            } else {
                for (int i = 0; i < tasks.size(); i++) {
                    cout << i+1 << ". " << tasks[i].getTitle();
                    if (tasks[i].isCompleted()) cout << " [Completed]";
                    cout << endl;
                }
            }

        } else if (choice == 3) {
            int index;
            cout << "Enter task number to mark as completed: ";
            cin >> index;
            if (index > 0 && index <= tasks.size()) {
                tasks[index-1].markCompleted();
                cout << "Task marked as completed!\n";
            } else {
                cout << "Invalid task number.\n";
            }

        } else if (choice == 4) {
            int index;
            cout << "Enter task number to delete: ";
            cin >> index;
            if (index > 0 && index <= tasks.size()) {
                tasks.erase(tasks.begin() + (index-1));
                cout << "Task deleted!\n";
            } else {
                cout << "Invalid task number.\n";
            }

        } else if (choice == 5) {
            cout << "Exiting...\n";
            break;

        } else {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
