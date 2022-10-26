#include <iostream>

int main()
{
    double x, y, R1, R2;
    std::cout << "x = "; std::cin >> x;
    std::cout << "y = "; std::cin >> y;
    std::cout << "R1 = "; std::cin >> R1;
    std::cout << "R2 = "; std::cin >> R2;
    if (R1 == 0 || R2 == 0)
    {
        std::cout << "Circle function with given radius (0) doesn't exist.";
        return 0;
    }
    if (x >= 0 && y >= 0)
    {
        if ((R1 * R1 >= x * x + y * y) && (R2 * R2 <= x * x + y * y))
            std::cout << "Is in gray area."; // в першій чверті координат, між R1 та R2.
        else
            std::cout << "Point don't belong to gray area."; // в першій чверті координат, але поза R1 та R2.
    }
    else if (x <= 0 && y <= 0)
    {
        if ((R1 * R1 >= x * x + y * y) && (R2 * R2 <= x * x + y * y))
            std::cout << "Is in gray area."; // в третій чверті координат, між R1 та R2.
        else
            std::cout << "Point don't belong to gray area."; // в третій чверті, але поза R1 та R2.
    }
    else
        std::cout << "Point isn't in right zone."; // поза першою і третьою чвертю координат.
    return 0;
}