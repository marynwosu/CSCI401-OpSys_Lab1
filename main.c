#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
  printf("Tests for linked list implementation\n");

  list_t* myList = (list_t*)list_alloc();
  // (list_t*)list_free(myList);
  // node_t* myNode = (node_t*)node_alloc(3);
  
  list_print(myList);
  list_add_to_front(myList, 3);
  list_add_to_front(myList, 7);
  list_add_to_front(myList, 4);
  list_print(myList);
  list_length(myList);

  list_add_to_back(myList, 8);
  list_add_to_back(myList, 9);
  list_print(myList);

  list_add_at_index(myList, 6, 2);
  list_add_at_index(myList, 1, 4);
  list_print(myList);

  /*
  list_remove_from_back(myList);
  list_remove_from_back(myList);
  list_print(myList);

  list_remove_from_front(myList);
  list_print(myList);

  list_remove_at_index(myList, 2);
  list_print(myList);
  list_remove_at_index(myList, 1);
  list_print(myList);

  list_is_in(myList, 6);
  list_is_in(myList, 0);
  */

  list_get_elem_at(myList, 3);
  list_get_index_of(myList, 1);
  list_get_index_of(myList, 0);

  list_free(myList);
  list_print(myList);
  return 0;
}
