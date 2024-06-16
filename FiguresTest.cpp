#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Figures.hpp"


TEST_CASE("Circle properties are correctly calculated", "[Circle]") {
    Circle circle(5.0, 0.0, 0.0);

    REQUIRE(circle.area() == Approx(78.53975).epsilon(0.001));
    REQUIRE(circle.perimeter() == Approx(31.4159).epsilon(0.001));
    REQUIRE(circle.type() == "Circle");

    SECTION("Circle with zero radius") {
        Circle circleZero(0.0, 0.0, 0.0);
        REQUIRE(circleZero.area() == Approx(0.0).epsilon(0.001));
        REQUIRE(circleZero.perimeter() == Approx(0.0).epsilon(0.001));
    }

    SECTION("Circle with negative radius") {
        Circle circleNegative(-5.0, 0.0, 0.0);
        REQUIRE(circleNegative.area() == Approx(78.53975).epsilon(0.001));
        REQUIRE(circleNegative.perimeter() == Approx(31.4159).epsilon(0.001));
    }
}


TEST_CASE("Parallelogram properties are correctly calculated", "[Parallelogram]") {
    Parallelogram parallelogram(4.0, 3.0, 60.0, 0.0, 0.0);

    REQUIRE(parallelogram.area() == 12.0);
    REQUIRE(parallelogram.perimeter() == 14.0);
    REQUIRE(parallelogram.type() == "Rhombus");

    SECTION("Square Parallelogram") {
        Parallelogram square(4.0, 4.0, 90.0, 0.0, 0.0);
        REQUIRE(square.type() == "Square");
        REQUIRE(square.area() == 16.0);
        REQUIRE(square.perimeter() == 16.0);
    }

    SECTION("Rectangle Parallelogram") {
        Parallelogram rectangle(4.0, 3.0, 90.0, 0.0, 0.0);
        REQUIRE(rectangle.type() == "Rectangle");
        REQUIRE(rectangle.area() == 12.0);
        REQUIRE(rectangle.perimeter() == 14.0);
    }
}
TEST_CASE("Triangle properties are correctly calculated", "[Triangle]") {
    Triangle triangle(3.0, 4.0, 5.0, 0.0, 0.0, 3.0, 0.0, 3.0, 4.0);

    REQUIRE(triangle.area() == Approx(6.0).epsilon(0.001));
    REQUIRE(triangle.perimeter() == 12.0);
    REQUIRE(triangle.type() == "Scalene Triangle");
    REQUIRE(triangle.angleType() == "Right-angled");

    SECTION("Equilateral Triangle") {
        Triangle equilateral(3.0, 3.0, 3.0, 0.0, 0.0, 3.0, 0.0, 1.5, 2.598);
        REQUIRE(equilateral.type() == "Equilateral Triangle");
        REQUIRE(equilateral.area() == Approx(3.89711).epsilon(0.001));
        REQUIRE(equilateral.perimeter() == 9.0);
    }

    SECTION("Isosceles Triangle") {
        Triangle isosceles(3.0, 3.0, 2.0, 0.0, 0.0, 3.0, 0.0, 1.5, 2.598);
        REQUIRE(isosceles.type() == "Isosceles Triangle");
        REQUIRE(isosceles.area() == Approx(2.82843).epsilon(0.001));
        REQUIRE(isosceles.perimeter() == 8.0);
    }

    SECTION("Acute-angled Triangle") {
        Triangle acute(5.0, 6.0, 7.0, 0.0, 0.0, 5.0, 0.0, 3.0, 4.0);
        REQUIRE(acute.angleType() == "Acute-angled");
    }

    SECTION("Obtuse-angled Triangle") {
        Triangle obtuse(3.0, 4.0, 6.0, 0.0, 0.0, 3.0, 0.0, 1.0, 4.0);
        REQUIRE(obtuse.angleType() == "Obtuse-angled");
    }
}

TEST_CASE("Pentagon properties are correctly calculated", "[Pentagon]") {
    Pentagon pentagon(3.0, 0.0, 0.0);

    REQUIRE(pentagon.area() == Approx(15.4843).epsilon(0.001));
    REQUIRE(pentagon.perimeter() == 15.0);
    REQUIRE(pentagon.type() == "Pentagon");

    SECTION("Pentagon with zero side length") {
        Pentagon pentagonZero(0.0, 0.0, 0.0);
        REQUIRE(pentagonZero.area() == Approx(0.0).epsilon(0.001));
        REQUIRE(pentagonZero.perimeter() == Approx(0.0).epsilon(0.001));
    }

    SECTION("Pentagon with negative side length") {
        Pentagon pentagonNegative(-3.0, 0.0, 0.0);
        REQUIRE(pentagonNegative.area() == Approx(15.4843).epsilon(0.001));
        REQUIRE(pentagonNegative.perimeter() == Approx(15.0).epsilon(0.001));
    }
}
