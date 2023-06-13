#include <bits/stdc++.h>
using namespace std;

void leftRotate(vector <string> arr, int n, int k)
{
    vector <string> temp;
    for(int i=k; i<n; i++)
    {
        temp.push_back(arr[i]);
    }

    for(int i=0; i<k; i++)
    {
        temp.push_back(arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    
}

void rightRotate(vector <string> arr, int n, int k)
{
    vector <string> temp;
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

void print(vector <string> arr, int n)
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
    vector <string> arr;

    for(int i=0; i<n; i++)
    {
        string temp;
        cin>>temp;
        arr.push_back(temp);
    }
    print(arr, n);

    cout<<"Enter K position to rotate : ";
    int k;
    cin>>k;

    cout<<"Enter choice : 1) right rotate 2) left rotate\n";
    int choice;
    cin>>choice;

    switch(choice)
    {
        case 1:
            rightRotate(arr, n, k);
            break;

        case 2:
            leftRotate(arr, n, k);
            break;
    }
    
}
