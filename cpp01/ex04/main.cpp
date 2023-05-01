#include "Sed.hpp"

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return 1;
    }
    std::string a(argv[1]);
    std::string b(argv[2]);
    std::string c(argv[3]);
    if (a.empty() || b.empty() || c.empty())
    {
        std::cout << "empty args" << std::endl;
        return (-1);
    }
    Sed sed(argv[1], argv[2], argv[3]);
    std::ofstream file(argv[1] + std::string(".replace"));
    sed.replace();
    return 0;
}
