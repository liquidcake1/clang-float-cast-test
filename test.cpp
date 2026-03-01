#include <stdint.h>

float make_float(double input) {
       return (float)input;
}

float f(double input) {
	return make_float(input);
}

uint32_t i32(double input) {
	return (uint32_t)make_float(input);
}

uint64_t i64(double input) {
	return (uint64_t)make_float(input);
}

uint64_t i32_64(double input) {
	return (uint64_t)(uint32_t)make_float(input);
}

uint32_t i64_32(double input) {
	return (uint32_t)(uint64_t)make_float(input);
}
