//Name priyanka
//roll num 2010991980
//set 04
//question 2



#include <bits/stdc++.h>
using namespace std;

// Function to Check if array
// elements are consecutive

bool areConsecutive(int arr[], int n)
{
    //Sort the array
    sort(arr,arr+n);
    // checking the adjacent elements
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1]+1)
        {
            return false;
        }
    }
    return true;
}

/* Driver program to test above functions */
int main()
{
 int n;
 cin>>n;
 int arr[n];
 for (int i = 0; i < n; ++i)
 {
  cin>>arr[i];
}
if(areConsecutive(arr, n) == true)
    cout<<" Array contains consecutive integers";
else
    cout<<" Array does not contain consecutive integers ";
return 0;
}
