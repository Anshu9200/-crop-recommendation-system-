# Crop Recommendation System 🌱

## Overview
This is a C++ application that recommends the most suitable crop based on soil and weather conditions.

## Features
- Crop recommendation using soil pH
- Temperature analysis
- Rainfall analysis
- Humidity analysis
- Soil moisture analysis
- Simple command-line interface

## Technologies Used
- C++
- Object-Oriented Programming (OOP)
- CSV File Handling

## Project Structure

```
├── main.cpp
├── crop.cpp
├── crop.h
├── crop_database.csv
├── README.md
```

## How to Run

1. Compile the project
```
g++ main.cpp crop.cpp -o crop
```

2. Run the program
```
./crop
```

## Sample Output

```
Enter Soil pH: 6.5
Enter Temperature: 28
Enter Rainfall: 220
Enter Humidity: 75
Enter Soil Moisture: 60

Recommended Crop: Rice
```

## Future Improvements
- GUI application
- Machine Learning model
- Weather API integration
- Larger crop database

## Author
Anshul Kapoor
