#include "Snake.h"

Snake::Snake(int cellsize, int cellcount){
    cellCount = cellcount;
    cellSize = cellsize;
}

Snake::~Snake(){}

void Snake::Draw(void){
    for(long unsigned int i = 0; i < body.size(); i++){
        float oldx = body[i].x;
        float oldy = body[i].y;

        //int x = static_cast<int>(oldx) * cellSize;
        //int y = static_cast<int>(oldy) * cellSize;
        float x = oldx * static_cast<float>(cellSize);
        float y = oldy * static_cast<float>(cellSize);
        float newCellSize = static_cast<float>(cellSize);

        Rectangle segment = Rectangle{x, y, newCellSize, newCellSize};
        DrawRectangleRounded(segment, 0.5, 6, DARKGREEN);
    }

    return;
}