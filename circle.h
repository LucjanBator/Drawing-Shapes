#include "shape.h"
#ifndef ZAD4SHAPEDRAWING_DLASTUDENTOW_CIRCLE_H
#define ZAD4SHAPEDRAWING_DLASTUDENTOW_CIRCLE_H
#endif //ZAD4SHAPEDRAWING_DLASTUDENTOW_CIRCLE_H

namespace Shapes{
    class Circle : public Shape{
    public:
    Circle(int xCenter, int yCenter, int radius) noexcept;
    bool isIn(int x, int y) const override;
    int x() const;
    int y() const;
    int getRadius() const;
    private:
        Point _xFrom, _yFrom;
        int _radius;
    };
}