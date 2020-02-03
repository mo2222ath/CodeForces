#include <iostream>

using namespace std;

int main()
{
    int p=0,n=0,num;
    cin>>num;
    int events[num];
    for(int i=0;i<num;i++){
        cin>>events[i];
        if(events[i]>0){p+=events[i];}
        else{
            if(p==0)
                n+=events[i];
            else{
                p+=events[i];
            }
        }
    }
    cout<<-1*n<<endl;
    return 0;
}
