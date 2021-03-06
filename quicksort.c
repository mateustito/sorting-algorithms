
void troca(int * vetor, int a, int b);
int partition(int *a, int p, int r);

void quicksort(int * a, int p, int r)
{
    int q;
    if (p < r){
        q = partition(a, p, r);
        quicksort(a, p, q-1);
        quicksort(a, q+1, r);
    }
}

void troca(int * vetor, int a, int b)
{
    int aux;

    aux = vetor[a];
    vetor[a] = vetor[b];
    vetor[b] = aux;
}

int partition(int * a, int p, int r)
{
    int x = a[r]; //O pivô é sempre o elemento do meio
    int i = p - 1;

    for(int j = p; j <= r-1; j++){
        if(a[j] < x){
            i = i + 1;
            troca(a, i, j);
        }
    }
    troca(a, i + 1, r);
    return i + 1;
}

