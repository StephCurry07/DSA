#include <stdio.h>
#include <stdlib.h>

struct Array{
    int tot_size;
    int use_size;
    int *ptr;
};

void create(struct Array *a, int tot, int used){
    (*a).tot_size = tot;
    (*a).use_size = used;
    (*a).ptr = (int*) malloc(tot * sizeof(int));
}
void show(struct Array *a){
    for(int i = 0; i < a->use_size;i++){
        printf("%d ",(a->ptr)[i]);
    }
};

void setVal(struct Array *a){
    for(int i = 0; i < a->use_size;i++){
        printf("Enter element: ");
        scanf("%d\n",&(a->ptr)[i]);
    }
};

int Insert(struct Array *a,int val, int index){
    if(index+1 >= a->tot_size){
        printf("Maximum limit reached!");
        return -1;
    }
    for (int i = index; i < a->tot_size; i++){
        a->ptr[index + 1] = a->ptr[index];
    }
    a->ptr[index] = val;
}

void Delete(struct Array *a, int index){
    for (int i = index; i < a->use_size - 1; i++){
        a->ptr[index] = a->ptr[index + 1];
    }
}

int main(){
    struct Array arr;
    create(&arr,10,7);
    setVal(&arr);
    show(&arr);
    Insert(&arr,10,3);
    show(&arr);
    Delete(&arr,4);
    show(&arr);
    
}