// Package weather provides tools to obtain the forecast for a city.
package weather

var (
	// CurrentCondition represents the current weather.
	CurrentCondition string
	// CurrentLocation represents the user's location.
	CurrentLocation string
)

// Forecast takes a city and a condition as arguments gives the current weather of a given city.
func Forecast(city, condition string) string {
	CurrentLocation, CurrentCondition = city, condition
	return CurrentLocation + " - current weather condition: " + CurrentCondition
}
