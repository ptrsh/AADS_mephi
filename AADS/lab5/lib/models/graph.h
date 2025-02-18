#include "string_vector.h"
#include "vertex.h"

#ifndef GRAPH_H
#define GRAPH_H

typedef struct graph{
    vertex_t *vertex;
    double **matrix;
    size_t size;
} graph_t;

graph_t *init_graph();
void add_vertex(graph_t *graph, char *name, double x, double y);
void add_edge(graph_t *graph, char *name1, char *name2);
void delete_vertex(graph_t *graph, char *name);
void delete_edge(graph_t *graph, char *name1, char *name2);
str_vector **get_connections(graph_t *graph);
str_vector *get_dfs(graph_t *graph, char *name1, char *name2);
str_vector *find_shortest_path(graph_t *graph, char *name1, char *name2);
void draw_graph(graph_t *this);
void free_graph(graph_t *graph);

#endif

