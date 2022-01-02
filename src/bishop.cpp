/**
 * @author Alessandro _Viespoli - 2009659 (alessandro.viespoli@studentiunipd.it)
 */

#include "include/bishop.h"

bishop::bishop(char type) : chessman(type) {}

bishop::~bishop() {}

bool bishop::isLegalMove(unsigned short _startRow, unsigned short _startCol, unsigned short _destiRow, unsigned short _destiCol)
{
    return (_destiRow - _startRow) == (_destiCol - _startCol);
}
