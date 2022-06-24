#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
 find first occurance of element in array--> binary search
 i.e. arr =[ 1,2,3,4,4,4,5,6,7,8] target = 4
 output = 3; (first occurance)
 5 --> last occurance

*/

int firstOccurence(vector<int>& nums, int target)
{
	int low = 0, high = (int)nums.size() - 1;
	int ans = -1;

	while (low <= high)
	{
		int mid = low + (high - low)/2;
		if (nums[mid] == target)
		{
			ans = mid;
			high = mid - 1;		// Look for better answer to the left
		}
		else if (nums[mid] < target)
		{
			low = mid + 1;
		}
		else if (nums[mid] > target)
		{
			high = mid - 1;
		}
	}

	return ans;
}


//last occurance 
int lastOccurence(vector<int>& nums, int target)
{
	int ans = -1;
	int low = 0, high = (int)nums.size() - 1;

	while (low <= high)
	{
		int mid = low + (high - low)/2;

		if (nums[mid] == target)
		{
			ans = mid;
			low = mid + 1;			// Go right for better answers
		}
		else if (nums[mid] < target)
		{
			low = mid + 1;
		}
		else if (nums[mid] > target)
		{
			high = mid - 1;
		}
	}

	return ans;
}

//driver function
int main(void)
{
    vector<int> arr = { 1,2,3,4,4,4,4,5,6,7,8};
    cout<<"first occurance: "<<firstOccurence(arr, 4)<<endl;
    cout<<"Last Occurance: "<<lastOccurence(arr, 4)<<endl;

  return 0;
}