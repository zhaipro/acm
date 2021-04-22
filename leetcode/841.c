
void _canVisitAllRooms(int x, int** rooms, int roomsSize, int* roomsColSize){
    int *room = rooms[x];
    rooms[x] = 0;
    for(int i=0; i<roomsColSize[x]; i++) {
        if(rooms[room[i]]) {
            _canVisitAllRooms(room[i], rooms, roomsSize, roomsColSize);
        }
    }
}

bool canVisitAllRooms(int** rooms, int roomsSize, int* roomsColSize){
    _canVisitAllRooms(0, rooms, roomsSize, roomsColSize);
    for(int i=0; i<roomsSize; i++) {
        if(rooms[i]) {
            return false;
        }
    }
    return true;
}
