#include<iostream>
#include<math.h>
using namespace std;  

//1...finding maximum of 3 numbers
    /*
    int main()
    {   
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"max is "<<a<<endl;
        }
        else{
            cout<<"max is "<<c<<endl;
        }
    }
    else if(b>c){
        if(b>a){
            cout<<"max is "<<b<<endl;
        }
        else{
            cout<<"max is "<<a<<endl;
        }
    }
    */







//2...checking if the number is odd or even
/*
int main()
{
    int a;
    cin>>a;
    if(a%2==0){
        cout<<"a is a even number"<<endl;
    }
    else{
        cout<<"a is a odd number"<<endl;
    }
}
*/







//3...print all numbers till 100 excluding multiples of 3
/*
int main()
{
for(int i=1;i<=100;i++){
    if(i%3==0){
        continue;
    }
    cout<<i<<" ";
}
}
*/






//4...checking whether the number is prime or not
/*
int main()
{
    int num;
    cin>>num;
    int i=2;
    while(i<num){
        if(num%i==0){
            cout<<"Number is not a prime number"<<endl;
            break;
        }
        i=i+1;
    }
    if(i==num){
        cout<<"Number is a prime number"<<endl;
        }
}
*/







//print all prime numbers from a to b
/*
int main()
{
int a,b;
cin>>a>>b;
for(int num=a;num<=b;num++){
    int i=2;
    while(i<num){
        if(num%i==0){
            cout<<num<<"is not a prime number"<<endl;
            break;
        }
        i=i+1;
    }
    if(i==num){
        cout<<num<<"is a prime number"<<endl;
        }
    }
}
*/







//Write a program to find whether an alphabet is a vowel or a consonant using switch.
/*
int main()
{
char alpha;
cin>>alpha;
switch (alpha)
{
case 'a':
    cout<<"entered alphabet is vowel"<<endl; 
    break;
case 'e':
    cout<<"entered alphabet is vowel"<<endl; 
    break;
case 'i':
    cout<<"entered alphabet is vowel"<<endl; 
    break;
case 'o':
    cout<<"entered alphabet is vowel"<<endl; 
    break; 
case 'u':
    cout<<"entered alphabet is vowel"<<endl; 
    break;   
default:
    cout<<"entered alphabet is consonant"<<endl;
    break;
}
}
*/







//find whether the number is divisible by 2 and 3 both or only by one of them 
/*
int main()
{
int n;
cin>>n;
if(n%2==0 && n%3==0){
    cout<<"number is divisible by 2 and 3 both"<<endl;
}
else if(n%2==0 || n%3==0){
    if(n%2==0){
        cout<<"number is divisible by 2 only"<<endl;
    }
    else{
        cout<<"number is divisible by 3 only"<<endl;
    }   
}
else{
    cout<<"number is neither divisible by 2 or 3"<<endl;
}
}
*/










//making a star pattern of rectangle
/*
int main()
{
for(int i=1;i<=5;i++){
    for(int j=1;j<=4;j++){
        cout<<"* ";
    }
    cout<<endl;
}
}
*/






//making a star pattern of hollow rectangle (5 rows & 4 cols)
/*
int main()
{
for(int row1=1;row1<=4;row1++){
    cout<<"* ";
}
cout<<endl;
for(int row=1;row<=3;row++){
    for(int col=1;col<=4;col++){
        if(col==1 || col==4){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
}
for(int row1=1;row1<=4;row1++){
    cout<<"* ";
}
cout<<endl;
}
*/





//making a star pattern of hollow rectangle (rows and cols by input)
/*
int main()
{
int row,col;
cin>>row>>col;
for(int i=1;i<=row;i++){
    if(i==1 || i==row){
        for(int j=1;j<=col;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    else{
        for(int k=1;k<=col;k++){
            if(k==1 || k==col){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        } 
        cout<<endl;
    }
}
}
*/







//inverted hald pyramid
/*
int main()
{
int row;
cin>>row;
for(int i=0;i<row;i++){
    for(int j=1;j<=(row-i);j++){
        cout<<"* ";
    }
    cout<<endl;
}
}
*/








//inverted pyramid pattern formed from numbers (1 to n) in each row according to row number
/*
int main()
{
int n;
cin>>n;
for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
        cout<<j<<" ";
    }
    cout<<endl;
}
}
*/









//half pyramid after 180 degree rotation
/*
int main()
{
int n;
cin>>n;
for(int i=0;i<n;i++){
    for(int j=1;j<=n;j++){
        if(j>=(n-i)){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
}
}
*/









//half pyramid using numbers
/*
int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<i<<" ";
    }
    cout<<endl;
}
}
*/











//Floyd's Triangle
/*                                             
int main()
{
int n;
cin>>n;
int a=1;
for(int j=1;j<=n;j++){
        for(int k=1;k<=j;k++){
            cout<<a++<<" ";
        }
        cout<<endl;
    }
}









//butterfly pattern
/*
int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n*2;j++){
        if((j<=i) || (j>(n*2-i))){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
}
for(int a=n;a>=1;a--){
    for(int b=1;b<=n*2;b++){
        if((b<=a) || (b>(n*2-a))){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
}
}
*/








//0-1 pattern half pyramid
/*
int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++){
    if(i%2!=0){
        for(int j=1;j<=i;j++){
            if(j%2!=0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }
    }
    else{
        for(int k=1;k<=i;k++){
            if(k%2!=0){
                cout<<"0 ";
            }
            else{
                cout<<"1 ";
            }
        }
    }
    cout<<endl;
}
}


              //by observing very minutely
                int n;
                cin>>n;
                for(int i=1;i<=n;i++){
                    for(int j=1;j<=i;j++){
                        if((i+j)%2==0){
                            cout<<"1 ";
                        }
                        else{
                            cout<<"0 ";
                        }
                    }
                    cout<<endl;
                }
*/








