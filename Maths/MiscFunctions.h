#pragma once

namespace JSL
{
	double FractionBounder(double a)
	{
		return std::min( std::max(0.0,a),1.0);
	}


}
