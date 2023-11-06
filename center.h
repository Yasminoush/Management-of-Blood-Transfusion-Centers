#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#include <stdio.h>
typedef struct {
int *radio_button_modify;
int *radio_button_delete;

int *choose_button;

} AppWidgets_display;

typedef struct {
int *radio_button_display;
int *radio_button_statistics;
int *radio_button_add;
int *choose;

} AppWidgets;

typedef struct {
int day;
int month;
int year;

}d;ddddddddddddddddddddddddddddddddddddddddddddddddddd

typedef struct {

char phone1[8];
char phone2[8];


} Cont;

typedef struct {
int id;
int name_center;
char city[100];
char state[100];
Cont contact;
nb nb_workers;
int capacity
d date;

} center;
int add(char * center_info)
centre search(char * center_info, int id);
int switch_notebook_page(AppWidgets *appWidgets);
int modifier(char * center_info , int id, center nouv );
int delete(char *center_info, char id);
int switch_notebook_page_display;
#endif // POINT_H_INCLUDED
