/*
Universidad Amerike
Author: José Sierra
Project: Task List
Date: 25/03/25
Description: This program will let you type personal data of 3 persons
*/

#include <conio.h>
#include <iostream>
using namespace std;
int Selection;
string Tasks[5];
int LastPosition = 0;
bool Answer;

void Separations()
{
    cout << "--------------------------------\n";
}

void AddTask()
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
        
        if (Answer == 0)
        {
            break;
        }
        
        LastPosition++; 
        
        if (LastPosition >= 5)
        {
            cout << "Maximum tasks reached\n";
            getch();
            break;
        }
    }
}

void DeleteTask()
{
    int tasktodelete;
    int counter = 0;
    if (Tasks[0].length() == 0)
    {
        Separations();
        cout << "Theres no any task to delete\n";
    }
    else
    {
    cout << "Which task would you like to delete?\n";
    cout << "Select only with positions showed\n";
        for (int i = 0; i <= LastPosition; i++)
        {
            counter++;
            cout << counter <<"-"<< Tasks[i] << "\n";
            Separations();
        }
        cin >> tasktodelete;


    }
}

void WatchTasks()
{
    int counter = 0;
    if (Tasks[0].length() == 0)
    {
        Separations();
        cout << "You dont have any task typed\n";
    }
    else
    {
        for (int i = 0; i <= LastPosition; i++)
        { 
            counter++;
            cout << counter <<"-"<< Tasks[i] << "\n";
            Separations();
        }
    }
    getch();
}


void Options()
{
    Selection = 0;
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