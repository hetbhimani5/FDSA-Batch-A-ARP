#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter your number of items : "<<endl;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long h;
    cout<<"enter your hour : "<<endl;
    cin>>h;

    int k = h%n;

    for(int i=0;i<k;i++){
        string first = arr[0];
        for(int i=0;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=first;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
