#include <iostream>

using namespace std;

int main() {
    string line;
    bool first = true;
    while(getline(cin,line)) {
        string output = "";
        for(int i = 0; i < line.length(); ++i) {
            string to_insert;
            if(line[i] == '"') {
                if(first) to_insert = "``";
                else to_insert = "\'\'";
                first = !first;
            }
            else to_insert = line[i];
            output = output + to_insert;
        }
        cout << output << endl;
    }
    return 0;
}
