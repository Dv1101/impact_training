#include <bits/stdc++.h>
#include<vector>
#include<set>
using namespace std;


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

    set <int> s(arr.begin(), arr.end());
    arr.assign(s.begin(), s.end());
    cout<<"Unique elements in array : ";
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
}
