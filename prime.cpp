
#include <iostream>

using namespace std;



bool is_prime(unsigned short int n){

	unsigned short int j = n / 2;
	while(j > 1){
		if (n % j == 0)
		{
			return false;
		}
	}
	return true;

}


int main(){

	cout << "This program will generate a prime number greater than n." << endl;
	cout << "Please enter a value n [2, 50000]: ";
	int n;
	cin >> n;
	cout << "n: "  << n << endl;
	if(n < 2 || n > 50000)
	{
		cout << "That is invalid!" << endl;
		exit(1);
	}

	int arr[INT_MAX - n];
	int ans = n + 1;
	size_t i = 0;
	while(!is_prime(ans))
	{
		arr[i] = ans;
		i = i + 1;
		ans = ans + 1;
	}


	for(size_t j = 0; j < (INT_MAX - n); j++){
		cout << "arr[" << j << "]: " << arr[j] << endl;
	}

	cout << "Prime Number: "  << ans << endl;

}