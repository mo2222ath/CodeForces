#include <iostream>

using namespace std;

int main()
{
    string Word;
    cin>>Word;

    if (Word[0]>='a' && Word[0]<='z')
    {
        Word[0]= char((Word[0]-'a')+'A');
    }
    for(int i=0; i<Word.size(); i++)
        {
            cout<<Word[i];
        }
    return 0;
}
