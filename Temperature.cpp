// define functions 

namespace temperature {
	double to_celsius(double fahrenheit) {
		double celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
		return celsius;
	}
	double to_fahrenheit(double celsius) {
		double fahrenheit = celsius * 9.0 / 5.0 + 32.0;
		return fahrenheit;
	}
}