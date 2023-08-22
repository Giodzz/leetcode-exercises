struct ListNode * middleNode(struct ListNode* head){
    struct ListNode * aux = head;
    struct ListNode * middleNode = head;
    int cont = 1;
    while(aux->next != 0) {
        cont++;
        aux = aux->next;
    }

    cont = cont/2 + 1;
    
    for (int i = 0; i<cont-1; i++) {
        middleNode = middleNode->next;
    }

    return middleNode;
}