#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string c="EGYPT";


    
    // for (int i=0; i< s.size(); i++)
    // {
    //     if (s.find(c)<s.size())
    //         s.replace(s.find(c),c.size()," ");
    // }
    while (s.find(c)!=-1)
    {
        s.replace(s.find(c),c.size()," ");
    }
    
    cout << s;
    return 0;
}