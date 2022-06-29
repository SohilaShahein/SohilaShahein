/*
 سهيلة احمد عبد العزيز شاهين سكشن2 
 */
public class LinkedList{
    class Link{
        int item;
        Link next;
        Link previous;
        public Link(int i)
        {
            item=i;
        }
        public void display()
        {
            System.out.print(item+"\t");
        }
    }
    Link first;
    Link last;
    public boolean isEmpty()
    {
        return (first==null);
    }
    public void insertfirst(int i){
        Link link=new Link(i);
        if(isEmpty()){
            first=link;
            last=link;
        }
        else
        {
            first.previous=link;
            link.next=first;
            first=link;
        }
    }
    public void insertlast(int i)
    {
        Link link=new Link(i);
        if(isEmpty()){
            first=link;
            last=link;
        }
        else{
            link.previous=last;
            last.next=link;
            last=link;
        }
    }public void displayfirst()
    {
        Link curent=first;
        while(curent!=null)
        {
            curent.display();
            curent=curent.next;
        }
    }public void displaylast()
    {
        Link curent=last;
        while(curent.next!=null)
        {
            curent.display();
            curent=curent.previous;
        }
    }
    public Link deletefirst()
    {
        Link curent=first;
        if(first.next==null)
        last=null;
        else
        first.next.previous=null;
        first=first.next;
        return curent;
    }
    public Link deletelast()
    {
        Link curent=last;
        if(first.next==null)
        first=null;
        else
        last.previous.next=null;
        last=last.previous;
        return last;
    }
    public static void main(String[] args)
    {
        LinkedList d=new LinkedList();
        d.insertlast(1);
         d.insertlast(2);
         d.insertlast(3); 
         d.insertlast(4); 
         /*d.insertfirst(5); 
         d.insertfirst(6);*/
         d.insertlast(9);
         d.insertlast(10);
         d.insertlast(11);
         d.displayfirst();
         d.deletefirst();
         d.displayfirst();
         d.deletelast();
         d.displayfirst();
        
         
    }
}
