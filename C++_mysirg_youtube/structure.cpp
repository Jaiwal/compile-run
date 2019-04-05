

struct book
{

    int bookid;
    char title[20];
    float price;
};



void main(){

  book b1={100,"hi",23.0};
  book b2,b3;
  b2.bookid=101;
  strcpy(b2.title,"voh");
  b2.price=34.0;
  b3=b2;


}
