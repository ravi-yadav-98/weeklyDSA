#include <bits/stdc++.h>
using namespace std;
/*
Counting sort:
*/

vector<int> coutingSort(vector<int> &A)
{
    vector<int> ans(A.size(),0);
    int MIN = *min_element(A.begin(), A.end());
    int MAX = *max_element(A.begin(), A.end());
    int range = MAX-MIN+1;
    cout<<"range: "<<range<<endl;
    //count array
    vector<int> count(range, 0);
    //count element
    for(int a: A)
    {
        count[a-MIN]++;
    }
    //commulative sum
    for(int i=1; i<range; i++)
    {
        count[i] += count[i-1];
    }

    //build the output array
    for(int i = A.size()-1; i>=0; i--)
    {
        ans[count[A[i] - MIN] -1] = A[i];
        count[A[i] - MIN]--;
    }
    return ans;
}


vector<int> coutingSort2(vector<int> &A)
{
    vector<int> ans(A.size(),0);
    int MAX = *max_element(A.begin(), A.end());
    int range = MAX+1;
    cout<<"range: "<<range<<endl;
    //count array
    vector<int> count(range, 0);
    //count element
    for(int a: A)
    {
        count[a]++;
    }
    //commulative sum
    for(int i=1; i<range; i++)
    {
        count[i] += count[i-1];
    }

    //build the output array
    for(int i =0; i<A.size(); i++)
    {
        ans[count[A[i]] -1] = A[i];
        count[A[i]]--;
    }
    return ans;

}
int main(void)
{
    vector<int> v = {5,2,2,4,3,2,3,3,3};
    vector<int> v2 = {5,2,2,4,3,2,3,3,3,0,0,0,0,1,1,1,1,3,2,3,2,3,11};
    auto ans = coutingSort2(v2);
    for(auto a: ans)
    {
        cout<<a<<" ";
    }
  return 0;
}