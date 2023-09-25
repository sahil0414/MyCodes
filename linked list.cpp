void del_any(doubly**head,int x)
{
    doubly*temp;
    if((*head) == NULL)
    {
        cout<<"list is empty";
        return;
    }
    if((*head)->data == x)
    {
        if((*head)->next == NULL)
        {
            free(*head);
            *head == NULL;
            return;
        }
        else{
            *head = (*head)->next;
            free((*head)->prev);
            (*head)->prev = NULL;
            return;
        }
    }
    temp = *head;
    while(temp->next!=NULL && temp->data != x)
    {
        temp = temp->next;
    }
    if(temp->data == x && temp->next != NULL)
    {
        temp->next->prev = temp->prev;
        temp->prev->next = temp->next;
        free(temp);
        cout<<"node deleted!"<<endl;
    }
    else if(temp->data == x && temp->next == NULL)
    {
        temp->prev->next = NULL;
        free(temp);
        cout<<"node deleted!"<<endl;
    }
    else
        cout<<"node not found!"<<endl;

}