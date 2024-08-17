#include<bits/stdc++.h>
using namespace std;

long long int custom_pow (int base,int exp)
{
    long long int result=1;
    for (int i=0; i < exp; i++){
        result *= base;
    }
    return result;
}

long long int fun (int x, int n)
{
    
    long long int s=custom_pow(x,0)-1;
    for (int i = 2; i <=n; i+=2)
    {
        s+=custom_pow(x, i);
    }
    return s;
     
}

int main()
{
    int x, n;
    cin >> x >> n;
    long long int result= fun(x,n);
    cout << result;
    return 0;
}