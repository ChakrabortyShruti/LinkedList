typedef struct {
  struct element *head;
  struct element *tail;
  int length;
} LinkedList;

typedef struct element{
  void *value;
  struct element *next;
} Element;

LinkedList createList(void);

int add_to_list(LinkedList*, void*);