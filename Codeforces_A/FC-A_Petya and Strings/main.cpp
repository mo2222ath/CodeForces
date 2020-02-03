#include <iostream>

using namespace std;

int main()
{
    int Ans=0;
    string line1;
    string line2;
    getline(cin,line1);
    getline(cin,line2);

    for(int i=0; i<line1.size(); i++)
    {
        if(line1[i]>='A' && line1[i]<='Z')
            line1[i]= char ((line1[i]-'A')+'a');

        if(line2[i]>='A' && line2[i]<='Z')
            line2[i]= char ((line2[i]-'A')+'a');
    }

    cout<<line1.compare(line2)<<endl;

    return 0;
}
