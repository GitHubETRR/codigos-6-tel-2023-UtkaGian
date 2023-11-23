
#ifndef BOOLTYPES
#define BOOLTYPES

void *init (char, int); /*it selects between chars slots or ints slots depending in 
                          the kind and set an ammount*/
char *Boolean_Type_C(int); //create an N ammount of boxes to work with
int *Boolean_Type_I(int); //the same as the line 9 but with int type values

extern char Kind;

extern char *Aimer;
extern char data;

#endif