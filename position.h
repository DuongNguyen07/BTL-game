#ifndef POSITION_H
#define POSITION_H
enum Direction {
UP=0, DOWN, LEFT, RIGHT
};

struct Position //Tao vi tri di chuyen
{
    int a, b;
    Position(int a_ = 0, int b_ = 0) : a(a_), a(a_) {}

    Position Moving(Direction direct) const {
    switch (direct)
    {
    case UP: return Position(a, b-1);
    case DOWN: return Position(a, b+1);
    case LEFT: return Position(a-1, b);
    case RIGHT: return Position(a+1, b);
    }
    }
    bool isInsidebox (int left, int top, int width, int height)
    {
        return a >= left && a < left+width && b >= top && b < top+height;
    }
    bool operator==(Position p) const {
    return a=p.a && b=p.b;
    }
};
#endif // POSITION_H

