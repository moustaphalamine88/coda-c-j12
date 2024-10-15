#include "reader.h"

int main()
{
	number *list;
	list = create_list(42);

	printf("Remplir la liste avec les nombres suivants : 42, 28, 91, -7\n");

	add_to_list(&list, 28);
	add_to_list(&list, 36);
	add_to_list(&list, 91);
	add_to_list(&list, 152);

	display_list(&list);

	number *tmp = list;
	number *link;

	while(tmp != NULL)
	{
		if(tmp->value == 91)
		{
			link = tmp;
		}

		tmp = tmp->next;
	}

	printf("Ajouter le nombre 47 juste après 91\n");

	insert_after(&link, 47);

	display_list(&list);
	
	return(0);
}




number *create_list(int value)
{
	number *list = malloc(sizeof(*list));
	list->next = NULL;
	list->value = value;

	return list;
}

void add_to_list(number **list, int value)
{
	number *tmp = *list;

	while(tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	number *item = malloc(sizeof(*item));
	item->next = NULL;
	item->value = value;
	tmp->next = item;
}

void insert_after(number **link, int value)
{
	number *tmp = *link;
	number *item = malloc(sizeof(*item));
	item->next = tmp->next;
	item->value = value;
	tmp->next = item;
}

void display_list(number **list)
{
	number *tmp = *list;

	printf("\nLa liste : \n\n");
	while(tmp != NULL)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
}

void delete_list(number **list)
{
	number *tmp = *list;

	while(tmp != NULL)
	{
		number *to_remove = tmp;
		tmp = tmp->next;
		free(to_remove);
	}
}