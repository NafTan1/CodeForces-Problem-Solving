#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt[26]={0};
    for (int i=0; i<n; i++){
        char ch;
        cin >>ch;
        cnt [ch-'a']++;
    }

    for (int i=0; i<26;i++){  
        char ch=i+'a';
        while (cnt[i]>0){
            cout<<ch;
            cnt[i]--;
        }
    }    
    //cout << s << endl;
    return 0;
}
