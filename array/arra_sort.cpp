#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr)
{
    for(auto i: arr)
    {
        cout<<i<<" ";
    }cout<<endl;
}
//find number of mis placed elements for sorted array
int heightChecker(vector<int>& heights) {

        int n = heights.size();
        int s =0;
        int e =n-1;
        int cnt =0;
        while(s<e)
        {
            if(heights[s]> heights[s+1])
            {
                swap(heights[s], heights[s+1]);
                cnt++;
            }
            s++;

        }
        cout<<"After s: "<<endl;
        print(heights);
         while(e>0)
        {
            if(heights[e]<heights[e-1])
            {
                swap(heights[e], heights[e-1]);
                cnt++;
            }
            e--;

        }
        cout<<"After e: "<<endl;
        print(heights);
        return cnt;
}


void thirdLargest(int arr[], int arr_size)
{
    /* There should be atleast three elements */
    if (arr_size < 3)
    {
        printf(" Invalid Input ");
        return;
    }

    // Initialize first, second and third Largest element
    int first = arr[0], second = INT_MIN, third = INT_MIN;

    // Traverse array elements to find the third Largest
    for (int i = 1; i < arr_size ; i ++)
    {
        /* If current element is greater than first,
           then update first, second and third */
        if (arr[i] > first)
        {
            third  = second;
            second = first;
            first  = arr[i];
        }

        /* If arr[i] is in between first and second */
        else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }

        /* If arr[i] is in between second and third */
        else if (arr[i] > third)
            third = arr[i];
    }

    printf("The third Largest element is %d\n", third);
}

int main(void)
{
    vector<int> arr = {1,2,3,4,4,5};
    // cout<<"before sorting "<<endl;
    // print(arr);
    // int num = heightChecker(arr);
    // cout<<"__________________"<<endl;
    // cout<<"total mis-placed elements: "<<num<<endl;
    // sort(arr.begin(), arr.end());
    // cout<<"After sorting "<<endl;

    // print(arr);

    cout<<"Third max num: "<<thirdMax(arr)<<endl;

  return 0;
}