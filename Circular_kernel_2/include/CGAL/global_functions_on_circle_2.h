// Copyright (c) 2003-2008  INRIA Sophia-Antipolis (France).
// All rights reserved.
//
// This file is part of CGAL (www.cgal.org); you may redistribute it under
// the terms of the Q Public License version 1.0.
// See the file LICENSE.QPL distributed with CGAL.
//
// Licensees holding a valid commercial license may use this file in
// accordance with the commercial license agreement provided with the software.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// $URL$
// $Id$
//
// Author(s)     : Monique Teillaud, Sylvain Pion, Pedro Machado

// Partially supported by the IST Programme of the EU as a Shared-cost
// RTD (FET Open) Project under Contract No  IST-2000-26473 
// (ECG - Effective Computational Geometry for Curves and Surfaces) 
// and a STREP (FET Open) Project under Contract No  IST-006413 
// (ACS -- Algorithms for Complex Shapes)

#ifndef CGAL_CIRCULAR_KERNEL_GLOBAL_FUNCTIONS_ON_CIRCLE_2_H
#define CGAL_CIRCULAR_KERNEL_GLOBAL_FUNCTIONS_ON_CIRCLE_2_H

CGAL_BEGIN_NAMESPACE

template< class CK >
inline
typename CK::Polynomial_for_circles_2_2
get_equation(const Circle_2<CK> & c)
{
  return CK().get_equation_object()(c);
}

template< class CK >
inline
Circle_2<CK>
construct_circle(const typename CK::Polynomial_for_circles_2_2 & eq)
{
  return CK().construct_circle_2_object()(eq);
}

template< class CK >
inline
bool
has_on(const Circle_2<CK> &c, const Circular_arc_point_2<CK> &p)
{
  return CK().has_on_2_object()(c, p);
}

CGAL_END_NAMESPACE

#endif // CGAL_CIRCULAR_KERNEL_GLOBAL_FUNCTIONS_ON_CIRCLE_2_H
