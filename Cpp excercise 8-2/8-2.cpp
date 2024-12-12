#include <iostream>
#include <map>
#include <string>

int main() {
    // Step 1: Create a map to associate the name of a country with its area
    std::map<std::string, double> countryAreas;

    // Step 2: Insert some example data
    countryAreas["Russia"] = 17098242;   // km²
    countryAreas["Canada"] = 9984670;   // km²
    countryAreas["China"] = 9596961;    // km²
    countryAreas["United States"] = 9372610; // km²
    countryAreas["Brazil"] = 8515767;   // km²

    // Step 3: Use an iterator to calculate the total area
    double totalArea = 0.0;
    for (auto it = countryAreas.begin(); it != countryAreas.end(); ++it) {
        totalArea += it->second; // Add the area (value) of the current map entry
    }

    // Output the total area
    std::cout << "The total area of the countries entered is: "
        << totalArea << " km²" << std::endl;

    return 0;
}
