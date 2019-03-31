/*CHECKING RECORDS FOR THE VILLAINS LAST KNOWN LOCATION*/
//a class with public integers to store and recursively call information as an object.

#include <iostream>
#include <algorithm>
using namespace std;

int selectRecord=0;
char polarResponse;
bool foundIt = false;
bool speakUp = true;

class jailhouseRecords //Object Class
{ //Game jail house prisoner records
	public:
		string cForename;
		string cSurname;
		string cAddress;
		string cCrime;
		string cStatus;
		int cAge;
		int cDate;

		//Constructor
		jailhouseRecords(string forename, string surname, int age, string address,string crime,int date, string status)
		{
			cForename = forename;
			cSurname = surname;
			cAge = age;
			cAddress =address;
			cCrime = crime;
			cDate = date;
			cStatus = status;
		}
};
int main()
{
    //FRANK HARDY - Object 1
	jailhouseRecords person1("Frank","Hardy",45,"Auburn Ranch, Louisianna","Horse theft",1887,"Sentence served in full, fine payment pending");
	//TOMMY LOGAN- Object 2
	jailhouseRecords person2("Tommy","Logan",29,"Sundown Farm, Texas","Growing and selling illegal crops",1895,"Sentence served in full and fine paid");
	//JEFF PICKETT- Object 3
	jailhouseRecords person3("Jeff","Pickett",34,"Undisclosed","Looting local liquor stores",1890,"Actively serving sentence");
	//CREDENTIALS TBA - Object 4
	jailhouseRecords person4("Anon","Undisclosed",40,"Prospectors Gunpowder Mine, Mexico","Multiple homocide and thefts, abduction, vandalism",1920,"Escaped from jail house.. [WANTED: $15,000 bounty]");
	//CONNIE MILTON - Object 5
	jailhouseRecords person5("Connie","Milton",37,"Preston Ranch, Mexico","Conducting drunken brawl at the 'Lone Stirrup Saloon'",1903,"Sentence served in full");

    //START OF FUNCTION:
    cout<<"Howdy! I'm sheriff Adams.\nI presume you're here to examine the records?"<<endl;
    while(foundIt == false)
    {
        cout<<"Pick the entry you wish to read.. \n[Enter a number 1-5]\n"<<endl;
        cout<<"1.Hardy - 5 years imprisonment and $150 fine.\n"<<"2.Logan - 1 year imprisonment and $50 fine. \n"<<"3.Pickett - 6 years and $75 fine. \n"<<"4.Unknown - Life sentence and $10,000 fine. \n"<<"5.Milton - 7 days and $50 fine. \n";
        cout<<"\nRecord No.";
        cin>>selectRecord;
        cout<<"\n";
        if (selectRecord == 1)
        {
            cout<<"Name: "<<person1.cForename<<" "<<person1.cSurname<<"\nAge: "<<person1.cAge<<" years old"<<endl;
            cout<<"Address: "<<person1.cAddress<<"\nConviction: "<<person1.cCrime<<"\nYear: "<<person1.cDate<<"\nStatus: "<<person1.cStatus<<"\n\nArrest warrant signed: Sheriff Adams"<<endl;
        }
        else if(selectRecord == 2)
        {
            cout<<"Name: "<<person2.cForename<<" "<<person2.cSurname<<"\n"<<person2.cAge<<" years old"<<endl;
            cout<<"Address: "<<person2.cAddress<<"\nConviction: "<<person2.cCrime<<"\nYear: "<<person2.cDate<<"\nStatus: "<<person2.cStatus<<"\n\nArrest warrant signed: Sheriff Adams"<<endl;
        }
        else if(selectRecord == 3)
        {
            cout<<"Name: "<<person3.cForename<<" "<<person3.cSurname<<"\n"<<person3.cAge<<" years old"<<endl;
            cout<<"Address: "<<person3.cAddress<<"\nConviction: "<<person3.cCrime<<"\nYear: "<<person3.cDate<<"\nStatus: "<<person3.cStatus<<"\n\nArrest warrant signed: Sheriff Adams"<<endl;
        }
        else if(selectRecord == 4)
        {
            cout<<"Name: "<<person4.cForename<<" "<<person4.cSurname<<"\n"<<person4.cAge<<" years old"<<endl;
            cout<<"Address: "<<person4.cAddress<<"\nConviction: "<<person4.cCrime<<"\nYear: "<<person4.cDate<<"\nStatus: "<<person4.cStatus<<"\n\nArrest warrant signed: Sheriff Adams"<<endl;
        }
        else if(selectRecord == 5)
        {
            cout<<"Name: "<<person5.cForename<<" "<<person5.cSurname<<"\n"<<person5.cAge<<" years old"<<endl;
            cout<<"Address: "<<person5.cAddress<<"\nConviction: "<<person5.cCrime<<"\nYear: "<<person5.cDate<<"\nStatus: "<<person5.cStatus<<"\n\nArrest warrant signed: Sheriff Adams"<<endl;
        }
        else
        {
            cout<<"If you don't need anything then stop wasting my time..."<<endl;
        }
        foundIt=true; //break out of loop
        speakUp=true; //Vital, ensures loop restarts after found it loop when 'n' is selected
        while (speakUp == true)
        {
            cout<<"\nFound what you're looking for?\nType Y or N"<<endl;
            cin>>polarResponse; //Yes or No
            if(polarResponse == 'y')
            {
                cout<<"\nGood luck!\n"<<endl;
                foundIt = true; //Does not repeat found it loop
                speakUp = false;//Does not repeat speak up loop
            }
            else if(polarResponse == 'n')
            {
                cout<<"\nHave another look..\n"<<endl;
                foundIt = false;
                speakUp = false;//Does not repeat speak up loop
            }
            else
            {
                cout<<"\nSorry, I didn't hear you..\n"<<endl;
                foundIt == true; //Does not repeat found it loop
                speakUp == true;
            }
            speakUp==true;//break out of loop
        }
    }
    return 0;
}
