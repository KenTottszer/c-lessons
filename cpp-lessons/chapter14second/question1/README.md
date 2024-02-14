a) Write a class named Point2d. Point2d should contain two member variables of type double: m_x, and m_y, both defaulted to 0.0.

Provide a constructor and a print() function.

The following program should run:

This should print:

Point2d(0, 0)
Point2d(3, 4)


Now add a member function named distanceTo() that takes another Point2d as a parameter, and calculates the distance between them. Given two points (x1, y1) and (x2, y2), the distance between them can be calculated using the formula std::sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)). The std::sqrt function lives in header cmath.

The following program should run:


This should print:

Point2d(0, 0)
Point2d(3, 4)
Distance between two points: 5