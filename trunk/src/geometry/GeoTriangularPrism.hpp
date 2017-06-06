// *****************************************************************************
// <ProjectName> ENigMA </ProjectName>
// <Description> Extended Numerical Multiphysics Analysis </Description>
// <HeadURL> $HeadURL$ </HeadURL>
// <LastChangedDate> $LastChangedDate$ </LastChangedDate>
// <LastChangedRevision> $LastChangedRevision$ </LastChangedRevision>
// <Author> Billy Araujo </Author>
// <Copyright> Copyright (c) 2012, All Rights Reserved </Copyright>
// *****************************************************************************

#pragma once

#include "GeoVolume.hpp"
#include "GeoVertexList.hpp"

namespace ENigMA
{

    namespace geometry
    {

        template <typename Real>
        class CGeoTriangularPrism : public CGeoVolume<Real>, public CGeoVertexList<Real>
        {
        public:
            CGeoTriangularPrism();
            ~CGeoTriangularPrism();

            void reset();

            inline void calculateCentroid(bool bReCalculate = false);
            inline void calculateSurfaceArea(bool bReCalculate = false);
            inline void calculateVolume(bool bReCalculate = false);
            inline void calculateBoundingBox(bool bReCalculate = false);

        };

    }

}

#include "GeoTriangularPrism_Imp.hpp"