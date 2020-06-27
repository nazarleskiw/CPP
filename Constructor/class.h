#pragma once

using namespace std;

class Player
{
private:

public:
    string name;
    float score;
    float value;
    Player();
    Player(string, float, float);
    Player(Player& temporary);
    void addPlayer();
    void showData();
    ~Player();


};


