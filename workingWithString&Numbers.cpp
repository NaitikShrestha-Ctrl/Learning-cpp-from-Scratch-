
// Write a function that takes two strings as parameters and returns their  (i.e., join them together). Test this function with two sample strings.

#include<iostream>
#include<string>

using namespace std;

//This is the function to concatenate two strings.
string concatenateStrings(string first, string second)  
{
    return first + second;
}
    

int main()
{
    string first = "Hello";
    string second = "World";

    string result = concatenateStrings(first, second); // here I have call the function to concatenate.

    cout << result << endl; //here simply i have called the function

    return 0;
}