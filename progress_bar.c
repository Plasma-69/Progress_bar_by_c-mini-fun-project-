#include <stdio.h>  
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
const int BAR_LENGHT = 50;
const int MAX_TASKS = 5;
typedef struct {
    int id;
    int progress;
    int step;

}Task;
void print_bar (Task);

void clear_scr();


int main(){
    Task tasks[MAX_TASKS];
    srand(time(NULL));

    for (int i = 0; i < MAX_TASKS; i++)
    {
        tasks[i].id = i+1;
        tasks[i].progress = 0;
        tasks[i].step = rand() % 5 + 1;
    }
    int task_incomplete  = 1;
    while (task_incomplete)

    {
        system("cls");
        task_incomplete = 0;
        for (int i = 0; i < MAX_TASKS; i++){
            tasks[i].progress += tasks[i].step;
            if(tasks[i].progress > 100){
                tasks[i].progress = 100;
            }else if (tasks[i].progress < 100){
                task_incomplete = 1;
            }
            print_bar(tasks[i]);
        }
        sleep(1);
    }
    printf("\nALL TASKS COMPLETED\n");  
    
    


    return 0;
}

void clear_scr(){
    #ifdef _Win32
        system("cls");
    #endif
}
void print_bar(Task task){
    int bars_to_show = (task.progress * BAR_LENGHT )/100 ;
    printf("\n Task %d: [", task.id);
    for (int i = 0; i < BAR_LENGHT; i++ ){
        if (i < bars_to_show ){
            printf("=");
        }else{
            printf(" ");
        }
    }
    printf("] %d%%", task.progress);
}