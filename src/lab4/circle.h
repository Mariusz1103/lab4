#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

namespace Shapes
{
    class Circle : public Shape
    {
    private:
        int x;
        int y;
        int r;
    public:
        Circle(int x, int y, int r);
        bool isIn(int x, int y) const override;
        int getX() const {return x;};
        int getY() const {return y;};
        int getRadius() const{return r;}

    };
} // namespace Shapes

#endif // CIRCLE_H
