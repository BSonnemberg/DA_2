#ifndef LOCATION_H
#define LOCATION_H

// Represents a Delivery Location
class Location {
    int id;
    // coordinates are optional
    double latitude;
    double longitude;
public:
    explicit Location(const int& id);
    Location(const int& id, const double& lat, const double& lon);
    int getId() const;
    double getLatitude() const;
    double getLongitude() const;
    bool operator==(const Location& other) const;
};

#endif
