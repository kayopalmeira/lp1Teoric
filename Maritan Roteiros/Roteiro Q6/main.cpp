#include <iostream>
#include "Televisao.h"

int main()
{
    Televisao samsung(997, 95);

    samsung.AumentarCanal();

    std::cout << samsung.getCanal() << std::endl;
    std::cout << samsung.getVolume() << std::endl;

    samsung.AumentarCanal();
    samsung.AumentarCanal();
    samsung.AumentarCanal();
    samsung.AumentarCanal();
    samsung.AumentarCanal();
    samsung.AumentarCanal();
    samsung.AumentarCanal();

    samsung.AumentarVolume();
    samsung.AumentarVolume();
    samsung.AumentarVolume();
    samsung.AumentarVolume();
    samsung.AumentarVolume();
    samsung.AumentarVolume();

    std::cout << "\ncanal e volume alterados" << std::endl;
    std::cout << samsung.getCanal() << std::endl;
    std::cout << samsung.getVolume() << std::endl;

    return 0;
}
