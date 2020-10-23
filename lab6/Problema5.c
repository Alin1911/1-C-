#include<stdio.h>
#include<math.h>
void transform(int *v, int n, int x){
  int i, j=0, k=n, a[100];
  for(i=0;i<n;i++){
    if(v[i] < x){
      a[j]=v[i];
      j++;
    }else{
      a[k-1]=v[i];
      k--;
    }
  }
    for(i=0;i<n;i++){
      v[i]=a[i];
    }

}
int main(){
  int v[100], n, x, i;
  printf("Dim=");
  scanf("%d",&n);
  printf("Numar=");
  scanf("%d",&x);
  for(i=0;i<n;i++){
    scanf("%d",&v[i]);
  }
transform(v,n,x);
  for(i=0;i<n;i++){
    printf(" %d",v[i]);
  }
  printf("\n");
}

