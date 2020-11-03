//
//  Pokemon.h
//  Pokemon-Battle
//
//

#ifndef Pokemon_h
#define Pokemon_h

#include "Move.h"

#include<string>
using namespace std;

class Pokemon {
private:
    string name;
    int health;
    struct Move Moves[3];
    bool isConfused;
    
public:
    //class constructor, takes in name and creates object with health and attacks
    Pokemon(string setName);
    
//mutators
    int setHealth(int shealth);
    //when Electro Ball is used - MewTwo gets confused
    //"yes" = is confused, "no" = not confused
    bool setIsConfused(bool val);
    
    void setMoves(string move1, int damage1, string move2, int damage2, string move3, int damage3);
    
//accessors
    int getHealth() const;
    bool getIsConfused();
    
    //takes index of attack (moves array)
    //refreneces pokemon that is being attacked
    //if electro ball is used, health does not change, pokemon gets confused
    void move(int index, Pokemon& target);
    
    void displayMoves();
};







#endif /* Pokemon_h */
