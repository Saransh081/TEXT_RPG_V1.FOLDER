#include <stdio.h>
#include <stdlib.h>
#include "combat.h"



void attackSequence(character *player, character *enemy){
    int playerDamage = player->attack - 5 + rand() % 11;
    enemy->health = enemy->health - playerDamage;
    if (enemy->health < 0)
    {
        enemy->health = 0;
    }

    printf("%s attacks %s for %d damage!\n",
       player->name,
       enemy->name,
       playerDamage);
    printf("%s HP: %d\n", enemy->name, enemy->health);

    if (enemy->health <= 0)
    {
        printf("%s has been defeated!\n", enemy->name);
        printf("------------\n");
        printf("   YOU WIN!!!\n");
        printf("------------\n");
        return;
    }

    int enemyDamage = enemy->attack - 5 + rand() % 11;
    player->health = player->health - enemyDamage;

    if (player->health < 0)
    {
        player->health = 0;
    }

    printf("%s attacks %s for %d damage!\n",
       enemy->name,
       player->name,
       enemyDamage);
    printf("%s HP: %d\n", player->name, player->health);

    if (player->health <= 0)
    {
        printf("%s has been defeated!\n", player->name);
        printf("------------\n");
        printf("  GAME OVER!\n");
        printf("------------\n");
    }
}


void heal(character *player){
    player->health = player->health + 20;

    if (player->health > player->maxhealth)
    {
        player->health = player->maxhealth;
    }

    printf("%s healed for 20 HP!\n", player->name);
    printf("%s HP: %d\n", player->name, player->health);
}