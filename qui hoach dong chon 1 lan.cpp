//phýõng pháp quy ho?ch ð?ng

#include<stdio.h>
int max(int m,int n){
	if(m >= n)	return m;
	return n;
}
int main(){
//	kh?i t?o n ð? v?t, kh?i lý?ng t?i ða túi có th? ch?a M, ð? v?t i có kh?i lý?ng w[i] và giá tr? v[i]
//  F[i][j] là giá tr? max cái túi ch?a khi dùng i ð? v?t ð?u, kh?i lý?ng cái túi lúc này ko vý?t quá j
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
	
// Tính F[i][j]
	for(i = 1;i <= n;i++){
		for(j = 0;j <= M;j++){
			if(j < w[i])	F[i][j] = F[i-1][j];
			else
			F[i][j] = max(F[i-1][j],F[i-1][j-w[i]] + v[i]);
		}
	}
	
//  K?t qu? bài toán là F[n][M]
	printf("Cai tui chua max %d",F[n][M]);
	return 0;
} 
