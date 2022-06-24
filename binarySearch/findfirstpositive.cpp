#include <iostream>
#include <bits/stdc++.h>
using namespace std;


/*
Given a function  F(x) find the value of x where it start increasing 
- x where fisrt time value of f(x)>0

Approach:
- find upper limit (put x=0,1,2,4,8...) take x where first time it is >0
- lower = x/2, upper =x
- binary search (lower, higher)

Problem link on GFG: 
https://www.geeksforgeeks.org/find-the-point-where-a-function-becomes-negative/


*/

//define function
int fun(int x) 
{ 
    return (x*x - 10*x - 20);
}



int main(void)
{
  return 0;
}

