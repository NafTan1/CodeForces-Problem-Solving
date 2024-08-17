#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int j=0; j<n; j++) cin >> a[j];

        if (n%2!=0) cout <<"-1" <<endl;
        else {
            int cnt=0;
            for (int j=0; j<n; j++)
            {

                if (a[j]%2==0)
                {
                    cnt++;
                }
            }

            int result = abs(cnt - (n/2));
            cout << result << endl;
        }


    }
    
    return 0;
}