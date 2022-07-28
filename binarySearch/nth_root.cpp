#include <bits/stdc++.h>
using namespace std;

double eps = 1e-7;
//find Square Root of N till x decimal place

double squareRoot(double n)
{
    double lo =1, hi =n, mid;
    while(hi - lo > eps)
    {
        mid  = (hi + lo) /2;
        if(mid * mid < n)
        {
            lo = mid;

        }
        else
        {
            hi = mid;
        }

    }
    return lo;
}


//multiply 
double multiply(double n, int x)
{
    double mul =1;
    for(int i=0; i<x; i++)
    {
        mul *= n;
    }
    return mul;
}

double nthRoot(double num, int n)
{
    double lo =1, hi =num, mid;
    while(hi - lo > eps)
    {
        mid  = (hi + lo) /2;
        if(multiply(mid, n) < num)
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }

    }
    return lo;

}
int main()
{
    double num;
    int  n;
    cin >> num >> n;
    
    cout<<setprecision(10)<<nthRoot(num, n) <<endl;
    cout<<pow(num, 1.0/n)<<endl;
}

