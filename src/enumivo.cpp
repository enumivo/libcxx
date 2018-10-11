#pragma once

/**
 * Define specific things for the enumivo system
 */

extern "C" {
   void enumivo_assert(unsigned int, const char*);
   void __cxa_pure_virtual() { enumivo_assert(false, "pure virtual method called"); }
}
