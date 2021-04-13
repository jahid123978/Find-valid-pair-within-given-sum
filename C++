# Find-valid-pair-within-given-sum
//Two pointer appraoch solving this question 
// Time complexity O(n) and space complexity O(1)
#include <bits/stdc++.h>
using namespace std;
void find_pair(int arr[], int n, int x)
{
    sort(arr, arr+n);
    int l=0, r=n-1;
    while(l<r)
    {
        if(arr[l]+arr[r] == x)
        {
            cout<<arr[l]<<" "<<arr[r]<<endl;
            break;
        }
        else if(arr[l]+arr[r]<x)
          l++;
        else
         r--;
    }
}
int main ()
{
    int n;
    unsigned int x;
    cin>>n>>x; 
    int arr[n];
    for(int i=0; i<n; i++)
     cin>>arr[i];
    find_pair(arr, n, x);
}

//Using hashing to solve this problem 
#include <bits/stdc++.h>
using namespace std;
int find_pair(int arr[], int n, int x)
{
    unordered_map<int, int>mp;
    for(int i=0; i<n; i++)
    {
        mp[arr[i]]++;
    }
    bool flag = false;
    for(int i=0; i<n; i++)
    {
        if(mp.find(x-arr[i]) != mp.end())
        {
            cout<<arr[i]<<" "<<x-arr[i]<<endl;
            flag = true;
            break;
        }
    }
    if(flag == false)
    cout<<" Not exit valid"<<endl;
}
int main ()
{
    int n;
    unsigned int x;
    cin>>n>>x;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    find_pair(arr, n, x);
}
//Time complexity O(n) and space complexity O(n)
