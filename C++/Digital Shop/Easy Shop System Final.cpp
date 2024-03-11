#include <iostream>
#include<string.h>
#include<iomanip> //used to display 0's after constant decimal place
using namespace std;
float CP[800];
float SP[1000];
float IQ[200];
float TCP[50];
float TSP[50];
float Sellss=0;
string ID[20];
string Product[1000];
string ProductID[20];
string Name[20];
float Salary[20];
int n,sum1,sum2;
int TotalCostingPrice();
int TotalSellingPrice();
int DailyTransaction();
int result1(int x, int y);
void checkProfitloss();
void Search_Employee_Detail();
void Search_Product_Detail();
void DisplayProduct();
void DisplayEmployee();
void TotalProductPrice();
void Display_Product_Detail();
void Display_Employee_Detail();
void updateProductDetail();
void AddBalance();
void clear();
void ShowEntries();
void updateEmployeeDetail();
void ProductDetail();
void  AddEntries();
void Developers();
int pp=0;
//used to add and calculate daily Transaction
int DailyTransaction(){
clear();
int k,n,m;
float Sells=0;
float Sell=0;
string Prod;
 cout<<" How many type of product you sell?"<<endl;
 cin>>n;
{
    for(int j=0;j<n;j++){
    cout<<"Enter product you sell "<<endl;
    cin>>Prod;
for(int i=0;i<1000;i++){
    if(Prod==Product[i]){
        k=i;
        break;}
    else if (i==19)
    cout<<"No match ID form the data"<<endl;
    else
        continue;
}
   cout<<"Enter the number of the product you sold"<<endl;
   cin>>m;
      IQ[k]=IQ[k]-m;
   cout<<"Your left product is\t"<<IQ[k]<<endl;
      Sell=m*SP[k];
   cout<<"the total sold price you get is\t"<<Sell<<endl;
      Sells+=Sell;
    }
}
Sellss+=Sells;
return Sells;
}

//used to report or display account(sells money)
     void AddBalance(){
      clear();

       cout<<"your total balance is\t"<<Sellss<<endl;
 }

    void clear(){ //used to clear screen
    system("ClS");
}

//used to calculate profit
int result1(int x, int y){
    int  profit = y - x ;
    return profit;
}

//used to show and test a profit

void checkProfitloss(){
    clear();
    TotalCostingPrice();
    TotalSellingPrice();
    for (int i=0;i<pp;i++){
        TCP[i]=IQ[i]*CP[i];
        TSP[i]=IQ[i]*SP[i];
   }

    sum1=TotalCostingPrice();
    sum2=TotalSellingPrice();

    if (sum1 == sum2){
        cout << "No profit nor Loss"<<endl;
   }
    else if (sum2 > sum1){
        cout<<"profit gained = "<<result1(sum1,sum2)<<endl;
   }
   else{
        cout<<"loss incurred = "<<result1(sum2,sum1)<<endl;
   }

}

//used to calculate total sell of all of the products
int TotalSellingPrice(){
    int sum2=0;

    for (int i=0;i<pp;i++){
        sum2+=TSP[i];
    }

    return sum2 ;
}

// Calculate total cost of the buying the available products
int TotalCostingPrice(){
    int sum1=0;

    for (int i=0;i<pp;i++)

    {
     sum1+=TCP[i];

    }
    return sum1 ;

}
// Calculate total cost of the buying all products

void TotalProductPrice(){ //Used to calculate the sum of the prices of the product
    clear();

     for (int i=0;i<pp;i++){

    TCP[i]=IQ[i]*CP[i];
    TSP[i]=IQ[i]*SP[i];

   }

    sum1=TotalCostingPrice();
        cout<<"Total Costing Price=" << TotalCostingPrice()<<endl;
    sum2=TotalSellingPrice();
        cout<<"Total selling Price=" <<TotalSellingPrice()<<endl;


}
    void Search_Employee_Detail(){ //used to find the particular employee detail
     clear();
      int f;
      string x;
        cout<<"Enter Employee ID to search"<<endl;
        cin>>x;
    for(int i=0;i<20;i++){
    if(x==ID[i]){
        f=i;
        break;}
    else if (i==19)
     cout<<"No match ID form the data"<<endl;
    else

     continue;

    }
   cout<<Name[f]<<endl;
   cout<<"Salary="<<Salary[f]<<fixed<<setprecision(2)<<endl;
}

