#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include "Pipe.h"
using namespace std;

PIPE_ PIPE[1010];

int main() {
	freopen("input.yo","r",stdin);
	freopen("output.out","w",stdout);
	int n = 0;
	while (cin >> hex >> COMMAND[n])
		n++;
	COMMAND[n] = -1;
	int m = 0;
	PIPE[0].Init();	
	do {
		m++;
		PIPE[m].Proc(PIPE[m - 1]);	
		printf("%d %d\n",m,PIPE[m].D.valP);
	} while (PIPE[m].stat == SAOK);
	return 0;
}