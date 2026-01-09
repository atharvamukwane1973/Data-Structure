#include<stdio.h>
void main() {

int n,a[100],key,pos,flag=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&key);
	for(int i=0;i<n;i++){
		if(a[i]==key){
			flag= 1;
			pos = i;
			break;
		}
	
	
	//Type your content here
	
	
	
	
	}
	if (flag == 1) {
		printf("found at position %d\n", pos);
	} else {
		printf("%d not found\n", key);
	}
}
