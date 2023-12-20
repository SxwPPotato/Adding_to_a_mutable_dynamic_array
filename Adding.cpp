#include <iostream>

void print_dynamic_array(int* arr, int logical_size, int actual_size) {
	std::cout << "������������ ������: ";
	for (int i = 0; i < actual_size; ++i) {
		if (i >= logical_size) {
			std::cout << " _ ";
		}
		else
			std::cout << arr[i] << " ";

	}

}


void append_to_dynamic_array(int* arr, int logical_size, int actual_size) {
	int elem;
	std::cout << "\n������� ������� ��� ����������: ";

	std::cin >> elem;
	while (elem != 0) {
		
		if (logical_size < actual_size) {
			arr[logical_size] = elem;
			logical_size++;
		}
		else if (logical_size == actual_size) {
			int* newarr = new int[actual_size * 2];
			newarr = arr;
			newarr[logical_size] = elem;
			actual_size = logical_size * 2;
			logical_size++;
			
			
		}
		std::cout << "\n������� ������� ��� ����������: ";
		std::cin >> elem;
		
	} 
	std::cout << "�������! ��� ������: ";
	for (int i = 0; i < actual_size; ++i) {
		if (i >= logical_size) {
			std::cout << " _ ";
		}
		else
			std::cout << arr[i] << " ";

	}
	

}



int main()
{
	setlocale(LC_ALL, "russian");
	int logical_size;
	int actual_size;
	int elem;
	std::cout << "������� �������c��� ������ �������: ";
	std::cin >> actual_size;
	std::cout << "������� ���������� ������ �������: ";
	std::cin >> logical_size;
	if (logical_size > actual_size) {
		std::cout << "������! ���������� ������ ������� �� ����� ��������� �����������!\n";
		return 0;
	}
	int* mass = new int[actual_size];
	for (int i = 0; i < logical_size; ++i) {
		std::cout << "������� arr[" << i << "]: ";
		std::cin >> mass[i];
	}
	print_dynamic_array(mass, logical_size, actual_size);

	append_to_dynamic_array(mass, logical_size, actual_size);
	std::cout << "\n";
	
	return 0;
	delete[] mass;
}
