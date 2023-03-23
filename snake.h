#ifndef SNAKE_H
#define SNAKE_H
#include <queue>
#include <position.h>
using namespace std;
class Game;
struct SnakeDot{
 Position position;
 SnakeDot *next;
 SnakeDot(Position p, SnakeDot* _next = nullptr) : position(p), next(_next) {}
 };

 class Snake
 {
     SnakeDot *head, *tail;
     Game& game;
     int cherry;
     int score;
public:
    Snake(Game& _game, Position start);
    ~Snake();

    void move(Direction direction);
    bool checkPosition(Position pos);
    vector<Position> getPositions() const;
    void eatCherry();
private:
    void slideTo(Position newPosition);
    void growAtFront(Position newPosition);
};
#endif // SNAKE_H
