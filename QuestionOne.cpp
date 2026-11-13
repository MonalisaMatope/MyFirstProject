#include<iostream>
#include<random>

int main(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0, 11);

    int daysUntilExpiration = dist(gen);
    std:: cout << daysUntilExpiration <<"\n";

   
    if (daysUntilExpiration==0){
            std:: cout << "Your subscription has expired." <<"\n";
    }else if (daysUntilExpiration==1) {
            std:: cout << "Your subscription expires within a day!"<<"\n";
            std:: cout << "Renew now and save 20%!" <<"\n";
    }else if (daysUntilExpiration<=5) {
            std:: cout <<"Your subscription expires in "<< daysUntilExpiration <<"\n";
            std:: cout <<"Renew now and save 10%! "<<"\n";
    } else if(daysUntilExpiration<=10) {
            std:: cout << "Your subscription will expire soon. Renew now!" <<"\n";
    } else if (daysUntilExpiration>10){
            std:: cout << "You have an active subscription."<<"\n";
    }

    return 0;
}