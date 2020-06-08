#include "expresscpp/expresscpp.hpp"
int main() {
  auto expresscpp = std::make_shared<expresscpp::ExpressCpp>();
  expresscpp->Get("/", [](auto /*req*/, auto res) { 
    res->Json("{\"a\": 1"); 
  });

  expresscpp->Get("/isitup", [](auto /*req*/, auto res) {
    res->Send("si");
  });

  constexpr uint16_t port = 3000u;
  expresscpp->Listen(port,[=](auto /*ec*/) { 
    std::cout << "Listening on port " << port << std::endl;
  }).Run();
  return 0;
}