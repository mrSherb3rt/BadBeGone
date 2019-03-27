#include <vector>
#include <iostream>
#include <string.h>
#include <thread>
#include <chrono>
using namespace std;

int main()
{
while(true)
{
system("Capture2Text_CLI.exe -s \"1669 0 1728 30\"");
std::this_thread::sleep_for(std::chrono::milliseconds(500));
}
}
