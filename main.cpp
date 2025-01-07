#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

int main(){
    std::srand(std::time(nullptr));

    int width, height;
    std::cout << "Enter the width of the picture:";
    std::cin >> width;
    std::cout << "Enter the height of the picture:";
    std::cin >> height;

    if(width <= 0 || height <= 0){
        std::cerr << "Error: Width and height must be positive integers."<<std::endl;
        return 1;
    }
    std::ofstream file("pic.txt");
    if(!file){
        std::cerr << "Error: Unable to create the file"<< std::endl;
        return 1;
    }
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            file << (std::rand() % 2);
        }
        file << '\n';
    }
    file.close();
    std::cout << "Binary picture generated in pic.txt";
    return 0;
} 
