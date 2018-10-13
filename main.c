#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 4

//number 1
void print_vector(double a[], int n){
    int i;
    for(i=0;i<n;i++){
        if(i==n-1)
            printf("%.2f\n",a[i]);
        else
            printf("%.2f, ",a[i]);
    }
}

void print_vector2(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        if(i==n-1)
            printf("%d\n",a[i]);
        else
            printf("%d, ",a[i]);
    }
}

void add_vectors(double a1[], double a2[], double a3[],int n){
    int i;
    for(i=0;i<n;i++){
        a3[i] = a1[i]+a2[i];
    }
}

double scalar_prod(double a1[], double a2[],int n){
    double sum = 0.0;
    int i;
    for(i=0;i<n;i++)
        sum += a1[i]*a2[i];
    return sum;
}

double norm2(double a1[], int n){
    double sum2, mag;
    sum2 = scalar_prod(a1,a1,n);
    mag = sqrt(sum2);
    return mag;
}

//number 2
void sorted(int a1[], int n){
    int i,sort=0;
    for(i=0;i<n-1;i++){
        if(a1[i]<a1[i+1])
            sort = sort + 1;
        else
            break;
    }
    if(sort==n)
        printf("This list is sorted.");
    else
        printf("This list is NOT sorted.");
}

//number 3
void num(int a1[],int n,int x){
    int i,count=0;
    for(i=0;i<n;i++){
        if(a1[i]==x)
            count++;
    }
    printf("The integer %d shows up %d time(s) in the array.",x,count);
}

//number 4
void change(int a1[],int n){
    int i,temp,count=0;
    for(i=0;i<n;i++){
        if(a1[i]==0)
            count++;
    }
    while(count>0){
        for(i=0;i<n-1;i++)
        {
            if(a1[i]==0)
            {
                if(a1[i+1]!=0)
                {
                    temp=a1[i];
                    a1[i]=a1[i+1];
                    a1[i+1]=temp;
                }
            }
        }
        count--;
    }

    print_vector2(a1,n);
}
//number 5
int is_diag_dom(int a[][N]){
    int dnum, rsum=0,i,j,count=0,ret;
    for(i=0;i<N;i++){
        dnum = a[i][i];
        for(j=0;j<N;j++){
            if(j!=i)
                rsum += fabs(a[i][j]);
        }
        if(fabs(dnum)>rsum)
            count++;
    }
    ret = (count==N)?1:0;
    return ret;
}

//number 6
void diag(int a1[][N]){
    int i,j,k;
    for(i=0;i<N;i++){
        k=i;
        for(j=0;j<=i;j++){
            printf("%d ",a1[k][j]);
            k--;
        }
    }
    for(j=1;j<N;j++){
        k=j;
        for(i=(N-1);i>=j;i--){
            printf("%d ",a1[i][k]);
            k++;
        }
    }
}

int main()
{
    //double v1[3] = {0.1,2.3}, v2[3]={4.5,6.7,8.9},v3[3];
    //int x1[4][4] = {{20,3,6,10},{2,500,9,13},{4,8,500,15},{7,11,14,500}};
    int x2[6] = {0,0,0,-8,9,7};
    //add_vectors(v1,v2,v3,3);
    //print_vector(v3,3);
    //printf("The scalar product of v1 and v2 is %.2f",scalar_prod(v1,v2,3));
    //printf("\nThe norm of v1 is %f",norm2(v1,3));
    //sorted(x1,6);
    //num(x1,6,789);
    //change(x2,6);
    //diag(x1);
    //printf("%d",is_diag_dom(x1));
    return 0;
}
