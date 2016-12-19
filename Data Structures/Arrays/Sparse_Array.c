/*
 ============================================================================
 Name        : Sparse_Array.c
 Author      : infinity
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 21

int main() {

	int i, n, q;

	scanf("%d", &n);

	char *arr[n];
	char *query;

	query = (char *)malloc(MAX*sizeof(char));

	for (i = 0; i < n; i++) {
		arr[i] = (char *) malloc(MAX * sizeof(char));
	}

	for (i = 0; i < n; i++) {
		scanf("%s",arr[i]);
	}

	scanf("%d",&q);

	for(i = 0; i < q; i++){
		scanf("%s",query);
		int j;
		int count = 0;
		for(j = 0; j < n; j++){
			if(strcmp(query,arr[j])==0){
				count++;
			}
		}
		printf("%d\n",count);
	}

	return 0;
}

