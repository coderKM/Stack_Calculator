/*
	Author : Kangmin Kim 
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include "UBCalculator.h"
#include "Lexer.h"

using namespace std;

int main() {

    UBCalculator calculator;
	string line;


    while (cin) {

        cout << ">>> ";

            getline(cin, line);
            if ((line == "quit") || (line == "exit"))
            {
                exit(0);
            }
            if (line == "")
            {
                continue;
            }
            try{
			calculator.setLine(line);
            }
            catch (runtime_error &e) {
                error_return(e.what());
            }
    }
    return 0;
}
