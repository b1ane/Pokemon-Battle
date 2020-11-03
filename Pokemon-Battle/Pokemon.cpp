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
        setMoves("Thunderbolt", -125, "Electroball", 0, "Quick Attack", -90);
    }
    
    if (setName == "Mewtwo") {
        setHealth(322);
        setMoves("Pyscho Cut", -90, "", 0, "", 0);
    }
}

int Pokemon::setHealth(int shealth) {
    health = shealth;
    return health;
}

int Pokemon::setIsConfused(int num) {
    isConfused = num;
    return num;
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
    if (isConfused == 1) {
        return true;
    }
    else {
        return false;
    }
}

//FIX THIS !!!!!!!!!
void Pokemon::move(int index, Pokemon& target) {
    for (index = 0; index < 3; index++) {
        target.setHealth(Moves[index].damage + target.getHealth());
    }
    
    
}

//displays available moves
void Pokemon::displayMoves() {
    cout << Moves[0].name << Moves[1].name << Moves[2].name << endl;
}












