#include <iostream>

using namespace std;

int main()
{
    int n,h,d,i=0;
    int result=0;
    //cout<<"please enter number of friends"<<endl;
    cin>>n;
    //cout<<"please enter number of height"<<endl;
    cin>>h;
    //cout<<"please enter the height for your friends "<<endl;
    while (i<n)
    {
        cin>>d;
        if(d>h)
        {
            result++;
        }
        result++;
        i++;
    }
    cout<<"The result is "<< result << endl;


    return 0;
}
