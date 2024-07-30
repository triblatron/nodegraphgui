//
// Created by tony on 30/07/24.
//

#include "config/Export.h"

#include "core/Shape.h"

namespace nfe
{
    class NFE_API Rectangle : public Shape
    {
    public:
        Rectangle();

        void setPos(double x, double y)
        {
            _x = x;
            _y = y;
        }

        void setSize(double width, double height)
        {
            _width = width;
            _height = height;
        }

        double width() const
        {
            return _width;
        }

        double height() const
        {
            return _height;
        }

        void accept(ShapeVisitor& visitor) override;

        bool isInside(double x, double y) override;
    private:
        double _x{0.0};
        double _y{0.0};
        double _width{0.0};
        double _height{0.0};
    };
}
