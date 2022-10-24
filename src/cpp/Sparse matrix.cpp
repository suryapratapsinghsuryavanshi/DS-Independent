#include<iostream>
#define R 4
#define C 5
using namespace std;
class value
{public:
    int index_c;
    int value;
    value *next;
};
class row
{public:
    int no_r;
    row *down;
    value *right;
};
void creation_value_node(int data, int j, row **z)
{     value *temp, *d;
    temp = new value();
    temp->index_c = j+1;
    temp->value = data;
    temp->next = NULL;
    if ((*z)->right==NULL)
        (*z)->right = temp;
    else
    {   d = (*z)->right;
        while(d->next != NULL)
            d = d->next;
        d->next = temp;
    }
}
void create_r(row **start, int row,int column, int matrix[R][C])
{
   for (int i = 0; i < row; i++)
    {
         row *z, *r;
        z = new row;
        z->no_r = i+1;
        z->down = NULL;
        z->right = NULL;
        if (i==0)
            *start = z;
        else
        {
            r = *start;
            while (r->down != NULL)
                r = r->down;
            r->down = z;
        }
        for (int j = 0; j < 5; j++)
        {
            if (matrix[i][j] != 0)
            {
                creation_value_node(matrix[i][j], j, &z);
            }        }    }  }
void print( row *start)
{
     row *r;
     value *z;
    r = start;
    while (r != NULL)
    {
        if (r->right != NULL)
        {
           cout<<"\nrow= "<< r->no_r;
            z = r->right;
            while (z != NULL)
            {
       cout<<"\n column= "<< z->index_c<< " value= "<<z->value;
                z = z->next;
            }
        }
        r = r->down;
    }
}
int main()
{
    int matrix[R][C] =
    {
        {0 , 0 , 3 , 0 , 4 },
        {0 , 0 , 5 , 7 , 0 },
        {0 , 0 , 0 , 0 , 0 },
        {0 , 2 , 6 , 0 , 0 }
    };
    row* start = NULL;
    create_r(&start, R, C, matrix);
     print(start);
    return 0;
}
