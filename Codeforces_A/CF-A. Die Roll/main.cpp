#include <iostream>

using namespace std;

int main()
{
    double w,y;
    int A=0,B=6;
    cin>>w>>y;
    if(w>=y)
    {
        A=7-w;
    }
    else
    {
        A=7-y;
    }

    if(A==1){cout<<1<<"/"<<6<<endl;}
    else if(A==2){cout<<1<<"/"<<3<<endl;}
    else if(A==3){cout<<1<<"/"<<2<<endl;}
    else if(A==4){cout<<2<<"/"<<3<<endl;}
    else if(A==5){cout<<5<<"/"<<6<<endl;}
    else if(A==6){cout<<1<<"/"<<1<<endl;}


    return 0;
}
