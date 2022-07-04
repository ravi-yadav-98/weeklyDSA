#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//search for fisrt last --> binary search
pair<int, int> findFirstLastOccurance(vector<int> arr, int key)
{
    pair<int, int> ans;
    int start =0;
    int end = arr.size()-1;
    while(start <= end)
    {
        int mid = (end + start)/2;
        if(arr[mid] == key)
        {
            int first = mid-1;
            int c1=0;
            int c2 =0;
            int last  = mid+1;
            while(arr[first] ==key)
            {
                c1++;
                first--;
                
            }
            while(arr[last] == key)
            {
                c2++;
                last++;
            }
            cout<<mid<<" "<<c1<<" "<<c2<<endl;
            ans = make_pair(mid-c1, mid+c2);
            return ans;

            

        }

        if(key > arr[mid])
        {
            start = end+1;
        }
        else 
        {
            end =  mid-1;
        }
    }
    return {-1, -1};
}
int main(void)
{ 
    vector<int> arr = {5,7,7,8,8,10};
    int k =8;
    pair<int, int> pos = findFirstLastOccurance(arr, k);
    cout<<"first Occurance: "<<pos.first<<endl;
    cout<<"Second Occurance: "<<pos.second<<endl;

  return 0;
}