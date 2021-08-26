# Pertemuan 1
# contoh program Python dengan class 
 
class Calculator:
    A = 0
    B = 0
    def get(self):
        self.A = float(input("Masukkan bilangan pertama "))
        self.B = float(input("Masukkan bilangan kedua "))

    def add(self):
        print(self.A + self.B)

    def sub(self):
        print(self.A - self.B)
    
    def mul(self):
        print(self.A * self.B)

    def div(self):
        print(self.A / self.B)

# pilih menu
print("""
Ketik 1 untuk menjumlahkan 2 bilangan
Ketik 2 untuk mengurangkan 2 bilangan
Ketik 3 untuk mengalikankan 2 bilangan
Ketik 4 untuk membagi 2 bilangan
Ketik 0 untuk keluar dari program
""")

choice = 1
cal = Calculator() 
while (choice >= 1 and choice <= 4):
    choice = int(input("Ketik pilihan anda "))
    if (choice == 1):
        cal.get()
        cal.add()
    elif (choice == 2):
        cal.get()
        cal.sub()
    elif (choice == 3):
        cal.get()
        cal.mul()
    elif (choice == 4):
        cal.get()
        cal.div()