void replace(int index,int new_data)
{
    Node *ptr=head;
    for(int i=1;i<index;i++)
    {
        ptr=ptr->next;
    }
    ptr->data=new_data;
}