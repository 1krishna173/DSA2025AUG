#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> a={1,7,4,2,9,3,5,8,6,1};
   int n=a.size();
     for(int i=1;i<n;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            swap(a[j],a[j-1]);
            j--;
        }
     }
   for(auto it: a){
    cout<<it<<" ";
   }
   return 0;
}