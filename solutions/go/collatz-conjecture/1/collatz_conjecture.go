package collatzconjecture

import "errors"

func CollatzConjecture(n int) (int, error) {
	if n < 1 {
		return 0, errors.New("must be a positive integer > 0")
	}

	i := 0

	for ; n != 1; i++ {
		if n&1 == 1 {
			n = (n * 3) + 1
		} else {
			n >>= 1
		}
	}

	return i, nil
}
