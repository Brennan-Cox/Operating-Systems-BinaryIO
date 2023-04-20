//
// Created by Brennan on 1/17/2023.
//

#include "fstream"
#include "iostream"

using namespace std;
int main(int argc, char **argv)
{
    /*
    this is a lazy way to just make sure the file exists
    */
    fstream file;
    file.open(argv[1], ios::app);
    file.close();
    /*
    fstream instantiated and flags set which will allow to
    write in binary and overwrite from a point in the file
    */
    fstream outputFile;
    outputFile.open(argv[1], ios::binary | ios::out | ios::in);
    outputFile.seekp(0);

    //A number is read in from the user
    int num;
    cout << "Enter number to add to file or -1 to quit> ";
    cin >> num;

    //While the number read is not an exit number
    while (num != -1)
    {
        //write the read number
        outputFile.write((char*)&num, sizeof(num));
        cout << "Success...\n";

        //get next number
        cout << "Enter number to add to file or -1 to quit> ";
        cin >> num;
    }
    cout << "Quitting...\n";
    return 0;
}