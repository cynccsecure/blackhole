#pragma once

#include "../../factory.hpp"

namespace blackhole {
inline namespace v1 {
namespace sink {
namespace socket {

/// The UDP sink is a sink that writes its output to a remote destination specified by a host and
/// port.
class udp_t;

}  // namespace socket
}  // namespace sink

namespace experimental {

template<>
class factory<sink::socket::udp_t> : public factory<sink_t> {
public:
    auto type() const noexcept -> const char* override;
    auto from(const config::node_t& config) const -> std::unique_ptr<sink_t> override;
};

}  // namespace experimental
}  // namespace v1
}  // namespace blackhole
