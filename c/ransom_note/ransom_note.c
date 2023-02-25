#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "uthash.h"

struct hash_entry 
{
    int id;            /* we'll use this field as the key */
    char name[10];
    UT_hash_handle hh; /* makes this structure hashable */
};

struct hash_entry *users = NULL;

void add_user(struct hash_entry *s) 
{
    HASH_ADD_INT(users, id, s);
}

//2. Looking up an item in a hash:
struct hash_entry *find_user(int user_id) 
{
    struct hash_entry *s;
    HASH_FIND_INT(users, &user_id, s);
    return s;
}

//3. Deleting an item in a hash:
void delete_user(struct hash_entry *user) 
{
    HASH_DEL(users, user);  
}

bool canConstruct(char * ransomNote, char * magazine)
{
    bool result=0;
    return result;
}

int main()
{
    char *ransom_note = "aa";
    char *magazine = "ab";
    bool result = canConstruct(ransom_note,magazine);
    printf("Result: %b ",result);
    return 0;
}