#include<iostream>
#include<random>

using namespace std;

int main(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0, 11);

    int daysUntilExpiration = dist(gen);
    std:: cout << daysUntilExpiration <<"\n";

    switch(daysUntilExpiration){
        case 0:
        std::cout << "your subscription has expired" << endl;
        break;
        
        case 1:
        std::cout << "your subscription expires within a day!" << endl;
        std::cout << "renew now and save 20%" << endl;
        break;

        case 2:
        case 3:
        case 4:
        case 5:
        std::cout << "your subscription expires in " << daysUntilExpiration << "days." << endl;
        std::cout << "Renew now and save 10%!" << endl;
        break;

        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        std::cout << "your subscription will expire soon. renew now!" << endl;
        break;

        default:
        std::cout << "you have an active subscription." <<endl;
        break;
    }
    return 0;
}