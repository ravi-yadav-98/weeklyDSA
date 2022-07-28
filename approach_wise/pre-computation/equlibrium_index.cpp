#include <bits/stdc++.h>
using namespace std;
/*
Equilibrium index of an array:
Idex the devides arrary into two parts such the sum of both parts are equall
A= {-7, 1, 5, 2, -4, 3, 0} 
index = 3
[-7,1,5] = [-4,3,0] ==1


Approach:1 two foor loop 
Approach:2 Twice prefic sum from forward and backward--> optimal
*/

int equilibriumIndex(vector<int> arr)
{
    int size  = arr.size();
    vector<int> forward_prefix(size, 0);
    vector<int> reverse_prefix(size, 0);
    //forward prefix sum
    forward_prefix[0] = arr[0];
    for(int i=1; i<size; i++)
    {
        forward_prefix[i] = forward_prefix[i-1]+ arr[i];
    }
    
    reverse_prefix[size-1] = arr[size-1];

    for(int i=size-2; i>=0; i--)
    {
        reverse_prefix[i] = reverse_prefix[i+1]+ arr[i];
    }
    
    for(int i =0; i<size; i++)
    {
        if(forward_prefix[i] == reverse_prefix[i])
        {
            return i;
        }
    }
    return -1;

}

int main(void)
{

    vector<int> test =  {1,7,3,6,5,6};
    cout<<equilibriumIndex(test)<<endl;
  return 0;
}