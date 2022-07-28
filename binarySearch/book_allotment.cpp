#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Book Allocation Problem:
n books to be alloted to m students so that maximum of pages alloted to a student can be minimized
i.e. books[i] = [12,34,,67,90]  //no of pages
 m= 2
 possible allocations
 Student:1              Student:2       max
 12                     34,67,90        191
 12,34                  67,90           157
 12,34,67                90             113* (minimum of max)
 Ans: 113
*/


//if allocation possible at barrier x
bool isPossible(vector<int> arr, int barrier, int k)
{
    int allotedStudent =1;
    int pages =0;
    for(int i=0; i<arr.size(); i++)
    {
        if(pages + arr[i] <= barrier)
        {
            pages += arr[i];   
        }
        else
        {
            allotedStudent ++;
            if(allotedStudent > k || arr[i] > barrier)
            {
                return false;
            }
            else
            {
                pages = arr[i];
            }
           
        }
    }
    return true;
}
int bookAllocation(vector<int> arr, int k)
{
    int low = *min_element(arr.begin(), arr.end());
    int high=0;
    for(auto i: arr){ high += i;}
    int ans =-1;
    while(low <= high)
    {
        int mid = (low + high) >>1;
        if(isPossible(arr, mid, k))
        {
            ans  = mid;
            high = mid - 1;

        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
int main(void)
{
    vector<int> arr = {12, 34, 67, 90};
    int k=2;
    cout<<"Minimum of Max book alloted: " <<bookAllocation(arr, k);

  return 0;
}