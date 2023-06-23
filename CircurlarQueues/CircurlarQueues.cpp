#include <iostream>
using namespace std;

class queues {
	int FRONT, REAR, max = 5;
	int queue_array[5];

public:
	queues() {
		FRONT = -1;
		REAR = -1;

	}

	void insert() {
		int num;
		cout << "Enter a Number: ";
		cin >> num;
		cout << endl;
	

	// Cek Apakah Antrian Penuh // 
	if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
		cout << "\nQueue overflow\n";
		return;
	}

	// cek apakah antrian kosong //
	if (FRONT == -1) {
		FRONT = 0;
		REAR = 0;
	}
	else {
		// Jika REAR berada di ujung terakhir array kembalikan ke awal array //
		if (REAR == max - 1)
			REAR = 0;
		else
			REAR = REAR + 1;
	}
	queue_array[REAR] = num;






