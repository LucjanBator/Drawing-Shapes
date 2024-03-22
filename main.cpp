#include <iostream>
#include <memory>
#include "circle.h"
#include "rectangle.h"
#include "shapecomposite.h"

void drawShape(const Shapes::Shape& shape, int width, int height) {
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            if (shape.isIn(x, y)) {
                std::cout << "* ";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    const int width = 20;
    const int height = 20;

    // Tworzenie obiektów koła i kwadratu
    std::shared_ptr<Shapes::Shape> circle = std::make_shared<Shapes::Circle>(10, 10, 5);
    std::shared_ptr<Shapes::Shape> rectangle = std::make_shared<Shapes::Rectangle>(5, 5, 15, 15);

    std::cout << "Circle:" << std::endl;
    drawShape(*circle, width, height);
    std::cout <<"Rectangle:"<< std::endl;
    drawShape(*rectangle, width, height);

    return 0;
}
