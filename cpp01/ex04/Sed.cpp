#include "Sed.hpp"

Sed::Sed(std::string filename, std::string s1, std::string s2) {
    this->filename = filename;
    this->s1 = s1;
    this->s2 = s2;
}

Sed::~Sed() {
    return;
}

void Sed::replace() {
    std::string line;
    std::ifstream file(this->filename);
    if (file.is_open()) {
        std::ofstream  fl(this->filename + std::string(".replace"));
        std::getline(file, line);
        while (file) {
            size_t pos = line.find(this->s1);
            while (pos != std::string::npos) {
                line = line.substr(0, pos) + this->s2 + line.substr(pos + this->s1.length());
                pos = line.find(this->s1, pos + this->s2.length());
            }
            fl << line << std::endl;
            std::getline(file, line);
        }
    }
    file.close();
}