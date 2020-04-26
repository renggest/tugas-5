class Kalkulator {
	public:
		int perkalian(int x, int y){
			cout<<"perkalian(int x, int y)"<<endl;
			return x*y;
		}
		double perkalian(double a, double b){
			cout<<"perkalian(double a, double b)"<<endl;
			return a*b;
		}
		double perkalian(double a, double b, double c){
			cout<<"perkalian(double a, double b, double c)"<<endl;
			return a*b*c;
		}
};