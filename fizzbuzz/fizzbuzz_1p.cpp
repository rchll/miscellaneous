#include <iostream>
using namespace std;

int main() {
	bool gameover = false;
	int count = 1;
	int m,n; //factors
	cin >> m >> n;
	while(!gameover){
		int inp; //input
		cin >> inp;
		if(count % (m*n) == 0){
			if(inp != -10){
				gameover = true;
			}
		}else if(count % m == 0){
			if(inp != -1){
				gameover = true;
			}
		}else if(count % n == 0){
			if(inp != 0){
				gameover = true;
			}
		}else{
			if(inp != count){
				gameover = true;
			}
		}
		count++;
	}
	cout << "GAME OVER" << endl;
	return 0;
}
