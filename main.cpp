#include<iostream>
using namespace std;
 class Email{
        public:
        int message;
        void setMessage(){
            cout<<"Enter message"<<endl;
            cin>>message;
            this->message=message;
        }

        void showMessage(){
            cout<<message<<endl;

        }

    };

    class Image{
        public:
        int image;
        void setImage(){
            cout<<"Enter image name with extension"<<endl;
            cin>>image;


            this->image=image;
        }
          void showImage(){
            cout<<image<<endl;

        }
    };

    class Report{
        public:
        int report;
        void setReport(){
            cout<<"Enter report message"<<endl;
            cin>>report;


            this->report=report;
        }
          void showReport(){
            cout<<report<<endl;

        }
    };
int main(){
    Email obj;
    Image obj2;
    Report obj3;


int choice;
int x=0;
while(x!=3){

    cout<<"1. Add a new task"<<endl<<
    "2. List all waiting tasks"<<endl<<
"3. Start processing (launch 5 workers)"<<endl<<
"4. Shutdown everything"<<endl;
cin>>choice;

// if(choice== 1){
switch (choice) {
    case 1:
    int taskType;
    int taskType1;
    do{
        cout<<"Enter task type (1 for email /2 for image /3 for report) or enter 0 to exit"<<endl;
    cin>>taskType;

    switch (taskType){
        case 1:
   obj.setMessage();
   break;
   case 2:
    obj2.setImage();
    break;
    case 3:
          obj3.setReport();
          break;
          default:
          return 0;
    }
        cout<<"Enter 0 to end"<<endl;
    cin>>taskType1;
} while(taskType1 !=0);
break;
default:
return 0;
}}}
