#include<stdio.h>
// khai b�o c�c gi� tr?, current_weight �? l�u kh?i l�?ng c�i t�i t?i th?i �i?m �ang x�t
// current_value �? l�u gi� tr? c�i t�i t?i th?i �i?m �ang x�t, bi?n max �? l�u gi� tr? max
int n,M,w[100],v[100],max = 0,current_weight = 0,current_value = 0;

void Try(int i){
	// n?u i = n+1, �?i chi?u current_value v?i max
	
	if(i == n+1){
		if(max < current_value)	max = current_value;
	}
 
	else{
	//  x�t TH ko b? th�m �? v?t i
		Try(i+1);
	
	// x�t TH b? th�m �? v?t i
		if(current_weight + w[i+1] <= M){
			current_weight += w[i+1];
			current_value += v[i+1];
			Try(i+1);
		
		// ��a gi� tr? v? l?i nh� c?
			current_weight -= w[i+1];
			current_value -= v[i+1];
		}
	}
}

int main(){
	// Nh?p gi� tr?
	scanf("%d%d",&n,&M);
	for(int i = 1;i <= n;i++){
		scanf("%d%d",&w[i],&v[i]);
	}
	
	// Try 0 �? ch?y Try
	Try(0);
	printf("max la %d",max);
	return 0;
}
