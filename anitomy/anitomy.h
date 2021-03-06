/*
** Anitomy
** Copyright (C) 2014, Eren Okka
** 
** This program is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
** 
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
** 
** You should have received a copy of the GNU General Public License
** along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef ANITOMY_ANITOMY_H
#define ANITOMY_ANITOMY_H

#include "element.h"
#include "string.h"
#include "token.h"

namespace anitomy {

class Anitomy {
public:
  bool Parse(string_t filename);

  Elements& elements();
  const token_container_t& tokens() const;

private:
  bool RemoveExtensionFromFilename(string_t& filename, string_t& extension);

  Elements elements_;
  token_container_t tokens_;
};

}  // namespace anitomy

#endif  // ANITOMY_ANITOMY_H