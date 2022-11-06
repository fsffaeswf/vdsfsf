#include <iostream>
#include <ctime>
using namespace std;

int main() {
	
	/*6
	int arr[10];
	int A, B;
	cin >> A >> B;
	arr[0] = A;
	arr[1] = B;
	int sum = A+B;
	for (int i = 2; i < 10; i++) {
		arr[i] = sum;
		sum += arr[i];
		
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << ' ';
	}*/


	
	/*7
	const int N = 10;
	int arr[N];
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout <<endl;
	for (int i = 9; i >= 0; i--) {
		cout << arr[i] << ' ';
	}*/


	
	/*8
	const int N = 10;
	int arr[N],k = 0;
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 != 0) {
			cout << arr[i]<<' ';
			k++;
		}
	}
	cout <<endl<< k;*/

	
	
	/*9
	const int N = 10;
	int arr[N], k = 0;
	srand(time(0));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 9; i >= 0; i--) {
		if (arr[i] % 2 == 0) {
			cout << arr[i] << ' ';
			k++;
		}
	}
	cout << endl << k;*/

	
	/*10
	const int N = 10;
	int arr[N];
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) {
			cout << arr[i] << ' ';
		}
	}
	cout << endl;
	for (int i = 9; i >= 0; i--) {
		if (arr[i] % 2 != 0) {
			cout << arr[i] << ' ';
		}
	}*/



	
	/*11
	const int N = 10;
	int arr[N],k;
	cin >> k;
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 10; i=k+i) {
		cout <<arr[i]<<' ';
	}*/

	
	/*12
	const int N = 10;
	int arr[N];
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 10; i+=2) {
		cout << arr[i] << ' ';
	}*/

	
	/*13
	const int N = 10;
	int arr[N];
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 9; i >= 0; i-=2) {
		cout << arr[i] << ' ';
	}*/


	/*14
	const int N = 10;
	int arr[N];
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 10; i+=2) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 1; i < 10; i += 2) {
		cout << arr[i] << ' ';
	}*/

	/*15
	const int N = 10;
	int arr[N];
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 1; i < 10; i+=2) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 8; i >= 0; i -= 2) {
		cout << arr[i] << ' ';
	}*/
	
	
	/*16
	const int N = 10;
	int arr[N];
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << ' '<<arr[9-i]<<' ';
	}*/

	/*17
	const int N = 12;
	int arr[N];
	srand(time(nullptr));
	for (int i = 0; i < 12; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 6; i+=2) {
		cout << arr[i] << ' ' << arr[i + 1] << ' ';
		for (int j = 0; j < 2;j+=2) {
			cout << arr[N - 1 - i] << ' ' << arr[N - 2 - i] << ' ';
		}
	}*/
	
	/*18
	const int N = 10;
	int arr[N], k = 0;
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		if (arr[i] < arr[9]) {
			cout << arr[i];
			k++;
			break;
		}
	}
	if (k != 1) {
		cout << 0;
	}*/

	/*19
	const int N = 10;
	int arr[N], k = 0;
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 1; i < 10; i++) {
		if (arr[i] > arr[0]&&arr[i]<arr[9]) {
			cout << i;
			k++;
			break;
		}
	}
	if (k != 1) {
		cout << 0;
	}*/
	
	

