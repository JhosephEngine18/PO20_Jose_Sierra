/*
Universidad Amerike
Author: José Sierra
Project: Task List
Date: 25/03/25
Description: This program is a TasksList, you can Add, Delete, Vizualice tasks
*/

#include <conio.h>
#include <iostream>
using namespace std;
string Tasks[5];
int LastPosition = 0;
bool Answer;

void Separations()
{
    cout << "--------------------------------\n";
}

void MainMenu()
{
    cout << "Press Any Button to go back to the menu\n";
    getch();
}

//This function adds tasks
void AddTask() 
{
    if (LastPosition >= 5)
        {
            cout << "Maximum tasks reached\n";
            MainMenu();
        }
    else
    {

    for (int i = 0; i < 5; i++)
    {
        cout << "Name your task\n";
        cin >> Tasks[LastPosition];
        Separations();
        cout << "Task added correctly\n";
        cout << "Would You like to add another task?\n";
        cout << "Y = 1 | N = 0\n";
        cin >> Answer;
        
        LastPosition++;

        if (Answer == 0)
        {
            MainMenu();
            break;
        }
        
        
        if (LastPosition >= 5)
        {
            cout << "Maximum tasks reached\n";
            MainMenu();
            break;
        }
    }
    }
}

//This function deletes tasks
void DeleteTask()
{
    int tasktodelete;
    int counter = 0;
    if (LastPosition == 0)
    {
        Separations();
        cout << "Theres no any task to delete\n";
        MainMenu();
    }
    else
    {
    cout << "Which task would you like to delete?\n";
    cout << "Select only with positions showed\n";
    Separations();
    cout << "Tasks\n";
    Separations();
        for (int i = 0; i < LastPosition; i++)
        {
            counter++;
            cout << counter <<"-"<< Tasks[i] << "\n";
            Separations();
        }
        cin >> tasktodelete;

        Tasks[tasktodelete-1] = "";

        for (int i = 0; i < 5; i++)
        {
            if (Tasks[i].length() == 0 && i < LastPosition-1)
            {
                Tasks[i] = Tasks[i+1];
                Tasks[i+1] = "";
            }
            
        }
        LastPosition--;        


    }
}

//This function allows you vizualice
void WatchTasks()
{
    int counter = 0;
    if (LastPosition == 0)
    {
        Separations();
        cout << "You dont have any task typed\n";
    }
    else
    {
        cout << "Tasks\n";
        Separations();
        for (int i = 0; i < LastPosition; i++)
        { 
            counter++;
            cout << counter <<"-"<< Tasks[i] << "\n";
            Separations();
        }
    }
    MainMenu();
}

//This function tells you the options that you can do
void Options()
{
    int Selection = 0;

    Separations();
    cout << "1 =  Add\n";
    Separations();
    cout << "2 =  Delete\n";
    Separations();
    cout << "3 =  Watch Tasks\n";
    Separations();
    cout << "4 =  Leave\n";
    cin >> Selection;

    switch (Selection)
    {
    case 1:
        
        AddTask();
        Options();
        break;
    case 2:
        
        DeleteTask();
        Options();
        break;

    case 3:

        WatchTasks();
        Options();
        break;
    case 4:

        exit(0);
        break;
    
    default:
        break;
    }
}

int main()
{
    Separations();
    cout << "What would you like to do?\n";
    Options();

    return 0;
}