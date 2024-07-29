// Generated by gencpp from file flatland_msgs/Collisions.msg
// DO NOT EDIT!


#ifndef FLATLAND_MSGS_MESSAGE_COLLISIONS_H
#define FLATLAND_MSGS_MESSAGE_COLLISIONS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <flatland_msgs/Collision.h>

namespace flatland_msgs
{
template <class ContainerAllocator>
struct Collisions_
{
  typedef Collisions_<ContainerAllocator> Type;

  Collisions_()
    : header()
    , collisions()  {
    }
  Collisions_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , collisions(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::flatland_msgs::Collision_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::flatland_msgs::Collision_<ContainerAllocator> >> _collisions_type;
  _collisions_type collisions;





  typedef boost::shared_ptr< ::flatland_msgs::Collisions_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::flatland_msgs::Collisions_<ContainerAllocator> const> ConstPtr;

}; // struct Collisions_

typedef ::flatland_msgs::Collisions_<std::allocator<void> > Collisions;

typedef boost::shared_ptr< ::flatland_msgs::Collisions > CollisionsPtr;
typedef boost::shared_ptr< ::flatland_msgs::Collisions const> CollisionsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::flatland_msgs::Collisions_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::flatland_msgs::Collisions_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::flatland_msgs::Collisions_<ContainerAllocator1> & lhs, const ::flatland_msgs::Collisions_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.collisions == rhs.collisions;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::flatland_msgs::Collisions_<ContainerAllocator1> & lhs, const ::flatland_msgs::Collisions_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace flatland_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::flatland_msgs::Collisions_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::flatland_msgs::Collisions_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::flatland_msgs::Collisions_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::flatland_msgs::Collisions_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::flatland_msgs::Collisions_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::flatland_msgs::Collisions_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::flatland_msgs::Collisions_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6fa318801c160db40a30b49b9efb9f00";
  }

  static const char* value(const ::flatland_msgs::Collisions_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6fa318801c160db4ULL;
  static const uint64_t static_value2 = 0x0a30b49b9efb9f00ULL;
};

template<class ContainerAllocator>
struct DataType< ::flatland_msgs::Collisions_<ContainerAllocator> >
{
  static const char* value()
  {
    return "flatland_msgs/Collisions";
  }

  static const char* value(const ::flatland_msgs::Collisions_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::flatland_msgs::Collisions_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"Collision[] collisions\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: flatland_msgs/Collision\n"
"string entity_A\n"
"string body_A\n"
"string entity_B\n"
"string body_B\n"
"float64[] magnitude_forces\n"
"Vector2[] contact_positions\n"
"Vector2[] contact_normals\n"
"================================================================================\n"
"MSG: flatland_msgs/Vector2\n"
"float64 x\n"
"float64 y\n"
;
  }

  static const char* value(const ::flatland_msgs::Collisions_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::flatland_msgs::Collisions_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.collisions);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Collisions_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::flatland_msgs::Collisions_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::flatland_msgs::Collisions_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "collisions[]" << std::endl;
    for (size_t i = 0; i < v.collisions.size(); ++i)
    {
      s << indent << "  collisions[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::flatland_msgs::Collision_<ContainerAllocator> >::stream(s, indent + "    ", v.collisions[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // FLATLAND_MSGS_MESSAGE_COLLISIONS_H