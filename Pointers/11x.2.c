// Function to insert a new entry in a list
// arguments: a pointer to the ist entry of struct entry) and a pointer to the place in the list after which to insert the value

# include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
};

struct entry *findEntry (struct entry *list_pointer, int match)
{
    while ( list_pointer != (struct entry *) 0 )
        if ( list_pointer->value == match)
            return (list_pointer);
        else
            list_pointer = list_pointer->next;
    return (struct entry *) 0;
}

int main (void)
{   
    struct entry *findEntry (struct entry *list_pointer, int match);
    struct entry n1, n2, n3, n4, new_entry;
    struct entry *instertion_point, *next_entry, *list_start = &n1;;
    int place_to_insert, new_value;

    n1.value = 100;
    n1.next = &n2;
    
    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = &n4;

    n4.value = 400;
    n4.next = 0;

    printf("Current list is:\n");
    while ( list_start != (struct entry *) 0) {
        printf("%i\n", list_start->value);
        list_start = list_start->next;
    }
    // set list start back to 1
    list_start = &n1;

    // get the insertion point in
    printf("Where to insert the new value? ");
    scanf("%i", &place_to_insert);

    instertion_point = findEntry (list_start, place_to_insert);
    // set list start back to 1
    list_start = &n1;
    next_entry = findEntry (list_start, place_to_insert);
    // set list start back to 1
    list_start = &n1;
    next_entry = next_entry->next;

    if ( instertion_point != (struct entry *) 0)
        printf("Value will be insterted after %i.\n", instertion_point->value);
    else 
        printf("Value will be insert at the end of the list.\n");

    printf("Which value to enter? ");
    scanf("%i", &new_value);
    printf("%i will be added after %i and before %i.\n", new_value, instertion_point->value, next_entry->value);
    // set list start back to 1
    //list_start = &n1;

    // add the new element
    instertion_point->next = &new_entry;
    new_entry.value = new_value;
    new_entry.next = next_entry; // must be pointing to the next value in the list!
    
    printf("New list is:\n");
    while ( list_start != (struct entry *) 0) {
        printf("%i\n", list_start->value);
        list_start = list_start->next;
    }
    return 0 ;
}
