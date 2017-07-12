struct linked_list {
   struct element * root;
   unsigned int size;
};

struct element {
   struct element * next;
   long value;
}

struct element* add(struct linked_list *list, long value);
struct element* remove(struct linked_list *list, long value);
struct element* find(struct linked_list *list, long value);
