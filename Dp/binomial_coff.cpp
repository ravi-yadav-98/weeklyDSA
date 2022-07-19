#include <bits/stdc++.h>
using namespace std;
/*
Binomial cofficients C(n, r) = nCr
Number of ways r object choosen form n objects(disregarding order)
C(n, k) = C(n-1, k-1) + C(n-1, k)
using Tabulation 
*/


// Returns value of Binomial Coefficient C(n, k)
int binomialCoeff(int n, int k)
{
    int C[n + 1][k + 1];
    int i, j;
 
    // Calculate value of Binomial Coefficient
    // in bottom up manner
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= min(i, k); j++) {
            // Base Cases
            if (j == 0 || j == i)
                C[i][j] = 1;
 
            // Calculate value using previously
            // stored values
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }
 
    return C[n][k];
}


int main(void)
{
    // int n, k;
    // cin>>n>>k;
    // cout<<binomialCoeff(n, k);

    //print pascle's tringle

    int row;
    cin>>row;
    for(int  i=0; i<row; i++)
    {
        for(int j =0; j<row; j++)
        {
            if(i>=j)
            {
                cout<<binomialCoeff(i, j)<<" ";
            }
            else
            {
                break;
            }
        }
        cout<<endl;
    }

  return 0;
}