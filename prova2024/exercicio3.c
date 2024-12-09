#include <stdio.h>

void zera( v[], int n){  
 int i;  
 for (i=0;i<n;i++) v[i]=0;  
}  
int carrega_prods(int v1[],float v2[], int n){   v1[0]= 203;v2[0]=10.0;  
 v1[1]= 120; v2[1]=3.0;  
 v1[2]= 340; v2[2]=25.0;  
 v1[3]= 220; v2[3]=70.0;  
 return 4;  
}  
void carrega_lojas(int v1[],int v2[]){   
    v1[0]= 20; 
    v2[0]= 1; 
    v1[1]= 8;
    v2[1]= 2;  
    v1[2]= 34;
    v2[2]= 2; 
    v1[3]= 22;
    v2[3]= 5; 
    v1[4]= 14; 
    v2[4]= 3; 
    v1[5]= 52; 
    v2[5]= 4;  
    v1[6]= 16; 
    v2[6]= 6;
    v1[7]= 55; 
    v2[7]= 4;  
    v1[8]= 41; 
    v2[8]= 5; 
    v1[9]= 28; 
    v2[9]= 6; 
    }  
void carrega_est(float v[]){  
    v[0]= 2.0;
    v[1]= 1.2;
    v[2]= 3.4;
    v[3]= 9.3;
    v[4]= 6.0;
    v[5]= 3.1;
} 
int busca(int v[], int n, int chv){  
    for (int i=0;i<n;i++)  
        if( v[i]==chv){ 
            return i;  
        }
        else { 
            return -1;  
        }
}