//used to find any particular available product
  void Search_Product_Detail(){
   clear();
   int k;
   string Prod;
     cout<<"Enter product ID to search"<<endl;
     cin>>Prod;
for(int i=0;i<20;i++){
    if(Prod==ProductID[i]){
        k=i;
        break;}
    else if (i==19)
      cout<<"No match ID form the data"<<endl;
    else
        continue;
}
    cout<<Product[k]<<endl;
    cout<<"Quantity="<<IQ[k]<<endl;
    cout<<"Cost Price="<<fixed<<setprecision(2)<<CP[k]<<endl;
    cout<<"Selling Price="<<fixed<<setprecision(2)<<SP[k]<<endl;
}
// used to print the products list
void DisplayProduct(){
    clear();
    for(int i=0;i<20;i++)
      if(Product[i]=="")
        break;
    else
    {
     cout<<Product[i]<<endl;
    }

}
// used to print the employee list
void DisplayEmployee(){
    clear();
    for(int i=0;i<20;i++)
      if(Name[i]=="")
        break;
    else
    {
     cout<<Name[i]<<endl;
    }

}
//used to print product detail
void Display_Product_Detail(){
    clear();
   for(int i=0;i<20;i++)
    if (Product[i]=="")
        break;
    else
    {
     cout<<Product[i]<<endl;
     cout<<"ID="<<ProductID[i]<<endl;
     cout<<"Quantity="<<IQ[i]<<endl;
     cout<<"Costing Price="<<fixed<<setprecision(2)<<CP[i]<<endl;
     cout<<"Selling Price="<<fixed<<setprecision(2)<<SP[i]<<endl<<"========================"<<endl;
    }
}
//used to print employee detail
void Display_Employee_Detail(){
clear();
for(int i=0;i<20;i++)
    if (Name[i]=="")
        break;
    else
    {
     cout<<Name[i]<<endl;
     cout<<"Employee ID="<<ID[i]<<endl;
     cout<<"Salary="<<fixed<<setprecision(2)<<Salary[i]<<endl<<"======================"<<endl;
}
}
//used to change and modify particular product
void updateProductDetail(){
    clear();
    int k;
    string Prod;
     cout<<"Enter product ID to modify"<<endl;
     cin>>Prod;
for(int i=0;i<20;i++){
    if(Prod==ProductID[i]){
        k=i;
        break;}
    else if (i==19)
     cout<<"No match ID form the data"<<endl;
    else
        continue;
    }

        cout<<"the name of the product is\t"<<Product[k]<<endl;
        cout<<"Enter the new name of the product\t"<<endl;
        getline(cin>>ws,Product[k]);
        cout<<"the ID of the product is\t"<<ProductID[k]<<endl;
        cout<<"Enter the new ID of the product\t"<<endl;
        cin>>ProductID[k];
        cout<<"the quantity of the product is\t"<<IQ[k]<<endl;
        cout<<"Enter the new quantity of the product\t"<<endl;
        cin>>IQ[k];
        cout<<"the costing price of the product is\t"<<CP[k]<<endl;
        cout<<"Enter the new costing price of the product\t"<<endl;
        cin>>CP[k];
        cout<<"the selling price of the product is"<<SP[k]<<endl;
        cout<<"Enter the new selling price of the product\t"<<endl;
        cin>>SP[k];
    }

