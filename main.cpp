/*
==================================================
Developer: Christian Tampus
Last Update: 9/16/2026
Version: 1
==================================================
*/
#include <iostream>
#include "Club_app.h"

/*
==================================================
Main() Function
==================================================
*/
int main()
{
    std::cout << "[SYSTEM MESSAGE] Program Start!" << std::endl;
    club::Club_app app;
    app.run();
    std::cout << "[SYSTEM MESSAGE] Program Terminated..." << std::endl;
    return 0;
};