/**
 * Hoppity.cpp
 *
 * Author: Josh Galofaro
 * Date: 10/19/2011
 *
 * Discription:
 *  Hoppity Hop!
 *      To help test whether your puzzle submissions fit the guidelines, try 
 *      this simple test puzzle. Your solution must follow the guidelines like 
 *      any other puzzle. Write a program that takes as input a single argument 
 *      on the command line. This argument must be a file name, which contains 
 *      a single positive integer. The program should read this file and obtain 
 *      the integer within, and then output a sequence of strings based upon 
 *      the number
 **/
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;

int main( int argc, char *argv[] )
{
    string line;
    ifstream input;
    input.open( argv[1] );
    
    if( input.is_open() )
    {
        getline( input, line );     //We only need the one line
        input.close();
    }
    
    int count = atoi(line.c_str());
    for( int i = 1; i <= count; i++ )
    {
        if( (i%3 == 0) && (i%5 == 0 ) ) cout << "Hop" << endl;
        else if( i%3 == 0 ) cout << "Hoppity" << endl;
        else if( i%5 == 0 ) cout << "Hophop" << endl;
    }

    return 1;
}
