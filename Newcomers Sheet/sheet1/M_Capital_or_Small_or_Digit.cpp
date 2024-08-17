#include<bits/stdc++.h>

using namespace std;
int main()
{
    char x;
    cin >> x;
    if (x>=48 && x<=57)
    {
        cout << "IS DIGIT"<<endl;
    }
    else if (x>=65 && x<=96)
    {
        cout << "ALPHA\nIS CAPITAL"<<endl;
    }
    else
    {
        cout << "ALPHA\nIS SMALL"<<endl;
    }
    
    return 0;
}