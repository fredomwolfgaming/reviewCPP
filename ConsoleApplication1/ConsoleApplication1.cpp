// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string flipMe(string strIn)
{
    string strOut;
    for (int i = strIn.length()-1; i >= 0; --i)
    {
        strOut += strIn[i];
    }
    return strOut;
}

string noVowel(string strIn)
{
    string strOut;
    for (int i = 0; i < strIn.length(); ++i)
    {
        //'vowel' a,e,i,o,u
        if (strIn[i] != 'a' && strIn[i] != 'e' && strIn[i] != 'i' && strIn[i] != 'o' && strIn[i] != 'u')
        {
            strOut += strIn[i];
        }//if it does not match, append.
    }
    return strOut;
}

string checkMe(int div1, int div2)
{
    string strOut;
    for (int i = 1; i <= 1000; ++i)
    {
        if (i % div1 == 0 && i % div2 == 0) {
            strOut += to_string(i);
            strOut += ' ';
        }
    }
    return strOut;
}

int main()
{
    cout << "0-1000 is evenly divisible by: 4 & 7\n";
    cout << checkMe( 4, 7) << "\n";

    cout << "\nflipped: hellow world\n";
    cout << flipMe("hello world") << "\n";

    cout << "\nno vowels: the cake is a lie\n";
    cout << noVowel("the cake is a lie") << "\n";
}


//1) a function that outputs all numbers from 0 to 1000 that are divisible by two different numbers, which should be passed into the function.
//2) a function to reverse the letters in a string("hello world" = > "dlrow olleh")
//3) a function that returns a string with the vowels removed("the cake is a lie" = > "th ck s  l"