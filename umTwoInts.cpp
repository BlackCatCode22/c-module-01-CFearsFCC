#include <iostream>




int x, y;

int sumTwoInts(int x, int y)
{
    return x + y;
}




int main()
{
    
        std::cout << "**Please enter the first integer between 1-10** \n";

        std::cin >> x;

        std::cout << "**Please enter the second integer between 1-10** \n";

        std::cin >> y;

        
        std::cout << "your numbers added up equal = " << sumTwoInts(x,y) << std::endl;
            
     

    


}