//used to change and modify employee detail
void updateEmployeeDetail(){
  clear();
  int k;
  string empl;
    cout<<"Enter employee ID to modify"<<endl;
    cin>>empl;
for(int i=0;i<20;i++){
    if(empl==ID[i]){
        k=i;
        break;}
    else if (i==19)
     cout<<"No match ID form the data"<<endl;
    else
        continue;
    }

     cout<<"The name of employee is\t"<<Name[k]<<endl;
     cout<<"Enter the new name of the employee"<<endl;
     getline(cin>>ws,Name[k]);
     cout<<"The ID of employee\t"<<ID[k]<<endl;
     cout<<"Enter new ID of the employee"<<endl;
     cin>>ID[k];
     cout<<"The Salary of employee is\t"<<Salary[k]<<endl;
     cout<<"Enter new Salary of the employee"<<endl;
     cin>>Salary[k];
}

//used to add product information

void ProductDetail()
{
    clear();

    cout<<"Enter the quantity of the products"<<endl;
    cin>>n;

    for (int i=pp;i<(n+pp);i++)
    {

        cout<<"Enter the name of the product\t"<<i+1<<endl;
        getline(cin>>ws,Product[i]);
        cout<<"Enter the product ID of the product\t"<<i+1<<endl;
        cin>>ProductID[i];
        cout<<"Enter the quantity of the individual product\t"<<i+1<<endl;
        cin>>IQ[i];
        cout<<"Enter the costing price of the product\t"<<i+1<<endl;
        cin>>CP[i];
        cout<<"Enter the selling price of the product\t"<<i+1<<endl;
        cin>>SP[i];

    }
    pp+=n;
}


//used to add an employee detail
int employeeN=0;
void inputEmployeeDetail(){
clear();
 cout<<"Enter Number of employee"<<endl;
 cin>>n;{
for(int i=employeeN;i<(employeeN+n);i++){

  cout<<"Enter Name of employee"<<i+1<<endl;
  getline(cin>>ws,Name[i]);
  cout<<"Enter ID of employee"<<i+1<<endl;
  cin>>ID[i];
  cout<<"Enter Salary of employee"<<i+1<<endl;
  cin>>Salary[i];
}
}
employeeN+=n;}

//used to add information of products and employees

