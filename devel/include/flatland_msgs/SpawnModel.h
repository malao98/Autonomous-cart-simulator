// Generated by gencpp from file flatland_msgs/SpawnModel.msg
// DO NOT EDIT!


#ifndef FLATLAND_MSGS_MESSAGE_SPAWNMODEL_H
#define FLATLAND_MSGS_MESSAGE_SPAWNMODEL_H

#include <ros/service_traits.h>


#include <flatland_msgs/SpawnModelRequest.h>
#include <flatland_msgs/SpawnModelResponse.h>


namespace flatland_msgs
{

struct SpawnModel
{

typedef SpawnModelRequest Request;
typedef SpawnModelResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SpawnModel
} // namespace flatland_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::flatland_msgs::SpawnModel > {
  static const char* value()
  {
    return "952237af09cbedc354d376afc6d2fc71";
  }

  static const char* value(const ::flatland_msgs::SpawnModel&) { return value(); }
};

template<>
struct DataType< ::flatland_msgs::SpawnModel > {
  static const char* value()
  {
    return "flatland_msgs/SpawnModel";
  }

  static const char* value(const ::flatland_msgs::SpawnModel&) { return value(); }
};


// service_traits::MD5Sum< ::flatland_msgs::SpawnModelRequest> should match
// service_traits::MD5Sum< ::flatland_msgs::SpawnModel >
template<>
struct MD5Sum< ::flatland_msgs::SpawnModelRequest>
{
  static const char* value()
  {
    return MD5Sum< ::flatland_msgs::SpawnModel >::value();
  }
  static const char* value(const ::flatland_msgs::SpawnModelRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::flatland_msgs::SpawnModelRequest> should match
// service_traits::DataType< ::flatland_msgs::SpawnModel >
template<>
struct DataType< ::flatland_msgs::SpawnModelRequest>
{
  static const char* value()
  {
    return DataType< ::flatland_msgs::SpawnModel >::value();
  }
  static const char* value(const ::flatland_msgs::SpawnModelRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::flatland_msgs::SpawnModelResponse> should match
// service_traits::MD5Sum< ::flatland_msgs::SpawnModel >
template<>
struct MD5Sum< ::flatland_msgs::SpawnModelResponse>
{
  static const char* value()
  {
    return MD5Sum< ::flatland_msgs::SpawnModel >::value();
  }
  static const char* value(const ::flatland_msgs::SpawnModelResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::flatland_msgs::SpawnModelResponse> should match
// service_traits::DataType< ::flatland_msgs::SpawnModel >
template<>
struct DataType< ::flatland_msgs::SpawnModelResponse>
{
  static const char* value()
  {
    return DataType< ::flatland_msgs::SpawnModel >::value();
  }
  static const char* value(const ::flatland_msgs::SpawnModelResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // FLATLAND_MSGS_MESSAGE_SPAWNMODEL_H
