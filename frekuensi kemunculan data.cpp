//Oleh Muhammad dicky garcia
//STT PELITA BANGSA
#include <iostream>
#include <stdio.h>

int main() {
  /* code */
  int data [100];
  int jumlah,tmp,N;

  std::cout << "masukan banyak data :" << '\n';
  std::cin >> N;

  for (int i = 0; i < N; i++) {
    /* code */
    std::cout << "data ke-"<<i+1<<":" << '\n';
    std::cin >> data[i];
  }

std::cout << "data diurutkan :" << '\n';
//mengurutkan data secara urutan naik
for (int h = 0; h < N; h++) {
  /* code */
  for (int i = h+1; i < N; i++) {
    /* code */
    if (data[h]>data[i]) {
      /* code */
      tmp=data[i];
      data[i]=data[h];
      data[h]=tmp;
    }
  }
  std::cout << data[h] << "";
}
std::cout << "\nBanyak kemunculan data :" << '\n';

//proses menghitung priode kemunculan
for (int h = 0; h < N; h++) {
  /* code */
  jumlah=0;
  for (int i = 0; i < N; i++) {
    /* code */
    if (data[h]==data[i])
    jumlah++;
  }
  //menghindari duplikasi
  if(data[h]!=data[h-1])
  std::cout << data[h]<<":"<<jumlah << '\n';
}



  return 0;
}
