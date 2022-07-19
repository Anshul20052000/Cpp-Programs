#include<iostream>
using namespace std;
enum Suit {clubs,diamonds,hearts,spades};
struct card
{
    int number;
    Suit suit;
};
int const jack = 11;
int const king = 12;
int const queen = 13;
int const ace = 14;
int main()
{
    card temp,chosen,prize;
    card card1 = {7,clubs};
    cout<<"Card 1 is the 7 of Clubs"<<endl;
    card card2 = {jack,hearts};
    cout<<"Card 2 is the Jack of Hearts"<<endl;
    card card3 = {ace,spades};
    cout<<"Card 3 is the Ace of Spades"<<endl;
    prize = card3;

    cout<<"I'm Swapping Card 1 and Card 3 "<<endl;
    temp = card1;
    card1 = card3;
    card3 = temp;
    cout<<"I'm Swapping Card 2 and Card 3 "<<endl;
    temp = card2;
    card2 = card3;
    card3 = temp;
    cout<<"I'm Swapping Card 1 and Card 2 "<<endl;
    temp = card1;
    card1 = card2;
    card2 = temp;
    int pos;
    cout<<"Now where (1,2 or 3) is the Ace of Spades : ";
    cin>>pos;
    switch(pos)
    {
        case 1 :
            chosen = card1;
            break;

        case 2 :
            chosen = card2;
            break;

        case 3 :
            chosen = card3;
            break;

        default :
            cout<<"Wrong Choice..."<<endl;

    }
    if(chosen.number==prize.number && chosen.suit==prize.suit)
        cout<<"Thats Right...You Win!..."<<endl;
    else
        cout<<"Sorry!...You Lose..."<<endl;
    return 0;

}
