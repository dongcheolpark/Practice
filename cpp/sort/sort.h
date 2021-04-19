#ifndef SORT_H
#define SORT_H
void swap(int & a, int & b);
class s {
    public:
        virtual void sort(int * arr,int n) {}
}; 
class select : public s {
    public:
        void sort(int * arr,int n);
};
#endif