#include <bits/stdc++.h>
using namespace std;

void rightRotate(vector <int> arr, int n, int k)
{
    vector <int> temp;
    for(int i=n-k; i<n; i++)
    {
        temp.push_back(arr[i]);
    }
    for(int i=0; i<n-k; i++)
    {
        temp.push_back(arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    
}

void print(vector <int> arr, int n)
{
    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
	cout<<"Enter size of array : ";
    int n;
    cin>>n;
    vector <int> arr;

    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    print(arr, n);

    cout<<"Enter K position to rotate : ";
    int k;
    cin>>k;

    rightRotate(arr, n, k);
    
}
