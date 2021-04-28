//
// Created by mariusz on 21.04.2021.
//

#include "circle.h"
#include <cmath>

namespace Shapes {
    Circle::Circle(int x, int y, int r) {
        this->x = x;
        this->y = y;
        this->r = r;
    }

    bool Circle::isIn(int x, int y) const {
        int s = this->x - x;
        int e = this->y - y;
        int x_ =  int(sqrt(s*s + e*e));
        return (x_ <= this->r);
    }
}
