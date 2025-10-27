#include <stdio.h>
#include <stdlib.h>

// --- Structure Definitions ---
// Define the Node structure directly, referring to itself using 'struct Node'
struct Node {
    int data;       // The element (data)
    int priority;   // The priority (lower number means higher priority in this example)
    struct Node* next; // Must use 'struct Node*' here
};

// A pointer to the head of the linked list
struct Node* head = NULL; // Must use 'struct Node*' here

// --- Helper Function ---
// Creates a new node
struct Node* createNode(int data, int priority) {
    // Must use 'struct Node*' and 'sizeof(struct Node)'
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->priority = priority;
    newNode->next = NULL;
    return newNode;
}

// --- Priority Queue Operations ---

/**
 * @brief Adds an element to the priority queue while maintaining priority order.
 * @param data The element to enqueue.
 * @param priority The priority of the element.
 */
void enqueue(int data, int priority) {
    struct Node* newNode = createNode(data, priority);

    // Case 1: List is empty, or new node has higher priority than the head
    if (head == NULL || priority < head->priority) {
        newNode->next = head;
        head = newNode;
        printf("Enqueued: %d (Priority: %d)\n", data, priority);
        return;
    }

    // Case 2: Find the correct position for insertion
    struct Node* current = head;
    while (current->next != NULL && current->next->priority <= priority) {
        current = current->next;
    }

    // Insert the new node
    newNode->next = current->next;
    current->next = newNode;
    printf("Enqueued: %d (Priority: %d)\n", data, priority);
}

/**
 * @brief Removes and returns the element with the highest priority (at the head).
 * @return The data of the dequeued element. Returns -1 if the queue is empty.
 */
int dequeue() {
    if (head == NULL) {
        printf("Queue is empty. Cannot Dequeue.\n");
        return -1;
    }

    // The highest priority element is always at the head
    struct Node* temp = head; // Must use 'struct Node*' here
    int dequeuedData = temp->data;

    head = head->next;
    free(temp);

    printf("Dequeued: %d\n", dequeuedData);
    return dequeuedData;
}

/**
 * @brief Prints all elements in the priority queue from head to tail.
 */
void traverse() {
    if (head == NULL) {
        printf("Priority Queue is empty.\n");
        return;
    }

    printf("\n--- Priority Queue Elements (Head to Tail) ---\n");
    struct Node* current = head; // Must use 'struct Node*' here
    while (current != NULL) {
        printf("[%d, P:%d]", current->data, current->priority);
        if (current->next != NULL) {
            printf(" -> ");
        }
        current = current->next;
    }
    printf("\n-----------------------------------------------\n");
}

/**
 * @brief Main function for testing the Priority Queue.
 */
int main() {
    printf("Starting Priority Queue Implementation with Singly Linked List (without typedef)\n");

    // Enqueue operations (lower priority number = higher priority)
    enqueue(10, 2); 
    enqueue(20, 5); 
    enqueue(30, 1); 
    enqueue(40, 2); 
    enqueue(50, 4);

    traverse();

    // Dequeue operations
    dequeue();
    dequeue(); 

    traverse();

    enqueue(60, 0);

    traverse();

    dequeue();
    
    // Add logic to free all remaining memory after all operations are done (good practice)
    printf("\nCleaning up remaining nodes...\n");
    while (head != NULL) {
        dequeue();
    }
    
    traverse();
    
    return 0;
}