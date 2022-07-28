#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Find Factorial of Large Numbers N
1 <= N <=100
print output as modulus of M
where 
M = 47

*/
int main(void)
{
    int n;
    cin >> n;

    //modulo M
    int M = 47;
    long long int fact =1;
    for(int i=1; i<=n; i++)
    {
      
        fact = (fact * i)%M;
        cout<<"Factorial "<<i<<"-> "<<fact<<endl;
    }

    // cout<<fact<<endl;
  return 0;
}