// Generated by gencpp from file force_msg/Force.msg
// DO NOT EDIT!


#ifndef FORCE_MSG_MESSAGE_FORCE_H
#define FORCE_MSG_MESSAGE_FORCE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace force_msg
{
template <class ContainerAllocator>
struct Force_
{
  typedef Force_<ContainerAllocator> Type;

  Force_()
    : force_x()
    , force_y()
    , force_z()  {
    }
  Force_(const ContainerAllocator& _alloc)
    : force_x(_alloc)
    , force_y(_alloc)
    , force_z(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _force_x_type;
  _force_x_type force_x;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _force_y_type;
  _force_y_type force_y;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _force_z_type;
  _force_z_type force_z;





  typedef boost::shared_ptr< ::force_msg::Force_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::force_msg::Force_<ContainerAllocator> const> ConstPtr;

}; // struct Force_

typedef ::force_msg::Force_<std::allocator<void> > Force;

typedef boost::shared_ptr< ::force_msg::Force > ForcePtr;
typedef boost::shared_ptr< ::force_msg::Force const> ForceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::force_msg::Force_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::force_msg::Force_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace force_msg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'force_msg': ['/home/zzz/force_reflection/src/force_msg/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::force_msg::Force_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::force_msg::Force_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::force_msg::Force_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::force_msg::Force_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::force_msg::Force_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::force_msg::Force_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::force_msg::Force_<ContainerAllocator> >
{
  static const char* value()
  {
    return "775e4325e2a6aa8d2d055511b3592b1c";
  }

  static const char* value(const ::force_msg::Force_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x775e4325e2a6aa8dULL;
  static const uint64_t static_value2 = 0x2d055511b3592b1cULL;
};

template<class ContainerAllocator>
struct DataType< ::force_msg::Force_<ContainerAllocator> >
{
  static const char* value()
  {
    return "force_msg/Force";
  }

  static const char* value(const ::force_msg::Force_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::force_msg::Force_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32[] force_x\n\
int32[] force_y\n\
int32[] force_z\n\
\n\
";
  }

  static const char* value(const ::force_msg::Force_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::force_msg::Force_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.force_x);
      stream.next(m.force_y);
      stream.next(m.force_z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Force_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::force_msg::Force_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::force_msg::Force_<ContainerAllocator>& v)
  {
    s << indent << "force_x[]" << std::endl;
    for (size_t i = 0; i < v.force_x.size(); ++i)
    {
      s << indent << "  force_x[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.force_x[i]);
    }
    s << indent << "force_y[]" << std::endl;
    for (size_t i = 0; i < v.force_y.size(); ++i)
    {
      s << indent << "  force_y[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.force_y[i]);
    }
    s << indent << "force_z[]" << std::endl;
    for (size_t i = 0; i < v.force_z.size(); ++i)
    {
      s << indent << "  force_z[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.force_z[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // FORCE_MSG_MESSAGE_FORCE_H