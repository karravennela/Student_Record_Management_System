/*header.h*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>


typedef struct st 
{
    int r;
    char n[20];
    float m;
    struct st *nxt;
}sll;

extern void sort_roll(sll *);
extern void add_node(sll **);
extern int cnt_node(sll *);
extern void read_file(sll **);
extern void dlt_node(sll **);
extern void dlt_all(sll **);
extern void srch_node(sll *);
extern void pf_node(sll *);
extern void rev_list(sll **);
extern void save(sll *);
extern void sort_data(sll *);
