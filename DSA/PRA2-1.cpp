#include<iostream>
using namespace std;

int linearsearch(string arr[],int size,string target,int i){
    string tar=target;
    int m=size;
    int j=i;
    if(m==j){   
        cout<<"Error found !";
    }
    else if(arr[j]==tar){
        cout<<"your target is : "<<arr[j]<<endl;
        cout<<"your index is : "<<j+1<<endl;
        
    }
    else{
        j++;
        return linearsearch(arr,m,tar,j);
    }
}
int main(){
    
    int n;
    cout<<"enter your array size : "<<endl;
    cin>>n;
    string arr[n];
    cout<<"enter your plates : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    string target;
    cout<<"enter your target which you want to find : "<<endl;
    cin>>target;
    int x=0;

    linearsearch(arr,n,target,x);

    /*
    for(int i=0;i<10;i++){
        if(arr[i]==target){
            cout<<"your target is : "<<arr[i]<<endl;
            cout<<"your index is : "<<i+1<<endl;
            return 0;
        }
    }
    cout<<"target not found "<<endl;
    */
    return 0;
}