#include<iostream>
#include<string>

namespace bnk{
	struct bank_column{
		int acc_no;
		std::string name;
		double balance;
	};
	
	enum acc_type{ saving, current };

	class bank{
		public:
			virtual void insert_info() = 0;
			virtual void create_acc() = 0;
			virtual void delete_acc() = 0;
			virtual void update_acc() = 0;
			virtual void search_acc() = 0;
			virtual void display_all_acc() = 0;

			virtual ~bank() {}
	};
	
	class user : public bank{
		public:
			void insert_info() {
				std::cout <<"insert info\n";

				struct bank_column bk;
				acc_type at;
				
				std::cout <<"Enter name : ";
				getline(std::cin, bk.name);
				
				std::cout <<"Deposit balance : ";
				std::cin >> bk.balance;
				
				std::cout <<"Acc type saving/current(1) : ";
			}
			void create_acc() {
				std::cout <<"create acc\n";
			}
			void delete_acc() {
				std::cout <<"delete acc\n";
			}
			void update_acc() {
				std::cout <<"delete acc\n";
			}
			void search_acc() {
				std::cout <<"search acc\n";
			}
			void display_all_acc() {
				std::cout <<"display all acc\n";
			}
	};
};

int main()
{
	bnk::user obj;

	std::cout <<"-------------------------------"<< std::endl;
	std::cout <<"            WELCOME            "<< std::endl;
	std::cout <<"-------------------------------"<< std::endl;
	
	while(true){
		int op;
		std::cout <<"1.Create Acc\t2.Update Acc\n3.Search Acc\t4.Delete Acc\n5.Display all\t6.Exit\n";
		std::cout <<"-------------------------------"<< std::endl;
		std::cout <<"Enter option : ";
		std::cin >> op;
		std::cout <<"-------------------------------"<< std::endl;
		
		switch(op)
		{
			case 1 : obj.create_acc();	break;
			case 2 : obj.update_acc();	break;
			case 3 : obj.search_acc();	break;
			case 4 : obj.delete_acc();	break;
			case 5 : obj.display_all_acc();	break;
			case 6 : exit(0);
			default: std::cout <<"  wrong option! Enter again!\n";
				 std::cout <<"-------------------------------"<< std::endl;
		}
	}
}

















