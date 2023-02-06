#include<stdio.h>
int M,n,tong,maxcurrent,giatri;
int w[100],v[100];
void duyet(int k){
	for(int i = 1;i <= n;i ++)   
  {
    if(tong + w[i] <= M)
	  {
  	  tong = tong + w[i];
	    giatri = giatri + v[i];
      if(giatri > maxcurrent) maxcurrent = giatri;     
      duyet(k+1);       
      tong = tong - w[i];      
      giatri = giatri - v[i];                              
    } 
  } 
} 
int main(){
	tong=0; maxcurrent=0; giatri=0;
	printf("Nhap kich thuoc cua cai tui: "); 
  scanf("%d",&M); 
  printf("Nhap so luong do vat: "); 
  scanf("%d",&n); 
  for(int i = 1;i <= n;i++){
  	printf("nhap khoi luong vat thu %d :",i); 
  	scanf("%d",&w[i]);
  	printf("nhap gia tri vat thu %d :",i); 
  	scanf("%d",&v[i]); 
	}
	duyet(1);
  printf("Gia tri toi da cua tui: %d", maxcurrent);
 	return 0;
}

