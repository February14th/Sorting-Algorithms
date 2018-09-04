void bubbleSort(vector<int> &v){
	int min = v[0]; //assume first 
	bool flag = true;

	while(flag){ //loop until sorted
		for(int i = 1; i < v.size(); i++){
			if(v[i] < v[i - 1]){
				swap(v[i], v[i - 1]);
			}
		} //sort by swapping

		flag = false; //assume everything is sorted

		for(int i = 1; i < v.size(); i++){
			if(v[i] < v[i - 1]){
				flag = true;
				break;
			}
		} //check if sorted
		//flagged for loop if not sorted
	}

}