public class Mahasiswa {
    public static void main(String[] args) {
        TestData mhs = new TestData();
        // input data
        mhs.nama = "Dennis Ritchie";
        mhs.jenisKelamin = 'L';
        mhs.alamat = "Sukoharjo";

        // tampil data
        System.out.println("nama mhs : "+mhs.nama);
        System.out.println("jenis kelamin mhs : "+mhs.jenisKelamin);
        System.out.println("alamat mhs : "+mhs.alamat);
    }
}

class TestData {
    private String nama;
    private char jenisKelamin;
    private String alamat;

    static final int NUM = 10;
}
