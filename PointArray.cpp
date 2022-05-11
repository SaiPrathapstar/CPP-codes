#include<iostream>
using namespace std;
class Point
{
    public:
    int x , y ;
    Point( int a = 0 , int b = 0 )
    {
        x = a;
        y = b;
    }
};
class PointArray : Point
{
    Point *Array;
    int size;
    public:
    PointArray( int s = 0 )
    {
        Array = new Point[0]; 
    }
    PointArray( Point p[] , int size )
    {
        this->size = size;
        Array = new Point[size];
        for( int i = 0 ; i < size ; i++ )
        {
            Array[i] = p[i];
        }
    }
    ~PointArray()
    {
        delete[] Array;
    }
    void resize( int newsize )
    {
        Point *pts = new Point[newsize];
        int minsize = (size>newsize) ? newsize : size;
        for(int i = 0 ; i < minsize ; i++)
        {
            pts[i] = Array[i];
        }
        delete[] Array;
        size = newsize;
        Array = pts;
    }
    void clear()
    {
        resize(0);
    }
    void push_back(const Point &p)
    {
        resize(size+1);
        Array[size-1] = p;
    }
    void insert( const int pos , const Point &p )
    {
        resize(size+1);
        for(int i = size - 1 ; i > pos ; i-- )
        {
            Array[i-1] = Array[i]; 
        }
        Array[pos] = p;
    }
    void remove( const int pos )
    {
        if(pos>0&&pos<size)
        {
        for( int i = pos-1 ; i < size-1 ; i++ )
        {
            Array[i] = Array[i+1];
        }
        resize(size-1);
        }
    }
    const int getsize() const
    {
        return size;
    }
    Point *getposition(const int pos)
    {
        return &Array[pos];
    }
    const Point *getposition( const int pos ) const
    {
        return &Array[pos];
    }
};
int main()
{
    Point Square[4] ;
    Point fir(0,0) ;
    Point sec(1,1) ;
    Point thi(2,2) ;
    Point fou(3,3) ;
    Square[0] = fir;
    Square[1] = sec ;
    Square[2] = thi;
    Square[3] = fou;
    cout<<"Success"<<endl;
    cout<<fir.getsize()<<endl;
}