class Template3 {
    public static<E> double hitungElemenArray(E[] inputArray){
        double sum = 0.0;
        for(int i=0; i<inputArray.length; i++) {
            sum += Double.parseDouble(inputArray[i].toString());
        }
        return sum;
    }     
    public static void main(String[] args) {         
            Integer[] intArray = {1,2,3,4,5} ;         
            Double[] doubleArray = {1.1,2.2,3.3,4.4,5.5};         
            System.out.println(hitungElemenArray(intArray));         
            System.out.println(hitungElemenArray(doubleArray));             
    }
}