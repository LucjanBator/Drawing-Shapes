#include "shape.h"
#include <vector>
#include <memory>
namespace Shapes{
    enum class ShapeOperation {
        INTERSECTION,
        SUM,
        DIFFERENCE
    };

    class ShapeComposite : public Shape {
    public:
        ShapeComposite(std::shared_ptr<Shape> shape1, std::shared_ptr<Shape> shape2, ShapeOperation operation);
        bool isIn(int x, int y) const override;

    private:
        std::shared_ptr<Shape> shape1_;
        std::shared_ptr<Shape> shape2_;
        ShapeOperation operation_;
    };
}