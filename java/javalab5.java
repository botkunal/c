// File: MyClass.java

//package mypack1;

// Superclass
class SuperClass {
    private int privateVar = 1;
    protected int protectedVar = 2;
    int defaultVar = 3;
    public int publicVar = 4;

    private void privateMethod() {
        System.out.println("Private method");
    }

    protected void protectedMethod() {
        System.out.println("Protected method");
    }

    void defaultMethod() {
        System.out.println("Default method");
    }

    public void publicMethod() {
        System.out.println("Public method");
    }
}

// Subclass inheriting from SuperClass
class SubClass extends SuperClass {
    void accessSuperClassMembers() {
        // Inherited members can be accessed within the subclass
        System.out.println("Inherited protectedVar: " + protectedVar);
        System.out.println("Inherited defaultVar: " + defaultVar);
        System.out.println("Inherited publicVar: " + publicVar);

        protectedMethod();
        defaultMethod();
        publicMethod();
    }
}

// Another class in the same package
// class OtherClass {
//     void accessSuperClassMembers() {
//         SuperClass superClass = new SuperClass();
        
//         // Within the same package, all members (except private) can be accessed
//         System.out.println("Accessing superClass.protectedVar: " + superClass.protectedVar);
//         System.out.println("Accessing superClass.defaultVar: " + superClass.defaultVar);
//         System.out.println("Accessing superClass.publicVar: " + superClass.publicVar);

//         superClass.protectedMethod();
//         superClass.defaultMethod();
//         superClass.publicMethod();
//     }
// }

// Class outside the package
// class OutsidePackageClass {
//     void accessSuperClassMembers() {
//         SuperClass superClass = new SuperClass();
        
//         // Outside the package, only public members can be accessed
//         System.out.println("Accessing superClass.publicVar: " + superClass.publicVar);
//         superClass.publicMethod();
//     }
// }

// Main class to demonstrate the program
public class javalab5 {
    public static void main(String[] args) {
        // Accessing members within the same package
        SuperClass superClass = new SuperClass();
        System.out.println("Accessing superClass.protectedVar: " + superClass.protectedVar);
        System.out.println("Accessing superClass.defaultVar: " + superClass.defaultVar);
        System.out.println("Accessing superClass.publicVar: " + superClass.publicVar);

        superClass.protectedMethod();
        superClass.defaultMethod();
        superClass.publicMethod();

        // Creating an instance of the subclass and accessing inherited members
        SubClass subClass = new SubClass();
        subClass.accessSuperClassMembers();

        // Creating an instance of OtherClass and accessing superclass members
        // OtherClass otherClass = new OtherClass();
        // otherClass.accessSuperClassMembers();

        // Creating an instance of OutsidePackageClass and accessing superclass members
        // OutsidePackageClass outsideClass = new OutsidePackageClass();
        // outsideClass.accessSuperClassMembers();
    }
}
