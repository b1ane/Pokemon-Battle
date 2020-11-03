//
//  main.cpp
//  Pokemon-Battle
//
//  Created by Blane Zewdie on 10/31/20.
//

#include <iostream>
#include <string>
#include "Pokemon.h"
#include "Move.h"
using namespace std;

int main(int argc, const char * argv[]) {
    // pokemon objects
    Pokemon Pikachu("Pikachu");
    Pokemon Mewtwo("Mewtwo");
    int select;
    
    while (true) {
        //mewtwo attacks pikachu, only 1 move available
        //pikachu does not fight back
        Mewtwo.move(0, Pikachu);
        
        
        //pikachu displays moves
        Pikachu.displayMoves();
        //user selects move from display
        cin >> select;
        //pikachu attacks mewtwo
        Pikachu.move(select, Mewtwo);
        
        
        if (Pikachu.getHealth() > Mewtwo.getHealth()) {
            cout << "You win!";
        }
        
        if (Mewtwo.getHealth() > Pikachu.getHealth()) {
            cout << "You lose:(";
        }
        
        
        
    
    }
    
    
    
    
    
    
    return 0;
}
