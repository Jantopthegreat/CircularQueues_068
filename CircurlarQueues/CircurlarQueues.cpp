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
	}
void remove(){
	// cek apakah antrian kosong //
	if (FRONT == -1) {
		cout << "Queue Underflow\n";
		return;
	}
	cout << "\nThe Element deleted from the queue is : " << queue_array[FRONT] << "\n";

	//Cek apakah antrian hanya memiliki satu element
	if (FRONT == REAR) {
		FRONT = -1;
		REAR = -1;
	}
	else{
		// jika element yang dihapus berada di posisi terakhir array, kembali ke awal
		if (FRONT == max - 1)
			FRONT = 0;
		else
			FRONT = FRONT + 1;







