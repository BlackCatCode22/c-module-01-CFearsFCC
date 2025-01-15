#include <iostream>
#include <string>



std::string x, y, z;

int main()
{
    
        std::cout << "**Hello, brave programmer. What is your name?** \n";

        std::getline(std::cin >> std::ws, x);

        std::cout << "**What is your quest?** \n";

        std::getline( std::cin >> std::ws, y );

        std::cout << "**What is your favorite color?** \n";

        std::getline(std::cin >> std::ws, z);

        
        std::cout << "your name is = " << x << std::endl;
        std::cout << "your quest is = " << y << std::endl;
        std::cout << "your favorite color is = " << z << std::endl;
        std::cout << "thank you, " << x << ", for playing!\n" << std::endl;

       

    


}


