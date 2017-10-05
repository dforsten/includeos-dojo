#include "Messages.h"

using namespace rapidjson;

#include <rapidjson/writer.h>
#include <rapidjson/stringbuffer.h>

#include "Game.h"
#include "GameSettings.h"

void handle_message(const std::string& /*json*/, net::WebSocket* /*ws*/, Game* /*game*/) {
  // Handle incoming messages
  // TBD...

  // Read JSON using rapidjson example:
  // doc.Parse(json.c_str());
  // assert(doc["type"].IsString());
  // assert(doc["move"].IsInt());
  // printf("Handling 'submit move' Event!\n");
  // int submitted_move = doc["move"].GetInt();
  
  // Write JSON using rapidjson example:
  // StringBuffer sb;
  // Writer<StringBuffer> writer(sb);
  // writer.StartObject();
  // writer.Key("type");
  // writer.String("initial state");
  // writer.Key("board");
  // writer.StartArray();
  // for (auto&& field : game->board) {
  //     writer.Int(field);
  // }
  // writer.EndArray();    
  // writer.EndObject();

  // Sending to client example:
  // ws->write(sb.GetString());
}
