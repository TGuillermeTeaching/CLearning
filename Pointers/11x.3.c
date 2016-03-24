// // Function to insert a new entry in a list
// // arguments: a pointer to the ist entry of struct entry) and a pointer to the place in the list after which to insert the value

# include <stdio.h>

// list structure
struct entry
{
    int value;
    struct entry *next;
};


// inserting entries in a list
void insertEntry(struct entry *insert_position, struct entry *new_entry)
{
    new_entry->next = insert_position->next;
    insert_position->next = new_entry;
}

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
    void insertEntry (struct entry *insert_position, struct entry *new_entry);
    struct entry n1, n2, n3, n4, new_entry, *insert_position, *list_start, *first_entry;
    int new_value, insertion_place;

    n1.value = 100;
    n1.next = &n2;
    
    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = &n4;

    n4.value = 400;
    n4.next = 0;

    list_start = &n1;
    first_entry = &n1;

    // printing list
    printf("Current list is:\n");
    while ( list_start != (struct entry *) 0) {
        printf("%i\n", list_start->value);
        list_start = list_start->next;
    }

    // Getting the new value
    printf("Which value to add? ");
    scanf("%i", &new_value);
    new_entry.value = new_value;

    // Getting the insertion location pointer
    printf("After which value to add it? ");
    scanf("%i", &insertion_place);
    list_start = &n1;
    insert_position = findEntry(list_start, insertion_place);

    //Inserting the value in the list
    insertEntry(insert_position, &new_entry);

    // printing the new list
    list_start = &n1;
    printf("New list is:\n");
    while ( list_start != (struct entry *) 0) {
        printf("%i\n", list_start->value);
        list_start = list_start->next;
    }

    return 0;
}