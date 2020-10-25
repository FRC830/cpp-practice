#include <iostream>
#include "fighter.h"
using namespace std;

int main() {

  Fighter pokemonOne(100,20,10,5,"Pidgey","A small, sand-covered bird.", 5);
  Fighter pokemonTwo(480,52,20,10,"Decidueye","A tall, avain bird with Arrow Quills for feathers.", 20);
  int playerOptionNumber;

  while(true){

    cout << "\n\n";
    cout << "USER 1: \n\n";
    pokemonOne.displayStats();
    cout << "\nWhat would you like to do?\n1: Attack\n2. Increase Defense\n3: Heal\nOption >";
    cin >> playerOptionNumber;
    if (playerOptionNumber == 1){
      pokemonTwo.takeDamage(pokemonOne.getDamage());
      if(!pokemonTwo.isAlive()){
        cout << "Player One has won the battle!\n";
        break;
      }
    }
    else if(playerOptionNumber == 2){
      pokemonOne.boostDefense();
    }
    else if(playerOptionNumber == 3){
      pokemonOne.healHealth();
    }
    else{
      cout << "The pokemon didn't know what to do and missed its turn!\n";
    }


    cout << "\n\n";
    cout << "USER 2: \n\n";
    pokemonTwo.displayStats();
    cout << "\nWhat would you like to do?\n1: Attack\n2. Increase Defense\n3: Heal\nOption >";
    cin >> playerOptionNumber;
    if (playerOptionNumber == 1){
      pokemonOne.takeDamage(pokemonTwo.getDamage());
      if(!pokemonOne.isAlive()){
        cout << "Player Two has won the battle!\n";
        break;
      }
    }
    else if(playerOptionNumber == 2){
      pokemonTwo.boostDefense();
    }
    else if(playerOptionNumber == 3){
      pokemonTwo.healHealth();
    }
    else{
      cout << "The pokemon didn't know what to do and missed its turn!\n";
    }
  }

}