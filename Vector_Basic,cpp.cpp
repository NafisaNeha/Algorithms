#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

}

int main()
{
    vector<int> v;
    int n;
    cout << "Enter Number of Elements: " << endl;
    cin >> n;

    int element;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter an element to add this vector" << endl;
        cin >> element;
        v.push_back(element);
    }

    cout << endl;
    display(v);

    return 0;
}



