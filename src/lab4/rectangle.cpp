//
// Created by mariusz on 21.04.2021.
//

#include "rectangle.h"
namespace Shapes {

    bool Rectangle::isIn(int x, int y) const{
        if ( x >= this->x and x<= this->x + this->width and y >= this->y and y<= this->y + this->length)
        {
            return true;
        }
        return false;
    }

    Rectangle::Rectangle(int x_left, int y_down, int x_right, int y_up) {
        this->x = x_left;
        this->y = y_down;
        this->width = x_right-x_left;
        this->length = y_up - y_down;
    }
}