#include "crop.h"
#include <string>

using namespace std;

string recommendCrop(float ph,
                     float temperature,
                     float rainfall,
                     float humidity,
                     float moisture)
{
    // Rice
    if (ph >= 5.5 && ph <= 7.0 &&
        rainfall >= 200 &&
        humidity >= 70 &&
        temperature >= 20 && temperature <= 35 &&
        moisture >= 50)
    {
        return "Rice";
    }

    // Wheat
    else if (ph >= 6.0 && ph <= 7.5 &&
             rainfall >= 50 && rainfall <= 100 &&
             temperature >= 18 && temperature <= 25 &&
             moisture >= 30)
    {
        return "Wheat";
    }

    // Maize
    else if (ph >= 5.5 && ph <= 7.5 &&
             rainfall >= 60 && rainfall <= 120 &&
             temperature >= 20 && temperature <= 30 &&
             moisture >= 35)
    {
        return "Maize";
    }

    // Cotton
    else if (ph >= 5.8 && ph <= 8.0 &&
             rainfall >= 50 && rainfall <= 100 &&
             temperature >= 25 && temperature <= 35 &&
             moisture >= 40)
    {
        return "Cotton";
    }

    // Sugarcane
    else if (ph >= 6.0 && ph <= 7.5 &&
             rainfall >= 100 &&
             temperature >= 20 && temperature <= 35 &&
             humidity >= 60)
    {
        return "Sugarcane";
    }

    // Default
    else
    {
        return "No suitable crop found for the given conditions.";
    }
}
