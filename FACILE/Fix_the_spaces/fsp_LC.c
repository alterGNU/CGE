#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define B 1024

typedef struct sub_char{
    char *txt;
    int pos;
    struct W *next;
}W;

typedef struct double_linked_list{
    W *h;
}L;

W *createL(){
    W *res=malloc(sizeof(W));
    res->txt=NULL;
    res->pos=-1;
    res->next=NULL;
    return res;
}

DLL *createDLL(){
    DLL *res=malloc(sizeof(DLL));
    res->h=NULL;
    return res;
}

void add(DLL *L,W *w){
    W *c=L->h;
    if(!c){ // empty list, add in head
        w->next=L->h;
        L->h=w;
        return;
    }
    while(c){
        if((c->next && c->next->pos>w->pos)){ // next pos is upper than the actual one or is the end
            c->prev = 
        }
        c=c->next;
    }
}

int main() {
    char o[B];
    scanf("%[^\n]", o); fgetc(stdin);
    fprintf(stderr, "%s\n",o);

    char w[B];
    scanf("%[^\n]", w);
    fprintf(stderr, "%s\n",w);
    
    free(L);
    return 0;
}
