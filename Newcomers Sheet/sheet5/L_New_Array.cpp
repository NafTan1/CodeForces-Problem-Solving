#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> a(n),b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    a.insert(a.begin(),b.begin(),b.end());


    for (int i = 0; i < n+n; i++)
    {
        cout << a[i] << " ";
    }
    
    
    return 0;
}