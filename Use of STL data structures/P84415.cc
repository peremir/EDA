
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    
    map<string,int> m;
    
    string s;
    while (cin >> s) {
        
        if (s == "store") {
            
            string word;
            cin >> word;
            
            m[word]++;
        }
        else if (s == "delete") {
            
            string word;
            cin >> word;
            
            map<string,int>::iterator it = m.find(word);
            if (it->second == 1) m.erase(it);
            else it->second--;
        }
        else if (s == "minimum?") {
            
            if (m.empty()) cout << "indefinite minimum" << endl;
            else {
                
                map<string,int>::iterator it = m.begin();
                
                cout << "minimum: " << it->first << ", " << it->second << " time(s)" << endl;
            }
        }
        else if (s == "maximum?") {
        
            if (m.empty()) cout << "indefinite maximum" << endl;
            else {
                
                map<string,int>::iterator it = m.end(); --it;
                
                cout << "maximum: " << it->first << ", " << it->second << " time(s)" << endl;
            }
        }
    }
}

