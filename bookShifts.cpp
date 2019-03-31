#include <iostream>
using namespace std;

string getWeek(int dow)
{
    string dayReq;
    switch(dow)
    {
    case 0:
        dayReq = "Sun 3rd - Stable Duty\nMon 4th - Day Off\nTue 5th - Day Off\nWed 6th - Bounty Hunting\nThu 7th - Normal Duties\nFri 8th - Normal Duties\nSat 9th - Normal Duties\n";
        break;
    case 1:
        dayReq = "Sun 10th - Normal Duties\nMon 11th - Stable Duty\nTue 12th - Day Off\nWed 13th - Day Off\nThu 14th - Bounty Hunting\nFri 15th - Normal Duties\nSat 16th - Normal Duties\n";
        break;
    case 2:
        dayReq = "Sun 17th - Normal Duties\nMon 18th - Normal Duties\nTue 19th - Stable Duty\nWed 20th - Day Off\nThu 21st - Day Off\nFri 22nd - Bounty Hunting\nSat 23rd - Normal Duties\n";
        break;
    case 3:
        dayReq = "Sun 24th - Normal Duties\nMon 25th - Normal Duties\nTue 26th - Normal Duties\nWed 27th - Stable Duty\nThu 28th - Day Off\nFri 29th - Day Off\nSat 30th - Bounty Hunting\n";
        break;
    case 4:
        dayReq = "Sun 1st - Bounty Hunting\nMon 2nd - Normal Duties\nTue 3rd - Normal Duties\nWed 4th - Normal Duties\nThu 5th - Stable Duty\nFri 6th - Day Off\nSat 7th - Day Off\n";
        break;
    case 5:
        dayReq = "Sun 8th - Day Off\nMon 9th - Bounty Hunting\nTue 10th - Normal Duties\nWed 11th - Normal Duties\nThu 12th - Normal Duties\nFri 13th - Stable Duty\nSat 14th - Day Off\n";
        break;
    case 6:
        dayReq = "Sun 15th - Day Off\nMon 16th - Day Off\nTue 17th - Bounty Hunting\nWed 18th - Normal Duties\nThu 19th - Normal Duties\nFri 20th - Normal Duties\nSat 21st - Stable Duty\n";
        break;
    default:
        dayReq = "Page is blank";
    }
    return dayReq;
}
int main()
{
    bool backToIndex = false;
    int dayoff;
    char yesOrNo;
    while(backToIndex=true)
    {
        cout<<"Do you want to check your diary?\n the diary is accurate to 7 weeks.\nSelect a page number between 1 and 7"<<endl;
        cout<<"Page: ";
        cin>>dayoff;
        cout<<"\n";
        if(dayoff==1)
        {
            cout<<getWeek(0);
        }
        else if(dayoff==2)
        {
            cout<< getWeek(1);
        }
        else if(dayoff==3)
        {
            cout<< getWeek(2);

        }
        else if(dayoff==4)
        {
            cout<< getWeek(3);

        }
        else if(dayoff==5)
        {
            cout<< getWeek(4);

        }
        else if(dayoff==6)
        {
            cout<< getWeek(5);

        }
        else if(dayoff==7)
        {
            cout<< getWeek(6);

        }
        else
        {
        cout<<"\nPage is Blank"<<endl;
        }
        cout<<"\nLook at a different week?\nType 'y' or 'n'\n"<<endl;
        cin>>yesOrNo;
        if(yesOrNo == 'y')
        {
            cout<<"\nOk but.. we haven't got all day..\n"<<endl;
            backToIndex==true;
        }
        else if(yesOrNo=='n')
        {
            cout<<"\nOk, lets go..\n"<<endl;
            backToIndex==false;
            break;
        }
        else
        {
            cout<<"Incorrect value"<<endl;
            backToIndex=true;
        }
        backToIndex = false;
    }
    return 0;
}
