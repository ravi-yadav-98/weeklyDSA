#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<vector<int>> mat = {{4,3,2,-1,-3},
                              {3,2,1,-1,-4},
                              {1,1,-1,-2, -3},
                              {-1,-1,-2,-3, -5}};

    cout<<"row: "<<mat.size()<<endl;
    cout<<"col: "<<mat[0].size()<<endl;
    for(int i =0; i<mat.size(); i++)
    {
        cout<<mat[i][0]<<" "<<endl;
    }
  return 0;
}