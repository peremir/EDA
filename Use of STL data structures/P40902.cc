
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {

	map<string,int> jugadors;
	map<string,int> fora;
	
	map<string,int>::iterator it;
	
	string name;
	while(cin >> name) {
	
	it = jugadors.find(name);
	
	string action;
	cin >> action;
	
	if(action == "enters") {
		
		if(it == jugadors.end()) {
			jugadors.insert(it, pair<string,int>(name,0));
		}
		else cout << name << " is already in the casino" << endl;
		
	}
	else if(action == "wins") {
		
		int x;
		cin >> x;
		
		if(it != jugadors.end()) it->second += x;
		else cout << name << " is not in the casino" << endl;
		
	}
	else if(action == "leaves") {
		
		if(it != jugadors.end()) {
			
			cout << name << " has won " << it->second << endl;
			
			fora.insert( pair<string,int>(it->first,it->second));
			jugadors.erase(it);
		}
		else cout << name << " is not in the casino" << endl;
		
	}
    }
    cout << "----------" << endl;
    
    for(it = jugadors.begin(); it != jugadors.end(); ++it) {
    
    	cout << it->first << " is winning " << it->second << endl;
    }
}

