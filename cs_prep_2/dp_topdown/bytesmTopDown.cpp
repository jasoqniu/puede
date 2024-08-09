#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<utility>
using namespace std;

int isi[101][101],n,m,memo[101][101];
int add(int row,int col){
	if(row>n-1){return 0;}
	else if(memo[row][col]!=-1)
	{
		return memo[row][col];
	}
	else if(col==0) 
		return memo[row][col] = isi[row][col] + max(add(row+1,col+1),add(row+1,col));
	else if(col==m-1) 
		return memo[row][col] = isi[row][col] + max(add(row+1,col-1),add(row+1,col));
	else{
		return memo[row][col] = isi[row][col] + max(add(row+1,col+1),max(add(row+1,col),add(row+1,col-1)));
	}
}

int main(){
	int hasil[101],tc;
	scanf("%d",&tc);
	for(int x=0;x<tc;x++){
        memset(memo,-1,sizeof memo);
        scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf("%d",&isi[i][j]);
            }
        }
        for(int j=0;j<m;j++){
            hasil[j]=add(0,j);
        }
        int sebelum=hasil[0];
        for(int j=1;j<m;j++){
            if(hasil[j]>sebelum)sebelum=hasil[j];
        }
        printf("%d\n",sebelum);
	}

}


