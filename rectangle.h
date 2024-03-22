#include "shape.h"

namespace Shapes {
    class Rectangle : public Shape {
    public:
        Rectangle(int xFrom,int yFrom,int xTo,int yTo) noexcept;

        bool isIn(int x,int y) const override;
        int x() const;
        int y() const;
        int xTo() const;
        int yTo() const;
    private:
        Point _xFrom, _yFrom,  _xTo, _yTo;
    };
}