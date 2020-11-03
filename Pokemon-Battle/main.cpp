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
    string select;
    
    
    
    while ( (Pikachu.getHealth() < 0) || Mewtwo.getHealth() > 0) {
        //mewtwo attacks pikachu, only 1 move available
        //pikachu does not fight back
        if (Mewtwo.getIsConfused() == false) {
            Mewtwo.move(0, Pikachu);
        }
       // Mewtwo.move(0, Pikachu);
        Mewtwo.setIsConfused(false);
        
        //pikachu displays moves
        Pikachu.displayMoves();
        //user selects move from display
        getline(cin, select);
        if (select == "Thunderbolt") {
            Pikachu.move(0, Mewtwo);
        }
        if (select == "Electro Ball") {
            Pikachu.move(1, Mewtwo);
        }
        if (select == "Quick Attack") {
            Pikachu.move(2, Mewtwo);
        }
        

    }
    
    if (Pikachu.getHealth() > Mewtwo.getHealth()) {
        cout << "You win";
            }
            
    if (Mewtwo.getHealth() > Pikachu.getHealth()) {
        cout << "You lose";
            }
    
    
    return 0;
}
