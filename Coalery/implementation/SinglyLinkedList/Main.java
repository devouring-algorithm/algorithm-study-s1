
public class Main {
	public static void main(String[] args) {
		SinglyLinkedList<Integer> sll = new SinglyLinkedList<>();
		
		System.out.println("Add 5 Items, Remove All from the front.");
		
		sll.insertFront(1);
		sll.insertFront(2);
		sll.insertFront(3);
		sll.insertLast(4);
		sll.insertLast(10);
		
		while(!sll.isEmpty()) {
			int data = sll.removeFront();
			System.out.println(data);
		}
		
		System.out.println();
		
		System.out.println("Add 5 Items, Remove All from the back.");
		
		sll.insertFront(1);
		sll.insertFront(2);
		sll.insertFront(3);
		sll.insertLast(4);
		sll.insertLast(10);
		
		while(!sll.isEmpty()) {
			int data = sll.removeLast();
			System.out.println(data);
		}
	}
}
