#include <iostream>
#include <string>

int main(){
    std::string name = "HI THIS IS BRAIN";
    std::string* namePtr = &name;
    std::string& nameRef = name;
    std::cout << "name: " << &name << std::endl;
    std::cout << "namePtr: " << namePtr << std::endl;
    std::cout << "nameRef: " << &nameRef << std::endl;
    std::cout << "name: " << name << std::endl;
    std::cout << "namePtr: " << *namePtr << std::endl;
    std::cout << "nameRef: " << nameRef << std::endl;
    return 0;
}
