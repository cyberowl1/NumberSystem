IF number is not prime list a factor using Sieve of Eratosthenes
Complexity:-- O(N log N)
--------------------------------------------------------------------------

#include <bits/stdc++.h>

using namespace std;

vector<int> sieve(int num)
{

    vector<int> arr(num,0);
    for(int i=2;i<=num;i++)
    {
        if(arr[i])continue;
        for(int u=2*i;u<=num;u=u+i)
        {
            arr[u]=i;
        }
    }

return arr;

}

int main()
{
    int num;
    cin>>num;
    vector<int>res=sieve(num);
    for(int i=2;i<=num;i++)
    {
        cout<<i<<" -"<<res[i]<<endl;
    }

}
