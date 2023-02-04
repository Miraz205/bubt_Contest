#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

    int i, n, m, p, r=0, q=0, g=0;

    cin>>n>>m;
    int a[n];
    for(i=0; i<n; i++)
    {

        cin>>a[i];
    }
    sort(a, a+n);
    for(i=n-1; i>=0; i--)
    {
        if((r+a[i])>=m)
        {
          g++;
            break;

        }
        else
        {
            r=r+a[i];
            q++;
        }
    }
    if(m>0)
    {
    if(g>0)
    {
        cout<<q+1;
    }
    else if(r<m)
    {
        cout<<"Shombhob na";
    }
    }
    else
        {
            cout<<"Shombhob na";
        }


    return 0;


}
