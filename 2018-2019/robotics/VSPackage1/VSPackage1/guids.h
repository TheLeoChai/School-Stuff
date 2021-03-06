﻿// guids.h: definitions of GUIDs/IIDs/CLSIDs used in this VsPackage

/*
Do not use #pragma once, as this file needs to be included twice.  Once to declare the externs
for the GUIDs, and again right after including initguid.h to actually define the GUIDs.
*/



// package guid
// { 14632b7a-aa53-4b45-be0e-8a8e7dc1dbd3 }
#define guidVSPackage1Pkg { 0x14632B7A, 0xAA53, 0x4B45, { 0xBE, 0xE, 0x8A, 0x8E, 0x7D, 0xC1, 0xDB, 0xD3 } }
#ifdef DEFINE_GUID
DEFINE_GUID(CLSID_VSPackage1,
0x14632B7A, 0xAA53, 0x4B45, 0xBE, 0xE, 0x8A, 0x8E, 0x7D, 0xC1, 0xDB, 0xD3 );
#endif

// Command set guid for our commands (used with IOleCommandTarget)
// { 77a0b892-ce93-438e-b4f2-446ca222dc7b }
#define guidVSPackage1CmdSet { 0x77A0B892, 0xCE93, 0x438E, { 0xB4, 0xF2, 0x44, 0x6C, 0xA2, 0x22, 0xDC, 0x7B } }
#ifdef DEFINE_GUID
DEFINE_GUID(CLSID_VSPackage1CmdSet, 
0x77A0B892, 0xCE93, 0x438E, 0xB4, 0xF2, 0x44, 0x6C, 0xA2, 0x22, 0xDC, 0x7B );
#endif

//Guid for the image list referenced in the VSCT file
// { 7c0771a1-7c29-46c6-80cc-49a56b99457b }
#define guidImages { 0x7C0771A1, 0x7C29, 0x46C6, { 0x80, 0xCC, 0x49, 0xA5, 0x6B, 0x99, 0x45, 0x7B } }
#ifdef DEFINE_GUID
DEFINE_GUID(CLSID_Images, 
0x7C0771A1, 0x7C29, 0x46C6, 0x80, 0xCC, 0x49, 0xA5, 0x6B, 0x99, 0x45, 0x7B );
#endif


