#include <iostream>


int loop = 1;

int y;

int doubleInt(int x)
{
    return 2*x;
}

int tripleInt(int x)
{
    return 3 * x;
}


int main()
{
    while (loop == 1)
    {
        std::cout << "**Please enter an integer between 1-10** \n";

        std::cin >> y;

        if (y >= 1 and y <= 10)
        {
            std::cout << "your number is = " << y << std::endl;
            std::cout << "your number doubled is = " << doubleInt(y) << std::endl;
            std::cout << "your number tripled is = " << tripleInt(y) << std::endl;
            std::cout << "Play again?  \n" << std::endl;

        }
        else
        {
            std::cout << "*****************************************************" << std::endl;
            std::cout << "****Invalid. Please enter an integer between 1-10**** \n";
            std::cout << "*****************************************************" << std::endl;
        }

    }


}


