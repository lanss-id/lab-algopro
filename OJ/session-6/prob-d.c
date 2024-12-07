#include<stdio.h>

int main(){
	int i, j, x, y;
	scanf("%d %d", &x, &y);
	int taman[100][100];

	for(i = 0; i < x; i++){
		for(j = 0; j < y; j++){
			scanf("%d", &taman[i][j]);
		}
	}

	int t, a, b, c;
	scanf("%d", &t);

	for(i = 0; i < t; i++){
		scanf("%d %d %d", &a, &b, &c);
		taman[a-1][b-1] = c;
	}

	for(i = 0; i < x; i++){
		for(j = 0; j < y; j++){
			printf("%d", taman[i][j]);
			if(j < y - 1){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
