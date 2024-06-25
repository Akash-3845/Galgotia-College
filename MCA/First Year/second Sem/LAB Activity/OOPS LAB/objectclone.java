class Address implements Cloneable {
    String city;
    Address(String city) { this.city = city; }
    protected Object clone() throws CloneNotSupportedException { return super.clone(); }
}

class Person implements Cloneable {
    String name;
    Address address;
    Person(String name, Address address) { this.name = name; this.address = address; }
    protected Object clone() throws CloneNotSupportedException {
        Person cloned = (Person) super.clone(); // Shallow copy
        cloned.address = (Address) address.clone(); // Deep copy
        return cloned;
    }
}

public class objectclone {
    public static void main(String[] args) throws CloneNotSupportedException {
        Address addr = new Address("New York");
        Person p1 = new Person("John", addr);
        Person p2 = (Person) p1.clone();
        p2.address.city = "San Francisco";
        System.out.println(p1.address.city); // Output: New York (deep copy)
    }
}

