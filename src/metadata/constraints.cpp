/*
  The contents of this file are subject to the Initial Developer's Public
  License Version 1.0 (the "License"); you may not use this file except in
  compliance with the License. You may obtain a copy of the License here:
  http://www.flamerobin.org/license.html.

  Software distributed under the License is distributed on an "AS IS"
  basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See the
  License for the specific language governing rights and limitations under
  the License.

  The Original Code is FlameRobin (TM).

  The Initial Developer of the Original Code is Milan Babuskov.

  Portions created by the original developer
  are Copyright (C) 2004 Milan Babuskov.

  All Rights Reserved.

  Contributor(s):
*/

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
    #pragma hdrstop
#endif

#include <string>
#include <vector>
#include "metadataitem.h"
#include "constraints.h"
//------------------------------------------------------------------------------
std::string ColumnConstraint::getColumnList() const
{
	std::string result;
	for (std::vector<std::string>::const_iterator it = columnsM.begin(); it != columnsM.end(); ++it)
	{
		if (it != columnsM.begin())
			result += ",";
		result += (*it);
	}
	return result;
};
//------------------------------------------------------------------------------
std::string ForeignKey::getReferencedColumnList() const
{
	std::string result;
	for (std::vector<std::string>::const_iterator it = referencedColumnsM.begin(); it != referencedColumnsM.end(); ++it)
	{
		if (it != referencedColumnsM.begin())
			result += ",";
		result += (*it);
	}
	return result;
};
//------------------------------------------------------------------------------
