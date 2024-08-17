#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) cin >> a[i];
    int i=0; int k=n-1;
    while (i<k)
    {
        if (a[i]!=a[k]){
            cout << "NO" << endl;
            return 0;
        }
        i++; k--;
    }
    cout << "YES" << endl;

    

    return 0;
}