#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    vector<vector<double>> dots;

    ifstream inputStream;
    inputStream.open("D://Projects/C++/university-labs/Ind_1_2/input.txt");

    if(inputStream.is_open()){
        string currentLine;
        while(getline(inputStream, currentLine)){
            stringstream coord_pair;
            coord_pair << currentLine;

            string x_str, y_str;

            coord_pair >> x_str;
            coord_pair >> y_str;

            double x = stod(x_str);
            double y = stod(y_str);

            vector<double> current_dot = {x, y};
            dots.push_back(current_dot);
        }

        inputStream.close();


        // Sorting our dots
        cout << "Sorting dots..." << endl;

        vector<double> temp;
        for(int i = 0; i < dots.size(); i++){
            for(int j = i + 1; j < dots.size(); j++){
                if(dots[i] >= dots[j]){
                    temp = dots[i];
                    dots[i] = dots[j];
                    dots[j] = temp;
                }
            }
        }


        double a = dots[0][0];
        double b = dots[dots.size()-1][0];

        // Counting integral
        double h = (b-a) / dots.size();

        double integral = (dots[0][1] + dots[dots.size()-1][1]) / 2.0;

        for(int j = 1; j < dots.size(); j++){
            integral += dots[j][1];
        }

        integral *= h;

        // Outputting data
        ofstream outputStream;
        outputStream.open("D://Projects/C++/university-labs/Ind_1_2/output.txt");

        cout << "[a,b] " << "["<< a << "," << b << "]" << endl;
        cout << "integral: " << integral << endl;

        outputStream << "[a,b] " << "["<< a << "," << b << "]" << endl;
        outputStream << "integral: " << integral << endl;

        outputStream.close();
    }

    return 0;
}
