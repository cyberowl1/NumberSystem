Number of coprime between 1 to n by Euler's Totient Function.
  -------------------------------------------------------

#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
    if(b==0)return a;

       return gcd(b,a%b);

}

int lcm(int x,int y)
{
    return (x*y)/gcd(x,y);
}

int phi(unsigned int x)
{
    unsigned int res=1;
    for(int i=2;i<x;i++)
    {
        if(gcd(i,x)==1)
        {
            res++;
        }
    }
    return res;
}
int main()
{
    
    int num;
    cin>>num;
    int res=phi(num);
    cout<<res;

}
