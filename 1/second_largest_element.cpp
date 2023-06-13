#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;

void secondLargest(vector <int> v, int n)
{
    int first = INT_MIN, second = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(v[i] > first)
        {
            second = first;
            first = v[i];
        }
        else if(v[i] > second && v[i] != first)
        {
            second = v[i];
        }
    }
    cout<<"\n Second largest element is : "<<second<<endl;
}

void print(vector <int> v, int size)
{
    cout<<"\n Vector is : ";
    for(int i=0; i<size; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    cout<<"Enter size of array : ";
    int n;
    cin>>n;
    vector <int> v;

    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }

    print(v, n);
    secondLargest(v, n);
    
    return 0;
}