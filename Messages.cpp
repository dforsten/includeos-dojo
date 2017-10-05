#include "Messages.h"

using namespace rapidjson;

#include <rapidjson/writer.h>
#include <rapidjson/stringbuffer.h>

#include "Game.h"
#include "GameSettings.h"

void handle_message(const std::string& /*json*/, net::WebSocket* /*ws*/, Game* /*game*/) {
  // Handle incoming messages
  // TBD...    
}
