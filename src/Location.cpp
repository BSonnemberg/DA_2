#include "Location.h"

Location::Location(const int& id) {
    this->id = id;
    this->latitude = 0;
    this->longitude = 0;
}

Location::Location(const int& id, const double& lat, const double& lon) {
    this->id = id;
    this->latitude = lat;
    this->longitude = lon;
}

int Location::getId() const {
    return this->id;
}

double Location::getLatitude() const {
    return this->latitude;
}

double Location::getLongitude() const {
    return this->longitude;
}

bool Location::operator==(const Location& other) const {
    return this->id == other.id;
}
