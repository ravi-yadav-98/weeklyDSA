#include <bits/stdc++.h>
using namespace std;
/*
Find Next Greatest Element in array

ex: [4,5,2,25,7,8]
Nge: [5,25,25,-1,8,-1]
*/

vector<int> NGE(vector<int> v)
{
    stack<int> st;
    vector<int> nge(v.size());
    for(int i =0; i<v.size(); i++)
    {
        while(!st.empty() && v[i] > v[st.top()])
        {
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty())
    {
        nge[st.top()] = -1;
        st.pop();
    }
    for(int i=0; i<nge.size(); i++)
    {
        int id = nge[i];
        if(id ==-1)
        {
            nge[i] = -1;
        }
        else{
            nge[i] = v[id];
        }


    }
    return nge;
}



//loop method

void NGE_bfs(vector<int> arr)
{
    int nge;
    for(int i =0; i<arr.size(); i++)
    {
        nge = -1;
        for(int j =i+1; j<arr.size(); j++)
        {
            if(arr[i] < arr[j])
            {
                nge = arr[j];
                break;
            }
        }
        cout<<nge<<" ";
    }
}

//brute force : O(N*N)


//stack wala method

void printNGE(vector<int> v)
{
    stack<int> st;
    //push first element to stack
    st.push(v[0]);
    //iterate over array
    for(int i =1; i<v.size(); i++)
    {
        if(st.empty())
        {
            st.push(v[i]);

        }

        //compare array element with stack
        while(!st.empty() && st.top() < v[i])
        {
            cout<<v[i]<<" ";
            st.pop();
        }

        st.push(v[i]);
    }
    while(!st.empty())
    {
        cout<<-1<<" ";
        st.pop();
    }


}
int main(void)
{

    vector<int> arr =  {4,5,2,25,7,8};
    // NGE_bfs(arr);
    printNGE(arr);
    // for(auto i: ans)
    // {
    //     cout<<i<<" ";
    // }
  return 0;
}