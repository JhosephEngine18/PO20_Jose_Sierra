/*
Universidad Amerike
Author: José Sierra
Project: Task List
Date: 25/03/25
Description: This program will let you type personal data of 3 persons
*/

#include <conio.h>
#include <iostream>
#include <cstdlib>
using namespace std;
int Selection;
int setter;
string Tasks[5];
string NewTasks[5];
int DeleteWord;


void Separations()
{
    cout << "--------------------------------\n";
}

void AddTask()
{
    if (setter == 1)
    {
        setter++;
    }
    
    
    cout << "Name your task\n";
    cin >> Tasks[setter];
    Separations();
    cout << "Task added correctly\n";
    setter++;
}

void DeleteTask()
{
    if (Tasks[0].length() == 0)
    {
        Separations();
        cout << "Theres no any task to delete\n";
    }
    else
    {
    cout << "Which task would you like to delete?\n";
    cout << "Select only with positions showed\n";
        for (int i = 0; i < setter; i++)
        {
            cout << i <<"-"<< Tasks[i] << "\n";
            Separations();
        }
        cin >> DeleteWord;

        switch (DeleteWord)
        {
        case 1:
            for (int i = 0; i < setter; i++)
            {
                NewTasks[i] == Tasks[i++];
            }
            
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;

        case 5:

            break;
        
        default:
            break;
        }
    }
}

void WatchTasks()
{
    if (Tasks[0].length() == 0)
    {
        Separations();
        cout << "You dont have any task typed\n";
    }
    else
    {
        for (int i = 0; i < setter; i++)
        {
            cout << i++ <<"-"<< Tasks[i] << "\n";
            Separations();
        }
    }
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