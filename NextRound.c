#include<stdio.h>
int main(){
    int perticipent,measure;
    int count=0,count2=0;
    scanf("%d%d",&perticipent,&measure);
    int a[perticipent];
    for (int i=0;i<perticipent;i++){
        scanf("%d",&a[i]);
        if (i==measure-1){
            count+=a[i];
        }
    }
    for (int i=0;i<perticipent;i++){
        if(a[i]>0){
        if (a[i]>=count){
            count2++;
        }
        }
    }
    printf("%d\n",count2);

    return 0;
}