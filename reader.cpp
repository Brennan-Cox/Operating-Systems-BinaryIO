//
// Created by Brennan on 1/17/2023.
//

#include <fstream>
#include <iostream>

using namespace std;
int main(int argc, char **argv)
{

    //instantiate an input stream using args and appropriate flags for file
    ifstream inputFile;
    inputFile.open(argv[1], ios::binary | ios::in);

    if (!inputFile) {
        cout << "Error in file" << endl;
        return 0;
    }

    //get data from file
    int data;
    inputFile.read((char *)&data, sizeof(data));

    //while the data read wasn't at the end of the file continue
    while (!inputFile.eof())
    {
        //print valid data
        cout << data << endl;

        //read next data
        inputFile.read((char *)&data, sizeof(data));
    }
    return 0;
}