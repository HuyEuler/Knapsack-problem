//ph��ng ph�p quy ho?ch �?ng

#include<stdio.h>
int max(int m,int n){
	if(m >= n)	return m;
	return n;
}
int main(){
//	kh?i t?o n �? v?t, kh?i l�?ng t?i �a t�i c� th? ch?a M, �? v?t i c� kh?i l�?ng w[i] v� gi� tr? v[i]
//  F[i][j] l� gi� tr? max c�i t�i ch?a khi d�ng i �? v?t �?u, kh?i l�?ng c�i t�i l�c n�y ko v�?t qu� j
	int n,M,i,j;
	int w[200],v[200],F[200][200];
	printf("Nhap so luong do vat ");
	scanf("%d",&n);
	printf("Nhap khoi luong max cai tui ");
	scanf("%d",&M);
	for(i = 1;i <= n;i++){
		printf("Nhap khoi luong va gia tri do vat thu %d:\n",i);
		scanf("%d%d",&w[i],&v[i]);
        // t?o testcase v?i TH n l?n c? 100 
		// w[i] = i;
		// v[i] = i+1;
	}
	
//  Kh?i t?o F[0][j] = 0 v?i j = 0 --> M
	for(j = 0;j <= M;j++){
		F[0][j] = 0;
	}
	
// T�nh F[i][j]
	for(i = 1;i <= n;i++){
		for(j = 0;j <= M;j++){
			if(j < w[i])	F[i][j] = F[i-1][j];
			else
			F[i][j] = max(F[i-1][j],F[i-1][j-w[i]] + v[i]);
		}
	}
	
//  K?t qu? b�i to�n l� F[n][M]
	printf("Cai tui chua max %d",F[n][M]);
	return 0;
} 
