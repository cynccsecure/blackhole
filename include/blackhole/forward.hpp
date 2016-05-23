#pragma once

namespace boost {
namespace asio {
namespace ip {

struct udp;

template<typename>
struct basic_endpoint;

}  // namespace ip
}  // namespace asio
}  // namespace boost

namespace blackhole {
inline namespace v1 {

struct deleter_t {
    template<typename T>
    auto operator()(T* value) -> void;
};

class record_t;
class severity_t;

class formatter_t;
class handler_t;
class registry_t;
class sink_t;

template<typename T>
struct factory;

class factory_t;

namespace experimental {

template<typename T>
class builder;

template<typename T>
class factory;

}  // namespace experimental

namespace config {

class node_t;

}  // namespace config
}  // namespace v1
}  // namespace blackhole
