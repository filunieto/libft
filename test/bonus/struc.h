#ifndef LIBRO_H
#define LIBRO_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct libro
{
	char titulo[50];
	char autor[50];
	char isbn[13];
}Libro;

typedef struct nodo
{
	Libro libro;
	struct nodo *siguiente;
}Nodo;

typedef struct  lista
{
	Nodo *cabeza;
}Lista;


#endif