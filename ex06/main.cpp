#include "Harl.hpp"

int     main(int argc, char **argv)
{
    Harl    harl;

    if (argc != 2)
    {
        std::cout << "Usage: ./harl [DEBUG] || [INFO] || [WARNING] || [ERROR]" << std::endl;
        return (1);
    }
    std::string level = argv[1];
    harl.complain(level);
    return (0);
}