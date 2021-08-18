#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>
using namespace std;
int main() {
  ifstream buffer;
  stringstream output;
  buffer.open("Excel.txt");
  buffer.is_open() ? cout << "File open !\n" : cout << "Error open file\n";
  int number = 0;
  int cursor = 0;
  int endFile;
  char sy;
  string str;
  string outputStr;
  string data;
  int maxNum = 0;
  while (!buffer.eof()){
   getline(buffer, str, ' ');
   try{
     number = stoi(str);
     getline(buffer, data, '\n');
   } catch(invalid_argument){
     output << str << " ";
   }
   if (number > maxNum){
     maxNum = number;
     output << number;
   }
   cout << output.str() << endl;
}
}