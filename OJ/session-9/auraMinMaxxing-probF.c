#include <stdio.h>
#include <string.h>

typedef struct{
	int aura;
	char nama[256];
}Those;

void urut(Those a[], int t){
	int i, j, com;
	Those temp;
	for(i = 0; i < t - 1; i++){
		for(j = 0; j < t - i - 1; j++){
			com = strcmp(a[j].nama, a[j + 1].nama);
			if((t % 2 == 0 && a[j].aura > a[j + 1].aura) || (t % 2 != 0 && a[j].aura == a[j + 1].aura && com < 0) || (t % 2 == 0 && a[j].aura == a[j + 1].aura && com > 0) || (t % 2 != 0 && a[j].aura < a[j + 1].aura)){
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1]= temp;
			}
		}
	}
}

int main(){
	int t, i;
	scanf("%d", &t);
	Those a[t];
	for(i = 0; i < t; i++){
		scanf("%d %s", &a[i].aura, a[i].nama);
	}
	urut(a, t);
	for(i = 0; i < t; i++){
		printf("%d %s\n", a[i].aura, a[i].nama);
	}

	return 0;
}
