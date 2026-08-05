#include<iostream>
using namespace std;

int main(){
    // int n;
    // cout<<"enter your number of buckets : "<<endl;
    // cin>>n;
    // int arr[n];
    // cout<<"enter your colour coad(0,1,2) : "<<endl;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int low=0;
    // int mid=0;
    // int high=n-1;

    // while (mid<=high)
    // {
    //     if(arr[mid]==0){
    //         swap(arr[low],arr[mid]);
    //         low++;
    //         mid++;
    //     }
    //     else if(arr[mid]==1){
    //         mid++;
    //     }
    //     else{
    //         swap(arr[mid],arr[high]);
    //         high--;
    //     }
    // }

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // return 0;

    int n;
    cout<<"enter your number of buckets : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter your array elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count0=0;
    int count1=0;
    int count2=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        }
        else{
            count2++;
        }
    }

    int i=0;

    while(count0--){
        arr[i++]=0;
    }
    while(count1--){
        arr[i++]=1;
    }
    while (count2--)
    {
        arr[i++]=2;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}