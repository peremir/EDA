
#include <iostream>
#include <map>
using namespace std;

int main() {
	
	map<int, int> numeros;
	map<int, int>::iterator it;
	char instr;
	
	while(cin >> instr) {
	
		switch(instr) {
		/* ==================================== */
		case 'S':
		
		int num; 
		cin >> num;
		
		numeros[num]++;
		
		break;
		/* ==================================== */
		case 'A':
		
		if (numeros.empty()) cout << "error!" << endl;
		else {
		
			it = numeros.end();
			--it;
			
			cout << (*it).first << endl;
		}
		
		break;
		/* ==================================== */
		case 'R':
		
		if (numeros.empty()) cout << "error!" << endl;
		else {
			it = numeros.end();
			--it;
			
			if ((*it).second == 1) numeros.erase(it);
			else --(*it).second;
		}
		
		break;
		/* ==================================== */
		case 'I':
		
		if (numeros.empty()) cout << "error!" << endl;
		else {
			int x; 
			cin >> x;
			
			it = numeros.end();
			--it;
			
			numeros[((*it).first)+x]++;
			
			if ((*it).second == 1) numeros.erase(it);
			else --(*it).second;
		}
		
		break;
		/* ==================================== */
		case 'D':
		
		if (numeros.empty()) cout << "error!" << endl;
		else {
			int y; 
			cin >> y;
			
			it = numeros.end();
			--it;
			
			numeros[((*it).first)-y]++;
			
			if ((*it).second == 1) numeros.erase(it);
			else --(*it).second;
		}
		
		break;
		/* ==================================== */
		}
	}
}

