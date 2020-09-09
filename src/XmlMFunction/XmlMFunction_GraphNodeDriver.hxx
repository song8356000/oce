// Created on: 2008-03-05
// Created by: Vlad ROMASHKO
// Copyright (c) 2008-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _XmlMFunction_GraphNodeDriver_HeaderFile
#define _XmlMFunction_GraphNodeDriver_HeaderFile

#include <Standard.hxx>
#include <Standard_Type.hxx>

#include <XmlMDF_ADriver.hxx>
#include <Standard_Boolean.hxx>
#include <XmlObjMgt_RRelocationTable.hxx>
#include <XmlObjMgt_SRelocationTable.hxx>
class CDM_MessageDriver;
class TDF_Attribute;
class XmlObjMgt_Persistent;


class XmlMFunction_GraphNodeDriver;
DEFINE_STANDARD_HANDLE(XmlMFunction_GraphNodeDriver, XmlMDF_ADriver)

//! XML persistence driver for dependencies of a function.
class XmlMFunction_GraphNodeDriver : public XmlMDF_ADriver
{

public:

  
  Standard_EXPORT XmlMFunction_GraphNodeDriver(const Handle(CDM_MessageDriver)& theMessageDriver);
  
  Standard_EXPORT Handle(TDF_Attribute) NewEmpty() const Standard_OVERRIDE;
  
  Standard_EXPORT Standard_Boolean Paste (const XmlObjMgt_Persistent& Source, const Handle(TDF_Attribute)& Target, XmlObjMgt_RRelocationTable& RelocTable) const Standard_OVERRIDE;
  
  Standard_EXPORT void Paste (const Handle(TDF_Attribute)& Source, XmlObjMgt_Persistent& Target, XmlObjMgt_SRelocationTable& RelocTable) const Standard_OVERRIDE;




  DEFINE_STANDARD_RTTIEXT(XmlMFunction_GraphNodeDriver,XmlMDF_ADriver)

protected:




private:




};







#endif // _XmlMFunction_GraphNodeDriver_HeaderFile