//rhombus pattern
/*
int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=(n+(n-i));j++){
        if(j<=(n-i)){
            cout<<"  ";
        }
        else{
            cout<<"* ";
        }
    }
    cout<<endl;
}
}
*/









//number pattern in perfect pyramid shape
/*
int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=(i+(n-i));j++){
        if(j<=(n-i)){
            cout<<"  ";
        }
        else{
            cout<<j-(n-i)<<"   ";
        }
    }
    cout<<endl;
}
}
*/








//Palindromic pattern







//to reverse the given number
/*
int main()
{
int n;
cin>>n;
int reverse=0;
while(n>0){
    int lastdigit=n%10;
    reverse=reverse*10 + lastdigit;
    n=n/10;
}
cout<<reverse<<endl;
}
*/








 //to check whether the given number is a armstrong number
/*
int main()
{
int n;
cin>>n;
int orignaln=n;
int sum=0;
while(n>0){
    int lastdigit=n%10;
    sum+=lastdigit*lastdigit*lastdigit;
    n=n/10;
}

if(orignaln==sum){
    cout<<orignaln<<" is a amstrong number"<<endl;
}
else{
    cout<<orignaln<<" is not a amstrong number"<<endl;
}
}
*/









//function for factorial of n
/*
{
void factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    cout<<f;
}
int main(){
    int n;
    cin>>n;
    factorial(n);

    return 0;
}
*/







//calculate nCr
/*
int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}

void nCr(int n,int r){
    int nCr=factorial(n)/(factorial(r)*factorial(n-r));
    cout<<nCr;
}
int main(){
    int n,r;
    cin>>n>>r;
    nCr(n,r);
    return 0;
}
*/







//creating pascal triangle of n rows
/*
int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int nCr(int n,int r){
    int nCr=factorial(n)/(factorial(r)*factorial(n-r));
    return nCr;
}

void pascal(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pascal(n);
    return 0;
}
*/






/*
//check pythagorian triplet
bool pythago(int a,int b,int c){
    if(a*a+b*b==c*c){
        return true;
    }
    else if(c*c+b*b==a*a){
        return true;
    }
    else if(a*a+c*c==b*b){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    pythago(a,b,c);
    if(pythago(a,b,c)){
        cout<<"pythagorian triplet";
    }
    else{
        cout<<"not a pythagorian triplet";
    }
    return 0;
}
*/







/*
//1...binary to decimal
void bintodec(int n){
    int i=0;
    int num=0;
    while(n!=0){
        int lastdigit=n%10;
        num=num+lastdigit*pow(2,i);
        i++;
        n=n/10;
    }
    cout<<num<<endl;
}

//2...octal to decimal
void octtodec(int n){
    int i=0;
    int num=0;
    while(n!=0){
        int lastdigit=n%10;
        num=num+lastdigit*pow(8,i);
        i++;
        n=n/10;
    }
    cout<<num<<endl;
}

//3...decimal to binary
void dectobin(int n){
    int bin=0;
    int i=0;
    while(n!=0){
        int lastbit=n&1;    //& works in binary system only
        bin=bin*10+lastbit;
        i++;
        n=n>>1;
    }
    cout<<reverse(bin)<<endl;
}

//4...decimal  to octal
void dectooct(int n){
    int oct=0;
    int i=0;
    while(n!=0){
        int lastdigitofoct=n%8;
        oct=oct+lastdigitofoct*pow(10,i);
        i++;
        n=n/8;
    }
    cout<<oct<<endl;
}

//conversions of hexadecimal will do later after arrays  and strings
//convert negative integer to binary

int main(){
    int n,m,p,s;
    cin>>n>>m>>p>>s;
    bintodec(n);
    octtodec(m);
    dectobin(p);
    dectooct(s);
    return 0;
}
*/







/*
//adding 2 binary numbers
int addbinary(int a,int b){
    int ans=0;
    int carry=0;
    while(a!=0 and b!=0){
        int lastdigita=a%10;
        int lastdigitb=b%10;
        if(lastdigita==0 && lastdigitb==0){
                ans=ans*10 + carry;
                carry=0;
            }           
        if((lastdigita==0 && lastdigitb==1) || (lastdigita==1 && lastdigitb==0) ){
            if(carry==0){
                ans=ans*10 + 1;
                carry=0;
            }
            else{
                ans=ans*10 + 0;
                carry=1;
            }            
        }
        if(lastdigita==1 && lastdigitb==1){
            ans=ans*10 + carry;
            carry=1;
        }
        a=a/10;
        b=b/10;
    }
    while(a!=0){
        int lastdigita=a%10;
        if(lastdigita==1){
            if(carry==0){
                ans=ans*10+1;
                carry=0;
            }
            else{
                ans=ans*10+0;
                carry=1;
            }
        }
        else{
            ans=ans*10+carry;
            carry=0;
        }
        a=a/10;
    }       
    while(b!=0){
        int lastdigitb=b%10;
        if(lastdigitb==1){
            if(carry==0){
                ans=ans*10+1;
                carry=0;
            }
            else{
                ans=ans*10+0;
                carry=1;
            }
        }
        else{
            ans=ans*10+carry;
            carry=0;
        }
        b=b/10;
    }       
    if(carry==1){
            ans=ans*10+1;
            carry=0;
        }
    return ans;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<reverse(addbinary(a,b))<<endl;
    return 0;
}
*/




    
   
