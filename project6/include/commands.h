//
// created by pawel
//

#ifndef COMMANDS_H
#define COMMANDS_H

// Contains array of commands and structures with commands indexes

#include <stdio.h>

enum Commands_Idx{
    SELECT = 0,
    INSERT = 1,
    DELETE = 2,
    WHERE = 3,
    BEGIN = 4,
    COMMIT = 5
};

enum Columns_Idx{
    ID = 0,
    BRAND = 1,
    CAR_NUM = 2,
    DESTINATION = 3,
    TONNAGE = 4,
    UNIT_PRICE = 5,
    CARGO_COST = 6,
    CATEGORY_ID = 7,
    PHOTO = 8,
};

const char *commands[] = {
    "SELECT * from trip", "INSERT INTO trip VALUES(", "DELETE FROM trip",
    " WHERE ", "BEGIN TRANSACTION; ", "; COMMIT;"
};

const char *columns[] = {
    "id", "car_brand", "car_number", "destination", "tonnage", "cargo_unit_price",
    "total_cargo_cost", "category_id", "photo"
};

#endif
