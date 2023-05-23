#include <fstream>
#include <iostream>
using namespace std;

int welcome() {
	string welcome ="\t\t\t\t\t\tWelcome!!\n";
	cout<<welcome;
}

int main()
{
	cout<<"\n\n";
	jump:
	welcome();
	cout<<"\n";
	cout<<"\t\t\t\t  ----------CAR RENTAL SYSTEM---------- \n"<<endl;
	cout<<"Project by: \nFarooq Ahmed Khan - 2012302\nAzhar Kamal - 2012299\nDaniyal Shakeel - 2012321\n\n\n"<<endl;
	string company[7] = {"Hyundai", "Suzuki", "Daihatsu", "Honda", "Nissan", "Toyota", "Lexus"};
	//variable for cars:
	char car;
	//variable for days:
	int days;
	//variable for rent:
	int rent;
	//variable for payment procedure:
	string payment;
	string name;
	int nic;
	int cc;
	int cvv;
	int cc_date;
	
	jump1:
	cout<<endl<<"Choose a Car Company from this list: \nOr Type 0 for main menu!\n"<<endl;
	cout<<"1. Hyundai\n2. Suzuki\n3. Daihatsu\n4. Honda\n5. Nissan\n6. Toyota\n7. Lexus"<<endl;
	cout<<"-------------------------------------"<<endl;
	//input for company selection
	int company_select;
		cin>>company_select;
	//hyundai
	if (company_select == 1) {
		jump0:
		cout<<"-------------------------------------"<<endl;
		cout<<"Please select from any of these cars:"<<endl;
		cout<<"Or type d for car company selection.\n"<<endl;
		cout<<"a. ACCENT\n\tModel:2017\n\tRent for 24 hours: 5000 Rs."<<endl;
		cout<<"b. Santro\n\tModel:2018\n\tRent for 24 hours: 2500 Rs."<<endl;
		cout<<"c. Tucson\n\tModel:2020\n\tRent for 24 hours: 7000 Rs."<<endl;
		cout<<"-------------------------------------"<<endl;	
		cin>>car;
		cout<<"-------------------------------------"<<endl;
		if (car == 'a') {
			cout<<"You have selected ACCENT. Please type the no. of days you want to rent this car for and we will calculate the rent:"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>days;
			cout<<"-------------------------------------"<<endl;
			rent = days * 5000;
			cout<<"According to the no. of days you provided, total rent for this car will be: "<<rent<<" Rs. \nDo you want to proceed to payment? (Yes/No)"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>payment;
			cout<<"-------------------------------------"<<endl;
			if ( payment == "Yes") {
				cout<<"Please Fill your details as well as Credit/Debit Card details for payment:"<<endl;
				cout<<"Full Name: ";
				cin>>name;
				cout<<"NIC Number: ";
				cin>>nic;
				cout<<"Credit Card Number: ";
				cin>>cc;
				cout<<"CVV:";
				cin>>cvv;
				cout<<"Expiry Date: (in form of month year)";
				cin>>cc_date;
				cout<<"You have successfuly paid the rental amount, Please pick the car from our nearest branch!\n\n\t\t\t\t\t\t\tTHANK YOU!"<<endl;
			}
			if (payment == "No") {
				goto jump1;
			}
			
		}
		if (car == 'b') {
			cout<<"You have selected Santro. Please type the no. of days you want to rent this car for and we will calculate the rent:"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>days;
			cout<<"-------------------------------------"<<endl;
			rent = days * 2500;
			cout<<"According to the no. of days you provided, total rent for this car will be: "<<rent<<" Rs. \nDo you want to proceed to payment? (Yes/No)"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>payment;
			cout<<"-------------------------------------"<<endl;
			if ( payment == "Yes") {
				cout<<"Please Fill your details as well as Credit/Debit Card details for payment:"<<endl;
				cout<<"Full Name: ";
				cin>>name;
				cout<<"NIC Number: ";
				cin>>nic;
				cout<<"Credit Card Number: ";
				cin>>cc;
				cout<<"CVV:";
				cin>>cvv;
				cout<<"Expiry Date: (in form of month year)";
				cin>>cc_date;
				cout<<"You have successfuly paid the rental amount, Please pick the car from our nearest branch!\n\n\t\t\t\t\t\t\tTHANK YOU!"<<endl;			
			}
			if (payment == "No") {
				goto jump1;
			} 
		}
		if (car == 'c') {
			cout<<"You have selected Tucson. Please type the no. of days you want to rent this car for and we will calculate the rent:"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>days;
			cout<<"-------------------------------------"<<endl;
			rent = days * 7000;
			cout<<"According to the no. of days you provided, total rent for this car will be: "<<rent<<" Rs. \nDo you want to proceed to payment? (Yes/No)"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>payment;
			cout<<"-------------------------------------"<<endl;
			if ( payment == "Yes") {
				cout<<"Please Fill your details as well as Credit/Debit Card details for payment:"<<endl;
				cout<<"Full Name: ";
				cin>>name;
				cout<<"NIC Number: ";
				cin>>nic;
				cout<<"Credit Card Number: ";
				cin>>cc;
				cout<<"CVV:";
				cin>>cvv;
				cout<<"Expiry Date: (in form of month year)";
				cin>>cc_date;
				cout<<"You have successfuly paid the rental amount, Please pick the car from our nearest branch!\n\n\t\t\t\t\t\t\tTHANK YOU!"<<endl;			
			}
			if (payment == "No") {
				goto jump1;
			} 
		}
		if (car == 'd') {
		goto jump1;
		}
	}
	//Suzuki
	if (company_select == 2) {
		jump2:
		cout<<"-------------------------------------"<<endl;
		cout<<"Please select from any of these cars:"<<endl;
		cout<<"Or type d for car company selection."<<endl;
		cout<<"a. Cultus\n\tModel:2017\n\tRent for 24 hours: 2500 Rs."<<endl;
		cout<<"b. Alto\n\tModel:2018\n\tRent for 24 hours: 3000 Rs."<<endl;
		cout<<"c. Swift\n\tModel:2020\n\tRent for 24 hours: 4000 Rs."<<endl;
		cin>>car;
		if (car == 'a') {
			cout<<"You have selected Suzuki Cultus. Please type the no. of days you want to rent this car for and we will calculate the rent:"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>days;
			cout<<"-------------------------------------"<<endl;
			rent = days * 2500;
			cout<<"According to the no. of days you provided, total rent for this car will be: "<<rent<<" Rs. \nDo you want to proceed to payment? (Yes/No)"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>payment;
			cout<<"-------------------------------------"<<endl;
			if ( payment == "Yes") {
				cout<<"Please Fill your details as well as Credit/Debit Card details for payment:"<<endl;
				cout<<"Full Name: ";
				cin>>name;
				cout<<"NIC Number: ";
				cin>>nic;
				cout<<"Credit Card Number: ";
				cin>>cc;
				cout<<"CVV:";
				cin>>cvv;
				cout<<"Expiry Date: (in form of month year)";
				cin>>cc_date;
				cout<<"You have successfuly paid the rental amount, Please pick the car from our nearest branch!\n\n\t\t\t\t\t\t\tTHANK YOU!"<<endl;			
			}
			if (payment == "No") {
				goto jump2;
			} 
		}
		if (car == 'b') {
			cout<<"You have selected Alto. Please type the no. of days you want to rent this car for and we will calculate the rent:"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>days;
			cout<<"-------------------------------------"<<endl;
			rent = days * 3000;
			cout<<"According to the no. of days you provided, total rent for this car will be: "<<rent<<" Rs. \nDo you want to proceed to payment? (Yes/No)"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>payment;
			cout<<"-------------------------------------"<<endl;
			if ( payment == "Yes") {
				cout<<"Please Fill your details as well as Credit/Debit Card details for payment:"<<endl;
				cout<<"Full Name: ";
				cin>>name;
				cout<<"NIC Number: ";
				cin>>nic;
				cout<<"Credit Card Number: ";
				cin>>cc;
				cout<<"CVV:";
				cin>>cvv;
				cout<<"Expiry Date: (in form of month year)";
				cin>>cc_date;
				cout<<"You have successfuly paid the rental amount, Please pick the car from our nearest branch!\n\n\t\t\t\t\t\t\tTHANK YOU!"<<endl;			
			}
			if (payment == "No") {
				goto jump1;
			} 
		}
		if (car == 'c') {
			cout<<"You have selected Swift. Please type the no. of days you want to rent this car for and we will calculate the rent:"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>days;
			cout<<"-------------------------------------"<<endl;
			rent = days * 4000;
			cout<<"According to the no. of days you provided, total rent for this car will be: "<<rent<<" Rs. \nDo you want to proceed to payment? (Yes/No)"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>payment;
			cout<<"-------------------------------------"<<endl;
			if ( payment == "Yes") {
				cout<<"Please Fill your details as well as Credit/Debit Card details for payment:"<<endl;
				cout<<"Full Name: ";
				cin>>name;
				cout<<"NIC Number: ";
				cin>>nic;
				cout<<"Credit Card Number: ";
				cin>>cc;
				cout<<"CVV:";
				cin>>cvv;
				cout<<"Expiry Date: (in form of month year)";
				cin>>cc_date;
				cout<<"You have successfuly paid the rental amount, Please pick the car from our nearest branch!\n\n\t\t\t\t\t\t\tTHANK YOU!"<<endl;			
			}
			if (payment == "No") {
				goto jump1;
			} 
		} 
		if (car == 'd') {
			goto jump1;
		}
	}
	//daihatsu
	if (company_select == 3) {
		jump3:
		cout<<"-------------------------------------"<<endl;
		cout<<"Please select from any of these cars:"<<endl;
		cout<<"Or type d for car company selection."<<endl;
		cout<<"a. Mira\n\tModel:2017\n\tRent for 24 hours: 2500 Rs."<<endl;
		cout<<"b. Cuore\n\tModel:2012\n\tRent for 24 hours: 3000 Rs."<<endl;
		cout<<"c. Move\n\tModel:2010\n\tRent for 24 hours: 2000 Rs."<<endl;
		cin>>car;
		if (car == 'a') {
			cout<<"You have selected Mira. Please type the no. of days you want to rent this car for and we will calculate the rent:"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>days;
			cout<<"-------------------------------------"<<endl;
			rent = days * 2500;
			cout<<"According to the no. of days you provided, total rent for this car will be: "<<rent<<" Rs. \nDo you want to proceed to payment? (Yes/No)"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>payment;
			cout<<"-------------------------------------"<<endl;
			if ( payment == "Yes") {
				cout<<"Please Fill your details as well as Credit/Debit Card details for payment:"<<endl;
				cout<<"Full Name: ";
				cin>>name;
				cout<<"NIC Number: ";
				cin>>nic;
				cout<<"Credit Card Number: ";
				cin>>cc;
				cout<<"CVV:";
				cin>>cvv;
				cout<<"Expiry Date: (in form of month year)";
				cin>>cc_date;
				cout<<"You have successfuly paid the rental amount, Please pick the car from our nearest branch!\n\n\t\t\t\t\t\t\tTHANK YOU!"<<endl;			
			}
			if (payment == "No") {
				goto jump1;
			} 
		}
		if (car == 'b') {
			cout<<"You have selected Cuore. Please type the no. of days you want to rent this car for and we will calculate the rent:"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>days;
			cout<<"-------------------------------------"<<endl;
			rent = days * 3000;
			cout<<"According to the no. of days you provided, total rent for this car will be: "<<rent<<" Rs. \nDo you want to proceed to payment? (Yes/No)"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>payment;
			cout<<"-------------------------------------"<<endl;
			if ( payment == "Yes") {
				cout<<"Please Fill your details as well as Credit/Debit Card details for payment:"<<endl;
				cout<<"Full Name: ";
				cin>>name;
				cout<<"NIC Number: ";
				cin>>nic;
				cout<<"Credit Card Number: ";
				cin>>cc;
				cout<<"CVV:";
				cin>>cvv;
				cout<<"Expiry Date: (in form of month year)";
				cin>>cc_date;
				cout<<"You have successfuly paid the rental amount, Please pick the car from our nearest branch!\n\n\t\t\t\t\t\t\tTHANK YOU!"<<endl;			
			}
			if (payment == "No") {
				goto jump1;
			} 
		}
		if (car == 'c') {
			cout<<"You have selected Daihatsu Move. Please type the no. of days you want to rent this car for and we will calculate the rent:"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>days;
			cout<<"-------------------------------------"<<endl;
			rent = days * 2000;
			cout<<"According to the no. of days you provided, total rent for this car will be: "<<rent<<" Rs. \nDo you want to proceed to payment? (Yes/No)"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>payment;
			cout<<"-------------------------------------"<<endl;
			if ( payment == "Yes") {
				cout<<"Please Fill your details as well as Credit/Debit Card details for payment:"<<endl;
				cout<<"Full Name: ";
				cin>>name;
				cout<<"NIC Number: ";
				cin>>nic;
				cout<<"Credit Card Number: ";
				cin>>cc;
				cout<<"CVV:";
				cin>>cvv;
				cout<<"Expiry Date: (in form of month year)";
				cin>>cc_date;
				cout<<"You have successfuly paid the rental amount, Please pick the car from our nearest branch!\n\n\t\t\t\t\t\t\tTHANK YOU!"<<endl;			
			}
			if (payment == "No") {
				goto jump1;
			} 
		}
		if (car == 'd') {
			goto jump1;
		}
	}
	//honda
	if (company_select == 4) {
		jump4:
		cout<<"-------------------------------------"<<endl;
		cout<<"Please select from any of these cars:"<<endl;
		cout<<"Or type d for car company selection."<<endl;
		cout<<"a. Civic\n\tModel:2020\n\tRent for 24 hours: 6500 Rs."<<endl;
		cout<<"b. City\n\tModel:2018\n\tRent for 24 hours: 5000 Rs."<<endl;
		cout<<"c. Accord\n\tModel:2020\n\tRent for 24 hours: 4000 Rs."<<endl;
		cin>>car;
		if (car == 'a') {
			cout<<"You have selected Honda Civic. Please type the no. of days you want to rent this car for and we will calculate the rent:"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>days;
			cout<<"-------------------------------------"<<endl;
			rent = days * 6500;
			cout<<"According to the no. of days you provided, total rent for this car will be: "<<rent<<" Rs. \nDo you want to proceed to payment? (Yes/No)"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>payment;
			cout<<"-------------------------------------"<<endl;
			if ( payment == "Yes") {
				cout<<"Please Fill your details as well as Credit/Debit Card details for payment:"<<endl;
				cout<<"Full Name: ";
				cin>>name;
				cout<<"NIC Number: ";
				cin>>nic;
				cout<<"Credit Card Number: ";
				cin>>cc;
				cout<<"CVV:";
				cin>>cvv;
				cout<<"Expiry Date: (in form of month year)";
				cin>>cc_date;
				cout<<"You have successfuly paid the rental amount, Please pick the car from our nearest branch!\n\n\t\t\t\t\t\t\tTHANK YOU!"<<endl;			
			}
			if (payment == "No") {
				goto jump1;
			} 
		}
		if (car == 'b') {
			cout<<"You have selected Honda City. Please type the no. of days you want to rent this car for and we will calculate the rent:"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>days;
			cout<<"-------------------------------------"<<endl;
			rent = days * 5000;
			cout<<"According to the no. of days you provided, total rent for this car will be: "<<rent<<" Rs. \nDo you want to proceed to payment? (Yes/No)"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>payment;
			cout<<"-------------------------------------"<<endl;
			if ( payment == "Yes") {
				cout<<"Please Fill your details as well as Credit/Debit Card details for payment:"<<endl;
				cout<<"Full Name: ";
				cin>>name;
				cout<<"NIC Number: ";
				cin>>nic;
				cout<<"Credit Card Number: ";
				cin>>cc;
				cout<<"CVV:";
				cin>>cvv;
				cout<<"Expiry Date: (in form of month year)";
				cin>>cc_date;
				cout<<"You have successfuly paid the rental amount, Please pick the car from our nearest branch!\n\n\t\t\t\t\t\t\tTHANK YOU!"<<endl;			
			}
			if (payment == "No") {
				goto jump1;
			} 
		}
		if (car == 'c') {
			cout<<"You have selected Honda Accord. Please type the no. of days you want to rent this car for and we will calculate the rent:"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>days;
			cout<<"-------------------------------------"<<endl;
			rent = days * 4000;
			cout<<"According to the no. of days you provided, total rent for this car will be: "<<rent<<" Rs. \nDo you want to proceed to payment? (Yes/No)"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>payment;
			cout<<"-------------------------------------"<<endl;
			if ( payment == "Yes") {
				cout<<"Please Fill your details as well as Credit/Debit Card details for payment:"<<endl;
				cout<<"Full Name: ";
				cin>>name;
				cout<<"NIC Number: ";
				cin>>nic;
				cout<<"Credit Card Number: ";
				cin>>cc;
				cout<<"CVV:";
				cin>>cvv;
				cout<<"Expiry Date: (in form of month year)";
				cin>>cc_date;
				cout<<"You have successfuly paid the rental amount, Please pick the car from our nearest branch!\n\n\t\t\t\t\t\t\tTHANK YOU!"<<endl;			
			}
			if (payment == "No") {
				goto jump1;
			} 
		}
		if (car == 'd') {
			goto jump1;
		}
	}
	//Nissan
	if (company_select == 5) {
		jump5:
		cout<<"-------------------------------------"<<endl;
		cout<<"Please select from any of these cars:"<<endl;
		cout<<"Or type d for car company selection."<<endl;
		cout<<"a. GT-R\n\tModel:2017\n\tRent for 24 hours: 10000 Rs."<<endl;
		cout<<"b. Juke\n\tModel:2020\n\tRent for 24 hours: 5000 Rs."<<endl;
		cout<<"c. Wingroad\n\tModel:2016\n\tRent for 24 hours: 5000 Rs."<<endl;
		cin>>car;
		if (car == 'a') {
			cout<<"You have selected Nissan GT-R. Please type the no. of days you want to rent this car for and we will calculate the rent:"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>days;
			cout<<"-------------------------------------"<<endl;
			rent = days * 10000;
			cout<<"According to the no. of days you provided, total rent for this car will be: "<<rent<<" Rs. \nDo you want to proceed to payment? (Yes/No)"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>payment;
			cout<<"-------------------------------------"<<endl;
			if ( payment == "Yes") {
				cout<<"Please Fill your details as well as Credit/Debit Card details for payment:"<<endl;
				cout<<"Full Name: ";
				cin>>name;
				cout<<"NIC Number: ";
				cin>>nic;
				cout<<"Credit Card Number: ";
				cin>>cc;
				cout<<"CVV:";
				cin>>cvv;
				cout<<"Expiry Date: (in form of month year)";
				cin>>cc_date;
				cout<<"You have successfuly paid the rental amount, Please pick the car from our nearest branch!\n\n\t\t\t\t\t\t\tTHANK YOU!"<<endl;			
			}
			if (payment == "No") {
				goto jump1;
			} 
		}
		if (car == 'b') {
			cout<<"You have selected Nissan Juke. Please type the no. of days you want to rent this car for and we will calculate the rent:"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>days;
			cout<<"-------------------------------------"<<endl;
			rent = days * 5000;
			cout<<"According to the no. of days you provided, total rent for this car will be: "<<rent<<" Rs. \nDo you want to proceed to payment? (Yes/No)"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>payment;
			cout<<"-------------------------------------"<<endl;
			if ( payment == "Yes") {
				cout<<"Please Fill your details as well as Credit/Debit Card details for payment:"<<endl;
				cout<<"Full Name: ";
				cin>>name;
				cout<<"NIC Number: ";
				cin>>nic;
				cout<<"Credit Card Number: ";
				cin>>cc;
				cout<<"CVV:";
				cin>>cvv;
				cout<<"Expiry Date: (in form of month year)";
				cin>>cc_date;
				cout<<"You have successfuly paid the rental amount, Please pick the car from our nearest branch!\n\n\t\t\t\t\t\t\tTHANK YOU!"<<endl;			
			}
			if (payment == "No") {
				goto jump1;
			} 
		}
		if (car == 'c') {
			cout<<"You have selected Nissan Wingroad. Please type the no. of days you want to rent this car for and we will calculate the rent:"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>days;
			cout<<"-------------------------------------"<<endl;
			rent = days * 5000;
			cout<<"According to the no. of days you provided, total rent for this car will be: "<<rent<<" Rs. \nDo you want to proceed to payment? (Yes/No)"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>payment;
			cout<<"-------------------------------------"<<endl;
			if ( payment == "Yes") {
				cout<<"Please Fill your details as well as Credit/Debit Card details for payment:"<<endl;
				cout<<"Full Name: ";
				cin>>name;
				cout<<"NIC Number: ";
				cin>>nic;
				cout<<"Credit Card Number: ";
				cin>>cc;
				cout<<"CVV:";
				cin>>cvv;
				cout<<"Expiry Date: (in form of month year)";
				cin>>cc_date;
				cout<<"You have successfuly paid the rental amount, Please pick the car from our nearest branch!\n\n\t\t\t\t\t\t\tTHANK YOU!"<<endl;			
			}
			if (payment == "No") {
				goto jump1;
			} 
		}
		if (car == 'd') {
			goto jump1;
		}
	}
	//Toyota
	if (company_select == 6) {
		jump6:
		cout<<"-------------------------------------"<<endl;
		cout<<"Please select from any of these cars:"<<endl;
		cout<<"Or type d for car company selection."<<endl;
		cout<<"a. Corolla\n\tModel:2017\n\tRent for 24 hours: 4500 Rs."<<endl;
		cout<<"b. Yaris\n\tModel:2018\n\tRent for 24 hours: 4000 Rs."<<endl;
		cout<<"c. Prius\n\tModel:2020\n\tRent for 24 hours: 4000 Rs."<<endl;
		cin>>car;
		if (car == 'a') {
			cout<<"You have selected Toyota Corolla. Please type the no. of days you want to rent this car for and we will calculate the rent:"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>days;
			cout<<"-------------------------------------"<<endl;
			rent = days * 4500;
			cout<<"According to the no. of days you provided, total rent for this car will be: "<<rent<<" Rs. \nDo you want to proceed to payment? (Yes/No)"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>payment;
			cout<<"-------------------------------------"<<endl;
			if ( payment == "Yes") {
				cout<<"Please Fill your details as well as Credit/Debit Card details for payment:"<<endl;
				cout<<"Full Name: ";
				cin>>name;
				cout<<"NIC Number: ";
				cin>>nic;
				cout<<"Credit Card Number: ";
				cin>>cc;
				cout<<"CVV:";
				cin>>cvv;
				cout<<"Expiry Date: (in form of month year)";
				cin>>cc_date;
				cout<<"You have successfuly paid the rental amount, Please pick the car from our nearest branch!\n\n\t\t\t\t\t\t\tTHANK YOU!"<<endl;			
			}
			if (payment == "No") {
				goto jump1;
			} 
		}
		if (car == 'b') {
			
			cout<<"You have selected Toyota Yaris. Please type the no. of days you want to rent this car for and we will calculate the rent:"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>days;
			cout<<"-------------------------------------"<<endl;
			rent = days * 4000;
			cout<<"According to the no. of days you provided, total rent for this car will be: "<<rent<<" Rs. \nDo you want to proceed to payment? (Yes/No)"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>payment;
			cout<<"-------------------------------------"<<endl;
			if ( payment == "Yes") {
				cout<<"Please Fill your details as well as Credit/Debit Card details for payment:"<<endl;
				cout<<"Full Name: ";
				cin>>name;
				cout<<"NIC Number: ";
				cin>>nic;
				cout<<"Credit Card Number: ";
				cin>>cc;
				cout<<"CVV:";
				cin>>cvv;
				cout<<"Expiry Date: (in form of month year)";
				cin>>cc_date;
				cout<<"You have successfuly paid the rental amount, Please pick the car from our nearest branch!\n\n\t\t\t\t\t\t\tTHANK YOU!"<<endl;			
			}
			if (payment == "No") {
				goto jump1;
			} 
		}
		if (car == 'c') {
			cout<<"You have selected Prius. Please type the no. of days you want to rent this car for and we will calculate the rent:"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>days;
			cout<<"-------------------------------------"<<endl;
			rent = days * 4000;
			cout<<"According to the no. of days you provided, total rent for this car will be: "<<rent<<" Rs. \nDo you want to proceed to payment? (Yes/No)"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>payment;
			cout<<"-------------------------------------"<<endl;
			if ( payment == "Yes") {
				cout<<"Please Fill your details as well as Credit/Debit Card details for payment:"<<endl;
				cout<<"Full Name: ";
				cin>>name;
				cout<<"NIC Number: ";
				cin>>nic;
				cout<<"Credit Card Number: ";
				cin>>cc;
				cout<<"CVV:";
				cin>>cvv;
				cout<<"Expiry Date: (in form of month year)";
				cin>>cc_date;
				cout<<"You have successfuly paid the rental amount, Please pick the car from our nearest branch!\n\n\t\t\t\t\t\t\tTHANK YOU!"<<endl;			
			}
			if (payment == "No") {
				goto jump1;
			} 
		}
		if (car == 'd') {
			goto jump1;
		}
	}
	//Lexus
	if (company_select == 7) {
		jump7:
		cout<<"-------------------------------------"<<endl;
		cout<<"Please select from any of these cars:"<<endl;
		cout<<"Or type d for car company selection."<<endl;
		cout<<"a. LS 400\n\tModel:2017\n\tRent for 24 hours: 10000 Rs."<<endl;
		cout<<"b. CT 200h\n\tModel:2016\n\tRent for 24 hours: 8000 Rs."<<endl;
		cout<<"c. RX 450h\n\tModel:2014\n\tRent for 24 hours: 75000 Rs."<<endl;
		cin>>car;
		if (car == 'a') {
			cout<<"You have selected LS 400. Please type the no. of days you want to rent this car for and we will calculate the rent:"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>days;
			cout<<"-------------------------------------"<<endl;
			rent = days * 10000;
			cout<<"According to the no. of days you provided, total rent for this car will be: "<<rent<<" Rs. \nDo you want to proceed to payment? (Yes/No)"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>payment;
			cout<<"-------------------------------------"<<endl;
			if ( payment == "Yes") {
				cout<<"Please Fill your details as well as Credit/Debit Card details for payment:"<<endl;
				cout<<"Full Name: ";
				cin>>name;
				cout<<"NIC Number: ";
				cin>>nic;
				cout<<"Credit Card Number: ";
				cin>>cc;
				cout<<"CVV:";
				cin>>cvv;
				cout<<"Expiry Date: (in form of month year)";
				cin>>cc_date;
				cout<<"You have successfuly paid the rental amount, Please pick the car from our nearest branch!\n\n\t\t\t\t\t\t\tTHANK YOU!"<<endl;			
			}
			if (payment == "No") {
				goto jump1;
			} 
		}
		if (car == 'b') {
			cout<<"You have selected CT 200h. Please type the no. of days you want to rent this car for and we will calculate the rent:"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>days;
			cout<<"-------------------------------------"<<endl;
			rent = days * 8500;
			cout<<"According to the no. of days you provided, total rent for this car will be: "<<rent<<" Rs. \nDo you want to proceed to payment? (Yes/No)"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>payment;
			cout<<"-------------------------------------"<<endl;
			if ( payment == "Yes") {
				cout<<"Please Fill your details as well as Credit/Debit Card details for payment:"<<endl;
				cout<<"Full Name: ";
				cin>>name;
				cout<<"NIC Number: ";
				cin>>nic;
				cout<<"Credit Card Number: ";
				cin>>cc;
				cout<<"CVV:";
				cin>>cvv;
				cout<<"Expiry Date: (in form of month year)";
				cin>>cc_date;
				cout<<"You have successfuly paid the rental amount, Please pick the car from our nearest branch!\n\n\t\t\t\t\t\t\tTHANK YOU!"<<endl;			
			}
			if (payment == "No") {
				goto jump1;
			} 
		}
		if (car == 'c') {
			cout<<"You have selected RTX 450h. Please type the no. of days you want to rent this car for and we will calculate the rent:"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>days;
			cout<<"-------------------------------------"<<endl;
			rent = days * 8000;
			cout<<"According to the no. of days you provided, total rent for this car will be: "<<rent<<" Rs. \nDo you want to proceed to payment? (Yes/No)"<<endl;
			cout<<"-------------------------------------"<<endl;
			cin>>payment;
			cout<<"-------------------------------------"<<endl;
			if ( payment == "Yes") {
				cout<<"Please Fill your details as well as Credit/Debit Card details for payment:"<<endl;
				cout<<"Full Name: ";
				cin>>name;
				cout<<"NIC Number: ";
				cin>>nic;
				cout<<"Credit Card Number: ";
				cin>>cc;
				cout<<"CVV:";
				cin>>cvv;
				cout<<"Expiry Date: (in form of month year)";
				cin>>cc_date;
				cout<<"You have successfuly paid the rental amount, Please pick the car from our nearest branch!\n\n\t\t\t\t\t\t\tTHANK YOU!"<<endl;			
			}
			if (payment == "No") {
				goto jump1;
			} 
		}
		if (car == 'd') {
			goto jump1;
		}
	}
	if (company_select == 0) {
		goto jump;
	}
	if (company_select <1 || company_select >7) {
		cout<<"Please select a company from the list!\n";
	}

char suggestion[300];

	 ofstream outfile;
	 outfile.open("afile.dat");
	 cout<<"Suggestions (if any) ";
	 cin.getline(suggestion, 300);
	 
	 outfile<<suggestion<<endl;
	 
	 cout<<": ";
	 cin>>suggestion;
	 cin.ignore();
	 
	 outfile<<suggestion<<endl;
	 outfile.close();
	 
	return 0;
}
