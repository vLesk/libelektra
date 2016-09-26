/**
 * @file
 *
 * @brief filter plugin for the Base64 encoding
 *
 * @copyright BSD License (see doc/COPYING or http://www.libelektra.org)
 *
 */

#ifndef ELEKTRA_PLUGIN_BASE64_H
#define ELEKTRA_PLUGIN_BASE64_H

#include <kdbplugin.h>
#include <kdbtypes.h>
#include <stdio.h>

#define ELEKTRA_PLUGIN_BASE64_PREFIX "@BASE64"
#define ELEKTRA_PLUGIN_BASE64_ESCAPE "@"
#define ELEKTRA_PLUGIN_BASE64_ESCAPE_CHAR '@'

// encoding functions
char * ELEKTRA_PLUGIN_FUNCTION (ELEKTRA_PLUGIN_NAME, base64Encode) (const kdb_octet_t * input, const size_t inputLength);
int ELEKTRA_PLUGIN_FUNCTION (ELEKTRA_PLUGIN_NAME, base64Decode) (const char * input, kdb_octet_t ** output, size_t * outputLength);

// kdb functions
int ELEKTRA_PLUGIN_FUNCTION (ELEKTRA_PLUGIN_NAME, get) (Plugin * handle, KeySet * ks, Key * parentKey);
int ELEKTRA_PLUGIN_FUNCTION (ELEKTRA_PLUGIN_NAME, set) (Plugin * handle, KeySet * ks, Key * parentKey);

Plugin * ELEKTRA_PLUGIN_EXPORT (base64);

#endif