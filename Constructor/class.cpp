#include <iostream>
#include <string>
#include "class.h"
using namespace std;

Player::Player()
{
    name=" ";
    score= 0;
    value= 0;

}



Player::Player(string n, float s, float v)
    {
        name=n;
        score =s;
        value =v;
    }

Player::Player(Player& temporary)
{
name = temporary.name;
score = temporary.score;
value = temporary.score;
}



void Player::addPlayer()
{
    cout << "Add name:" << endl;
    cin >> name;
    cout << "Add score:" << endl;
    cin >> score;
    cout << "Add value:" << endl;
    cin >> value;
}

void Player::showData()
{
    cout <<"Name:"<< name  << " | Score: " << score << " | Value: " << value << endl;
}


Player::~Player()
{
    cout<<"destruktor"<<endl;
}



