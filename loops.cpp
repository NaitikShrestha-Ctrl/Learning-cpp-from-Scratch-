/*

#include<iostream>
using namespace std;
int main()
{
    for(int a = 0; a < 10; a++)
    {
        cout << a << endl;
    }
    
    return 0;
}

*/


/*

// Write a C++ program using a for loop to print numbers from 1 to 100.

#include<iostream>
using namespace std;
int main()
{
    for(int a = 1; a <= 100; a++)
    {
        cout << a << endl;
    }
    
    return 0;
}

*/


/*

// Write a C++ program using a for loop to print all even numbers between 1 and 20.

#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 20; i++)
    {
        if (i % 2 == 0)
        {
            cout << i <<endl;
        }
    }
    

    return 0;
}

*/


// Write a C++ program that finds the sum of numbers from 1 to N, where N is entered by the user.

#include<iostream>
using namespace std;

int main()
{
    float N, sum = 0;

    cout << "Enter the value of N: ";
    cin >> N;

    for (float i = 1; i <= N; i++)
    {
        sum += i;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}

