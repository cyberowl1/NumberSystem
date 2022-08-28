cpp Program to check whether given sum is possible from given sets of number.
  -----------------------------------------------------------------------

#include <bits/stdc++.h>

using namespace std;
bool subsum(vector<int> const &A,int n,int k)
{
    if(k==0)
    {
        return true;
    }
    if(n<0||k<0)
    {
        return false;
    }
    bool include = subsum(A,n-1,k-A[n]);
    bool exclude = subsum(A,n-1,k);

    return include||exclude;
}

int main()
{
    vector<int> A= {3,4,3,1};
    int a=A.size();
    if(subsum(A,a,9))
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
}
