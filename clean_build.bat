@ECHO OFF
REM 
REM Copyright (c) Contributors to the Open 3D Engine Project.
REM For complete copyright and license terms please see the LICENSE at the root of this distribution.
REM 
REM SPDX-License-Identifier: Apache-2.0 OR MIT
REM

del /q open_azslc*
cd  bin || goto :NEXT
del /q *
for /d %%x in (*) do @rd /s /q "%%x"
cd ..
:NEXT
cd  build || goto :EOF
del /q *
for /d %%x in (*) do @rd /s /q "%%x"
cd ..