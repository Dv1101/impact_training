/*Suppose the give array is arr[] = [1, 2, 3, 4, 5, 6, 7], d = 2.

First Step:
    => Store the elements from 2nd index to the last.
    => temp[] = [3, 4, 5, 6, 7]

Second Step: 
    => Now store the first 2 elements into the temp[] array.
    => temp[] = [3, 4, 5, 6, 7, 1, 2]

Third Steps:
    => Copy the elements of the temp[] array into the original array.
    => arr[] = temp[] So arr[] = [3, 4, 5, 6, 7, 1, 2]*/

#include <bits/stdc++.h>
using namespace std;

void leftRotate(vector <int> arr, int n, int k)
{
    vector <int> temp;
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

    leftRotate(arr, n, k);
    
}
