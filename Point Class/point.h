class point
{
public:
  point(double x = 0, double y = 0){this->x = x; this-> y=y;}
  //point (double x, double y);
  double get_x() const{return x;}
  double get_y() const{return y;}

protected:
  void set_x(double x){this->x=x;}
  void set_y(double y){this->y=y;}

private:
  double x, y;
};

class Circle: protected point
{
public:
  circle(double radius = 1) {this->radius = radius;}//set the radius for now
  double get_radius() const{return radius;}// get the radius

private:
  double radius;

};
