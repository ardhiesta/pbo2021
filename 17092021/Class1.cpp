class Class1 {
public:
	int square(int x, double y){
		return x*x;
	}
	
	int square(double y, int x){
		return 1.0;
	}
};

int main() {
	Class1 c1;
	return 0;
}
