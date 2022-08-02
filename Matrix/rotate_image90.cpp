#include <bits/stdc++.h>
using namespace std;
//rotate image by 90 degree

int main(void)
{
    vector<vector<int>> I = {{1,2,3}, {4,5,6},{7,8,9}};
    int row =3;
    int col =3;
    //rotate
    vector<vector<int>> R(row, vector<int>(col,0));
    for(int i =0; i<row; i++)
    {
        for(int j =0; j<col; j++)
        {
            R[j][row-i-1] =  I[i][j];
        }
    }

     for(int i =0; i<row; i++)
    {
        for(int j =0; j<col; j++)
        {
            cout<<R[i][j]<<" ";
        }
        cout<<endl;
    }

  return 0;
}