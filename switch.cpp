/*

// Write a C++ program that takes a number (1–7) from the user and uses a switch statement to print the day of the week (1 = Monday, 2 = Tuesday, …, 7 = Sunday).

#include<iostream>
using namespace std;
int main()
{
    int day;
     cout << "Enter one number from 1 to 7: " ;
     cin >> day;

    switch (day)
    {
        case 1:
            cout << "Monday";
            break;

        case 2:
            cout << "Tuesday";
            break;
    
        case 3:
            cout << "Wednesday";
            break;
    
        case 4:
            cout << "Thursday";
            break;

        case 5:
            cout << "Friday";
            break;

        case 6:
            cout << "Saturday";
            break;

        case 7:
            cout << "Sunday";
            break;


    default:
        cout << "Wrong Input Please Select one from 1 to 7 " <<endl;
        break;
    }

    return 0;
}
    
*/


//Write a C++ program that takes a number (1–12) and prints the name of the month using a switch statement.

#include<iostream>
using namespace std;
int main ()
{
    int month;

    cout << "Enetr a number from 1 to 12: ";
    cin >> month;

    switch (month)
    {
        case 1:
            cout << "Januray" ;
            break;

        case 2:
            cout << "Febuary" ;
            break;

        case 3:
            cout << "March" ;
            break;

        case 4:
            cout << "April" ;
            break;

        case 5:
            cout << "May" ;
            break;

        case 6:
            cout << "June" ;
            break;

        case 7:
            cout << "July" ;
            break;

        case 8:
            cout << "August" ;
            break;

        case 9:
            cout << "September" ;
            break;

        case 10:
            cout << "October" ;
            break;

        case 11:
            cout << "November" ;
            break;

        case 12:
            cout << "December" ;
            break;
    
    default:
        cout << "Wrong Input please enter one value from 1 to 12" << endl;
        break;
    }

    return 0;
}