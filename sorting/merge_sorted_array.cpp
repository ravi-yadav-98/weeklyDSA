#include <bits/stdc++.h>
using namespace std;
/*
Merge Two sorted Array and return the ans
*/

vector<int> mergeSortedArray(vector<int> A, vector<int> B)
{
    int m = A.size();
    int n = B.size();
    vector<int> ans = {};
    int i =0 , j =0;
    while((i<m) && (j<n))
    {
        if(A[i] < B[j])
        {
            ans.push_back(A[i]);
            i++;
        }
        if(B[j] < A[i])
        {
            ans.push_back(B[j]);
            j++;
        }
        if(A[i] == B[j])
        {
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    //copy remaing A array to ans
    for(int k=i; k<m; k++)
    {
        ans.push_back(A[k]);
    }

    //copy remaing B array to ans
    for(int k=j; k<n; k++)
    {
        ans.push_back(B[k]);
    }

    return ans;

}
int main(void)
{

    vector<int> A = {2,4,6};
    vector<int> B = {2,4,6,8,10,11,12,13,14,15};
    vector<int>ans = mergeSortedArray(A, B);
    for(int x: ans)
    {
        cout<<x<<" ";
    }
    cout<<endl;
  return 0;
}