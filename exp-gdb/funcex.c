int funcA(int a){
    return funcB(a);
}

int funcB(int b){
    return b+1 ;
}

int main(){
    int m = funcA(1);
    m++;
    m--;
    return 0;
}
