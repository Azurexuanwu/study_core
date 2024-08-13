
#include <cmath>
#include <random>
#include <iostream>
#include <fstream>
#include <sstream>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <cstring>
#include <ctime>
#include <sys/times.h> 
#include <iomanip>
#include <tinyxml.h>
#include <regex>
#include <iostream>
#include <chrono>
#include <ctime>
using namespace std;

// g++ main.cpp -o main -std=c++11 -lpthread -fpermissive -I /opt/ros/noetic/include -L /opt/ros/noetic/lib
template <typename T>
T limitFun(T value, T maxValue)
{
    return (value > maxValue) ? maxValue : (value < -maxValue) ? -maxValue : value;
}
int main(int argc, char** argv)
{
    double a = -111;
    double b = 10;
    
    std::cout << "获取值：" << limitFun(a,b) << std::endl;
    return 0;
}

