#include<stdio.h> 
int main(){ 
//nh?p n ð? v?t, kh?i lý?ng t?i ða túi M, ð? v?t i có kh?i lý?ng w[i], giá tr? v[i] 
//F[i] là giá tr? max cái túi ch?a khi kh?i lý?ng không vý?t quá i 
int n,M,i,j; 
int w[500],v[500],F[500] ={}; 
printf("Nhap so luong do vat "); 
scanf("%d",&n); 
printf("Nhap khoi luong max cai tui "); 
scanf("%d",&M); 
for(i = 1;i <= n;i++){ 
printf("Nhap khoi luong va gia tri do vat thu %d:\n",i); 
scanf("%d%d",&w[i],&v[i]);  
//t?o testcase v?i TH n l?n c? 100  
//w[i] = i; 
//v[i] = i+1; 
}  
//tính F[i] 
for(i = 1;i <= M;i++){ 
for(j = 1;j <= n;j++){ 
if(i < w[j] && F[i-1] >= F[i])		F[i] = F[i-1]; 
if(i >= w[j] && F[i-w[j]]+v[j] >= F[i])	F[i] = F[i-w[j]]+v[j]; 
} 
} 
//k?t qu? bài toán là F[M] 
printf("Gia tri max cua cai tui  %d",F[M]); 
return 0; 
} 

