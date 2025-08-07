#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> a={1,7,4,2,9,3,5,8,6,1};
   int n=a.size();
   for(int i=n-1;i>=0;i--){
    for(int j=0;j<i;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
   }
   for(auto it: a){
    cout<<it<<" ";
   }
   //BEST CASE -O(N)
   //WORST CASE-o(N*2)
   return 0;
}