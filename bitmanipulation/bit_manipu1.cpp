#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//print binary of number
void printBinary(int n)
{
    int i = 10;
    while(i>= 0)
    {
        cout<<((n >> i) & 1);
        i--;
    }
    cout<<endl;
}
//check set/unset bet 
void checkSetBit(int n, int i)
{
    //check if ith bit of number n is set(1) or unset(0)
    if((n & (1 << i)) != 0)
    {
        cout<<"set bit";
    }
    else
    {
        cout<<"unset bit";
    }
}

void setBit(int &n, int x)
{
    //set a unset bet (0--->1)
    n = n | (1  << x);
}

//count set bit

void countSetBit(int n)
{
    int cnt =0;
    for(int i=31; i>=0; i--)
    {
        if((n & (1 <<i)) != 0)
        {
            cnt++;
        }
    }
    cout<<"No. of set bit: "<<cnt<<endl;
}
int main(void)
{
    /*
    cout<<"Maximum INT value: "<<INT_MAX<<endl;
    int a = (1LL << 31) -1;  //signed int
    unsigned int b =  (1LL << 32) -1; 

    cout<<"Max val using left shift: "<<b<<endl;
    */
   int n = 9;
   printBinary(n);
    //    checkSetBit(9, 3);
    // setBit(n,4);

    //set bit
    // printBinary(n | (1 <<2)); //set 2nd bit of n

    //unset bit
    // printBinary(~n);
    // printBinary((n & (~(1<<3))));

    //toggle a bit

    // printBinary( n ^ (1<<2));
    // printBinary( n ^ (1<<3));
    // printBinary( n ^ (1<<4));
     countSetBit(n);
     cout<< __builtin_popcount(n)<<endl; //only for INT
     cout<< __builtin_popcount((1LL<<32))<<endl; //0 -> not work
     cout<< __builtin_popcountll((1LL<<32)-1)<<endl;




    
    return 0;
}