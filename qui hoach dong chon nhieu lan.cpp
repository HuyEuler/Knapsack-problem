#include<stdio.h> 
int main(){ 
//nh?p n �? v?t, kh?i l�?ng t?i �a t�i M, �? v?t i c� kh?i l�?ng w[i], gi� tr? v[i] 
//F[i] l� gi� tr? max c�i t�i ch?a khi kh?i l�?ng kh�ng v�?t qu� i 
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
//t�nh F[i] 
for(i = 1;i <= M;i++){ 
for(j = 1;j <= n;j++){ 
if(i < w[j] && F[i-1] >= F[i])		F[i] = F[i-1]; 
if(i >= w[j] && F[i-w[j]]+v[j] >= F[i])	F[i] = F[i-w[j]]+v[j]; 
} 
} 
//k?t qu? b�i to�n l� F[M] 
printf("Gia tri max cua cai tui  %d",F[M]); 
return 0; 
} 

