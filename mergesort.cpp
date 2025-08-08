#include<bits/stdc++.h>
using namespace std;
//TC-O(NlogN)
//SC_O(N)
void merge(vector<int> &arr,int low,int mid,int high){
    vector<int> temp;
    int left=low,right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]>arr[right]){
            temp.emplace_back(arr[right]);
            right++;
        }
        else{
             temp.emplace_back(arr[left]);
            left++;
        }
    }
    while(left<=mid){
        temp.emplace_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.emplace_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
void mergesort(vector<int> &arr,int low,int high){
    if(low>=high)return;
    int mid=low+(high-low)/2;
    mergesort(arr,low,mid);
    for(auto it: arr){
    cout<<it<<" ";
    }
   cout<<endl;
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);

}
int main()
{
   vector<int> a={1,7,4,2,9,3,5,8,6,1};
   int n=a.size();
  
    mergesort(a,0,n-1);
    for(auto it: a){
    cout<<it<<" ";
   }
   return 0;

}
