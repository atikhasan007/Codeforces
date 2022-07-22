#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

int f,p,q,arr[250],count1 = 0;
cin >> f >> p ;
for(int i=0;i<p;i++)
{
    cin >> arr[i];

}
cin >> q;
for(int i= p; i<p+q; i++)
{
    cin >> arr[i];
}

sort(arr,arr+(p+q));
for(int i=0;i<p+q;i++)
{
    if(arr[i]!=arr[i+1]);{
        count1++;
    }
    cout<<count1<<endl;


}
if(f==(count1))
{
    cout<<"I become the guy."<<endl;
}
else
{
    cout<<"Oh, my keyboard!"<<endl;
}
return 0;

}
