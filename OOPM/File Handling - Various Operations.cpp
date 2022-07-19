#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
class book
{
    char title[20];
    float price;
public:
    int code;
    void getdata()
    {
        cout<<"Enter the Code of the Book : ";
        cin>>code;
        cout<<"Enter the Title of the Book : ";
        cin>>title;
        cout<<"Enter the Price of the Book : ";
        cin>>price;
    }
    void display()
    {
        cout<<code<<"\t"<<title<<"\t"<<price<<endl;
    }
};
int main()
{
    fstream fout;
    book b;
    int ch;
    char ans;
    do{
        system("cls");
        cout<<"1. Insertion of New Record. "<<endl;
        cout<<"2. Display all the Records. "<<endl;
        cout<<"3. Searching "<<endl;
        cout<<"4. Deletion of a Record. "<<endl;
        cout<<"5. Modification of the Record. "<<endl;
        cout<<"Enter your Choice [1-5] : ";
        cin>>ch;
        if(ch==1)
        {
            fout.open("Book_Data.txt",ios::app);
            b.getdata();
            fout.write((char*)&b,sizeof(b));
            fout.close();
        }
        else if(ch==2)
        {
            fout.open("Book_Data.txt",ios::in);
            fout.seekg(0);
            while(fout.read((char*)&b,sizeof(b)))
            {
                b.display();
            }
            fout.close();
        }
        else if(ch==3)
        {
            int mcode;
            fout.open("Book_Data.txt",ios::in);
            fout.seekg(0);
            cout<<"Enter the Code Number of the Book for Searching : ";
            cin>>mcode;
            while(fout.read((char*)&b,sizeof(b)))
            {
                if(b.code==mcode)
                {
                    b.display();
                }
            }
            fout.close();
        }
        else if(ch==4)
        {
            fstream fout1,fout2;
            fout1.open("Book_Data.txt",ios::in);
            fout2.open("temp.txt",ios::app);
            int mcode;
            cout<<"Enter the Code Number of Book to be Deleted : ";
            cin>>mcode;
            fout1.seekg(0);
            while(fout1.read((char*)&b,sizeof(b)))
            {
                if(mcode!=b.code)
                {
                    fout2.write((char*)&b,sizeof(b));
                }
            }
            fout1.close();
            fout2.close();
            remove("Book_Data.txt");
            rename("temp.txt","Book_Data.txt");
        }
        else if(ch==5)
        {
            fout.open("Book_Data.txt",ios::in|ios::ate);
            fout.seekg(0);
            while(fout.read((char*)&b,sizeof(b)))
            {
                b.display();
            }
            int bytes = fout.tellg();
            int n = (bytes/sizeof(b));
            cout<<"The Total Number of Objects : "<<n<<endl;
            cout<<"Total Number of Bytes : "<<bytes<<endl;
            cout<<"Enter the Object Number to be Updated : ";
            int object;
            cin>>object;
            int location = (object-1)*sizeof(b);
            fout.seekp(location);
            cout<<"Enter the New Value of the Record :- "<<endl;
            b.getdata();
            fout.write((char*)&b,sizeof(b));
            fout.close();
            fout.open("Book_Data.txt",ios::in);
            fout.seekg(0);
            while(fout.read((char*)&b,sizeof(b)))
            {
                b.display();
            }
            fout.close();
        }
        else
        {
            cout<<"You have Entered Wrong Choice!..."<<endl;
        }
        cout<<"Do you want to Run this Program Again[Y/N] : ";
        cin>>ans;
    }
    while(ans=='y'||ans=='Y');
    return 0;
}
