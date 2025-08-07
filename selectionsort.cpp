#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> a={1,7,4,2,9,3,5,8,6,1};
   int n=a.size();
    for(int i=0;i<n;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(a[minindex]>a[j]){
                minindex=j;
            }
        }
        swap(a[minindex],a[i]);
    }
   for(auto it: a){
    cout<<it<<" ";
   }
   //best case -O(N*2)--worst case
   return 0;
}