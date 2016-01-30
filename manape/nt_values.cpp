/*
    This file is part of Manalyze.

    Manalyze is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Manalyze is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Manalyze.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "manape/nt_values.h"


namespace nt {


const flag_dict DLL_CHARACTERISTICS =
	boost::assign::map_list_of ("IMAGE_LIBRARY_PROCESS_INIT",						0x0001)
							   ("IMAGE_LIBRARY_PROCESS_TERM",						0x0002)
							   ("IMAGE_LIBRARY_THREAD_INIT",						0x0004)
							   ("IMAGE_LIBRARY_THREAD_TERM",						0x0008)
							   ("IMAGE_DLLCHARACTERISTICS_HIGH_ENTROPY_VA",			0x0020)
							   ("IMAGE_DLLCHARACTERISTICS_DYNAMIC_BASE",			0x0040)
							   ("IMAGE_DLLCHARACTERISTICS_FORCE_INTEGRITY",			0x0080)
							   ("IMAGE_DLLCHARACTERISTICS_NX_COMPAT",				0x0100)
							   ("IMAGE_DLLCHARACTERISTICS_NO_ISOLATION",			0x0200)
							   ("IMAGE_DLLCHARACTERISTICS_NO_SEH",					0x0400)
							   ("IMAGE_DLLCHARACTERISTICS_NO_BIND",					0x0800)
							   ("IMAGE_DLLCHARACTERISTICS_APPCONTAINER",			0x1000)
							   ("IMAGE_DLLCHARACTERISTICS_WDM_DRIVER",				0x2000)
							   ("IMAGE_DLLCHARACTERISTICS_GUARD_CF",				0x4000)
							   ("IMAGE_DLLCHARACTERISTICS_TERMINAL_SERVER_AWARE",	0x8000);

// ----------------------------------------------------------------------------

const flag_dict SECTION_CHARACTERISTICS =
	boost::assign::map_list_of ("IMAGE_SCN_TYPE_REG",				0x00000000)
							   ("IMAGE_SCN_TYPE_DSECT",				0x00000001)
							   ("IMAGE_SCN_TYPE_NOLOAD",			0x00000002)
							   ("IMAGE_SCN_TYPE_GROUP",				0x00000004)
							   ("IMAGE_SCN_TYPE_NO_PAD",			0x00000008)
							   ("IMAGE_SCN_TYPE_COPY",				0x00000010)
							   ("IMAGE_SCN_CNT_CODE",				0x00000020)
							   ("IMAGE_SCN_CNT_INITIALIZED_DATA",	0x00000040)
							   ("IMAGE_SCN_CNT_UNINITIALIZED_DATA", 0x00000080)
							   ("IMAGE_SCN_LNK_OTHER",				0x00000100)
							   ("IMAGE_SCN_LNK_INFO",				0x00000200)
							   ("IMAGE_SCN_TYPE_OVER",				0x00000400)
							   ("IMAGE_SCN_LNK_REMOVE",				0x00000800)
							   ("IMAGE_SCN_LNK_COMDAT",				0x00001000)
							   ("IMAGE_SCN_NO_DEFER_SPEC_EXC",		0x00004000)
							   ("IMAGE_SCN_GPREL",					0x00008000)
							   ("IMAGE_SCN_MEM_FARDATA",			0x00008000)
							   ("IMAGE_SCN_MEM_PURGEABLE",			0x00020000)
							   ("IMAGE_SCN_MEM_LOCKED",				0x00040000)
							   ("IMAGE_SCN_MEM_PRELOAD",			0x00080000)
							   ("IMAGE_SCN_ALIGN_MASK",				0x00F00000)
							   ("IMAGE_SCN_LNK_NRELOC_OVFL",		0x01000000)
							   ("IMAGE_SCN_MEM_DISCARDABLE",		0x02000000)
							   ("IMAGE_SCN_MEM_NOT_CACHED",			0x04000000)
							   ("IMAGE_SCN_MEM_NOT_PAGED",			0x08000000)
							   ("IMAGE_SCN_MEM_SHARED",				0x10000000)
							   ("IMAGE_SCN_MEM_EXECUTE",			0x20000000)
							   ("IMAGE_SCN_MEM_READ",				0x40000000)
							   ("IMAGE_SCN_MEM_WRITE",				0x80000000);

// ----------------------------------------------------------------------------

const flag_dict PE_CHARACTERISTICS =
	boost::assign::map_list_of ("IMAGE_FILE_RELOCS_STRIPPED",			0x0001)
							   ("IMAGE_FILE_EXECUTABLE_IMAGE",			0x0002)
							   ("IMAGE_FILE_LINE_NUMS_STRIPPED",		0x0004)
							   ("IMAGE_FILE_LOCAL_SYMS_STRIPPED",		0x0008)
							   ("IMAGE_FILE_AGGRESIVE_WS_TRIM",			0x0010)
							   ("IMAGE_FILE_LARGE_ADDRESS_AWARE",		0x0020)
							   ("IMAGE_FILE_BYTES_REVERSED_LO",			0x0080)
							   ("IMAGE_FILE_32BIT_MACHINE",				0x0100)
							   ("IMAGE_FILE_DEBUG_STRIPPED",			0x0200)
							   ("IMAGE_FILE_REMOVABLE_RUN_FROM_SWAP",	0x0400)
							   ("IMAGE_FILE_NET_RUN_FROM_SWAP",			0x0800)
							   ("IMAGE_FILE_SYSTEM",					0x1000)
							   ("IMAGE_FILE_DLL",						0x2000)
							   ("IMAGE_FILE_UP_SYSTEM_ONLY",			0x4000)
							   ("IMAGE_FILE_BYTES_REVERSED_HI",			0x8000);

// ----------------------------------------------------------------------------

const flag_dict MACHINE_TYPES =
	boost::assign::map_list_of ("IMAGE_FILE_MACHINE_UNKNOWN",			0)
							   ("IMAGE_FILE_MACHINE_I386",				0x014c)
							   ("IMAGE_FILE_MACHINE_R3000",				0x0162)
							   ("IMAGE_FILE_MACHINE_R4000",				0x0166)
							   ("IMAGE_FILE_MACHINE_R10000",			0x0168)
							   ("IMAGE_FILE_MACHINE_WCEMIPSV2",			0x0169)
							   ("IMAGE_FILE_MACHINE_ALPHA",				0x0184)
							   ("IMAGE_FILE_MACHINE_SH3",				0x01a2)
							   ("IMAGE_FILE_MACHINE_SH3DSP",			0x01a3)
							   ("IMAGE_FILE_MACHINE_SH3E",				0x01a4)
							   ("IMAGE_FILE_MACHINE_SH4",				0x01a6)
							   ("IMAGE_FILE_MACHINE_SH5",				0x01a8)
							   ("IMAGE_FILE_MACHINE_ARM",				0x01c0)
							   ("IMAGE_FILE_MACHINE_THUMB",				0x01c2)
							   ("IMAGE_FILE_MACHINE_AM33",				0x01d3)
							   ("IMAGE_FILE_MACHINE_POWERPC",			0x01F0)
							   ("IMAGE_FILE_MACHINE_POWERPCFP",			0x01f1)
							   ("IMAGE_FILE_MACHINE_IA64",				0x0200)
							   ("IMAGE_FILE_MACHINE_MIPS16",			0x0266)
							   ("IMAGE_FILE_MACHINE_ALPHA64",			0x0284)
							   ("IMAGE_FILE_MACHINE_MIPSFPU",			0x0366)
							   ("IMAGE_FILE_MACHINE_MIPSFPU16",			0x0466)
							   ("IMAGE_FILE_MACHINE_TRICORE",			0x0520)
							   ("IMAGE_FILE_MACHINE_CEF",				0x0CEF)
							   ("IMAGE_FILE_MACHINE_EBC",				0x0EBC)
							   ("IMAGE_FILE_MACHINE_AMD64",				0x8664)
							   ("IMAGE_FILE_MACHINE_M32R",				0x9041)
							   ("IMAGE_FILE_MACHINE_CEE",				0xC0EE);

// ----------------------------------------------------------------------------

const flag_dict SUBSYSTEMS =
	boost::assign::map_list_of ("IMAGE_SUBSYSTEM_UNKNOWN", 0)
							   ("IMAGE_SUBSYSTEM_NATIVE", 1)
							   ("IMAGE_SUBSYSTEM_WINDOWS_GUI", 2)
							   ("IMAGE_SUBSYSTEM_WINDOWS_CUI", 3)
							   ("IMAGE_SUBSYSTEM_POSIX_CUI", 7)
							   ("IMAGE_SUBSYSTEM_NATIVE_WINDOWS", 8)
							   ("IMAGE_SUBSYSTEM_WINDOWS_CE_GUI", 9)
							   ("IMAGE_SUBSYSTEM_EFI_APPLICATION", 10)
							   ("IMAGE_SUBSYSTEM_EFI_BOOT_SERVICE_DRIVER", 11)
							   ("IMAGE_SUBSYSTEM_EFI_RUNTIME_DRIVER", 12)
							   ("IMAGE_SUBSYSTEM_EFI_ROM", 13)
							   ("IMAGE_SUBSYSTEM_XBOX", 14)
							   ("IMAGE_SUBSYSTEM_WINDOWS_BOOT_APPLICATION", 16);

// ----------------------------------------------------------------------------

const flag_dict IMAGE_OPTIONAL_HEADER_MAGIC =
	boost::assign::map_list_of ("PE32",		0x10b)
							   ("PE32+",	0x20b);

// ----------------------------------------------------------------------------

const flag_dict RESOURCE_TYPES =
	boost::assign::map_list_of ("RT_CURSOR",		1)
							   ("RT_BITMAP",		2)
							   ("RT_ICON",			3)
							   ("RT_MENU",			4)
							   ("RT_DIALOG",		5)
							   ("RT_STRING",		6)
							   ("RT_FONTDIR",		7)
							   ("RT_FONT",			8)
							   ("RT_ACCELERATOR",	9)
							   ("RT_RCDATA",		10)
							   ("RT_MESSAGETABLE",	11)
							   ("RT_GROUP_CURSOR",	12)
							   ("RT_GROUP_ICON",	14)
							   ("RT_VERSION",		16)
							   ("RT_DLGINCLUDE",	17)
							   ("RT_PLUGPLAY",		19)
							   ("RT_VXD",			20)
							   ("RT_ANICURSOR",		21)
							   ("RT_ANIICON",		22)
							   ("RT_HTML",			23)
							   ("RT_MANIFEST",		24);

// ----------------------------------------------------------------------------

// Source: https://msdn.microsoft.com/en-us/library/aa912040.aspx
extern const DECLSPEC flag_dict LANG_IDS =
	boost::assign::map_list_of  ("Afrikaans - South Africa",                0x0436)
			                    ("Albanian - Albania",                      0x041c)
	                    		("Arabic - Algeria",                        0x1401)
	                    		("Arabic - Bahrain",                        0x3c01)
			                    ("Arabic - Egypt",                          0x0c01)
			                    ("Arabic - Iraq",                           0x0801)
			                    ("Arabic - Jordan",                         0x2c01)
			                    ("Arabic - Kuwait",                         0x3401)
			                    ("Arabic - Lebanon",                        0x3001)
			                    ("Arabic - Libya",                          0x1001)
			                    ("Arabic - Morocco",                        0x1801)
			                    ("Arabic - Oman",                           0x2001)
			                    ("Arabic - Qatar",                          0x4001)
			                    ("Arabic - Saudi Arabia",                   0x0401)
			                    ("Arabic - Syria",                          0x2801)
			                    ("Arabic - Tunisia",                        0x1c01)
			                    ("Arabic - U.A.E.",                         0x3801)
			                    ("Arabic - Yemen",                          0x2401)
			                    ("Armenian - Armenia",                      0x042b)
			                    ("Azeri - Azerbaijan (Cyrillic)",           0x082c)
			                    ("Azeri - Azerbaijan (Latin)",              0x042c)
			                    ("Basque - Spain",                          0x042d)
			                    ("Belarusian - Belarus",                    0x0423)
			                    ("Bulgarian - Bulgaria",                    0x0402)
			                    ("Catalan - Spain",                         0x0403)
			                    ("Chinese - Hong Kong SAR",                 0x0c04)
			                    ("Chinese - Macao SAR",                     0x1404)
			                    ("Chinese - PRC",                           0x0804)
			                    ("Chinese - Singapore",                     0x1004)
			                    ("Chinese - Taiwan",                        0x0404)
			                    ("Croatian - Croatia",                      0x041a)
			                    ("Czech - Czech Republic",                  0x0405)
			                    ("Danish - Denmark",                        0x0406)
			                    ("Divehi - Maldives",                       0x0465)
			                    ("Dutch - Belgium",                         0x0813)
			                    ("Dutch - Netherlands",                     0x0413)
			                    ("English - Australia",                     0x0c09)
			                    ("English - Belize",                        0x2809)
			                    ("English - Canada",                        0x1009)
			                    ("English - Caribbean",                     0x2409)
			                    ("English - Ireland",                       0x1809)
			                    ("English - Jamaica",                       0x2009)
			                    ("English - New Zealand",                   0x1409)
			                    ("English - Philippines",                   0x3409)
			                    ("English - South Africa",                  0x1c09)
			                    ("English - Trinidad",                      0x2c09)
			                    ("English - United Kingdom",                0x0809)
			                    ("English - United States",                 0x0409)
			                    ("English - Zimbabwe",                      0x3009)
			                    ("Estonian - Estonia",                      0x0425)
			                    ("Faroese - Faroe Islands",                 0x0438)
			                    ("Farsi - Iran",                            0x0429)
			                    ("Finnish - Finland",                       0x040b)
   			                    ("French - Belgium",                        0x080c)
			                    ("French - Canada",                         0x0c0c)
			                    ("French - France",                         0x040c)
			                    ("French - Luxembourg",                     0x140c)
			                    ("French - Monaco",                         0x180c)
			                    ("French - Switzerland",                    0x100c)
			                    ("F.Y.R.O. Macedonia - F.Y.R.O. Macedonia", 0x042f)
			                    ("Galician - Spain",                        0x0456)
			                    ("Georgian - Georgia",                      0x0437)
			                    ("German - Austria",                        0x0c07)
			                    ("German - Germany",                        0x0407)
			                    ("German - Liechtenstein",                  0x1407)
			                    ("German - Luxembourg",                     0x1007)
			                    ("German - Switzerland",                    0x0807)
			                    ("Greek - Greece",                          0x0408)
			                    ("Gujarati - India",                        0x0447)
			                    ("Hebrew - Israel",                         0x040d)
			                    ("Hindi - India",                           0x0439)
			                    ("Hungarian - Hungary",                     0x040e)
			                    ("Icelandic - Iceland",                     0x040f)
			                    ("Indonesian - Indonesia (Bahasa)",         0x0421)
			                    ("Italian - Italy",                         0x0410)
			                    ("Italian - Switzerland",                   0x0810)
			                    ("Japanese - Japan",                        0x0411)
			                    ("Kannada - India (Kannada script)",        0x044b)
			                    ("Kazakh - Kazakstan",                      0x043f)
			                    ("Konkani - India",                         0x0457)
			                    ("Korean - Korea",                          0x0412)
			                    ("Kyrgyz - Kyrgyzstan",                     0x0440)
			                    ("Latvian - Latvia",                        0x0426)
			                    ("Lithuanian - Lithuania",                  0x0427)
			                    ("Malay - Brunei Darussalam",               0x083e)
			                    ("Malay - Malaysia",                        0x043e)
			                    ("Marathi - India",                         0x044e)
			                    ("Mongolian (Cyrillic) - Mongolia",         0x0450)
			                    ("Norwegian - Norway (Bokmal)",             0x0414)
			                    ("Norwegian - Norway (Nynorsk)",            0x0814)
			                    ("Polish - Poland",                         0x0415)
			                    ("Portuguese - Brazil",                     0x0416)
			                    ("Portuguese - Portugal",                   0x0816)
			                    ("Punjabi - India (Gurmukhi script)",       0x0446)
			                    ("Romanian - Romania",                      0x0418)
			                    ("Russian - Russia",                        0x0419)
			                    ("Sanskrit - India",                        0x044f)
			                    ("Serbian - Serbia (Cyrillic)",             0x0c1a)
			                    ("Serbian - Serbia (Latin)",                0x081a)
			                    ("Slovak - Slovakia",                       0x041b)
			                    ("Slovenian - Slovenia",                    0x0424)
			                    ("Spanish - Argentina",                     0x2c0a)
			                    ("Spanish - Bolivia",                       0x400a)
			                    ("Spanish - Chile",                         0x340a)
			                    ("Spanish - Colombia",                      0x240a)
			                    ("Spanish - Costa Rica",                    0x140a)
			                    ("Spanish - Dominican Republic",            0x1c0a)
			                    ("Spanish - Ecuador",                       0x300a)
			                    ("Spanish - El Salvador",                   0x440a)
			                    ("Spanish - Guatemala",                     0x100a)
			                    ("Spanish - Honduras",                      0x480a)
			                    ("Spanish - Mexico",                        0x080a)
			                    ("Spanish - Nicaragua",                     0x4c0a)
			                    ("Spanish - Panama",                        0x180a)
			                    ("Spanish - Paraguay",                      0x3c0a)
			                    ("Spanish - Peru",                          0x280a)
			                    ("Spanish - Puerto Rico",                   0x500a)
			                    ("Spanish - Spain (Traditional sort)",      0x040a)
			                    ("Spanish - Spain (International sort)",    0x0c0a)
			                    ("Spanish - Uruguay",                       0x380a)
			                    ("Spanish - Venezuela",                     0x200a)
			                    ("Swahili - Kenya",                         0x0441)
			                    ("Swedish - Finland",                       0x081d)
			                    ("Swedish - Sweden",                        0x041d)
			                    ("Syriac - Syria",                          0x045a)
			                    ("Tamil - India",                           0x0449)
			                    ("Tatar - Tatarstan",                       0x0444)
			                    ("Telugu - India (Telugu script)",          0x044a)
			                    ("Thai - Thailand",                         0x041e)
			                    ("Turkish - Turkey",                        0x041f)
			                    ("Ukrainian - Ukraine",                     0x0422)
			                    ("Urdu - Pakistan",                         0x0420)
			                    ("Uzbek - Uzbekistan (Cyrillic)",           0x0843)
                    			("Uzbek - Uzbekistan (Latin)",              0x0443)
			                    ("Vietnamese - Viet Nam",                   0x042a)
			                    ("Process Default Language",                0x0400);

// ----------------------------------------------------------------------------

const flag_dict CODEPAGES =
        boost::assign::map_list_of ("IBM EBCDIC US-Canada",			37)
                                   ("IBM PC US",                    437)
                                   ("Thai",                         874)
                                   ("Japanese",                     932)
                                   ("Chinese (simplified)",         936)
                                   ("Korean",                       949)
                                   ("Chinese (traditional)",        950)
                                   ("Unicode (UTF 16LE)",           1200)
                                   ("Unicode (UTF 16BE)",           1201)
                                   ("Latin 2 / Central European",   1250)
                                   ("Cyrillic",                     1251)
                                   ("Latin 1 / Western European",   1252)
                                   ("Greek",                        1253)
                                   ("Turkish",                      1254)
                                   ("Hebrew",                       1255)
                                   ("Arabic",                       1256)
                                   ("Baltic",                       1257)
                                   ("Vietnamese",                   1258)
                                   ("US-ASCII",                     20127)
                                   ("Russian (KOI8-R)",             20866)
                                   ("ISO 8859-1",                   28591)
                                   ("ISO 8859-2",                   28592)
                                   ("ISO 8859-3",                   28593)
                                   ("Unicode (UTF-7)",              65000)
                                   ("Unicode (UTF-8)",              65001);

// ----------------------------------------------------------------------------

const flag_dict FIXEDFILEINFO_FILEFLAGS =
	boost::assign::map_list_of ("VS_FF_DEBUG",					0x00000001)
							   ("VS_FF_PRERELEASE",				0x00000002)
							   ("VS_FF_PATCHED",				0x00000004)
							   ("VS_FF_PRIVATEBUILD",			0x00000008)
							   ("VS_FF_INFOINFERRED",			0x00000010)
							   ("VS_FF_SPECIALBUILD",			0x00000020);

// ----------------------------------------------------------------------------

const flag_dict FIXEDFILEINFO_FILEOS =
	boost::assign::map_list_of ("VOS_UNKNOWN",					0x00000000)
							   ("VOS_DOS",						0x00010000)
							   ("VOS_OS216",					0x00020000)
							   ("VOS_OS232",					0x00030000)
							   ("VOS_NT",						0x00040000)
							   ("VOS_WINCE",					0x00050000)
							   ("VOS__WINDOWS16",				0x00000001)
							   ("VOS__PM16",					0x00000002)
							   ("VOS__PM32",					0x00000003)
							   ("VOS__WINDOWS32",				0x00000004)
							   ("VOS_DOS_WINDOWS16",			0x00010001)
							   ("VOS_DOS_WINDOWS32",			0x00010004)
							   ("VOS_OS216_PM16",				0x00020002)
							   ("VOS_OS232_PM32",				0x00030003)
							   ("VOS_NT_WINDOWS32",				0x00040004);

// ----------------------------------------------------------------------------

const flag_dict FIXEDFILEINFO_FILETYPE =
	boost::assign::map_list_of ("VFT_UNKNOWN",					0x00000000)
							   ("VFT_APP",						0x00000001)
							   ("VFT_DLL",						0x00000002)
							   ("VFT_DRV",						0x00000003)
							   ("VFT_FONT",						0x00000004)
							   ("VFT_VXD",						0x00000005)
							   ("VFT_STATIC_LIB",				0x00000007);

// ----------------------------------------------------------------------------

const flag_dict FIXEDFILEINFO_FILESUBTYPE_DRV =
	boost::assign::map_list_of ("VFT2_UNKNOWN",					0x00000000)
							   ("VFT2_DRV_PRINTER",				0x00000001)
							   ("VFT2_DRV_KEYBOARD",			0x00000002)
							   ("VFT2_DRV_LANGUAGE",			0x00000003)
							   ("VFT2_DRV_DISPLAY",				0x00000004)
							   ("VFT2_DRV_MOUSE",				0x00000005)
							   ("VFT2_DRV_NETWORK",				0x00000006)
							   ("VFT2_DRV_SYSTEM",				0x00000007)
							   ("VFT2_DRV_INSTALLABLE",			0x00000008)
							   ("VFT2_DRV_SOUND",				0x00000009)
							   ("VFT2_DRV_COMM",				0x0000000A)
							   ("VFT2_DRV_INPUTMETHOD",			0x0000000B)
							   ("VFT2_DRV_VERSIONED_PRINTER",	0x0000000C);

// ----------------------------------------------------------------------------

const flag_dict FIXEDFILEINFO_FILESUBTYPE_FONT =
	boost::assign::map_list_of ("VFT2_FONT_RASTER",				0x00000001)
							   ("VFT2_FONT_VECTOR",				0x00000002)
							   ("VFT2_FONT_TRUETYPE",			0x00000003);

// ----------------------------------------------------------------------------

const flag_dict DEBUG_TYPES =
	boost::assign::map_list_of ("IMAGE_DEBUG_TYPE_UNKNOWN",			0)
							   ("IMAGE_DEBUG_TYPE_COFF",			1)
							   ("IMAGE_DEBUG_TYPE_CODEVIEW",		2)
							   ("IMAGE_DEBUG_TYPE_FPO",				3)
							   ("IMAGE_DEBUG_TYPE_MISC",			4)
							   ("IMAGE_DEBUG_TYPE_EXCEPTION",		5)
							   ("IMAGE_DEBUG_TYPE_FIXUP",			6)
							   ("IMAGE_DEBUG_TYPE_OMAP_TO_SRC",		7)
							   ("IMAGE_DEBUG_TYPE_OMAP_FROM_SRC",	8)
							   ("IMAGE_DEBUG_TYPE_BORLAND",			9)
							   ("IMAGE_DEBUG_TYPE_RESERVED",		10)
							   ("IMAGE_DEBUG_TYPE_CLSID",			11)
							   ("IMAGE_DEBUG_TYPE_VC_FEATURE",		12)
							   ("IMAGE_DEBUG_TYPE_POGO",			13)
							   ("IMAGE_DEBUG_TYPE_ILTCG",			14)
							   ("IMAGE_DEBUG_TYPE_MPX",				15);

// ----------------------------------------------------------------------------

const flag_dict BASE_RELOCATION_TYPES =
	boost::assign::map_list_of ("IMAGE_REL_BASED_ABSOLUTE",			0)
							   ("IMAGE_REL_BASED_HIGH",				1)
							   ("IMAGE_REL_BASED_LOW",				2)
							   ("IMAGE_REL_BASED_HIGHLOW",			3)
							   ("IMAGE_REL_BASED_HIGHADJ",			4)
							   ("IMAGE_REL_BASED_MIPS_JMPADDR16",	9)
							   ("IMAGE_REL_BASED_IA64_IMM64",		9)
							   ("IMAGE_REL_BASED_DIR64",			10);

// ----------------------------------------------------------------------------

const flag_dict WIN_CERTIFICATE_REVISIONS =
	boost::assign::map_list_of ("WIN_CERT_REVISION_1_0",			0x100)
							   ("WIN_CERT_REVISION_2_0",			0x200);

// ----------------------------------------------------------------------------

const flag_dict WIN_CERTIFICATE_TYPES =
	boost::assign::map_list_of ("WIN_CERT_TYPE_X509",				1)
							   ("WIN_CERT_TYPE_PKCS_SIGNED_DATA",	2)
							   ("WIN_CERT_TYPE_RESERVED",			3)
							   ("WIN_CERT_TYPE_PKCS1_SIGN",			4);

// ----------------------------------------------------------------------------

const_shared_strings translate_to_flags(int value, const flag_dict& dict)
{
	auto res = boost::make_shared<std::vector<std::string> >();
	for (auto it = dict.begin() ; it != dict.end() ; ++it)
	{
		if ((value & it->second) != 0) { // The flag is present in the value
			res->push_back(it->first);
		}
	}
	return res;
}

// ----------------------------------------------------------------------------

pString translate_to_flag(int value, const flag_dict& dict)
{
	for (auto it = dict.begin() ; it != dict.end() ; ++it)
	{
		if (value == it->second) {
			return boost::make_shared<std::string>(it->first);
		}
	}
    #ifdef _DEBUG
        std::stringstream ss;
        ss << "UNKNOWN (0x" << std::hex << value << ")";
	    return boost::make_shared<std::string>(ss.str());
	#else
        return boost::make_shared<std::string>("UNKNOWN");
    #endif
}

}