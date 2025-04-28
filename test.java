
class Node{
    int data;
    Node next;    

    public Node(int val){
        this.data = val;
        this.next = null;
    }
}

public class test {
    public static void PrintLL(Node head){
        Node curr = head;
    
        while(curr!=null){
            System.out.println(curr.data);
            curr = curr.next;
        }
        
    }

    public static void main(String[] args) {

        Node head = new Node(1);
        head.next = new Node(2);
        head.next.next = new Node(3);

        PrintLL(head);

        
    }
}