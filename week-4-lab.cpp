#include <iostream>
#include <string>
#include <sstream>
// Include the library that will allow you to convert from string to integer


int main() {
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  int a;
  int b;
  int c;

  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
  
  
  // Ask the user for 3 integers as input

  std::cout << "Please enter 3 integers: " << std::endl;

  // The user should enter all integers on the same line, pressing enter only once

  std::cin >> a >> b >> c;
  std::cout << std::endl;



  // Multiply the three integers

  int prod = a*b*c;





  // Output the result of the multiplication

  std::cout << "The Product of your three integers are: " << prod << std::endl;



  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html


  std::string p1;
  std::string p2;
  std::string p3;
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Please enter a 5 Syllable line: " << std::endl;
      std::getline (std::cin, p1); 
    std::cout << "Please enter a 7 Syllable line: " << std::endl;
      std::getline (std::cin, p2); 
    std::cout << "Please enter a 5 Syllable line: " << std::endl;
      std::getline (std::cin, p3); 
    
    std::cout << "Your Haiku Poem: " << std::endl;
    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
    std::cout << p3 << std::endl;

    









  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  std::string myNumber = ("1234"); // Convert this string to an integer 
  int myInt;
  std::stringstream (myNumber) >> myInt;


  
  std::cout << myInt << ": is an integer"; //Insert the integer before the text of this output

  return 0;
}