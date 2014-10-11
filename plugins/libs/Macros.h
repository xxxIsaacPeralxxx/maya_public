// This program is distributed under the terms of the GNU General Public License
// Version 2 as published by the Free Software Foundation; This program is distributed
// WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
// or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
#pragma once
#include <sstream>

#include <maya/MGlobal.h>
#include <maya/MString.h>
#include <maya/MTimer.h>
#include <tbb/parallel_for.h>

/*! \ingroup Macros
 *  \brief Log to Maya Console.
 *  
 *  Convenient macro to log objects that implement << operator to Maya script console.
 *  
 *  \param[in] object Supported object to print to console.
 */
#define LOG_TO_CONSOLE(object)                              \
{                                                           \
    std::stringstream stream;                               \
    stream << object;                                       \
    MGlobal::displayInfo(MString(stream.str().c_str()));    \
}

/*! \ingroup Macros
 *  \brief Begin parallel for loop declaration.
 *
 *  Convenient macro to declare a TBB parallel for loop using a lambda expression.
 *
 *  \param[in] type
 */
#define PARALLEL_FOR_BEGIN(type, variable, first, last, step)   \
    tbb::parallel_for(first, last, step, [&] (type variable)

/*! \ingroup Macros
 *  \brief End parallel for loop declaration.
 */
#define PARALLEL_FOR_END );

/*! \ingroup Macros
 *  \brief Start timer.
 */
#define TIMER_START             \
    MTimer timer;               \
    timer.beginTimer();

/*! \ingroup Macros
 *  \brief End timer and log results to Maya Console.
 *
 *  \param[in] message Message to be printed along with the elapsed time.
 */
#define TIMER_END(message)                                          \
    timer.endTimer();                                               \
    MGlobal::displayInfo(MString(message) + timer.elapsedTime());

// This program is distributed under the terms of the GNU General Public License
// Version 2 as published by the Free Software Foundation; This program is distributed
// WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
// or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.