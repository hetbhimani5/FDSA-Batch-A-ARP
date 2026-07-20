#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int target,int start,int end){
    int middle = (start + end)/2;
    if(start>end){
        return -1;
    }
    else if(arr[middle]==target){
        return middle+1;
    }
    else if(arr[middle]<target){
        start = middle + 1;
        return binarysearch(arr,size,target,start,end);
    }
    else if(arr[middle]>target){
        end = middle - 1;
        return binarysearch(arr,size,target,start,end);
    }
}

int main(){
    int n;
    cout<<"enter your array size : "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter your target which you want to find : "<<endl;
    cin>>target;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int start=0;
    int end=n-1;
/*
    while(start<=end){
        int middle = (start+end)/2;

        if(arr[middle]==target){
            cout<<"target is found at place : "<<middle+1<<endl;
            return 0;
        }
        else if(arr[middle]<target){
            start = middle + 1;
        }
        else{
            end = middle - 1;
        }
    }
    cout<<"target not found ! ";
    */
   int result = binarysearch(arr,n,target,start,end);
   if(result>=0){
    cout<<"target is found at place : "<<result<<endl;
   }
   else{
    cout<<"target not found ! ";
   }
    return 0;
}