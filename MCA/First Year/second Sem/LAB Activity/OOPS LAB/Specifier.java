class AccessSpecifierDemo {

    String defaultMessage = "Default Access";
   
    private String privateMessage = "Private Access";

    protected String protectedMessage = "Protected Access";

    public String publicMessage = "Public Access";
    
    public void printMessages() {
        System.out.println(defaultMessage);    // Accessing default
        System.out.println(privateMessage);    // Accessing private
        System.out.println(protectedMessage);  // Accessing protected
        System.out.println(publicMessage);     // Accessing public
    }
}

public class Specifier {
    public static void main(String[] args) {
        AccessSpecifierDemo demo = new AccessSpecifierDemo();
        demo.printMessages();                  // Accessing public method
        System.out.println(demo.defaultMessage);   // Default access 
        System.out.println(demo.protectedMessage); // Protected access
        System.out.println(demo.publicMessage);    // Public access
    }
}

