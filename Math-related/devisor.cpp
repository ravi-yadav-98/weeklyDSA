#include <bits/stdc++.h>
using namespace std;
/*
Devisor of Number related problems
*/

//print devisors--> count and sum of devisors
void printDevisors(int n)
{
    int sum =0;
    int cnt=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i == 0)
        {
            cnt++;
            sum+=i;
            cout<<i<<" ";
        }
    }
     cout<<endl<<"sum of devisors: "<<sum<<endl;
    cout<<"No of devisors: "<<cnt<<endl;
}

//Time of above is O(n)

//optimized way--> O(sqrt(n))
void printDevisors_optimized(int n)
{
    int sum =0;
    int cnt=0;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            
            cout<<i<<" "<<n/i<<" ";
            cnt += 1;
            sum+=i;
            if(n/i != i)
            {
                cnt+=1;
                sum+=n/i;
            }
        }
    }
     cout<<endl<<"sum of devisors: "<<sum<<endl;
    cout<<"No of devisors: "<<cnt<<endl;
}

int main(void)
{

    int n;
    cin>>n;
    printDevisors_optimized(n);
  return 0;
}