#include<bits/stdc++.h>
using namespace std;
int pivotindex(vector<int> &arr,int low,int high){
    int pivot=arr[low];
    int i=low,j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j)swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void quicksort(vector<int> &arr,int low,int high){
    if(low<high){
        int partition=pivotindex(arr,low,high);
        quicksort(arr,low,partition-1);
        quicksort(arr,partition+1,high);
    }
}
int main()
{
   vector<int> a={1,7,4,2,9,3,5,8,6,1};
   int n=a.size();
   quicksort(a,0,n-1);
   for(auto it: a){
    cout<<it<<" ";
   }

   return 0;
}