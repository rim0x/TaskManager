#ifndef TASK_H
#define TASK_H

#include <string>
using namespace std;

class Task {
private:
    string title;
    bool completed;

public:
    Task(string t);
    string getTitle();
    bool isCompleted();
    void markCompleted();
};

#endif
