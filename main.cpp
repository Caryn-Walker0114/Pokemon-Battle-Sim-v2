/**
*
* Programmer: Caryn Rose Walker  |   Date Completed:  9/7/2021
*
* Pokemon Battle Sim V2
*
* A text-based simulation of a Pokemon battle.
*
* User chooses the Pokemon they want, and the AI chooses from what's left. Then the battle begins.
*
*
**/

#include "Game.h"
#include "Pokemon.h"

#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <random>
#include <ctime>


int main()
{
    Game game;

    do{game.playGame();}
    while(game.retry() == true);
}



/**

This is where I'm going to plan out what does what and where

Specify Problem Requirements:

-Input for user to select which Pokemon they want to use  (Game class )
-Pokemon to choose from (Pokemon class )
-Statistics for each Pokemon ( Name, Health/MaxHealth, Attack, Speed ) (Pokemon class )
-A battle arena (Game class )
-A way to check the health of each Pokemon in between moves (Game class )
-A way to check the speed before each turn (Game class )
-A way to declare the winner when health of one Pokemon == 0 (Game class )
-A way to replay the game and confirm if the user wants to (Game class )


**/







