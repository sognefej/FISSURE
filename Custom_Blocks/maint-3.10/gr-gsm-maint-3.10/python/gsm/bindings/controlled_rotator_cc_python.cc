/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(misc_utils/controlled_rotator_cc.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(c9c73fd18cf912c513008be3e7df8a1b)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gsm/misc_utils/controlled_rotator_cc.h>
// pydoc.h is automatically generated in the build directory
#include <controlled_rotator_cc_pydoc.h>

void bind_controlled_rotator_cc(py::module& m)
{

    using controlled_rotator_cc    = ::gr::gsm::controlled_rotator_cc;


    py::class_<controlled_rotator_cc, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<controlled_rotator_cc>>(m, "controlled_rotator_cc", D(controlled_rotator_cc))

        .def(py::init(&controlled_rotator_cc::make),
           py::arg("phase_inc"),
           D(controlled_rotator_cc,make)
        )
        




        
        .def("set_phase_inc",&controlled_rotator_cc::set_phase_inc,       
            py::arg("phase_inc"),
            D(controlled_rotator_cc,set_phase_inc)
        )

        ;




}







