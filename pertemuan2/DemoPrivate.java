class DemoPrivate {
    private int num;
    
    void setNum(int num){
        this.num = num;
    }

    int getNum(){
        return this.num;
    }

    public static void main(String[] args) {
        DemoPrivate dp = new DemoPrivate();
        dp.setNum(20);
        System.out.println("num is "+dp.getNum());
    }
}