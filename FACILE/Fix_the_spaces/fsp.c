#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define B 1024

typedef struct word{
    char *str;
    int ind;
    struct Word *n;
}Word;

typedef struct linked_list{
    struct Word *head;
}List;

List* initList(){
    List *res = (List *)malloc(sizeof(List));
    res->head = NULL;
    return res;
}

Word* createWord(char *str, int *ind){
    Word *res = (Word *)malloc(sizeof(Word));
    res->str = strdup(str);
    res->ind = ind;
    res->n = NULL;
    return res;
}

void insertWord(List *L,Word *W){
   Word *c=L->head;
   if(!c){
       L->head=W;
       fprintf(stderr,"AJOUT START\n ");
       return;}
   Word *a=NULL;
   int i=0;
   while(c){
       if(W->ind <= c->ind){
           fprintf(stderr,"AJOUT AVANT ");
           if(a!=NULL){
               fprintf(stderr,"1\n");
               a->n=W;
               W->n=c;
               return;
           }else{
               fprintf(stderr,"1\n");
               L->head=W;
               W->n=c;
               return;
           }
       }
       a=c;
       c=c->n;
       i++;
   }
   fprintf(stderr,"AJOUT FIN\n");
   a->n=W;
}

void showList(List *L){
    int i=0;
    Word *c=L->head;
    while(c){
        printf((i)?" ":"");
        printf("%s",c->str);
        c=c->n;
        i++;
    }
}

int main() {
    char o[B];
    scanf("%[^\n]", o); fgetc(stdin);
    fprintf(stderr,"%s\n",o);

    char w[B];
    scanf("%[^\n]", w);
    fprintf(stderr,"%s\n",w);
    
    List *L = initList();

    char *sub = strtok(w," ");
    while(sub){
        Word *W = createWord(sub, strstr(o,sub)-o);
        fprintf(stderr,"NEW=(%s,%d)\n",W->str,W->ind);
        insertWord(L,W);
        fprintf(stderr,"%s %d\n",sub,strstr(o,sub)-o);
        sub=strtok(NULL," ");
    }
    showList(L);
    return 0;
}
