//
//  main.cpp
//  thermometer
//
//  Created by Bryan Peters on 7/5/22.
//

#include <iostream>
#include <fstream>

int main(int argc, const char * argv[]) {
    
    int runs;
    int x = 1;
    int y = 0;
    int z = 0;
    
    std::cout << "How Many?\n"; std::cin >> runs;
    std::cout << y << "\n" << x << "\n"; 
    
    for (int count = 0; count < runs; count++) {
        
        z = x+y;
        std::cout << z; std::cout << "\n";
        y = x;
        x = z;
        
            }
    
    /*
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
     */
}
