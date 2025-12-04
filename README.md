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

### 1. Clone the Repository
```bash
git clone https://github.com/MadaraPremawardhana/WeatherSim.git
cd OpenWeatherMap-Unreal-Weather```

### 2. Build the Repository
```bash
Right click on the project and click on build Visual studio project files
Build the repository and launch```

### 3. Add the API key
```Add the API key to the APPID=XXXXXXXXXXXXXXX in the widget blueprint's GET request.
Compile and hit play.```

HOW TO USE
============
Add a location by latitude and longitude or by location name.
Hit "GET WEATHER" button
