class Point
{
  public:
  Point(int=0,int=0);
  Point(Point &);
  int getx() const;
  int gety() const;
  private:
  int x_;
  int y_;
  
};
