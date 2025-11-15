//  SORT AN ARRAY OF 0s,1s AND 2s(Duct National Flag Problem)
 #include<stdio.h>
 int main(){
int a[]={2,0,2,1,1,0,1,2,0,0,0};
int n=11;
int low = 0,mid = 0,high = 10;
while(mid<=high){
       if (a[mid] ==0){
              int temp = a[low];
              a[low] = a[mid];
              a[mid] = temp;
              mid++;
              low++;
       }
       else if(a[mid==1]){
              mid++;
       }
       else{
              int temp =a[mid];
              a[mid] = a[high];
              a[high] = temp;
              high--;
       }
}
for(int i=0;i<n;i++){
       printf("%d ",a[i]);
}
 }