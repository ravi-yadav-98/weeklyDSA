#include <bits/stdc++.h>
using namespace std;
/*
Binary Search in 2D Matrix I
 given matrix: row are sorted left to right
 [[1,3,5,7],
  [ 10, 11, 16, 20],
  [23, 30, 34, 50]]

  target: 3
  return True
*/

pair<int, int> binarySearch2DArray(vector<vector<int>> arr, int target)
{
    int row = arr.size();
    int col = arr[0].size();
    //pointers
    int low =0;
    int high = row*col-1;
    pair<int, int> ans(-1, -1);
    while(low<=high)
    {
        int mid = low + (high - low)/2;
        if(arr[mid/col][mid%col] == target)
        {
            ans.first = mid/col;
            ans.second = mid%col;
            return ans;
        }
        else if(arr[mid/col][mid%col]>target)
        {
            high = mid -1;
        }
        else{
            low = mid+1;
        } 

    }
    return  ans;

}
int main(void)
{
    vector<vector<int>> test = {{1,3,5,7}, {10,11,16,20},{23,30,40,50}};
    int t;
    cin>>t;
    while(t--)
    {
        int target;
        cin>>target;
        pair<int,int> ans = binarySearch2DArray(test, target);
        cout<<"Position -->"<<ans.first<<" "<<ans.second<<endl;
    }
    

  return 0;
}