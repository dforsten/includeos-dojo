# C++ User Group IncludeOS Dojo

This service demonstrates websocket, and utilizes memdisk, autoconf and http server.

For IncludeOS setup, please look at
[https://github.com/hioa-cs/IncludeOS](https://github.com/hioa-cs/IncludeOS)

Communication between server and client is implemented using WebSockets, with JSON as message format.
We use rapidjson for efficient processing and generation of JSON documents.

The provided client code is written in React.js, consisting purely of static files,
which are served by IncludeOS for convenience for this Dojo, but should be served through other means in production use.

The JSON messages are expecting a "type" entry as first member,
followed by an arbitrary payload of data.
{
    "type": "<event_type>",
    ....
}

##Following events are sent by the client:

###"submit move"

Sends a single integer "move" to indicate the move the player placed,
as index starting from the left-top corner. [0, 80] on a 9x9 board.
Expects a 'move confirmed' event as reply from the server.

{
    type: 'submit move',
    move, // Int
};


###'request initial state'

Expects a 'initial state' event as reply.

{
    type: 'request initial state',
};


##Following events are processed by the client:

###'move confirmed'

Should be sent in reply to "submit move"
The "move" member can be "INVALID_MOVE" (look at GameSettings.h for relevant defines),
or is the index of the confirmed move otherwise.

{
    type: 'move confirmed',
    move, // Int
};


###'round ended'

The "move" member can be "INVALID_MOVE", for example if there are no legal moves available on the board.
"team" can be either BLACK or WHITE  (look at GameSettings.h for relevant defines),

{
    type: 'round ended',
    move, // Int
    team, // Int    
};


###'initial state'

Should be sent in reply to 'request initial state'
Contains the current state of the game board, as an 1-dimensional array of integers representing all fields 
starting from the top-left corner.

{
    type: 'initial state',
    board, // Array of Int
};
