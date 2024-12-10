#include <stdio.h>
int snt(int a) {
    if(a<2){
    	return 0;
	}
    for (int i = 2; i<=a; i++){
        if (a % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int b, c;
    printf("Nhap vao so nguyen thu 1: ");
    scanf("%d", &b);
    printf("Nhap vao so nguyen thu 2: ");
    scanf("%d", &c);
    if(snt(b)){
        printf("true\n", b);
    }else{
        printf("false\n", b);
    }    
    if(snt(c)){
        printf("true\n", c);
    }else{
        printf("false\n", c);
    }
    return 0;
}

