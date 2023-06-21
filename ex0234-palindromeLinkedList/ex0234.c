#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

struct ListNode {
     int val;
     struct ListNode *next;
};
 
bool isPalindrome(struct ListNode* head){
    int c, i, j;
    struct ListNode * aux = NULL;
    int * v1 = NULL;
    int * v2 = NULL;

    aux = head;
    c = 0;
    while (aux != NULL) {
        c++;
        aux = aux->next;
    }


    v1 = (int *) malloc(c * sizeof(int));
    v2 = (int *) malloc(c * sizeof(int));

    aux = head;
    i = 0;
    j = c-1;
    while(aux != NULL) {
        v1[i] = aux->val;
        v2[j] = aux->val;
        i++;
        j--;
        aux = aux->next;
    }

    for(i=0; i<c/2; i++) {
        if(v1[i] != v2[i]) {
            return false;
        }
    }

    return true;
}

int main() {

    struct ListNode * head = (struct ListNode *) malloc(sizeof(struct ListNode));
    head->val = 1;

    head->next = (struct ListNode *) malloc(sizeof(struct ListNode));
    head->next->val = 2;

    head->next->next = (struct ListNode *) malloc(sizeof(struct ListNode));
    head->next->next->val = 2;

    head->next->next->next = (struct ListNode *) malloc(sizeof(struct ListNode));
    head->next->next->next->val = 1;

    head->next->next->next->next = NULL;

    if(isPalindrome(head)) {
        printf("E palindromo");
    }
    return 0;
}