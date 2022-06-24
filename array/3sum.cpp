#include <iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
    vector<vector<int>> ans;
    for(int i=0;i<n;i++)
    {
     for(int j=i+1;j<n;j++)
     {
         for(int k=j+1;k<n;k++)
         {
             if(arr[i]+arr[j]+arr[k] == K)
             {
                 vector<int> temp;
                    // temp.push_back({arr[i], arr[j], arr[k]});
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    sort(temp.begin(),temp.end());
                if(find(ans.begin(),ans.end(),temp)==ans.end()) //if temp is not in the ans(find(first, last, value)): return first if found else last
                {

                 ans.push_back(temp);
                }

             }
         }
     }
    }
    return ans;
}

void printVector2(vector<vector<int>> vect)
{
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }

}
void printVector1(vector<int> vect)
{
    for (int j = 0; j < vect.size(); j++)
    {
        cout << vect[j] << " ";
    }
    cout << endl;


}

int main(void)
{
    int n;
    cout<<"enter array size:"<<endl;
    cin>>n;
    cout<<"Enter elements:"<<endl;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int K;
    cout<<"Enter target value: "<<endl;
    cin>>K;
    vector<vector<int>> res = findTriplets(arr, n, K);
    cout<<"Output: "<<endl;
    printVector2(res);

  return 0;
}