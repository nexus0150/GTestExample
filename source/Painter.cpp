#include "ITurtle.h"

class Painter {
public:
    bool DrawSomething(ITurtle& turtle);
};

bool Painter::DrawSomething(ITurtle& turtle) {
    turtle.PenDown();
    turtle.Forward(30);
    turtle.Turn(30);
    turtle.Forward(30);
    return true;
    // return false;
}