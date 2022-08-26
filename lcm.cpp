Lowest Common Multiple of Two NUmber.
  
  ____________________________________________________
  
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


int main()
{
    int x,y;
    cin>>x>>y;
    
    int lc=lcm(x,y);
    cout<<lc;
    

}