void  AddEntries(){
clear();
cout<<" \t\t\t__________________________________________\t\t\t"<<endl;
 cout<<"\t\t\t||Enter 1 to input Product detail\t""||"""<<endl;
 cout<<"\t\t\t||Enter 2 to input Employee detail\t""||"<<endl;
 cout<<"\t\t\t||Enter 3 to Exit\t\t\t""""""""""""""""""||"<<endl;
 cout<<"\t\t\t||\t\t\t\t\t||"<<endl;
 cout<<"\t\t\t||______________________________________||\t\t\t"<<endl;

  char m;
  cin>>m;
     if(m=='1'){
       ProductDetail();
}
     else if(m=='2'){
       inputEmployeeDetail();
}
     else if(m=='3'){
       exit(0);
}
else
  cout<<"Invalid option. Please select one of the available options\n";
}

//used to print the added entries
void ShowEntries(){
clear();

 cout<<"\t\t\t*****************************************"<<endl;
 cout<<"\t\t\t========================================="<<endl;
 cout<<"\t\t\t*****************************************"<<endl;
   cout<<"\t\t\tEnter 1 to display employees list"<<endl;
   cout<<"\t\t\tEnter 2 to display product list"<<endl;
   cout<<"\t\t\tEnter 3 to display Product detail"<<endl;
   cout<<"\t\t\tEnter 4 to display Employee detail"<<endl;
   cout<<"\t\t\tEnter 5 to display Total Product Price"<<endl;
   cout<<"\t\t\tEnter 6 to Exit"<<endl;
cout<<"\t\t\t*****************************************"<<endl;
cout<<"\t\t\t========================================="<<endl;
cout<<"\t\t\t*****************************************"<<endl;
char z;
   cin>>z;
   if(z=='1')
    {
      DisplayEmployee();
    }
   else if(z=='2')
   {
     DisplayProduct();
   }
   else if(z=='3')
   {
    Display_Product_Detail();
   }
   else if(z=='4')
   {
    Display_Employee_Detail();
   }
   else if(z=='5')
   {
     TotalProductPrice();
   }
   else if(z=='6')
   {
       exit(0);
   }
   else
   {
       cout<<"Invalid option. Please select one of the available options\n";
   }
   }


void admin(){
clear();
char u='1';

    if (u=='1'){
     cout<<"\n\t\t\t* * * * * * * * * * * * * * * *\n";
 	 cout<<"\n\t\t\t==============================\n";
 	 cout<<"\n\t\t\t\n";
	 cout<<"\n\t\t\t     Shop Management System  \n\n";
	 cout<<"\n\t\t\t==============================\n\n";
	 cout<<"\n\t\t\t* * * * * * * * * * * * * * * *\n";
 	 cout<<"\n\t\t\t1. Add Entries\n\n\t\t\t2. Show Entries\n\n\t\t\t3. Profit\n\n\t\t\t4. Search Product Details\n\n\t\t\t5. Search Employee Details\n\n\t\t\t6. Modify Product Details\n\n\t\t\t7. Modify Employee Details\n\n\t\t\t8. Add daily Transaction\n\n\t\t\t9. Daily Balance\n\n\t\t\t0. Exit\n\n\t\t\t";;
     cout<<"\n\n\t\t\tSelect your choice";
    }

    cin>>u;
    if(u=='1')
      AddEntries();
    else if(u=='2')
        ShowEntries();
    else if(u=='3')
        checkProfitloss();
    else if(u=='4')
        Search_Product_Detail();
    else if(u=='5')
        Search_Employee_Detail();
    else if(u=='6')
        updateProductDetail();
    else if(u=='7')
        updateEmployeeDetail();
    else if(u=='8')
        DailyTransaction();
    else if(u=='9')
        AddBalance();
    else if(u=='0')
        exit(0);
    else
        cout<<"Invalid option. Please select one of the available options\n";
    }


//menu

int main(){
clear();
char ch;
char check;
do{
        cout<<"\n \t\t\t=========================\n";
        cout<<"\n\t\t\t   WELLCOME to Your SHOP  \n";
        cout<<"\n \t\t\t=========================\n\n";
        cout<<"\n \t\t\t* * * * * * * * * * * * ";
        cout<<"\n\t\t\t  1. ENTER SYSTEM";
        cout<<"\n\t\t\t  2. DEVELOPERS";
        cout<<"\n\t\t\t  3. EXIT";
        cout<<"\n\t\t\t* * * * * * * * * * * *\n";
        cout<<"\n\t\t\t Enter Your choice ";
        cin>>ch;
           switch(ch){
             case '1':
                admin();
                break;
             case '2':
                Developers();
                break;
            case '3':
                exit(0);
                break;
             default:
                cout<<"Enter valid choice\n";
                break;
        }
cout<<"\t\tDo you want to continue? ";
cin>>check;
clear();
}
while(check!='n'||check=='y');

}
void Developers(){
    cout<<"\tADDIS ABABA SCIENCE AND TECHNOLOGY UNIVERSITY"<<endl;
 cout<<"\tGroup 6 \t\tSection E \n\n"<<endl;
 cout<<"No.   Name              ID"<<endl;
cout<<"1. Bisrat Teklu ........ETS0307/13"<<endl;
cout<<"2. Bruk Shume...........ETS0315/13"<<endl;
cout<<"3. Dagim Befirdu........ETS0327/13"<<endl;
cout<<"4. Dagim Ejigu..........ETS0328/13"<<endl;
cout<<"5. Bruk Samuel..........ETS0314/13"<<endl;
cout<<"6. Bruktawit Yetenayet..ETS0300/13"<<endl;
}
/*Section E Group 6 members 
1. Bisrat Teklu .......ETS0307/13
2. Bruk Shume.......ETS0315/13
3. Dagim Befirdu......ETS0327/13
4. Dagim Ejigu...........ETS0328/13
5. Bruk Samueal.......ETS0314/13
6. Bruktawit Yetenayet......ETS0300/13*/
