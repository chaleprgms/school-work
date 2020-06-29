/*
     Proj5

     Equity Report Program

     Cody Hale 
     
     CSC 210

     6/28/20

*/


#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]){

    // Handles pulling in CMDLine arguments
    string file;
    string flag = argv[1];
    
    // Checks flag to ensure that help isnt needed

    if(flag.compare("-h") != -1 || flag.compare("-?") != 1){
        cout << "To use this program please type '-f' and your file name in a case sensitive format (ex: 'Data.txt').";
        exit(1);
    }else if(flag == "-f"){
        // set our file name
        file = argv[2];
        
    }
    
    // Opens input and output stream to read text file
    ifstream inEquityFile(file, ios::in);
    
    ofstream outputFile("output.txt", ios::out);

     // If file isnt able to be found, end program
    if(!inEquityFile){
        cerr << "File not Found! Double check your input to ensure youre entering the file name in a case sensitive format (ex: 'Data.txt')." << endl;
        exit(1);
    }


    

    

    // Initialize our variables for our loop
    string line;
    int cntLines=0;

    while (getline(inEquityFile, line)){

        // Iterates line by line to seperate our unique values we want: "Ticker", "Name", etc.

        if(cntLines == 0){
            //skip first line
        }else{
            // Removes all our double quotes to make separation based on comma delimiting
            line.erase(remove(line.begin(), line.end(), '\"'), line.end());
    
            // seperates our "ticker" value, then removes it from the string line
            string ticker  = line.substr(0, line.find(","));
            line = line.substr(line.find(",") + 1);

            // seperates our "name" value, then removes it from the string line
            string name = line.substr(0, line.find(","));
            line = line.substr(line.find(",") + 1);
        
            
            // Seperates our "sharesString" and streams it into an int so it will be usable with arithmetic later, then removes it from the string line
            int shares; 
            stringstream shareStr(line.substr(0, line.find(",")));
            shareStr >> shares;
            line = line.substr(line.find(",") + 1);

            // Seperates our "cost" and streams it into an int so it will be usable with arithmetic later, then removes it from the string line
            string cost = line;
            double costNum;
            string removedSpecial = cost.substr(cost.find("$") + 1);
            stringstream costStr(removedSpecial);
            costStr >> costNum;
            

            // calculates our total value
            double totalVal = shares * costNum;


            // Checks the name to ensure we're recieving a valid line from the file 
            if(name.compare("") != 0){

                //Prints our values to the outputFile
                outputFile << "Ticker: " << ticker << endl;
                outputFile << "Name: " << name << endl;
                outputFile << "# of Shares: " << shares << endl;
                outputFile << "Cost per share: " << cost << endl;
                outputFile << "Total Value of owned Shares: $" << totalVal << endl;

                // Calculates percent increases in shares.
                int tenPercent = (shares * .1) + shares;
                int tfPercent = (shares * .25) + shares;
                int fPercent = (shares * .5) + shares;
                outputFile << "\tTotal Number of shares if increased by 10%: " << tenPercent + shares << "\t Total Value: $" << (tenPercent * costNum) << endl;
                outputFile << "\tTotal Number of shares if increased by 25%: " << tfPercent + shares << "\t Total Value: $" << (tfPercent * costNum) << endl;
                outputFile << "\tTotal Number of shares if increased by 50%: " << fPercent + shares << "\t Total Value: $" << (fPercent * costNum) << endl;
                outputFile << endl;
            }else{
                // ignore invalid names
            }
            
        }

        // increase our counter by 1 to ensure we've skipped the first line.
        cntLines++;
    }

    

    

    
}