#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "combat.h"

int main() {

    srand(time(NULL));

    character player = {"Hero", 100, 100, 15};
    character enemy = {"Goblin", 50, 50, 10};

    int choice;
    int running = 1;


    printf("**WELCOME to the TEXT-RPG-GAME**\n");


while (running && player.health > 0 && enemy.health > 0)
{
    
    printf("\nChoose your option: \n1.Attack\n2.Heal\n3.Run\n");
    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            attackSequence(&player, &enemy);

            if (player.health > 0 && enemy.health > 0)
        {
        printf("\n=== CURRENT STATS ===\n");
        printf("%s HP: %d/%d\n", player.name, player.health, player.maxhealth);
        printf("%s HP: %d/%d\n", enemy.name, enemy.health, enemy.maxhealth);
        }

        break;
        case 2:
            heal(&player);
            break;
        case 3:
            printf("You have chosen to run away.\n");
            running = 0;
            break;
        default:
            printf("Invalid choice");
            break;

    }
}






    

    return 0;
}