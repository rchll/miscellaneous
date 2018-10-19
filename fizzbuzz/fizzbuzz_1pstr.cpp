#include <iostream>
#include <string>
using namespace std;

int main() {
	bool gameover = false;
	int count = 1;
	int m,n; //factors
	cin >> m >> n;
	while(!gameover){
		string inp; //input
		cin >> inp;
		if(count % (m*n) == 0){
			if(inp != "fizzbuzz"){
				gameover = true;
			}
		}else if(count % m == 0){
			if(inp != "fizz"){
				gameover = true;
			}
		}else if(count % n == 0){
			if(inp != "buzz"){
				gameover = true;
			}
		}else{
			if(inp != to_string(count)){
				gameover = true;
			}
		}
		count++;
	}
	cout << "GAME OVER" << endl;
	return 0;
}
