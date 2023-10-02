// quicksort.h

void part(int low, int high, int& pivot, int list[]){
	
	int target = low; //Target, which loc in the list where the pivotitem swap to at the end of part
	int pivotitem = list[low]; //Pivotitem, the item to get swapped into its final position after part
	
	for(int i = low + 1; i <= high; i++){
		if(list[i] < pivotitem){
			target++;
			int temp = list[target]; //Increment the target and swap list[target] and list[i]
			list[target] = list[i];
			list[i] = temp;
		}
	}
	
	pivot = target;
	list[low] = list[target]; //Swap list[target] and list[low]
	list[target] = pivotitem;
	
}

void quicksort(int low, int high, int list[]){ //Calling quicksort with low, high, and the list[]
	
	int pivot;
	if(low < high){
		part(low, high, pivot, list);
		quicksort(low, pivot - 1, list);
		quicksort(pivot + 1, high, list);
	}
	
}