#include <raylib.h>

class Food{
    public:
        /* Methods */
        Food(int, int);
        ~Food();

        void Draw();

        /* Data */

    private:
        /* Methods */
        Vector2 GenerateRandomPosition();

        /* Data */
        Vector2 position;
        Image image;
        Texture2D texture;
        int cellSize;
        int cellCount;
};