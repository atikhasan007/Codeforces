#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,p=0;
    cin>> n;
    int i;
    for(i=0;i<n;i++)
    {
        cin>> a>> b>> c;
        if((a==1 && b ==1 ) || (b==1 && c==1) ||(c==1&&a==1))
        {
            p++;
        }

    }
    cout<<p<<endl;
    return 0;
}
