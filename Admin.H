#ifndef ADMIN_H 
#define ADMIN_H
#define string_size 100
 
 typedef struct node
{
    char name[string_size];
    int age;
    char gender[string_size];
    int id;
    float start_time;
    float end_time;
	int reserved;
    struct node* next;
    struct node* prev;
}node;
extern node* head;
extern node* tail;
node* create_node(void);
void add_node(node*current);
int search_id(int new_id);
node* search_patient(int id_found);
void edit(int id_found);
#endif