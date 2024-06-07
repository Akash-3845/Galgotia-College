
public class LinkedList {
    Node head;

    static class Node {
        int val;
        Node next;

        Node(int data) {
            this.val = data;
            this.next = null;
        }
    }

    public static LinkedList insert(LinkedList list, int data) {
        Node newNode = new Node(data);
        newNode.next = null;
        if (list.head == null) {
            list.head = newNode;
        } else {

            Node last = list.head;
            while (last.next != null) {
                last = last.next;
            }
            last.next = newNode;
        }
        return list;

    }

    public static void printList(LinkedList list) {
        Node curr = list.head;
        System.out.print("The LinkedList is:");
        while (curr.next != null) {
            System.out.print(curr.val + "->");
            curr = curr.next;
        }
        System.out.println("null");
    }

    public int size(LinkedList list) {
        int count = 0;
        while (list.head != null) {
            count++;
            list.head = list.head.next;
        }
        return count;
    }

    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        list = insert(list, 1);
        list = insert(list, 2);
        list = insert(list, 3);
        list = insert(list, 5);
        list = insert(list, 2);
        list = insert(list, 3);
        list = insert(list, 5);
        printList(list);
        System.out.println("The LinkedList Size:" + list.size(list));
    }

}
