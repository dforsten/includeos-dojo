#pragma once

#include <string>
#include <net/ws/websocket.hpp>
#include <rapidjson/document.h>

#define MAX_MESSAGE_LENGTH 100

class Game;

void handle_message(const std::string& json, net::WebSocket* ws, Game* game);
