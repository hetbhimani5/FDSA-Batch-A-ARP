#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{ /*
    int n;
    cout << "enter your array size : " << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        bool flag = false;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }

        if (flag)
            continue;

        int count = 1;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > 1)
        {
            cout << arr[i] << " -> " << count << " times" << endl;
        }
    }
*/
    
    int m;
    cout<<"enter your array size : "<<endl;
    cin>>m;
    int array[m];
    for(int i=0;i<m;i++){
        cin>>array[i];
    }
    cout<<endl<<endl;
    unordered_map<int,int>count;

    for(int i=0;i<m;i++){
        count[array[i]]++;
    }

    for(auto value : count){
        if(value.second>1){
            cout<<value.first<<endl;
        }
    }
    return 0;
}

