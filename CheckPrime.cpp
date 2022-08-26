Check if givern number is prime Or NOt.
  Complexity:-- O((√n ) 
   -------------------------------------------               --



#include <bits/stdc++.h>

using namespace std;

bool  checkPrime(int num)
{
    if(num<2)
    {return false;
    }
    for(int i=2;i*i<num;i++)
    {
        if(num%i==0)
        {
            return false;
            }
    }
    return true;
}


int main()
{
    int num;
    cout<<"type number to check prime: "<<endl;
    cin>>num;
    string res=checkPrime(num)?"true":"false";
    cout<<res;

  
}
