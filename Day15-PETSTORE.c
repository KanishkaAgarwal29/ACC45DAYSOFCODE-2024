#include <stdio.h>

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quicksort(arr, low, pivot-1);
        quicksort(arr, pivot+1, high);
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return i + 1;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int t,n,s,c;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        if(n%2==0)
        {quicksort(a,0,n-1);
        c=a[0];
        s=0;
 
        for(int j=0;j<n;j=j+2)
        {
            if(a[j+1]!=a[j])
            {
                s=1;
                break;
            }
            
        }
        }
        else 
        {s=1;}
        if(s==0)
        printf("Yes\n");
        else
        printf("No\n");
    }
return 0;
}

