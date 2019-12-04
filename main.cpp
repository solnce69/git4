

int main()
{
	setlocale(0, "");
	int m, num;
	start2();
	cout << "ДЛЯ НЕУПОРЯДОЧЕННОГО МАССИВА" << endl;
	cout << endl << "Массив размером в " << n << " элементов: ";
	for (num = 0; num < n; num++) {
		cout << A[num] << " ";
	}
	for (m = 0; m < n; m++) {
		key = m;
		cout << endl << endl << "Элемент " << key;
		cout << endl << endl << "Линейный поиск: " << endl << "индекс элемента: " << LineSearch() << endl << "количество сравнений: " ;
		cout << Count;
		if (maxL < Count) maxL = Count;
		crL += Count;
		cout << endl << endl << "Быстрый линейный поиск: " << endl << "индекс элемента: " << LinearSearchWithBarrier() << endl << "количество сравнений: ";
		cout << Count;
		if (maxBL < Count) maxBL = Count;
		crBL += Count;
		
	}
	key = n;
	cout << endl << endl << "Элемент " << key;
	cout << endl << "Линейный поиск: " << endl << "индекс элемента: " << LineSearch() << endl << "количество сравнений: ";
	cout << Count;
	if (maxL < Count) maxL = Count;
	crL += Count;
	cout << endl << endl << "Быстрый линейный поиск: " << endl << "индекс элемента: " << LinearSearchWithBarrier() << endl << "количество сравнений: ";
	cout << Count;
	if (maxBL < Count) maxBL = Count;
	crBL += Count;

	start1();
	cout << endl << endl << "ДЛЯ УПОРЯДОЧЕННОГО МАССИВА" << endl;
	cout << endl << "Массив размером в " << n << " элементов: ";
	for (num = 0; num < n; num++) {
		cout << A[num] << " ";
	}
	for (m = 0; m < n; m++) {
		key = m;
		cout << endl << endl << "Элемент " << key;
		cout << endl << "Быстрый линейный поиск: " << endl << "индекс элемента: " << LinearSearchWithBarrier() << endl << "количество сравнений: ";
		cout << Count;
	
		cout << endl << "Бинарный поиск: " << endl << "индекс элемента: " << BinarySearch() << endl << "количество сравнений: ";
		cout << Count;
		if (maxBIN < Count) maxBIN = Count;
		crBIN += Count;
		cout << endl << "Блочный поиск: " << endl << "индекс элемента: " << blockSearch() << endl << "количество сравнений: ";
		cout << Count;
		if (maxBLOCK < Count) maxBLOCK = Count;
		crBLOCK += Count;
	}
	key = n;
	cout << endl << endl << "Элемент " << key;
	cout << endl << "Быстрый линейный поиск: " << endl << "индекс элемента: " << LinearSearchWithBarrier() << endl << "количество сравнений: ";
	cout << Count;
	
	cout << endl << "Бинарный поиск: " << endl << "индекс элемента: " << BinarySearch() << endl << "количество сравнений: ";
	cout << Count;
	if (maxBIN < Count) maxBIN = Count;
	crBIN += Count;
	cout << endl << "Блочный поиск: " << endl << "индекс элемента: " << blockSearch() << endl << "количество сравнений: ";
	cout << Count;
	if (maxBLOCK < Count) maxBLOCK = Count;
	crBLOCK += Count;
	cout << endl << endl << "Максимальное количество операций сравнения";
	cout << endl << "Линейный поиск: " << maxL;
	cout << endl << "Быстрый линейный поиск: " << maxBL;
	cout << endl << "Бинарный поиск: " << maxBIN;
	cout << endl << "Блочный поиск: " << maxBLOCK;
	cout << endl << endl << "Среднее количество операций сравнения";
	cout << endl << "Линейный поиск: " << crL / (n + 1);
	cout << endl << "Быстрый линейный поиск: " << crBL / (n + 1);
	cout << endl << "Бинарный поиск: " << crBIN / (n + 1);
	cout << endl << "Блочный поиск: " << crBLOCK / (n + 1);
	return 0;
}