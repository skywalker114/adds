#include "Reverse.h"
#include <iostream>
#include <string>

int Reverse::reverseDigit(int value)
{
    int rev = reverseDigit(value);
    string reversed = to_string(rev);
    for(int i = 0; i < reversed.length() - 1; i++)
    {
        if(reversed[i] == '0' && reversed[i + 1] != '0')
        reversed[i] = '\0';
    }
    return stod(reversed);
}     

string Reverse::reverseString(string letters)
{
    string rev = reverseString.substr(letters, letters.length());
    return (rev);
}