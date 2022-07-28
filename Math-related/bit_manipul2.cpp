#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//print binary of a num n
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
int main(void)
{
    /*
    //even /odd
    for(int i =0; i<=9; i++)
    {
        printBinary(i);
        if(i&1)
        {
            cout<<"odd\n";
        }
        else
        {
            cout<<"even\n";
        }
    }

    

   //devide or multiply by 2/power of 2

   cout<<"using math operator"<<endl;
   cout<<(100/4)<<endl;
   cout<<(100*4)<<endl;

   cout<<"using bit manipulation"<<endl;
   cout<<(100>>2)<<endl;
   cout<<(100<<2)<<endl;

   
  int n=5;
  cout<<(n>>1)<<endl;
  cout<<(n<<1)<<endl;
  return 0;

  
 //upper/lowercase conversion using bit
 for(char c = 'A'; c<='Z'; ++c)
 {
    cout<<c<<endl;
    printBinary(int(c));
 }

  for(char c = 'a'; c<='z'; ++c)
 {
    cout<<c<<endl;
    printBinary(int(c));
 }

 

//upper to lower (set bit)
char A = 'A';
char a = A | (1 << 5);
cout<<a;


//lower to upper bit
char low = 'b';
char up = low & (~(1<<5));
cout<<up;


cout<<char(1<<5)<<endl;;
cout<<char('A' | ' ')<<endl;
cout<<char('b' & '_')<<endl;
*/

//clear till ith bit(LSB)

int n=13;
if((n & (n-1)))
{
    cout<<" Not a power of 2"<<endl;
}
else
{
    cout<<"A power of 2"<<endl;
}


}