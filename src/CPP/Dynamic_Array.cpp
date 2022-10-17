#include <iostream>
using namespace std;
class Dynamic_Arr{
    private:
        int size;
        int capacity;
        int *begin;
        void expand(){
            capacity*=2;
            begin=(int *)realloc(begin,capacity*sizeof(int));
        }
        void compress(){
            capacity/=2;
            begin=(int *)realloc(begin,capacity*sizeof(int));
        }
        void check_size(){
            if(size>=capacity){
                expand();
            }
            if (size<=(capacity/2)){
                compress();
            }
        }
    public:
    Dynamic_Arr(int cap){
        size=0;
        capacity=cap;
        begin=(int *) malloc(capacity*sizeof(int));
    }
    void set(int index,int val){
        if(index>=capacity){
            expand();
        }
        *(begin+index)=val;
        check_size();
    }
    int get(int index){
        if(index>=capacity){
           return -1;
        }
        return *(begin+index);
        check_size();
    }
    void push(int val){
        if(size+1>=capacity){
            expand();
        }
        *(begin+size)=val;
        size++;
        check_size();
    }
    int pop(){
        if(size==0){
            return -1;
        }
        size--;
        return *(begin+size);
        check_size();
    }

    int getsize(){
        return size;
    }
    int remove(int index){
        if(index>=size){
            return -1;
        }
        int output=*(begin+index);
        for(int i=index;i<size-1;i++){
            *(begin+i)=*(begin+i+1);
        }
        size--;
        return output;
    }

};
int main(){
    Dynamic_Arr arr1(2);
    for(int i=0;i<10;i++){
        arr1.push(i*i);
    }
    for (int i=0;i<arr1.getsize();i++){
        printf("%d,",arr1.get(i));
    }
    printf("\n%d\n",arr1.pop());
    for (int i=0;i<arr1.getsize();i++){
        printf("%d,",arr1.get(i));
    }
    arr1.remove(2);
    printf("\n");
    for (int i=0;i<arr1.getsize();i++){
        printf("%d,",arr1.get(i));
    }
}