
#include "DS.h"

/*
  Графыг эхлүүлэх функц.
*/
void gr_init_graph(Graph *g, int n)
{
    int i;
    g->adj = (List *) malloc(sizeof(List) * (n + 1));
    g->n = n;
    g->m = 0;

    for (i = 0; i <= n; i++) {
        g->adj[i].head = g->adj[i].tail = NULL;
        g->adj[i].len = 0;
    }
}

/*
  Гүний хайлтаар холбоост бүрдлүүдийг олох функц.
*/
void gr_connected_components(Graph *g, int *cc)
{
    cc[0] = 0;

    /* Энд функцийг хэрэгжүүл */
}

/*
  Чиглэлгүй графт ирмэг нэмэх функц.
*/
void gr_add_edge(Graph *g, int x, int y)
{
    /* Энд функцийг хэрэгжүүл */
}
