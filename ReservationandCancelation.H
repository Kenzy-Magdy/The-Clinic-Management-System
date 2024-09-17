#ifndef RESERVATIONANDCANCELATION_H
#define RESERVATIONANDCANCELATION_H
#define SLOT_2PM          2
#define SLOT_230PM        2.30
#define SLOT_3PM          3
#define SLOT_4PM          4
#define SLOT_430PM        4.30
#define END_SLOT_230PM    2.30
#define END_SLOT_3PM      3
#define END_SLOT_330PM    3.30
#define END_SLOT_430PM    4.30
#define END_SLOT_5PM      5
#define neg_num           -1
#define slots_num         5
void reservation(void);
node* create__node(void);
void add__node(node*current); 
void cancellation(int id_found);
#endif