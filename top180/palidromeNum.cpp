#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Determine whether an integer is a palindrome. Do this without extra space.
//Negative numbers are not palindrome
*/

bool isPalindromeNum(int num)
{
    if(num <0)
    {
        return false;
    }

    //find maximu decimal place  i.e. 3823  max place = 1000
    int div =1;
    while(num/div >=10)
    {
        div *=10;
    }

    //check first and last digit
    while(num != 0)
    {
        int left = num/div;
        int right = num%10;

    
        if(left != right)
        {
            return false;
        }
        num = (num%10)/10;

        div /=100;
    }

    return true;
}

int main(void)
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    bool ans = isPalindromeNum(num);
    if(ans)
    {
        cout<<"Number is a Palindrome"<<endl;
    }
    else
    {
        cout<<"Number is not a Palindrome"<<endl;
    }
  return 0;
}