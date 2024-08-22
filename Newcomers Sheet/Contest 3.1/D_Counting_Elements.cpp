#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];

    int cnt=0;

    for (int i = 0; i < n; i++)
    {
        int x= a[i]+1;
        auto it =find(a.begin(),a.end(),x);
        if (it!=a.end()) cnt++;
    }
    cout << cnt << endl;

    return 0;
}