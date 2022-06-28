#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Rotate Array: 
1. right[1,2,3,4 5] k=1 [5,1,2,3,4]
2. left: [1,2,3,4 5] k=1 [2,3,4, 5, 1]
*/

void print(string msg, int *arr, int n)
{   
    cout<<msg<<endl;
    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

//rotate array--method 1(extra space)
int* rotateArr(int *arr, int n, int k)
{
    int *ans = new int[n];
    for(int i = 0; i<n; i++)
    {
        ans[(i+k)%n] = arr[i];
    }
    
    return ans;

}


//method-2 reverse
void reverse(int *arr, int s, int e)
{
    while(s<e)
    {
        swap(arr[s++], arr[e--]);
    }
}



void rotateArr2(int *arr, int n, int k)
{
    reverse(arr, 0, n-1);
    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
}

void rotateArr_left(int *arr, int n, int k)
{
    reverse(arr, 0, n-1);
    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
}
//driver function
int main(void)
{

    int n, k; 
    cout<<"Enter size of array: ";
    cin>>n;
    int* arr = new int[n];
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter rotate step:  ";
    cin>>k;

    print("Before Rotation", arr, n);
    rotateArr2(arr,n, k);
    print("After Rotation", arr, n);

 
  return 0;
}