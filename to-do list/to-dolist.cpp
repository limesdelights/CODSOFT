#include <iostream>
#include <windows.h>

using namespace std;
  void print_tasks(string  tasks[], int task_count){
    cout<<"To-do:"<<endl;
    for (int i=0;i<task_count; i++){
      cout<<"Task"<<i<<":"<<tasks[i]<<endl;
      cout<<"----------------"<<endl;
    }
  }
int main(){
  
  string tasks[10] = {""};
  int task_count = 0;

  int option = -1;
  while(option != 0){

    cout<< "To-do list"<<endl;
    cout<<"1.Add Task"<<endl;
    cout<<"2.View Tasks"<<endl;
    cout<<"3.Delete Task"<<endl;
    cout<<"4.Close program"<<endl;
    cin>>option;

    switch(option){
      case 1:{
        if (task_count > 9){
          cout<< "Entry is full"<<endl;
        }else{
          cout<<"New Task";
          cin.ignore();
          getline(cin,tasks[task_count]);
          task_count++;
        
      }break;
    }
    case 2:
    system("cls");
    print_tasks(tasks,task_count);
    break;
    
    case 3:
    {
      system("cls");
      print_tasks(tasks,task_count);
      int del_task = 0;
      cout<<"Delete tasks?";
      cin>>del_task;


      if(del_task < 0 || del_task > 9){
        cout<<"Invalid task"<<endl;
        break;
      }
        for(int i= del_task; i<task_count; i++){
          tasks[i]= tasks[i+1];
        }
        task_count = task_count - 1;
        break;
      }
    
    case 4:
    cout<<"Terminating...."<<endl;
    break;
    default:
    cout<<"Invalid value";
    }
  }
  
  return 0;
}