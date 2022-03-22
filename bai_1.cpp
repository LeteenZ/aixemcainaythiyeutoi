#include<iostream.h>
int main(){
	int n;
	cout<<"Nhap so p.tu cua mang: ";
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cout<<"Nhap p.tu thu "<<i+1<<": ";
		cin>>arr[i];
	}
//1.
	cout<<"mang tang dan: ";
	for(int i = 0 ; i < n-1 ;i++ ){
		for(int j = i+1; j < n; j++){
			if(arr[i] > arr[j]){
				int sp = arr[i];
				arr[i] = arr[j];
				arr[j] = sp;
			}
		}
	}
	for(int i = 0; i < n ; i++)
		cout<<arr[i]<<"\t";
//2.
	cout<<"\nmang chan tang dan la: ";
	for(int i = 0 ; i < n-1 ; i++){
		if(arr[i] % 2 == 0){
			for(int j = i+1; j < n; j++){
				if(arr[j] % 2 ==0){
					if(arr[i] > arr[j]){
						int sp = arr[i];
						arr[i] = arr[j];
						arr[j] = sp;
					}
				}
			}	
		}
	}
	for(int i = 0; i < n ; i++)
		cout<<arr[i]<<"\t";
//3.
	cout<<"\nmang le giam dan la: ";
	for(int i = 0 ; i < n-1 ; i++){
		if(arr[i] % 2 == 1){
			for(int j = i+1; j < n; j++){
				if(arr[j] % 2 ==1){
					if(arr[i] < arr[j]){
						int sp = arr[i];
						arr[i] = arr[j];
						arr[j] = sp;
					}
				}
			}	
		}
	}
	for(int i = 0; i < n ; i++)
		cout<<arr[i]<<"\t";
//4.
	int x;
	cout<<"\nchon so can tim: ";
	cin>>x;
	for(int i = 0; i < n ; i++){
		if(arr[i] == x){
			for(int j = i; j < n; j++){
				arr[j] = arr[j+1];
			}
			n--;
			i--;
		}
	}
	cout<<"mang xuat ra: ";
	for(int i = 0; i < n ; i++)
		cout<<arr[i]<<"\t";
	delete arr;
}