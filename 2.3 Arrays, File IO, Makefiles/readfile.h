#ifndef readfile_h
#define readfile_h
#include <string>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;


void readFiletoArray(string filename, int *data){

    int i=0;
    ifstream my_file(filename);
    if(my_file.is_open()){
        while(!my_file.eof()){
            my_file >> data[i];
            i++;
        }
        my_file.close();
    }
    else{
        cout << "Can't open file." << endl;
    }
}

#endif