package luhn

import (
	"strings"
)

func Valid(id string) bool {
	idWithoutSpaces := strings.ReplaceAll(id, " ", "")
	if len(idWithoutSpaces) < 2 {
		return false
	}
	sum := 0
	count := 0

	for i := len(idWithoutSpaces) - 1; i >= 0; i-- {
		if idWithoutSpaces[i] < '0' || idWithoutSpaces[i] > '9' {
			return false
		}
		digit := int(idWithoutSpaces[i] - '0')

		if count%2 == 1 {
			digit *= 2
			if digit > 9 {
				digit -= 9
			}
		}
		count++
		sum += digit
	}

	return sum%10 == 0
}
