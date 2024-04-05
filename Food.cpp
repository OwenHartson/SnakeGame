#include "Food.h"

using namespace std;

Food::Food(int cellsize, int cellcount){
    cellCount = cellcount;
    cellSize = cellsize;
    image = LoadImage("apple.png");
    texture = LoadTextureFromImage(image);
    UnloadImage(image);
    position = GenerateRandomPosition();
}

Food::~Food(){
    UnloadTexture(texture);
}

void Food::Draw(void){
    int x = static_cast<int>(position.x) * cellSize;
    int y = static_cast<int>(position.y) * cellSize;
    DrawTexture(texture, x, y, WHITE);

    return;
}

Vector2 Food::GenerateRandomPosition(){
    float x = static_cast<float>(GetRandomValue(0, cellCount - 1));
    float y = static_cast<float>(GetRandomValue(0, cellCount - 1));
    return Vector2{x, y};
}