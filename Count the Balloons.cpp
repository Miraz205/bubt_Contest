#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int i, j, k, l=0, m=0, n, r;
    string s;
    cin>> n;
    for(i=0; i<n; i++)
    {
        cin>>k;
        cin>> s;
        sort(s.begin(), s.end());
        for(j=0; j<k; j++)
        {
            if(s[j]==s[j+1])
            {
                l++;
            }
            else
            {
                m++;
            }
        }


    }
    r=l+m*2;
    cout<<r;
}
