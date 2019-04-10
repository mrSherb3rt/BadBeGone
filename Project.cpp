#include <vector>
#include <iostream>
#include <string.h>
#include <thread>
#include <fstream>
#include <chrono>
using namespace std;

int main()
{
while(true)
{
char deaths;
/*
system("Capture2Text_CLI.exe -s \"1669 0 1728 30\" >curCoor.txt");
string line;
  ifstream myfile ("curCoor.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
        deaths=line.at(2);
    }
    myfile.close();
  }
  */
//system("\"\"C:\\Program Files\\IrfanView\\i_view64.exe \"\\capture=0\\convert=\"C:\\Users\\Flynn\\Documents\\Spring 2019\\Internet of Things\\Project\\wholescreen.jpeg\"\"");
//system("\"\"C:\\Program Files\\IrfanView\\i_view64.exe \"C:\\Users\\Flynn\\Documents\\Spring 2019\\Internet of Things\\Project\\wholescreen.jpeg\"\\crop=(756,297,95,34)\\convert=\"C:\\Users\\Flynn\\Documents\\Spring 2019\\Internet of Things\\Project\\test.jpeg\"\"");
std::cout.setstate(std::ios_base::failbit);
system("helper.bat");
std::cout.clear();
system("capture2text_cli.exe -i test.jpeg -o results.txt");
std::this_thread::sleep_for(std::chrono::milliseconds(500));
}
}
