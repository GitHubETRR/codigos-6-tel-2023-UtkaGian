BASIC GUIDE FOR USER:
----------------------------------------------------------------------------------
char *Boolean_Type_C(int); 
//create an N ammount of boxes to work with

int *Boolean_Type_I(int); 
//the same as the line 9 but with int type values

char Boolean_Char_R(char reference, char position); 
//read in chase that the boxes were char type

char Boolean_Char_W(char reference, char position, char value); 
//write in chase that the boxes were char type

char Boolean_Int_R(int reference, char position); 
//read in chase that the boxes were int type

int Boolean_Int_W(int reference, char position, char value); 
//write in chase that the boxes were int type

void *init (char kind, int ammount); 
//it selects between chars slots or ints slots depending in 
  the kind and set an ammount (put a 'C' for char or a 'I' for int) 