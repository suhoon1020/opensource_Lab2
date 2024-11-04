#include <iostream>
#include <string>
#include <map>

typedef struct node{
	int g_mid;
	int g_fin;
} STUD;

void print_map(std::map<std::string, STUD> nodes);

int main(void){
	std::map<std::string, STUD> student;
	
	int n;

	std::cout << "최대 학생 수 : ";
	std::cin >> n;
	
	std::cin.ignore(); 
	int count = 0;
	while(count < n){
		std::string name;
		STUD new_stud;
        	if (!(std::cin >> name >> new_stud.g_mid >> new_stud.g_fin)) {
            		break; 
        	}


		std::cout << "\"" << name <<"\" ";

		if(student.find(name) == std::end(student)){
			std::cout <<"추가 ." << std::endl;
			student.insert({name, new_stud});
			count++;
		}
		else{
			std::cout << "이미 존재함." << std::endl;
		}
	}

	print_map(student);

	return 0;
}

void print_map(std::map<std::string, STUD> nodes){
	for(auto& node : nodes){
		std::cout << "이름 : "  << node.first << ", 중간고사 : " << node.second.g_mid << ", 기말고사 : " << node.second.g_fin  <<std::endl;
	}
}