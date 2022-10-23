import java.util.*;
class Node {
    int data;
    Node next=null;
}
class Main{
    Node head,temp,current;
    int i;
    Scanner sc= new Scanner(System.in);
    void insert(){
        System.out.println("Enter no of nodes:");
        int n=sc.nextInt();
        while(i<n) {
            Node new_node= new Node();
            System.out.println("Enter data in node "+(i+1));
            new_node.data=sc.nextInt();
            current=new_node;
            if(head==null){
            head=current;
            }
            else{
                temp=head;
                while(temp.next!=null){
                    temp=temp.next;
                } 
                temp.next=current;
            }
            i++;
          }
        }
void display(){
    current = head;         
    if(head == null) {    
        System.out.println("List is empty");    
        return;   
    }
    else{    
    System.out.println("Nodes of linked list: ");    
    while(current != null) {     
        System.out.print(current.data + " ");    
        current = current.next;    
    }    
}
}
public static void main(String[] args) {
   Main obj= new Main();
    obj.insert();
    obj.display();
}
}
