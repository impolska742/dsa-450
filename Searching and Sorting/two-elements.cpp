#include<bits/stdc++.h>
using namespace std;

vector<int> findTwoElement(int *arr, int n) {
        // code here
        vector<int> answer;
        for(int i = 0; i < n - 2; i++) {
            if(arr[i] == arr[i+1]) {
                answer.push_back(arr[i]);
                if(arr[i] == i+1) {
                    answer.push_back(i);
                } else if (arr[i] == i + 2) {
                    answer.push_back(i+1);
                }
            }
        }
        
        return answer;
}

int main(int argc, char const *argv[])
{
	int arr[] = {1,3,3};
	int n = 3;
	for(auto x : findTwoElement(arr,n)) {
		cout << x<< ",";
	} 
	return 0;
}