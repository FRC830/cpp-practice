#pragma once
#include <iostream>
#include <string>
using namespace std;


class Fighter {
  private:
    float healthPoints;
    float damage;
    float defense;
    float defenseBoost;
    string name;
    string description;
    float heal;

  public:
    Fighter(float healthValue = 0.0, float damageValue = 0.0, float defenseValue = 0.0, float boostValue = 0.0, string nameString = "DEFAULT", string descString = "DEFAULT", float healValue = 0.0);
    bool isAlive();
    void takeDamage(float);
    float getDamage();
    void boostDefense();
    void displayStats();
    void healHealth();
};