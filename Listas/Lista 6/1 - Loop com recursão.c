#include <limits.h> // INT_MIN
#include <stdio.h>

int max_v_recursiva(int v[], int i)
{
    if (i <= 0) 
        return v[0];

    if (v[i-1] > max_v_recursiva(v, i - 1)) 
        return v[i-1];
 
    return max_v_recursiva(v, i - 1);
} 
int soma_v_recursiva(int v[], int i) {
    if (i <= 0) {
        return 0;
    }
    return v[i-1] + soma_v_recursiva(v, i-1);
}

int max_v(int v[], int t) {
    return max_v_recursiva(v, t);
}

int soma_v(int v[], int t) {
    return soma_v_recursiva(v, t);
}


int main(void) {
    int n;
    scanf("%d",&n);
    int v[n];
    for(int i=0; i<n; i++){
        scanf("%d",&v[i]);
    }
    printf("max v %d\n", max_v(v, n));
    printf("soma v %d\n", soma_v(v, n));
    return 0;
}