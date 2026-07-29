#include <iostream>
#include <string>

using namespace std;

int main() {

    float ph, temperature, rainfall, humidity, moisture;
    string crop;

    cout << "==========================================" << endl;
    cout << "      Crop Recommendation System" << endl;
    cout << "==========================================" << endl;

    cout << "\nEnter Soil pH: ";
    cin >> ph;

    cout << "Enter Temperature (°C): ";
    cin >> temperature;

    cout << "Enter Rainfall (mm): ";
    cin >> rainfall;

    cout << "Enter Humidity (%): ";
    cin >> humidity;

    cout << "Enter Soil Moisture (%): ";
    cin >> moisture;

    if (ph >= 5.5 && ph <= 7.0 &&
        rainfall >= 200 &&
        humidity >= 70 &&
        temperature >= 20 && temperature <= 35 &&
        moisture >= 50)
    {
        crop = "Rice";
    }

    else if (ph >= 6.0 && ph <= 7.5 &&
             rainfall >= 50 &&
             rainfall <= 100 &&
             temperature >= 18 &&
             temperature <= 28)
    {
        crop = "Wheat";
    }

    else if (ph >= 5.5 && ph <= 7.5 &&
             rainfall >= 60 &&
             rainfall <= 120 &&
             temperature >= 25)
    {
        crop = "Maize";
    }

    else if (ph >= 6.0 &&
             rainfall >= 400 &&
             temperature >= 20)
    {
        crop = "Sugarcane";
    }

    else if (ph >= 6.0 &&
             rainfall >= 100 &&
             rainfall <= 150 &&
             temperature >= 25)
    {
        crop = "Cotton";
    }

    else if (ph >= 6.0 &&
             rainfall >= 80 &&
             rainfall <= 120 &&
             temperature >= 22)
    {
        crop = "Soybean";
    }

    else
    {
        crop = "No suitable crop found. Please modify input conditions.";
    }

    cout << "\n==========================================" << endl;
    cout << "Recommended Crop : " << crop << endl;
    cout << "==========================================" << endl;

    return 0;
}
