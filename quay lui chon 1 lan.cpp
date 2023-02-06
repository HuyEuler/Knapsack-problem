#include<stdio.h>
// khai báo các giá tr?, current_weight ð? lýu kh?i lý?ng cái túi t?i th?i ði?m ðang xét
// current_value ð? lýu giá tr? cái túi t?i th?i ði?m ðang xét, bi?n max ð? lýu giá tr? max
int n,M,w[100],v[100],max = 0,current_weight = 0,current_value = 0;

void Try(int i){
	// n?u i = n+1, ð?i chi?u current_value v?i max
	
	if(i == n+1){
		if(max < current_value)	max = current_value;
	}
 
	else{
	//  xét TH ko b? thêm ð? v?t i
		Try(i+1);
	
	// xét TH b? thêm ð? v?t i
		if(current_weight + w[i+1] <= M){
			current_weight += w[i+1];
			current_value += v[i+1];
			Try(i+1);
		
		// ðýa giá tr? v? l?i nhý c?
			current_weight -= w[i+1];
			current_value -= v[i+1];
		}
	}
}

int main(){
	// Nh?p giá tr?
	scanf("%d%d",&n,&M);
	for(int i = 1;i <= n;i++){
		scanf("%d%d",&w[i],&v[i]);
	}
	
	// Try 0 ð? ch?y Try
	Try(0);
	printf("max la %d",max);
	return 0;
}
