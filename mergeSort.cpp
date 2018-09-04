void mergeSort(vector<int> &v){ //recursive
	if(v.size() == 1){ //base case
	return;
  }

  int mid = v.size() / 2;
  int end = v.size() - mid;

  vector<int> v1;
  vector<int> v2;

  for(int i = 0; i < mid; i++){
    v1.push_back(v[i]);
  }
  for(int i = 0; i < end; i++){
    v2.push_back(v[i + mid]);
  }

  //splitting array into two halves of the orginal array

  mergeSort(v1);
  mergeSort(v2);

  //two arrays will split until only 1 number in each array
  //merging process begins

  int i = 0; //v
  int j = 0; //v1
  int k = 0; //v2

  while(j < mid && k < end){
    if(v1[j] < v2[k]){
      v[i++] = v1[j++];
    }
    else{
      v[i++] = v2[k++];
    }
  } //merge into the orginal array until at least half full
  if(j >= mid){
    while(k < end){
      v[i++] = v2[k++];
    }
  }
  else{
    while(j < mid){
      v[i++] = v1[j++];
    }
  } //merge the rest of the numbers into the orginal array
}