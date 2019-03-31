#include <iostream>

using namespace std;
int main()
{
    int secretComb =1911; //This is the answer
    int attempt; //This is the user input(stored in variable)
    int attemptCount=0; //guess answer again if wrong
    int attemptLimit=3; //run out of guesses after 3 unsuccessful guesses
    bool outOfGuesses =false; //not out of guesses as long as false
    cout << " If you can answer my question correctly, I'll let you mine all the gold you can carry!"<<endl;
    cout<<" You have 3 guesses.. \n Riddle me this stranger..\n";
    cout<<" What year did the 'American Old West' decline following the 'Mexican Revolution'? "<<endl;
    while(secretComb!=attempt&&!outOfGuesses)
    {//While answer is incorrect and not out of guesses.. Loop continues
        if(attemptCount<attemptLimit)
        {//If guesses left..
            cout<<" Your answer: ";
            cin>>attempt;
            attemptCount++;
            if (attempt != secretComb)
            {//If wrong answer..
                cout<<" Wrong answer, try again..\n";
            }
        }
        else
        {//else out of guesses.. Loop ends
            outOfGuesses =true;
        }
    }
    if(outOfGuesses)
    {
        cout<<"\n"<<" That is not the answer i am looking for... "<<endl;
        cout<<" Better luck next time!\n "<<endl;
    }
    else
    {
        cout<<"\n"<<" That's right! You know your history! "<<endl;
        cout<<"\n"<<" Oh right.."<<endl;
        cout<<" I suppose I'll have to offer you access to the gold mine now.."<<endl;
    }
    return 0;
}
