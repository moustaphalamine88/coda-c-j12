#include "reader.h"



pos *create_list(int value)
{
	pos *first = malloc(sizeof(*first));
	first->value = value;
	first->next = NULL;

	return first;
}


void display_list(pos **list)
{
	pos *tmp = *list;

	while(tmp != NULL)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
}



int main()
{
	pos *list = NULL;

    int  value, n;

    printf("combien de nombre voulez vous entrer ?");
    scanf("%d", &n);


    for(int i = 0; i < n; i++)
    {
    	printf("entrer le nombre %d: ", i +1);
    	scanf("%d", &value);
    	//add_number(&tmp, value);
    	if (i == 0)
    	{
    		list = create_list(value);

    	}
    }	


    printf("liste des nombres: ");

    display_list(&list);


    while (list != NULL)
    {
    	pos *temp = list;
    	list = list->next;
    	free (temp);
    }

    return 0;
}