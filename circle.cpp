#include "circle.h"
#include <cmath>

namespace Shapes{
    Circle::Circle(int xCenter, int yCenter, int radius) noexcept:_radius(radius){
        _xFrom = {xCenter,{}};
        _yFrom = {{},yCenter};
    }
    bool Circle::isIn(int x, int y) const {
        if (sqrt(pow((_xFrom.x_-x),2) + pow((_yFrom.y_-y),2))<=_radius) {
            return true;
        } else {
            return false;
        }
    }
    int Circle::x() const{
        return _xFrom.x_;
    }
    int Circle::y() const{
        return _yFrom.y_;
    }
    int Circle::getRadius() const {
        return _radius;
    }
}
