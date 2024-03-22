#include "rectangle.h"

namespace Shapes {
    Rectangle::Rectangle(int xFrom,int yFrom,int xTo,int yTo) noexcept {
                _xFrom = {xFrom,{}};
                _xTo={xTo,{}};
                _yFrom = {{},yFrom};
                _yTo = {{},yTo};
    }
    bool Rectangle::isIn(int x, int y) const {
        if ((x >= _xFrom.x_ && x <= _xTo.x_) && (y >= _yFrom.y_ && y <= _yTo.y_)) {
            return true;
        } else {
            return false;
        }
    }
    int Rectangle::x() const{
        return _xFrom.x_;
    }
    int Rectangle::xTo() const{
        return _xTo.x_;
    }
    int Rectangle::y() const{
        return _yFrom.y_;
    }
    int Rectangle::yTo() const{
        return _yTo.y_;
    }
}