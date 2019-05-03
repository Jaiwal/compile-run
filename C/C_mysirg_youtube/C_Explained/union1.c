union item
{
    int x;float y;char z;

};

void main()
{
    union item i1;
    i1.x=5;
    printf("x=%d\n",i1.x); //here values are overwritten on already made variable bcz at a time we can use only one first x ko mili then y ko jb mili to x =0 hogya uska ni kch jo latest operation hga usko memory mlni
    i1.y=3.5;
    printf("y=%f\n",i1.y);
    i1.z='a';
    printf("z=%c\n",i1.z);
    getch();
}
