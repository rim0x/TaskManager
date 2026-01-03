#include "Task.h"

Task::Task(string t) {
    title = t;
    completed = false;
}

string Task::getTitle() {
    return title;
}

bool Task::isCompleted() {
    return completed;
}

void Task::markCompleted() {
    completed = true;
}
