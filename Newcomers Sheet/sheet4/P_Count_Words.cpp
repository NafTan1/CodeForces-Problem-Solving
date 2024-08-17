#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline (cin, s);
    if (s.empty()) {
        cout << "0" << endl;
        return 0;
    }

    int cnt=0;
   
    bool hasAlpha = false;
    for (char c: s)
    {
        if (isalpha(c)){
            if (hasAlpha==false){
                cnt++;
                hasAlpha=true;
            }        
        }
        else {
            hasAlpha=false;
        }

    }

    cout << cnt <<endl;
    return 0;
}