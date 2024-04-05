/*
    Main File Contains:
        -> Main Game Loop
*/

/*==================== IMPORTS ====================*/
#include <iostream>
#include <string>
#include <raylib.h>

#include "Food.h"
#include "Snake.h"

/*==================== NAMESPACES ====================*/
using namespace std;

/*==================== GLOBALS ====================*/
const int WINDOW_WIDTH {750};
const int WINDOW_HEIGHT{750};
bool PAUSED{false};
const int CELLSIZE{30};
const int CELLCOUNT{25};

Color green = {173, 204, 96, 255};

/*==================== FORWARD FUNCTION DEC ====================*/


/*==================== MAIN ====================*/
int main(){
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Raylib Snake Game");
    SetTargetFPS(60);
    SetExitKey(49);

    Food food = Food(CELLSIZE, CELLCOUNT);
    Snake snake = Snake(CELLSIZE, CELLCOUNT);

    while(!WindowShouldClose()){
        if(!PAUSED){
            food.Draw();
            snake.Draw();
        }

        BeginDrawing();
        ClearBackground(green);


        if(PAUSED){
            DrawTextEx(Font(), "PAUSED", {330, 450}, 30, 3, GREEN);
        }

        EndDrawing();
    }

    CloseWindow();
    return 0;
}