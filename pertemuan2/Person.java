class Person {
    String name;
    int age;
    float sal;
    Address addr;

    void setAddress(Address address){
        this.addr = address;
    }

    public static void main(String[] args) {
        Person person = new Person();
        Address addr = new Address();
        person.setAddress(addr);
    }
}

class Address {
    String hno, street;
}