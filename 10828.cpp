#include <stdio.h>
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()

{
	int N;
	scanf("%d", &N);
	stack <int> st;
	while (N--) {
		string s;
		cin >> s;
		if (s == "push") {
			int X;
			scanf("%d", &X);
			st.push(X);
		}
		if (s == "pop") {
			if (!st.empty()) {
				printf("%d\n", st.top());
				st.pop();
			}
			else {
				printf("%d\n", -1);
			}
		}
		if (s == "size") {
			printf("%d\n", st.size());
		}
		if (s == "empty") {
			if (st.empty()) {
				printf("%d\n", 1);
			}
			else {
				printf("%d\n", 0);
			}
		
		}
		if (s == "top") {
			if (!st.empty()) {
				printf("%d\n", st.top());
			}
			else {
				printf("%d\n", -1);
			}
		
		}
	
	}

}
