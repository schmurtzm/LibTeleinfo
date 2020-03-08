// **********************************************************************************
// ESP8266 Teleinfo WEB Client routing Include file
// **********************************************************************************
// Creative Commons Attrib Share-Alike License
// You are free to use/extend this library but please abide with the CC-BY-SA license:
// Attribution-NonCommercial-ShareAlike 4.0 International License
// http://creativecommons.org/licenses/by-nc-sa/4.0/
//
// For any explanation about teleinfo ou use , see my blog
// http://hallard.me/category/tinfo
//
// This program works with the Wifinfo board
// see schematic here https://github.com/hallard/teleinfo/tree/master/Wifinfo
//
// Written by Charles-Henri Hallard (http://hallard.me)
//
// History : V1.00 2015-12-04 - First release
//
// Modifié par theGressier
//       Version 1.0.7 2019-08-02 Changement API fonction httpPost
//       
// Modifié par Schmurtzm
//       Version 1.0.8 2020-03-08 Changement Wifi manager : Autoconnect 
//
// All text above must be included in any redistribution.
//
// **********************************************************************************

#ifndef WEBCLIENT_H
#define WEBCLIENT_H

// Include main project include file
#include "Wifinfo.h"

// Exported variables/object instancied in main sketch
// ===================================================
extern bool          need_reinit;
extern char          buff[];

// Exported function instancied in webserver.cpp
// =============================================
extern bool          validate_value_name(String name);

// declared exported function from webclient.cpp
// ===================================================
boolean httpPost(char * host, uint16_t port, char * url, char * data);
boolean emoncmsPost(void);
boolean jeedomPost(void);
boolean httpRequest(void);
boolean UPD_switch(void);
String  build_emoncms_json(void);

#endif
