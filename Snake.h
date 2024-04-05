#include <raylib.h>
#include <deque>

class Snake{
    public:
        /* Methods */
        Snake(int, int);
        ~Snake();

        void Draw();

        /* Data */
        std::deque<Vector2> body = { Vector2{6, 9}, Vector2{5, 9}, Vector2{4, 9} };

    private:
        /* Methods */

        /* Data */
        int cellSize;
        int cellCount;
};