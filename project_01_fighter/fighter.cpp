#include <iostream>
#include <string>
#include "fighter.h"
using namespace std;

Fighter::Fighter(float healthValue, float damageValue, float defenseValue, float boostValue, string nameString, string descString, float healValue){
  healthPoints = healthValue;
  damage = damageValue;
  defense = defenseValue;
  defenseBoost = boostValue;
  name = nameString;
  description = descString;
  heal = healValue;
}

bool Fighter::isAlive(){
  if (healthPoints > 0){
    return true;
  }
  else{
    return false;
  }
}

void Fighter::takeDamage(float attackDamage){
  float difference = attackDamage - defense;
  healthPoints -= max(difference,float(1.0));
}

float Fighter::getDamage(){
  return damage;
}

void Fighter::boostDefense(){
  defense += defenseBoost;
}

void Fighter::displayStats(){
  cout << "This current fighter's health is " << healthPoints << ". Their defence is " << defense << "." << endl;
}

void Fighter::healHealth(){
  healthPoints += heal;
}