#ifndef COMBAT_H
#define COMBAT_H

typedef struct character
{
    char name[100];
    int health;
    int maxhealth;
    int attack;
} character;

void attackSequence(character *player, character *enemy);
void heal(character *player);

#endif