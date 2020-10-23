#include <stdio.h>
int main(){
	int n, v[100], i, n5;
	float procent;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &v[i]);  
		}
	n5 = 0;
	for (i = 0; i < n; i++) {
		if (v[i] < 5) {
			n5++;             
			}
		}
	procent = (float)n5 * 100 / n; 
	printf("%.3f\n", procent);
	return 0;
}
