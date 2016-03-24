// // Function to insert a new entry in a list
// // arguments: a pointer to the ist entry of struct entry) and a pointer to the place in the list after which to insert the value

# include <stdio.h>

// list structure (is now double entry)
struct entry
{
    int value;
    struct entry *next;
    struct entry *previous;
};

// // printing a list
// void printEntries(struct entry *list_start, _Bool reverse)
// {
//     if(reverse) {
//         // printing the list in reverse order
//         printf("Current list is (reversed):\n");
//         while ( list_start != 0) {
//             printf("%i\n", list_start->value);
//             list_start = list_start->next;
//         }
//     }
//     else {
//         // printing the list in normal order
//         printf("Current list is:\n");
//         while ( list_start != 0) {
//             printf("%i\n", list_start->value);
//             list_start = list_start->previous;
//         }
//     }
// }

void printEntries(struct entry *list_start)
{
    // printing the new list
    printf("Current list is:\n");
    while ( list_start != (struct entry *) 0) {
        printf("%i\n", list_start->value);
        list_start = list_start->next;
    }
}

void printEntriesReverse(struct entry *list_start)
{
    // printing the new list
    printf("Current list is (reversed):\n");
    while ( list_start != (struct entry *) 0) {
        printf("%i\n", list_start->value);
        list_start = list_start->previous;
    }
}

// // finding an entry in a list (and returning the pointer)
// struct entry *findEntry (struct entry *list_pointer, int match)
// {
//     while ( list_pointer != (struct entry *) 0 )
//         if ( list_pointer->value == match)
//             return (list_pointer);
//         else
//             list_pointer = list_pointer->next;
//     return (struct entry *) 0;
// }


// // inserting entries in a list
// void insertEntry(struct entry *insert_position, struct entry *new_entry)
// {
//     // Get the new entry link to the next position (which is the one from the insert position entry)
//     new_entry->next = insert_position->next;
//     // Change the insert position pointer (next) to now point to the new entry
//     insert_position->next = new_entry;
// }

// // removing an entry in a list
// void removeEntry(struct entry *entry_to_remove)
// {   
//     // Change the pointer to the next element from the insert position to point to the next element
//     // i.e. change:
//     // previous_entry->next = entry_to_remove->next
//     entry_to_remove->next = entry_to_remove->next->next;
// }

int main (void)
{   
    void printEntries(struct entry *list_start);
    void printEntriesReverse(struct entry *list_start);
    // struct entry *findEntry (struct entry *list_pointer, int match);
    // void insertEntry (struct entry *insert_position, struct entry *new_entry);
    // void removeEntry(struct entry *entry_to_remove);

    struct entry n1, n2, n3, n4, list_head;

    list_head.next = &n1;

    n1.value = 100;
    n1.next = &n2;
    n1.previous = (struct entry *) 0;
    
    n2.value = 200;
    n2.next = &n3;
    n2.previous = &n1;

    n3.value = 300;
    n3.next = &n4;
    n3.previous = &n2;

    n4.value = 400;
    n4.next = (struct entry *) 0;;
    n4.previous = &n3;

    // print entries
    printEntries(&n1);

    // print entries reverse
    printEntriesReverse(&n4);

    // // Getting the new value
    // printf("Which value to add? ");
    // scanf("%i", &new_value);
    // new_entry.value = new_value;

    // // Getting the insertion location pointer
    // printf("After which value to add it? ");
    // scanf("%i", &insertion_place);
    // insert_position = findEntry(&n1, insertion_place);

    // //Inserting the value in the list
    // insertEntry(insert_position, &new_entry);

    // // printing list
    // printEntries(&n1);

    // // Selecting a value to remove
    // printf("After which value to remove an entry? ");
    // scanf("%i", &value_remove);
    // entry_to_remove = findEntry(&n1, value_remove);

    // // Removing the entry
    // removeEntry(entry_to_remove);

    // // printing list
    // printEntries(&n1);

    return 0;
}