// Generated by gencpp from file aprilslam/MoveStateRequest.msg
// DO NOT EDIT!


#ifndef APRILSLAM_MESSAGE_MOVESTATEREQUEST_H
#define APRILSLAM_MESSAGE_MOVESTATEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace aprilslam
{
template <class ContainerAllocator>
struct MoveStateRequest_
{
  typedef MoveStateRequest_<ContainerAllocator> Type;

  MoveStateRequest_()
    : state(0)  {
    }
  MoveStateRequest_(const ContainerAllocator& _alloc)
    : state(0)  {
  (void)_alloc;
    }



   typedef int32_t _state_type;
  _state_type state;





  typedef boost::shared_ptr< ::aprilslam::MoveStateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::aprilslam::MoveStateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MoveStateRequest_

typedef ::aprilslam::MoveStateRequest_<std::allocator<void> > MoveStateRequest;

typedef boost::shared_ptr< ::aprilslam::MoveStateRequest > MoveStateRequestPtr;
typedef boost::shared_ptr< ::aprilslam::MoveStateRequest const> MoveStateRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::aprilslam::MoveStateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::aprilslam::MoveStateRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace aprilslam

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'aprilslam': ['/home/cyy/ws/jz_project/catkin_ws/src/caliber/aprilslam/aprilslam/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::aprilslam::MoveStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::aprilslam::MoveStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aprilslam::MoveStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aprilslam::MoveStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aprilslam::MoveStateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aprilslam::MoveStateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::aprilslam::MoveStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7a2f37ef2ba405f0c7a15cc72663d6f0";
  }

  static const char* value(const ::aprilslam::MoveStateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7a2f37ef2ba405f0ULL;
  static const uint64_t static_value2 = 0xc7a15cc72663d6f0ULL;
};

template<class ContainerAllocator>
struct DataType< ::aprilslam::MoveStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aprilslam/MoveStateRequest";
  }

  static const char* value(const ::aprilslam::MoveStateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::aprilslam::MoveStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 state\n\
";
  }

  static const char* value(const ::aprilslam::MoveStateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::aprilslam::MoveStateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveStateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::aprilslam::MoveStateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::aprilslam::MoveStateRequest_<ContainerAllocator>& v)
  {
    s << indent << "state: ";
    Printer<int32_t>::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // APRILSLAM_MESSAGE_MOVESTATEREQUEST_H
