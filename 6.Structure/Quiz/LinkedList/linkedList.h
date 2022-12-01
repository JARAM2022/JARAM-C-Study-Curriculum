struct Node {
	struct Node *prev;
	struct Node *next;
	int data;
};


struct Node *IndexAt(struct Node *head, int index);
struct Node *Last(struct Node *head);
int Size(struct Node *head);
int Insert(struct Node *head, int data, int index);
int Remove(struct Node *head, int index);
int InsertEnd(struct Node *head, int data);
int Print(struct Node *head);