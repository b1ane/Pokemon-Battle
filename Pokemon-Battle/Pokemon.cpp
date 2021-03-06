//
//  Pokemon.cpp
//  Pokemon-Battle
//
//

#include "Pokemon.h"
#include "Move.h"
#include <iostream>
#include <string>
using namespace std;

//mutators
Pokemon::Pokemon(string setName) {
    name = setName;
    
    if (setName == "Pikachu") {
        setHealth(274);
        //set available attacks for pikachu
        setMoves("Thunderbolt", -125, "Electro Ball", 0, "Quick Attack", -90);
    }
    
    if (setName == "Mewtwo") {
        setHealth(322);
        setMoves("Psycho Cut", -90, "", 0, "", 0);
    }
}

int Pokemon::setHealth(int shealth) {
    health = shealth;
    return health;
}

bool Pokemon::setIsConfused(bool val) {
    isConfused = val;
    return isConfused;
    //return isConfused;
}

void Pokemon::setMoves(string move1, int damage1, string move2, int damage2, string move3, int damage3) {
    
    Moves[0].name = move1;
    Moves[1].name = move2;
    Moves[2].name = move3;
    
    Moves[0].damage = damage1;
    Moves[1].damage = damage2;
    Moves[2].damage = damage3;
}

//accessors
int Pokemon::getHealth() const {
    return health;
}

bool Pokemon::getIsConfused() {
    return isConfused;
}

//FIX THIS !!!!!!!!!
void Pokemon::move(int index, Pokemon& target) {
    if (index == 0) {
        //target.setHealth(target.health + Moves[index].damage);
        cout << name << " used " << Moves[index].name << endl;
        target.setHealth(target.health + Moves[index].damage);
    }
    //electroball is used, mewtwo gets confused
    if (index == 1) {
        target.setIsConfused(true);
        cout << name << " used " << Moves[index].name << endl;
        cout << "It confused " << target.name << "!" << endl;
        target.setHealth(target.health + Moves[index].damage);
    }
    
    if (index == 2) {
        //target.setHealth(target.health + Moves[index].damage);
        cout << name << " used " << Moves[index].name << endl;
        target.setHealth(target.health + Moves[index].damage);
    }
    
    
}

//displays available moves
void Pokemon::displayMoves() {
    cout << Moves[0].name << ", " << Moves[1].name << ", or " << Moves[2].name << endl;
}












