//Name Priyanka
//Roll number 2010991980
//Set 04
//Question number 1


#include <bits/stdc++.h>
using namespace std;

int findInd(int arr[],int n){
    map<int,int>mp;
    for(int i=0;i<n;i++){
        if(mp.find(arr[i])!=mp.end()){
            return mp[arr[i]];
        }

        mp[arr[i]]=i;

    }
    return -1;
}
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for (int i = 0; i < n; ++i)
   {
      cin>>arr[i];
  }

  if(findInd(arr,n)==-1){
    cout<<"invalid input"<<endl;
}
else{
    cout<<findInd(arr,n);
}

return 0;

}
