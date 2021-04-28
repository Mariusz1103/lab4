#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

namespace Shapes
{
class Rectangle : public Shape
{
private:
    int x;
    int y;
    int length;
    int width;
public:
    Rectangle(int x_left, int y_down,int x_right, int y_up );
    bool isIn(int x, int y) const override;
    int getX() const { return x; }
    int getXTo() const { return x + width; }
    int getY() const { return y; }
    int getYTo() const { return y + length; }


};
} // namespace Shapes

#endif // RECTANGLE_H
