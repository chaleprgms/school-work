


#include<iostream>
#include<cmath>
#include<fstream>
#include<string>
#include<sstream>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]){


    string file;
    string flag = argv[1];
    
    if(flag.compare("-h") != -1 || flag.compare("-?") != 1){
        cout << "To use this program please type '-f' and your file name in a case sensitive format (ex: 'Data.txt').";
        exit(1);
    }else if(flag == "-f"){
    
        file = argv[2];
        
    }
    
    ifstream inEquityFile("EquityData.txt", ios::in);

     
    if(!inEquityFile){
        cerr << "File not Found!" << endl;
        exit(1);
    }


    

    string line;

    
    ofstream outputFile("output.txt", ios::out);

    int cntLines=0;
    while (getline(inEquityFile, line)){
        

        //double cost  = stod(line);
        

        //double totalVal = cost * shares;


        if(cntLines == 0){
            //skip first line
        }else{
            istringstream ss(line);
            line.erase(remove(line.begin(), line.end(), '\"'), line.end());
    
            string ticker  = line.substr(0, line.find(","));
            line = line.substr(line.find(",") + 1);

            string name = line.substr(0, line.find(","));
            line = line.substr(line.find(",") + 1);
        
            
            int shares; 
            stringstream shareStr(line.substr(0, line.find(",")));
            shareStr >> shares;
            line = line.substr(line.find(",") + 1);

            string cost = line;
            double costNum;

            string removedSpecial = cost.substr(cost.find("$") + 1);
            stringstream costStr(removedSpecial);
            costStr >> costNum;
            
            double totalVal = shares * costNum;

            if(name.compare("") != 0){
                outputFile << "Ticker: " << ticker << endl;
                outputFile << "Name: " << name << endl;
                outputFile << "# of Shares: " << shares << endl;
                outputFile << "Cost per share: " << cost << endl;
                outputFile << "Total Value of owned Shares: $" << totalVal << endl;
                int tenPercent = (shares * .1) + shares;
                int tfPercent = (shares * .25) + shares;
                int fPercent = (shares * .5) + shares;
                outputFile << "\tTotal Number of shares if increased by 10%: " << tenPercent + shares << "\t Total Value: $" << (tenPercent * costNum) << endl;
                outputFile << "\tTotal Number of shares if increased by 25%: " << tfPercent + shares << "\t Total Value: $" << (tfPercent * costNum) << endl;
                outputFile << "\tTotal Number of shares if increased by 50%: " << fPercent + shares << "\t Total Value: $" << (fPercent * costNum) << endl;
                outputFile << endl;
            }else{
                // ignore
            }
            
        }
        
        cntLines++;
    }

    

    

    
}