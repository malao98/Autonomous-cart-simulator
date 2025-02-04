// Generated by gencpp from file flatland_msgs/MoveModel.msg
// DO NOT EDIT!


#ifndef FLATLAND_MSGS_MESSAGE_MOVEMODEL_H
#define FLATLAND_MSGS_MESSAGE_MOVEMODEL_H

#include <ros/service_traits.h>


#include <flatland_msgs/MoveModelRequest.h>
#include <flatland_msgs/MoveModelResponse.h>


namespace flatland_msgs
{

struct MoveModel
{

typedef MoveModelRequest Request;
typedef MoveModelResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MoveModel
} // namespace flatland_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::flatland_msgs::MoveModel > {
  static const char* value()
  {
    return "47b5f16cf15e326c7400f4504d3a0f75";
  }

  static const char* value(const ::flatland_msgs::MoveModel&) { return value(); }
};

template<>
struct DataType< ::flatland_msgs::MoveModel > {
  static const char* value()
  {
    return "flatland_msgs/MoveModel";
  }

  static const char* value(const ::flatland_msgs::MoveModel&) { return value(); }
};


// service_traits::MD5Sum< ::flatland_msgs::MoveModelRequest> should match
// service_traits::MD5Sum< ::flatland_msgs::MoveModel >
template<>
struct MD5Sum< ::flatland_msgs::MoveModelRequest>
{
  static const char* value()
  {
    return MD5Sum< ::flatland_msgs::MoveModel >::value();
  }
  static const char* value(const ::flatland_msgs::MoveModelRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::flatland_msgs::MoveModelRequest> should match
// service_traits::DataType< ::flatland_msgs::MoveModel >
template<>
struct DataType< ::flatland_msgs::MoveModelRequest>
{
  static const char* value()
  {
    return DataType< ::flatland_msgs::MoveModel >::value();
  }
  static const char* value(const ::flatland_msgs::MoveModelRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::flatland_msgs::MoveModelResponse> should match
// service_traits::MD5Sum< ::flatland_msgs::MoveModel >
template<>
struct MD5Sum< ::flatland_msgs::MoveModelResponse>
{
  static const char* value()
  {
    return MD5Sum< ::flatland_msgs::MoveModel >::value();
  }
  static const char* value(const ::flatland_msgs::MoveModelResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::flatland_msgs::MoveModelResponse> should match
// service_traits::DataType< ::flatland_msgs::MoveModel >
template<>
struct DataType< ::flatland_msgs::MoveModelResponse>
{
  static const char* value()
  {
    return DataType< ::flatland_msgs::MoveModel >::value();
  }
  static const char* value(const ::flatland_msgs::MoveModelResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // FLATLAND_MSGS_MESSAGE_MOVEMODEL_H
