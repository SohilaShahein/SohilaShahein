/*
 سهيلة احمد عبد العزيز شاهين سكشن 2
 */
public class tree {

   

    class Node{
        int data;
        Node leftchild;
        Node rightchild;
        public Node(int d)
        {
            data=d;
        }
        public void display()
        {
            System.out.println(data+" ");
        }
    }
    public Node root;
    Node last;
    
    public void insert(int key)
    {
        Node node=new Node(key);
        //Node curent=node;
        if(root==null)
        root=node;
        else
        {
         Node curent=root;
            Node parent;
            while(true)
            {
              parent=curent;
              if(key>curent.data)
                 curent=curent.rightchild;
                 if(curent==null)
                 {
                     parent.rightchild=node;
                     return;
                 }
              else
              curent=curent.leftchild;
              if(curent==null)
              {
                  parent.leftchild=node;
                  return;
              }
            
              
            }
        }
    }
    public Node search(int key) 
    {
        Node curent=root;
        while(curent.data!=key)
        {
            if(curent.data>key)
            curent=curent.leftchild;
            else
            curent=curent.rightchild;
            if(curent==null)
            return null;
        }
        return curent;
    }
    public void inorder(Node node)
    {
        if(node!=null)
        {
            inorder(node.leftchild);
            System.out.print(node.data+" ");
            inorder(node.rightchild);
        }
    }
    public void preorder(Node node)
    {
        if(node!=null)
        {
            node.display();
            preorder(node.leftchild);
            preorder(node.rightchild);
        }
    }
    public void postorder(Node node)
    {if(node!=null){
        postorder(node.leftchild);
            postorder(node.rightchild);
            System.out.print(node.data+ " ");
    }
    }
    public void min()
    {
        
        Node curent=root;
        while(curent!=null)
        {
            last=curent;
            curent=curent.leftchild;
        }
       last.display();
    }
    public void max()
    {
        
        Node curent=root;
        while(curent!=null)
        {
            last=curent;
            curent=curent.rightchild;
        }
       last.display();
    }
    public static void main(String[] args)
    {
        tree b=new tree();
        b.insert(4);
         b.insert(1);
          b.insert(5);
           Node s=b.search(4);
           if(s==null)
           System.out.print("not found");
           else
           System.out.print("found");
        b.inorder(b.root);
        b.preorder(b.root);
       b.postorder(b.root);
       b.min();
       b.max();
    }
}
 

     

