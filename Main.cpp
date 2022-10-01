#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;


//int
int totalIncome, budgetDaily, emExpense, dSize, wSize, mSize, totalExpense, dExpense, wExpense, mExpense;
//Strings
string userName, titleDaily, choiceDaily, choiceWeekly, choiceMonthly;
//Arrays
string* nameDaily = NULL; int* amountDaily = NULL;
string* nameWeekly = NULL; int* amountWeekly = NULL;
string* nameMonthly = NULL; int* amountMonthly = NULL;


int main()
{


//-----------------------------------------------------------------------------input----------------------------------------------------------------------------
//input -> user details, budget, expense
cout<<"Before using the program, please enter your name: ";
getline(cin, userName);

cout<<"Good day "<< userName << "! Welcome to Team Uno's Machine Problem. This Budget Planner program will use your Monthly Budget and daily, weekly, or monthly expenses in order to calculate a budget plan for you!"<< endl;

cout<< "\nHow much is your income for the month: ";
cin >> totalIncome;


cout<< "\nHow much will you allot for your Emergency Expenses?" <<endl;
cin>> emExpense;

system("CLS");

//Daily Expensese

    cout << "\nDo you want to add categories to your Daily Expenses? (Y/N) ";
    cin >> choiceDaily;
    if (choiceDaily == "Y" || choiceDaily == "y")
    {
        cout<< "\nEnter number of Daily Expense/s. ";
        cin >> dSize;
        nameDaily = new string[dSize];
        amountDaily = new int[dSize];
        cout<< endl;

        for (int i = 0; i<dSize; i++)
        {
            cout<<"\nWhat is the name of your daily expense "<<i+1 <<"?"<< endl;
            cin >> nameDaily [i];
            cout<<"\nHow much will you spend daily on " << nameDaily[i]<<"?" <<endl;
            cin >> amountDaily [i];
        }
    }
//Weekly Expenses
    
    cout << "\nDo you want to add categories to your Weekly Expenses? (Y/N) ";
    cin >> choiceWeekly;
    if (choiceWeekly == "Y" || choiceWeekly == "y")
    {
        cout<< "\nEnter number of Weekly Expense/s. ";
        cin >> wSize;
        nameWeekly = new string[wSize];
        amountWeekly = new int[wSize];
        cout<< endl;

        for (int i = 0; i<wSize; i++)
        {
            cout<<"\nWhat is the name of your weekly expense "<<i+1 <<"?"<< endl;
            cin >> nameWeekly [i];
            cout<<"\nHow much will you spend weekly on " << nameWeekly[i]<<"?" <<endl;
            cin >> amountWeekly [i];
        }
    }

//Monthly Expenses
    
    cout << "\nDo you want to add categories to your Monthly Expenses? (Y/N) ";
    cin >> choiceMonthly;
    if (choiceMonthly == "Y" || choiceMonthly == "y")
    {
        cout<< "\nEnter number of Monthly Expense/s. ";
        cin >> mSize;
        nameMonthly = new string[mSize];
        amountMonthly = new int[mSize];
        cout<< endl;

        for (int i = 0; i<mSize; i++)
        {
            cout<<"\nWhat is the name of your monthly expense "<<i+1 <<"?"<< endl;
            cin >> nameMonthly [i];
            cout<<"\nHow much will you spend monthly on " << nameMonthly[i]<<"?" <<endl;
            cin >> amountMonthly [i];
        }
    }

system("CLS");

//Output Test
    //Daily
    cout<<"You have "<< dSize<< " daily expense/s, and these are:"<< endl;
    for (int i = 0; i<dSize; i++)
    {
        cout<< nameDaily[i]<<": "<< amountDaily[i]<< " Pesos"<<endl; 
    }

    //Weekly
    cout<<"You have "<< wSize<< " weekly expense/s, and these are:"<< endl;
    for (int i = 0; i<wSize; i++)
    {
        cout<< nameWeekly[i]<<": "<< amountWeekly[i]<< " Pesos"<<endl; 
    }

     //Monthly
    cout<<"You have "<< mSize<< " monthly expense/s, and these are:"<< endl;
    for (int i = 0; i<mSize; i++)
    {
        cout<< nameMonthly[i]<<": "<< amountMonthly[i]<< " Pesos"<<endl; 
    }



//--------------------------------------------------------------------------Processing--------------------------------------------------------------------------
//Processing -> Budget>Expense, create stacks

//Calculating Total Expense
//Daily Expense
for (int i = 0; i<dSize; i++)
{
    dExpense = dExpense + amountDaily[i];
}
dExpense = dExpense*30;

//Weekly
for (int i = 0; i<wSize; i++)
{
    wExpense = wExpense + amountWeekly[i];
}
wExpense = wExpense*4;

//Monthly
for (int i = 0; i<mSize; i++)
{
    mExpense = mExpense + amountMonthly[i];
}

totalExpense = dExpense + wExpense + mExpense + emExpense;
cout<<"\nTotal Expense for the month is "<<totalExpense <<" Pesos" <<endl;

//----------------------------------------------------------------------------output----------------------------------------------------------------------------
//Output -> output stacks 


return 0;
}