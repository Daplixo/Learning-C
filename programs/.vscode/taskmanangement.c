#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef {
    char *task;
    int completed; // 1 represents true 0 represents false
} Task;
Task *task = NULL;
int length = 0;

void addTask (const char *Task) {
    Task = (Task *)realloc(tasks, (length + 1) * sizeof(task));
    tasks [length].task = (char *)malloc(strlen(taks) + 1);
    tasks [length].completed = 0;

    strcpy (tasks[length].task, task);

    length++;
    printf("Task added");

}
void listTasks () {
    char status;
    for (int i =0; i < length; i++){
        if(tasks[i].completed == 1){
            status = 'd';
        }else {
            status = 'n';
        }

        printf("%d. %s [%c]\n", i + 1, tasks[i].task, status);
    }

}
void markcompleted (int index) {
    if (index <= length && index > 0) {
        task[index - 1].completed = 1;
        printf("Task marked as completed\n");
    } else {
        printf("Invalid index\n");
    }

}
void deleteTask (int index) {
    if (index <= length && index > 0){
        index = index - 1;

        free(tasks[index].task);

        for(int i=index; i < length - 1; i++){
            tasks[i] = tasks[i + 1];
        }

        length --;

        tasks = (Task *)realloc(tasks,(length * seizeof(Task)));

    }else{
        printf("Invalid Index\n");
    }

}
void editTask (int index, const char* task) {
      if (index <= length && index > 0){
        index = index - 1;

        char *editedTask = (char *)realloc(tasks[index].task,strlen(task) + 1);
        if (editedTask != NULL){
            tasks[index].task = editedTask;
            strcpy (tasks[length].task, task);
            printf("Task updated succesfully");

        }else {
            printf("Memory allocation failed");
        }
 
    }else{
        printf("Invalid Index\n");
    }

}
int main () {
    peintf("\nOptions\n");
    printf("1. Add a task\n");
    printf("2. List all the tasks\n");
    printf("3. Mark as completed\n");
    printf("4. Edit task\n");
    printf("5. Exit\n")



    return 0;
}