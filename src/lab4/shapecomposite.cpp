//
// Created by mariusz on 21.04.2021.
//

#include "shapecomposite.h"
namespace Shapes{


    ShapeComposite::ShapeComposite(std::shared_ptr<Shape> shape1, std::shared_ptr<Shape> shape2,
                                   ShapeOperation operation) {
        this->shape1 = shape1;
        this->shape2 = shape2;
        this->operation = operation;

    }

    bool ShapeComposite::isIn(int x, int y) const {
        if(this->operation == ShapeOperation:: INTERSECTION)
        {
            return shape1->isIn(x,y) && shape2->isIn(x,y);
        }
        if(this->operation == ShapeOperation:: SUM)
        {
            return shape1->isIn(x,y) || shape2->isIn(x,y);

        }
        if(this->operation == ShapeOperation:: DIFFERENCE)
        {
            return shape1->isIn(x,y) && !shape2->isIn(x,y);
        }
    }
}