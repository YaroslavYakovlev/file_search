#include <iostream>
#include <fstream>
#include <vector>

int main(){
  std::cout << "File search" << std::endl;
  std::ifstream word;
  std::vector<std::string> list;
  std::string searchWord;
  std::string str;
  int countWord = 0;

  std::cin >> searchWord;
  word.open("D:\\ProjectCPP\\Module19\\file_search\\src\\File\\words.txt");
  while(!word.eof()){
      word >> str;
      list.push_back(str);
  }
  for(int i = 0; i < list.size(); ++i){
    if(searchWord == list[i]){
      countWord++;
      list[i] = str;
    }
  }
    if(countWord > 0){
      std::cout << "Word found - " << str << std::endl << "Number of repetitions: " <<  countWord;
    }else{
       std::cout << "The word was not found." << std::endl << "Number of repetitions: " <<  countWord;
    }
  word.close();
  
  return 0;
}

// Составьте небольшой текстовый файл «words.txt», 
// в котором последовательно, через пробелы и 
// переносы строк расположены различные слова. 
// Можете использовать любые англоязычные слова. 
// Разработайте программу, которая искала бы среди 
// этих слов нужное пользователю и выводила бы 
// общее количество повторений этого слова. 0 — если 
// слово вообще не присутствует в файле.