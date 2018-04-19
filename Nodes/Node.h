//#define  NODE_H
using namespace std;
#include <cstdlib>
class node
{
public:
  typedef double value_type;

  //Constructor
  node(const value_type& data = value_type(), node* link = NULL){}

  // Member functions to set the data field
  void set_data(const value_type& new_data)
  {
    data_field = new_data;
  }

  //Member function to set link field;
  void set_link(node* new_link)
  {
    link_field = new_link;
  }
  //Member function to retrieve the current data
  value_type data() const
  {
    return data_field;
  }

  //Member functions to retrieve current link
  const node* link() const
  {
    return link_field;
  }
  node* link()
  {
    return link_field;
  }
private:
  value_type data_field;
  node*link_field;
};
