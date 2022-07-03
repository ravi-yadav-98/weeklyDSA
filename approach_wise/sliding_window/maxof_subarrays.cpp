#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*

find maximum of subarray size k and return vector
i.e. 

*/
void print(vector<int> arr)
{
    for(auto i :arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}


vector<int> maxofSubarray(vector<int> arr, int k)
{
    deque<int> temp;
    vector<int> ans;

    if(k > arr.size())
    {
        ans.push_back(*max_element(arr.begin(), arr.end()));
        return ans;
    }
    int i=0;
    int j=0;
    while(j < arr.size())
    {
        if(temp.empty()){ 
                temp.push_back(arr[j]);   
        }
        else
        {
            while(!temp.empty() && temp.back()<arr[j])
                temp.pop_back();
            temp.push_back(arr[j]);               
        }

        if(j-i+1 < k)
        {
            j++;
        }
        else if(j-i+1 == k)
        {
            ans.push_back(temp.front());
            if(arr[i]==temp.front())
            {
                temp.pop_front();
            }
            ++i;
            ++j;

        }
    }
    return ans;

}
int main(void)
{

    vector<int> v = {1,4, 7, 9}; //{1,3,-1,-3,5,3,6,7};
    int k =3;
    print(maxofSubarray(v,k));
  return 0;
}