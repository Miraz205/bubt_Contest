
#include<iostream>
using namespace std;
int main()
{

    int n, m, o=0;
    int z[101];
    int a, b, c, d, i, j, k=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        for(j=0;j<m;j++)
        {
            cin>>a>>b>>c>>d;
            if(a>(b+c+d))
            {
                o++;
            }

        }
        if(o>0)
        {
         z[k]=0;
         k++;
        }
         else
        {
         z[k]=1;
         k++;
        }
         o=0;
    }
    for(i=0;i<n;i++)
    {
        if(z[i]==0)
            cout<<"FAIL"<<endl;
        else
            cout<<"PASS"<<endl;
    }



}
