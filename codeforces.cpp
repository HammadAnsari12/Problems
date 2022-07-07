#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    int x = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        x = x^arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(x^arr[i] == 0)
        {
            cout << arr[i] << endl;
        }
    }
    
}

int main()
{
    int T;
    cin >> T;
    
    while(T--)
    {
       solve();
    
    }
  
  return 0;
}