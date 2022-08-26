Greatest Common Divisior Finding Using C++ Code  |
_________________________________________________|

#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
    if(b==0)return a;

       return gcd(b,a%b);

}


int main()
{
   
    int num1,num2;
    cin>>num1>>num2;
    int res=gcd(num1,num2);
    cout<<res;

}
