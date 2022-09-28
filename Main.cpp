#include <iostream>
using namespace std;


//int
int totalBudget, budgetDaily, dSize, wSize, mSize;
//Strings
string userName, titleDaily, choiceDaily, choiceWeekly, choiceMonthly;
//Arrays
string* nameDaily = NULL; 
int* amountDaily = NULL;


int main()
{


//input! -> user details, budget, expense
cout<<"Before using the program, please enter your name: "<<endl;
cin >> userName;

cout<<"Good day "<< userName << "! Welcome to Team Uno's Machine Problem. This Budget Planner program will use your Monthly Budget and daily, weekly, or monthly expenses in order to calculate a budget plan for you!"<< endl;

cout<< "\nPlease input Budget for the month." << endl;
cin >> totalBudget;



//Daily Expensese

    cout << "\nDo you want to add categories to your Daily Expenses? (Y/N) ";
    cin >> choiceDaily;
    if (choiceDaily == "Y" || "y")
    {
        cout<< "\nEnter number of Daily Expenses. ";
        cin >> dSize;
        nameDaily = new string[dSize];
        amountDaily = new int[dSize];
        cout<< endl;

        for (int i = 0; i<dSize; i++)
        {
            cout<<"\nWhat is the name of your daily expense "<<i+1 <<endl;
            cin >> nameDaily [i];
            cout<<"\nHow much is your daily allotment for " << nameDaily[i]<<"?" <<endl;
            cin >> amountDaily [i];
        }
   
    
    cout<<"You have "<< dSize<< " daily expenses, and these are:"<< endl;
    }
<<<<<<< HEAD
        for (int i = 0; i<dSize; i++)
=======

for (int i = 0; i<dSize; i++)
>>>>>>> 659b185db3adfa10ecc6d0d707db6fe6e116e734
    {
        cout<< nameDaily[i]<<": "<< amountDaily[i]<< " Pesos"<<endl; 
    }
/*
//Weekly Expenses
    
    cout << "\nDo you want to add categories to your Weekly Expenses? (Y/N) ";
    cin >> choiceWeekly;
    if (choiceWeekly == "Y" || "y")
    {
        cout<< "\nEnter number of Weekly Expenses. ";
        cin >> wSize;
        string* nameWeekly = new string[wSize];
        int* amountWeekly = new int[wSize];
        cout<< endl;

        for (int i = 0; i<wSize; i++)
        {
            cout<<"\nWhat is the name of your weekly expense "<<i+1 <<endl;
            cin >> nameWeekly [i];
            cout<<"\nHow much is your weekly allotment for " << nameWeekly[i]<<"?" <<endl;
            cin >> amountWeekly [i];
        }
    }

//Monthly Expenses
    
    cout << "\nDo you want to add categories to your Monthly Expenses? (Y/N) ";
    cin >> choiceMonthly;
    if (choiceMonthly == "Y" || "y")
    {
        cout<< "\nEnter number of Monthly Expenses. ";
        cin >> mSize;
        string* nameMonthly = new string[mSize];
        int* amountMonthly = new int[mSize];
        cout<< endl;

        for (int i = 0; i<mSize; i++)
        {
            cout<<"\nWhat is the name of your monthly expense "<<i+1 <<endl;
            cin >> nameMonthly [i];
            cout<<"\nHow much is your monthly allotment for " << nameMonthly[i]<<"?" <<endl;
            cin >> amountMonthly [i];
        }
    }
*//*
//Output Test
    //Daily
    for (int i = 0; i<dSize; i++)
    {
        cout<<"You have "<< dSize<< " daily expenses, and these are:"<< endl;
        cout<< nameDaily[i]<<": "<< amountDaily[i]<< " Pesos"<<endl; 
    }

    //Weekly
    for (int i = 0; i<wSize; i++)
    {
        cout<<"You have "<< wSize<< " weekly expenses, and these are:"<< endl;
        cout<< nameWeekly[i]<<": "<< amountWeekly[i]<< " Pesos"<<endl; 
    }

     //Monthly
    for (int i = 0; i<mSize; i++)
    {
        cout<<"You have "<< mSize<< " monthly expenses, and these are:"<< endl;
        cout<< nameMonthly[i]<<": "<< amountMonthly[i]<< " Pesos"<<endl; 
    }
    */
return 0;
}