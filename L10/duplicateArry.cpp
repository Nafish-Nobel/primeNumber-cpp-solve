int findDuplicate(vector<int> &arr) {
  int ans = 0;

    //xor ing all arry
  for (int i = 0; i < arr.size(); i++){
      ans = ans^arr[i];
  }
  //xor [1,n-1]

  for(int i = 0; i<arr.size(); i++){
      ans = ans^i;
  }

  return ans;
}
