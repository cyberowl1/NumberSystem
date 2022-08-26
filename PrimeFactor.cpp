List factor if number is not prime
--------------------------------------------


#include <bits/stdc++.h>

using namespace std;



vector<int> factor(int num)
{
    vector<int> fact;

    for(int i=2;i*i<=num;i++)
    {
        while(num%i==0)
        {
            fact.push_back(i);
            num /=i;
        }

    }
    if(num>1)fact.push_back(num);
    return fact;
}

int main()
{
    int num;
    cout<<"type number to check prime: "<<endl;
    cin>>num;
   
    vector<int> fact=factor(num);
    for(auto num:fact)
    {
        cout<<num<<" ";
    }
}
