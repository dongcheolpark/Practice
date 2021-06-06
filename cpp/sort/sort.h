#ifndef SORT_H
#define SORT_H
template<typename T>
class s {
    public:
        virtual void sort(T * arr,T n) {}
    protected:
        void swap(T &a,T & b) {
            T tmp = a;
            a = b;
            b = tmp;
        }
}; 

template<typename T>
class select : public s {
    public:
        void sort(T * arr,T n);
};
template<typename T>
class bubble : public s {
    public:
        void sort(T * arr,T n);
};
template<typename T>
class merge : public s {
    public:
        void sort(T * arr,T n);
};
#endif