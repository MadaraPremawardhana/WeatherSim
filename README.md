# 🌦️ Real-Time Weather Simulation using OpenWeatherMap and Unreal Engine

## 📘 Overview
This project integrates the **OpenWeatherMap API** with **Unreal Engine** and the **Ultra Dynamic Sky** system to create a **real-time, location-based weather simulation**.  
By fetching live weather data for any specified location, the Unreal environment dynamically replicates realistic atmospheric conditions such as temperature, cloud coverage, rain, wind, and lighting.

---

## 🚀 Features
- 🌍 **Live Weather Fetching:** Retrieve current weather data using OpenWeatherMap’s API.  
- ☁️ **Dynamic Sky Updates:** Automatically adjust Ultra Dynamic Sky parameters based on real weather inputs.  
- 🌅 **Time & Lighting Sync:** Optionally synchronize environment lighting and time of day with the target location.  
- ⚙️ **Blueprint + C++ Integration:** Combines Unreal’s visual scripting with API-based data handling.  
- 💡 **Customizable Mappings:** Developers can tweak how weather parameters affect visuals for unique effects.

---

## 🧰 Requirements
Before running this project, make sure you have the following:

- **Unreal Engine 5.0+**
- **Ultra Dynamic Sky Plugin** (from Epic Games Marketplace)
- **OpenWeatherMap API Key** (free to obtain)

---

## 🛠️ Setup Instructions

 This project integrates Unreal Engine with the OpenWeatherMap API to display real-time weather data in-game through an interactive widget.

```bash
1. Clone the Repository
   git clone https://github.com/MadaraPremawardhana/WeatherSim.git
   cd OpenWeatherMap-Unreal-Weather

2. Generate Visual Studio Project Files
   # Right-click the .uproject file in the project directory
   # Select "Generate Visual Studio project files"

3. Build the Project
   # Open the generated .sln file in Visual Studio
   # Set Configuration: Development Editor
   # Set Platform: Win64
   # Build the project: Build → Build Solution
   # After build, double-click the .uproject file to open in Unreal Engine

4. Add Your OpenWeatherMap API Key
   # Open the Widget Blueprint responsible for sending the GET request
   # Locate the URL containing: APPID=XXXXXXXXXXXXXXX
   # Replace it with your actual API key: APPID=your_api_key_here
   # Compile and save the Blueprint

5. Run the Project
   # Click Play in Unreal Engine to launch the weather interface

6. How to Use the Weather Widget
   # Enter a location using either:
   #   - Latitude & Longitude
   #   - OR Location Name
   # Click: GET WEATHER
   # The widget will retrieve and display real-time weather data from the OpenWeatherMap API

7. Notes
   # Requirements:
   #   - Unreal Engine
   #   - Visual Studio
   #   - A valid OpenWeatherMap API key (https://openweathermap.org/api)
