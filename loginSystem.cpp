#include <iostream>

using namespace std;
int main() //Object file terminalHack.h
{
    int secretComb =2019;
    int attempt;
    int attemptCount=0;
    int attemptLimit=3;
    bool lockOut =false;
    cout<<" Enter 4 digit password: "<<endl;
    while(secretComb!=attempt&&!lockOut)
    {
        if(attemptCount<attemptLimit)
        {
            cout<<" password: ";
            cin>>attempt;
            attemptCount++;
        }
        else
        {
            lockOut =true;
        }
    }
    if(lockOut)
    {
        cout<<"\n"<<" PASSWORD INCORRECT"<<endl;
        cout<<" You have been locked out of the terminal!\n"<<endl;
    }
    else
    {
        cout<<"\n"<<" PASSWORD ACCEPTED"<<endl;
        cout<<" Terminal has been unlocked!\n"<<endl;
    }
    return 0;
}
