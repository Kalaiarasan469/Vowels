#include <iostream>
#include <string>
using namespace std;
class MyString
{
    public:
    char c;int ct=0;
void get()
{
    cout<<"Enter the character:";
    cin>>c;
    }
    void chck()
    {
        switch(c)
        {
            case 'a':ct++;break;
            case 'e':ct++;break;
            case 'i':ct++;break;
            case 'o':ct++;break;
            case 'u':ct++;break;
            }
        }
        void prnt()
        {
            if(ct!=0)
            {
                cout<<"Vowel";
                }
                else
                {
                    cout<<"Consonant";
                    }
                    }
};
int main()
{
    MyString m;
    m.get();
    m.chck();
    m.prnt();
    return 0;
    }
