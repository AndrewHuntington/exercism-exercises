package darts

func Score(x, y float64) int {
	/**
	 * For a 0,0 centered circle
	 * x^2 + y^2 < r^2 = inside
	 * x^2 + y^2 == r^2 = on
	 * x^2 + y^2 > r^2 = outside
	**/
	dartLoc := x*x + y*y
	outerRadiusSqrd := 100.0
	middleRadiusSqrd := 25.0
	innerRadiusSqrd := 1.0

	if dartLoc > outerRadiusSqrd {
		return 0
	} else if dartLoc > middleRadiusSqrd {
		return 1
	} else if dartLoc > innerRadiusSqrd {
		return 5
	} else {
		return 10
	}

}
