typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef unsigned short    word;
typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory:31;
    dword DataIsDirectory:1;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

typedef ulong DWORD;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef ushort WORD;

typedef uchar BYTE;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef void *HANDLE;

typedef HANDLE *LPHANDLE;

typedef struct _FILETIME FILETIME;

typedef int BOOL;

typedef BYTE *PBYTE;

typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY _IMAGE_RUNTIME_FUNCTION_ENTRY, *P_IMAGE_RUNTIME_FUNCTION_ENTRY;

struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
    ImageBaseOffset32 BeginAddress;
    dword EndAddress; // Apply ImageBaseOffset32 to see reference
    ImageBaseOffset32 UnwindInfoAddressOrData;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset:31;
    dword NameIsString:1;
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 34404
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

struct IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct IMAGE_OPTIONAL_HEADER64 IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER64 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    pointer64 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    qword SizeOfStackReserve;
    qword SizeOfStackCommit;
    qword SizeOfHeapReserve;
    qword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_NT_HEADERS64 IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;

struct IMAGE_NT_HEADERS64 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER64 OptionalHeader;
};

typedef struct IMAGE_BASE_RELOCATION IMAGE_BASE_RELOCATION, *PIMAGE_BASE_RELOCATION;

struct IMAGE_BASE_RELOCATION {
    dword VirtualAddress;
    dword SizeOfBlock;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct _WIN32_FIND_DATAA _WIN32_FIND_DATAA, *P_WIN32_FIND_DATAA;

typedef char CHAR;

struct _WIN32_FIND_DATAA {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    CHAR cFileName[260];
    CHAR cAlternateFileName[14];
};

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef long LONG;

typedef ulonglong ULONG_PTR;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef struct _WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT *PCONTEXT;

typedef void *PVOID;

typedef ulonglong DWORD64;

typedef union _union_54 _union_54, *P_union_54;

typedef struct _M128A _M128A, *P_M128A;

typedef struct _M128A M128A;

typedef struct _XSAVE_FORMAT _XSAVE_FORMAT, *P_XSAVE_FORMAT;

typedef struct _XSAVE_FORMAT XSAVE_FORMAT;

typedef XSAVE_FORMAT XMM_SAVE_AREA32;

typedef struct _struct_55 _struct_55, *P_struct_55;

typedef ulonglong ULONGLONG;

typedef longlong LONGLONG;

struct _M128A {
    ULONGLONG Low;
    LONGLONG High;
};

struct _XSAVE_FORMAT {
    WORD ControlWord;
    WORD StatusWord;
    BYTE TagWord;
    BYTE Reserved1;
    WORD ErrorOpcode;
    DWORD ErrorOffset;
    WORD ErrorSelector;
    WORD Reserved2;
    DWORD DataOffset;
    WORD DataSelector;
    WORD Reserved3;
    DWORD MxCsr;
    DWORD MxCsr_Mask;
    M128A FloatRegisters[8];
    M128A XmmRegisters[16];
    BYTE Reserved4[96];
};

struct _struct_55 {
    M128A Header[2];
    M128A Legacy[8];
    M128A Xmm0;
    M128A Xmm1;
    M128A Xmm2;
    M128A Xmm3;
    M128A Xmm4;
    M128A Xmm5;
    M128A Xmm6;
    M128A Xmm7;
    M128A Xmm8;
    M128A Xmm9;
    M128A Xmm10;
    M128A Xmm11;
    M128A Xmm12;
    M128A Xmm13;
    M128A Xmm14;
    M128A Xmm15;
};

union _union_54 {
    XMM_SAVE_AREA32 FltSave;
    struct _struct_55 s;
};

struct _CONTEXT {
    DWORD64 P1Home;
    DWORD64 P2Home;
    DWORD64 P3Home;
    DWORD64 P4Home;
    DWORD64 P5Home;
    DWORD64 P6Home;
    DWORD ContextFlags;
    DWORD MxCsr;
    WORD SegCs;
    WORD SegDs;
    WORD SegEs;
    WORD SegFs;
    WORD SegGs;
    WORD SegSs;
    DWORD EFlags;
    DWORD64 Dr0;
    DWORD64 Dr1;
    DWORD64 Dr2;
    DWORD64 Dr3;
    DWORD64 Dr6;
    DWORD64 Dr7;
    DWORD64 Rax;
    DWORD64 Rcx;
    DWORD64 Rdx;
    DWORD64 Rbx;
    DWORD64 Rsp;
    DWORD64 Rbp;
    DWORD64 Rsi;
    DWORD64 Rdi;
    DWORD64 R8;
    DWORD64 R9;
    DWORD64 R10;
    DWORD64 R11;
    DWORD64 R12;
    DWORD64 R13;
    DWORD64 R14;
    DWORD64 R15;
    DWORD64 Rip;
    union _union_54 u;
    M128A VectorRegister[26];
    DWORD64 VectorControl;
    DWORD64 DebugControl;
    DWORD64 LastBranchToRip;
    DWORD64 LastBranchFromRip;
    DWORD64 LastExceptionToRip;
    DWORD64 LastExceptionFromRip;
};

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef CHAR *LPCSTR;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER, *P_IMAGE_SECTION_HEADER;

typedef union _union_238 _union_238, *P_union_238;

union _union_238 {
    DWORD PhysicalAddress;
    DWORD VirtualSize;
};

struct _IMAGE_SECTION_HEADER {
    BYTE Name[8];
    union _union_238 Misc;
    DWORD VirtualAddress;
    DWORD SizeOfRawData;
    DWORD PointerToRawData;
    DWORD PointerToRelocations;
    DWORD PointerToLinenumbers;
    WORD NumberOfRelocations;
    WORD NumberOfLinenumbers;
    DWORD Characteristics;
};

typedef CHAR *LPSTR;

typedef struct _IMAGE_SECTION_HEADER *PIMAGE_SECTION_HEADER;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef struct SNavMeshInitParams SNavMeshInitParams, *PSNavMeshInitParams;

struct SNavMeshInitParams { // PlaceHolder Structure
};

typedef struct SNavMeshParams SNavMeshParams, *PSNavMeshParams;

struct SNavMeshParams { // PlaceHolder Structure
};

typedef struct rcHeightfield rcHeightfield, *PrcHeightfield;

struct rcHeightfield { // PlaceHolder Structure
};

typedef struct SBuildTileTaskData SBuildTileTaskData, *PSBuildTileTaskData;

struct SBuildTileTaskData { // PlaceHolder Structure
};

typedef struct rcContourSet rcContourSet, *PrcContourSet;

struct rcContourSet { // PlaceHolder Structure
};

typedef struct rcCompactHeightfield rcCompactHeightfield, *PrcCompactHeightfield;

struct rcCompactHeightfield { // PlaceHolder Structure
};

typedef struct SFsFile SFsFile, *PSFsFile;

struct SFsFile { // PlaceHolder Structure
};

typedef struct dtNavMesh dtNavMesh, *PdtNavMesh;

struct dtNavMesh { // PlaceHolder Structure
};

typedef struct tile_build_output tile_build_output, *Ptile_build_output;

struct tile_build_output { // PlaceHolder Structure
};

typedef enum ENUM {
} ENUM;

typedef enum TYPE {
} TYPE;

typedef struct vectorm<47,rcSegment> vectorm<47,rcSegment>, *Pvectorm<47,rcSegment>;

struct vectorm<47,rcSegment> { // PlaceHolder Structure
};

typedef struct vector<coll_tri> vector<coll_tri>, *Pvector<coll_tri>;

struct vector<coll_tri> { // PlaceHolder Structure
};

typedef struct vectorm<47,navmesh_connection_definition> vectorm<47,navmesh_connection_definition>, *Pvectorm<47,navmesh_connection_definition>;

struct vectorm<47,navmesh_connection_definition> { // PlaceHolder Structure
};

typedef struct string_base<char> string_base<char>, *Pstring_base<char>;

struct string_base<char> { // PlaceHolder Structure
};

typedef struct ifile ifile, *Pifile;

struct ifile { // PlaceHolder Structure
};

typedef struct file file, *Pfile;

struct file { // PlaceHolder Structure
};

typedef enum FLAGS {
} FLAGS;

typedef ULONG_PTR DWORD_PTR;

typedef int (*_onexit_t)(void);

typedef int errno_t;

typedef ulonglong size_t;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[114];
};



undefined4 DAT_140007290;
undefined4 DAT_140007294;
undefined4 DAT_140007298;
float DAT_140007290;
float DAT_140007294;
float DAT_140007298;
undefined DAT_140005904;
undefined1 DAT_140005720;
undefined DAT_1400056bc;
undefined DAT_1400056c0;
int DAT_140007190;
longlong DAT_140007188;
longlong DAT_140007180;
int DAT_1400071c8;
longlong DAT_1400071c0;
longlong DAT_1400071b8;
undefined8 DAT_1400072f8;
undefined DAT_140007300;
uint DAT_1400071fc;
uint DAT_1400071f8;
void *DAT_1400071f0;
undefined LAB_140003d40;
undefined8 *DAT_1400071f0;
undefined4 DAT_14000723c;
undefined FUN_1400042ec;
undefined4 DAT_140007238;
undefined DAT_14000722c;
undefined DAT_140007228;
undefined4 DAT_140007210;
undefined8 DAT_140007218;
undefined8 DAT_140007220;
void *DAT_140007438;
int DAT_140007430;
undefined8 DAT_140007450;
undefined *PTR___initenv_1400050a8;
longlong *DAT_140007220;
uint DAT_140007210;
void *StackBase;
int DAT_140007230;
int DAT_140007214;
int DAT_140007234;
undefined DAT_1400052a0;
undefined DAT_140005388;
undefined DAT_140005390;
undefined DAT_1400053a8;
undefined4 DAT_140007214;
undefined *PTR__fmode_1400050d8;
PVOID DAT_140007440;
undefined FUN_140004400;
PVOID DAT_140007448;
undefined4 DAT_140007244;
undefined *PTR__commode_1400050d0;
undefined4 DAT_140007240;
int DAT_14000700c;
int DAT_140007008;
undefined FUN_140004250;
undefined8 DAT_140005c28;
undefined8 DAT_140005c38;
IMAGE_DOS_HEADER IMAGE_DOS_HEADER_140000000;
ulonglong DAT_140007010;
undefined DAT_140007018;
void *StackLimit;
undefined DAT_1400072d0;
undefined FUN_1400048f0;
void *DAT_1400072b0;
void *DAT_1400072c0;
int DAT_1400071a8;
void *DAT_1400071a0;
int DAT_1400071e0;
void *DAT_1400071d8;
undefined4 DAT_1400071f8;

undefined4 * FUN_140001000(undefined4 *param_1)

{
  param_1[0x14] = 0x2f;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0x2f;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0x2f;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0x2f;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  param_1[0x2c] = 0x2f;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  param_1[0x32] = 0x2f;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  param_1[0x38] = 0x2f;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  param_1[0x3e] = 0x2f;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  param_1[0x44] = 0x2f;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  param_1[0x4a] = 0x2f;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  param_1[0x50] = 0x2f;
  *(undefined8 *)(param_1 + 0x52) = 0;
  FUN_140001230(param_1);
  return param_1;
}



void FUN_140001110(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x148);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 4) = 0;
    free((void *)puVar1[3]);
    *(undefined4 *)(puVar1 + 1) = 0;
    free((void *)*puVar1);
    operator_delete(puVar1);
  }
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  free(*(void **)(param_1 + 0x130));
  *(undefined4 *)(param_1 + 0x120) = 0;
  free(*(void **)(param_1 + 0x118));
  *(undefined4 *)(param_1 + 0x108) = 0;
  free(*(void **)(param_1 + 0x100));
  *(undefined4 *)(param_1 + 0xf0) = 0;
  free(*(void **)(param_1 + 0xe8));
  *(undefined4 *)(param_1 + 0xd8) = 0;
  free(*(void **)(param_1 + 0xd0));
  *(undefined4 *)(param_1 + 0xc0) = 0;
  free(*(void **)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0xa8) = 0;
  free(*(void **)(param_1 + 0xa0));
  *(undefined4 *)(param_1 + 0x90) = 0;
  free(*(void **)(param_1 + 0x88));
  *(undefined4 *)(param_1 + 0x78) = 0;
  free(*(void **)(param_1 + 0x70));
  *(undefined4 *)(param_1 + 0x60) = 0;
  free(*(void **)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x48) = 0;
                    // WARNING: Could not recover jumptable at 0x000140001221. Too many branches
                    // WARNING: Treating indirect jump as call
  free(*(void **)(param_1 + 0x40));
  return;
}



void FUN_140001230(undefined4 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = DAT_140007290;
  param_1[1] = DAT_140007294;
  param_1[2] = DAT_140007298;
  param_1[3] = DAT_140007290;
  param_1[4] = DAT_140007294;
  param_1[5] = DAT_140007298;
  param_1[6] = DAT_140007290;
  param_1[7] = DAT_140007294;
  param_1[8] = DAT_140007298;
  param_1[9] = DAT_140007290;
  param_1[10] = DAT_140007294;
  param_1[0xb] = DAT_140007298;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x12] = 0;
  param_1[0x18] = 0;
  param_1[0x1e] = 0;
  param_1[0x24] = 0;
  param_1[0x2a] = 0;
  param_1[0x30] = 0;
  param_1[0x36] = 0;
  param_1[0x3c] = 0;
  param_1[0x42] = 0;
  param_1[0x48] = 0;
  param_1[0x4e] = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x52);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 4) = 0;
    free((void *)puVar1[3]);
    *(undefined4 *)(puVar1 + 1) = 0;
    free((void *)*puVar1);
    operator_delete(puVar1);
    *(undefined8 *)(param_1 + 0x52) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x52) = 0;
  return;
}



longlong * FUN_140001380(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + -8);
    lVar3 = (longlong)iVar1 * 0x20 + lVar2;
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      operator_delete__(*(void **)(lVar3 + -0x20));
      operator_delete__(*(void **)(lVar3 + -0x10));
      lVar3 = lVar3 + -0x20;
    }
    operator_delete__((void *)(lVar2 + -8));
  }
  operator_delete(param_1);
  return param_1;
}



SNavMeshParams * FUN_140001410(SNavMeshParams *param_1)

{
  SNavMeshParams *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  SNavMeshParams local_88 [128];
  
  SNavMeshParams::SNavMeshParams(param_1);
  *(undefined8 *)(param_1 + 0x110) = 0;
  pSVar1 = (SNavMeshParams *)SNavMeshParams::SNavMeshParams(local_88);
  SNavMeshParams::operator=(param_1,pSVar1);
  SNavMeshParams::~SNavMeshParams(local_88);
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  fVar4 = DAT_140007290 * 2.0 * 0.5;
  *(float *)(param_1 + 0xcc) = fVar4;
  fVar3 = DAT_140007294 * 2.0 * 0.5;
  *(float *)(param_1 + 0xd0) = fVar3;
  fVar2 = DAT_140007298 * 2.0 * 0.5;
  *(float *)(param_1 + 0xd4) = fVar2;
  *(float *)(param_1 + 0xd8) = DAT_140007290 - fVar4;
  *(float *)(param_1 + 0xdc) = DAT_140007294 - fVar3;
  *(float *)(param_1 + 0xe0) = DAT_140007298 - fVar2;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return param_1;
}



void FUN_140001560(longlong param_1)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  pvVar1 = *(void **)(param_1 + 0xf8);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(*(void **)((longlong)pvVar1 + 0x28));
    lVar2 = *(longlong *)((longlong)pvVar1 + 0x30);
    while (lVar2 != 0) {
      lVar2 = **(longlong **)((longlong)pvVar1 + 0x30);
      operator_delete__(*(longlong **)((longlong)pvVar1 + 0x30));
      *(longlong *)((longlong)pvVar1 + 0x30) = lVar2;
    }
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(*(void **)((longlong)pvVar1 + 0x40));
    operator_delete__(*(void **)((longlong)pvVar1 + 0x48));
    operator_delete__(*(void **)((longlong)pvVar1 + 0x50));
    operator_delete__(*(void **)((longlong)pvVar1 + 0x58));
    operator_delete__(*(void **)((longlong)pvVar1 + 0x60));
    operator_delete__(*(void **)((longlong)pvVar1 + 0x68));
    operator_delete(pvVar1);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 0;
    free((void *)*puVar3);
    operator_delete(puVar3);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 0;
    free((void *)*puVar3);
    operator_delete(puVar3);
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (*(longlong **)(param_1 + 0x100) != (longlong *)0x0) {
    FUN_140001380(*(longlong **)(param_1 + 0x100));
  }
  pvVar1 = *(void **)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_1400016c0((undefined8 *)((longlong)pvVar1 + 0x150));
    FUN_140001110((longlong)pvVar1);
    operator_delete(pvVar1);
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  return;
}



void FUN_1400016c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1f);
  puVar1 = (undefined8 *)(param_1[0x1e] + (ulonglong)(iVar2 - 1) * 0x18);
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)(puVar1 + 1) = 0;
    free((void *)*puVar1);
    puVar1 = puVar1 + -3;
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  free((void *)param_1[0x1e]);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  free((void *)param_1[0x1b]);
  *(undefined4 *)(param_1 + 0x19) = 0;
  free((void *)param_1[0x18]);
  *(undefined4 *)(param_1 + 0x16) = 0;
  free((void *)param_1[0x15]);
  *(undefined4 *)(param_1 + 0x13) = 0;
  free((void *)param_1[0x12]);
  *(undefined4 *)(param_1 + 0x10) = 0;
  free((void *)param_1[0xf]);
  iVar2 = *(int *)(param_1 + 0xd);
  puVar1 = (undefined8 *)(param_1[0xc] + (ulonglong)(iVar2 - 1) * 0x18);
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)(puVar1 + 1) = 0;
    free((void *)*puVar1);
    puVar1 = puVar1 + -3;
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  free((void *)param_1[0xc]);
  *(undefined4 *)(param_1 + 10) = 0;
  free((void *)param_1[9]);
  *(undefined4 *)(param_1 + 7) = 0;
  free((void *)param_1[6]);
  *(undefined4 *)(param_1 + 4) = 0;
  free((void *)param_1[3]);
  *(undefined4 *)(param_1 + 1) = 0;
                    // WARNING: Could not recover jumptable at 0x000140001802. Too many branches
                    // WARNING: Treating indirect jump as call
  free((void *)*param_1);
  return;
}



// WARNING: Removing unreachable block (ram,0x000140001879)

void FUN_140001810(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  char *pcVar4;
  uint uVar5;
  
  if ((char *)*param_2 != (char *)0x0) {
    _strlwr_s((char *)*param_2,(ulonglong)(*(int *)((longlong)param_2 + 0xc) + 1));
  }
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar5 != 0) {
    pcVar4 = "";
    if ((char *)*param_1 != (char *)0x0) {
      pcVar4 = (char *)*param_1;
    }
    uVar3 = FUN_140003380(param_2,pcVar4,0);
    if (((int)uVar3 == 0) && (uVar1 = *(uint *)(param_2 + 1), uVar1 != 0)) {
      if (uVar5 == 0xffffffff) {
        uVar5 = uVar1;
      }
      if (uVar5 < uVar1) {
        memmove((void *)*param_2,(void *)((ulonglong)uVar5 + *param_2),(ulonglong)(uVar1 - uVar5));
        *(uint *)(param_2 + 1) = uVar1 - uVar5;
      }
      else {
        *(undefined4 *)(param_2 + 1) = 0;
      }
      *(undefined1 *)((ulonglong)*(uint *)(param_2 + 1) + *param_2) = 0;
    }
  }
  iVar2 = (int)param_2[1];
  while( true ) {
    if (iVar2 == 0) {
      return;
    }
    pcVar4 = (char *)*param_2;
    if ((*pcVar4 != '\\') && (*pcVar4 != '/')) break;
    uVar5 = *(uint *)(param_2 + 1);
    if (uVar5 != 0) {
      if (uVar5 < 2) {
        *(undefined4 *)(param_2 + 1) = 0;
      }
      else {
        memmove(pcVar4,pcVar4 + 1,(ulonglong)(uVar5 - 1));
        *(uint *)(param_2 + 1) = uVar5 - 1;
      }
      *(undefined1 *)((ulonglong)*(uint *)(param_2 + 1) + *param_2) = 0;
    }
    iVar2 = (int)param_2[1];
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000140001c0d)
// WARNING: Removing unreachable block (ram,0x000140001b65)
// WARNING: Removing unreachable block (ram,0x000140001ad7)
// WARNING: Removing unreachable block (ram,0x000140001a79)
// WARNING: Removing unreachable block (ram,0x0001400019d9)
// WARNING: Removing unreachable block (ram,0x0001400019e7)
// WARNING: Removing unreachable block (ram,0x000140001a87)
// WARNING: Removing unreachable block (ram,0x000140001ae9)
// WARNING: Removing unreachable block (ram,0x000140001b77)
// WARNING: Removing unreachable block (ram,0x000140001c1f)

undefined8 FUN_140001910(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  void *_Dst;
  undefined1 *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  tile_build_output *ptVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  tile_build_output *ptVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  uint local_res10 [2];
  int local_res18;
  uint local_res20 [2];
  char *local_1d8;
  undefined8 local_1d0;
  char *local_1c8;
  int local_1c0;
  int local_1bc;
  undefined1 *local_1b8;
  int local_1b0;
  int local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  ulonglong local_178;
  SNavMeshParams local_168 [128];
  vector<coll_tri> *local_e8;
  vectorm<> *local_e0;
  float local_d8 [3];
  float local_cc [3];
  int local_c0;
  tile_build_output *local_58;
  ulonglong uVar13;
  
  uVar15 = *(uint *)(param_2 + 1);
  uVar16 = (ulonglong)(int)uVar15;
  if (uVar15 == 0) {
    _Dst = (void *)0x0;
    uVar16 = 0;
  }
  else {
    _Dst = malloc((ulonglong)(uVar15 + 1));
    memcpy(_Dst,(void *)*param_2,(ulonglong)(uVar15 + 1));
    if ((_Dst != (void *)0x0) && (uVar15 != 0)) {
      uVar12 = 0;
      do {
        uVar13 = (ulonglong)uVar12;
        cVar2 = *(char *)(uVar13 + (longlong)_Dst);
        pcVar11 = ".navgeom";
        if (cVar2 != '\0') {
          do {
            if (*pcVar11 == '\0') goto LAB_1400019d4;
            if ((cVar2 != *pcVar11) ||
               ((longlong)uVar16 <= (longlong)(pcVar11 + (uVar13 - 0x140005720)))) break;
            cVar2 = pcVar11[(longlong)_Dst + (uVar13 - 0x14000571f)];
            pcVar11 = pcVar11 + 1;
          } while (cVar2 != '\0');
          if (*pcVar11 == '\0') {
LAB_1400019d4:
            if ((uVar12 != 0xffffffff) && (uVar12 < uVar15)) {
              uVar5 = uVar15 + uVar12;
              if (uVar5 < uVar15) {
                memmove((void *)(uVar13 + (longlong)_Dst),
                        (void *)((ulonglong)uVar5 + (longlong)_Dst),(ulonglong)(uVar15 - uVar5));
                uVar13 = (ulonglong)((uVar15 - uVar5) + uVar12);
              }
              *(undefined1 *)(uVar13 + (longlong)_Dst) = 0;
              uVar16 = uVar13;
            }
            break;
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar15);
      uVar15 = (uint)uVar16;
      if (uVar15 != 0) {
        uVar13 = 0;
        do {
          cVar2 = *(char *)(uVar13 + (longlong)_Dst);
          uVar12 = (uint)uVar13;
          pcVar11 = ".navtile";
          if (cVar2 != '\0') {
            do {
              if (*pcVar11 == '\0') goto LAB_140001a74;
              if ((cVar2 != *pcVar11) ||
                 ((longlong)(int)uVar15 <= (longlong)(pcVar11 + (uVar13 - 0x140005748)))) break;
              cVar2 = pcVar11[(longlong)_Dst + (uVar13 - 0x140005747)];
              pcVar11 = pcVar11 + 1;
            } while (cVar2 != '\0');
            if (*pcVar11 == '\0') {
LAB_140001a74:
              if ((uVar12 != 0xffffffff) && (uVar12 < uVar15)) {
                uVar5 = uVar15 + uVar12;
                if (uVar5 < uVar15) {
                  memmove((void *)(uVar13 + (longlong)_Dst),
                          (void *)((ulonglong)uVar5 + (longlong)_Dst),(ulonglong)(uVar15 - uVar5));
                  uVar16 = (ulonglong)((uVar15 - uVar5) + uVar12);
                  *(undefined1 *)(uVar16 + (longlong)_Dst) = 0;
                }
                else {
                  *(undefined1 *)(uVar13 + (longlong)_Dst) = 0;
                  uVar16 = uVar13;
                }
              }
              break;
            }
          }
          uVar13 = (ulonglong)(uVar12 + 1);
        } while (uVar12 + 1 < uVar15);
      }
    }
  }
  puVar6 = (undefined1 *)0x0;
  local_res18 = 0;
  iVar1 = (int)uVar16;
  iVar17 = iVar1 + 8;
  if (iVar17 != 0) {
    puVar6 = malloc((ulonglong)(iVar1 + 9));
    *puVar6 = 0;
    free((void *)0x0);
    local_res18 = iVar17;
  }
  local_178 = uVar16 & 0xffffffff;
  memcpy(puVar6,_Dst,uVar16 & 0xffffffff);
  memcpy(puVar6 + (uVar16 & 0xffffffff),&DAT_140005720,9);
  local_1ac = local_res18;
  local_1b8 = puVar6;
  local_1b0 = iVar17;
  free((void *)0x0);
  pcVar11 = (char *)0x0;
  iVar17 = iVar1 + 8;
  if (iVar17 != 0) {
    pcVar11 = malloc((ulonglong)(iVar1 + 9));
    *pcVar11 = '\0';
    free((void *)0x0);
  }
  memcpy(pcVar11,_Dst,uVar16 & 0xffffffff);
  memcpy(pcVar11 + (uVar16 & 0xffffffff),".navtile",9);
  free((void *)0x0);
  if (iVar17 == 0) {
    local_1d8 = (char *)0x0;
    local_1d0 = 0;
  }
  else {
    local_1d0 = CONCAT44(iVar17,iVar17);
    local_1d8 = malloc((ulonglong)(iVar1 + 9U));
    memcpy(local_1d8,pcVar11,(ulonglong)(iVar1 + 9U));
  }
  pcVar7 = (char *)0x0;
  local_res18 = 0;
  iVar17 = iVar1 + 8;
  if (iVar17 != 0) {
    pcVar7 = malloc((ulonglong)(iVar1 + 9));
    *pcVar7 = '\0';
    free((void *)0x0);
    local_res18 = iVar17;
  }
  uVar16 = local_178;
  memcpy(pcVar7,_Dst,local_178);
  memcpy(pcVar7 + uVar16,".navtcrc",9);
  local_1bc = local_res18;
  local_1c8 = pcVar7;
  local_1c0 = iVar17;
  free((void *)0x0);
  FUN_140001810(param_1,(longlong *)&local_1d8);
  FUN_140001410(local_168);
  ptVar14 = (tile_build_output *)0x0;
  local_1a8 = 0;
  local_1a4 = 0;
  local_1a0 = 0;
  local_188 = 0;
  local_180 = 0;
  local_19c = 0;
  local_198 = 0;
  local_194 = 0;
  local_res20[0] = 0;
  local_190 = 0;
  local_18c = 0;
  bVar3 = CNavMeshBuilder::LoadTileDataGeomCRC((string_base<char> *)&local_1c8,local_res20);
  local_res10[0] = 0;
  bVar4 = CNavMeshBuilder::LoadTileData
                    ((string_base<char> *)&local_1b8,(SBuildTileTaskData *)local_168,
                     (SNavMeshInitParams *)&local_1a8,local_res10);
  if (bVar4) {
    if ((bVar3) && (local_res20[0] == local_res10[0])) {
      pcVar7 = "";
      if (local_1d8 != (char *)0x0) {
        pcVar7 = local_1d8;
      }
      pcVar10 = "";
      if (local_1c8 != (char *)0x0) {
        pcVar10 = local_1c8;
      }
      fs::copy(pcVar10,pcVar7,0x8000);
      pcVar7 = ":";
    }
    else {
      ptVar9 = malloc(600);
      if (ptVar9 != (tile_build_output *)0x0) {
        FUN_140001000((undefined4 *)ptVar9);
        FUN_140001f30((undefined8 *)(ptVar9 + 0x150));
        ptVar14 = ptVar9;
      }
      local_58 = ptVar14;
      bVar3 = CNavMeshBuilder::BuildTileMesh
                        (ptVar14,local_168,local_e8,local_e0,local_d8,local_cc,local_c0,
                         (rcCompactHeightfield **)0x0,(rcHeightfield **)0x0,(rcContourSet **)0x0,
                         (vectorm<> **)0x0);
      ptVar14 = local_58;
      if (!bVar3) {
        if (local_58 != (tile_build_output *)0x0) {
          FUN_1400016c0((undefined8 *)(local_58 + 0x150));
          FUN_140001110((longlong)ptVar14);
          operator_delete(ptVar14);
        }
        local_58 = (tile_build_output *)0x0;
      }
      pcVar7 = "";
      if (pcVar11 != (char *)0x0) {
        pcVar7 = pcVar11;
      }
      fs::rem_file(pcVar7,0);
      CNavMeshBuilder::SaveTileData
                ((string_base<char> *)&local_1d8,(SBuildTileTaskData *)local_168,
                 (SNavMeshInitParams *)&local_1a8,local_res10);
      pcVar7 = ".";
    }
    printf(pcVar7);
    FUN_140001560((longlong)local_168);
    SNavMeshParams::~SNavMeshParams(local_168);
    free(local_1c8);
    local_1c8 = (char *)0x0;
    free(local_1d8);
    local_1d8 = (char *)0x0;
    free(pcVar11);
    free(local_1b8);
    local_1b8 = (undefined1 *)0x0;
    free(_Dst);
    uVar8 = 0;
  }
  else {
    puVar6 = &DAT_140005904;
    if (local_1b8 != (undefined1 *)0x0) {
      puVar6 = local_1b8;
    }
    printf("loading tile geom data error: %s\n",puVar6);
    FUN_140001560((longlong)local_168);
    SNavMeshParams::~SNavMeshParams(local_168);
    free(local_1c8);
    local_1c8 = (char *)0x0;
    free(local_1d8);
    local_1d8 = (char *)0x0;
    free(pcVar11);
    free(local_1b8);
    local_1b8 = (undefined1 *)0x0;
    free(_Dst);
    uVar8 = 2;
  }
  return uVar8;
}



undefined8 * FUN_140001f30(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0x2f;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0x2f;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x2f;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x2f;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x2f;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x2f;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x2f;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x2f;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x2f;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0x2f;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x2f;
  return param_1;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Removing unreachable block (ram,0x0001400026b1)
// WARNING: Removing unreachable block (ram,0x000140002254)
// WARNING: Removing unreachable block (ram,0x0001400020f9)
// WARNING: Removing unreachable block (ram,0x000140002109)
// WARNING: Removing unreachable block (ram,0x0001400022cf)
// WARNING: Removing unreachable block (ram,0x0001400026ca)
// WARNING: Removing unreachable block (ram,0x0001400022e7)

undefined8 FUN_140002010(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  LPCSTR pCVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  BOOL BVar6;
  char *pcVar7;
  undefined8 *puVar8;
  char *_Str;
  void *pvVar9;
  char *pcVar10;
  char cVar11;
  LPCSTR lpFileName;
  ulonglong uVar12;
  longlong lVar13;
  char *pcVar14;
  undefined *puVar15;
  ulonglong uVar16;
  string_base<char> *psVar17;
  int iVar18;
  CHAR *pCVar19;
  string_base<char> *psVar20;
  char *pcVar21;
  ulonglong uVar22;
  uint uVar23;
  uint local_res10 [2];
  uint local_res18;
  string_base<char> *local_res20;
  char *local_1488;
  uint local_1480;
  uint uStack_147c;
  void *local_1478 [2];
  undefined4 local_1468;
  undefined4 local_1464;
  undefined4 local_1460;
  undefined4 local_145c;
  undefined4 local_1458;
  undefined4 local_1454;
  undefined4 local_1450;
  undefined4 local_144c;
  undefined8 local_1448;
  undefined4 local_1440;
  LPCSTR local_1438 [2];
  SNavMeshParams local_1428 [172];
  int local_137c;
  int local_1378;
  tile_build_output *local_1318;
  SNavMeshParams local_1308 [128];
  dtNavMesh local_1288 [256];
  _WIN32_FIND_DATAA local_1188;
  char local_1048 [4096];
  undefined8 uStack_48;
  
  uStack_48 = 0x140002033;
  uVar23 = *(uint *)(param_2 + 1);
  pcVar21 = (char *)(longlong)(int)uVar23;
  _Str = (char *)0x0;
  if (uVar23 == 0) {
    local_1488 = (char *)0x0;
    pcVar21 = (char *)0x0;
    local_res10[0] = 0;
    local_1480 = 0;
    uStack_147c = 0;
  }
  else {
    local_res10[0] = uVar23;
    local_1480 = uVar23;
    uStack_147c = uVar23;
    pcVar7 = malloc((ulonglong)(uVar23 + 1));
    local_1488 = pcVar7;
    memcpy(pcVar7,(void *)*param_2,(ulonglong)(uVar23 + 1));
    if ((pcVar7 != (char *)0x0) && (pcVar10 = _Str, uVar23 != 0)) {
      do {
        uVar5 = (uint)pcVar10;
        pcVar14 = ".navgeom";
        cVar11 = pcVar7[(longlong)pcVar10];
        if (cVar11 != '\0') {
          do {
            if (*pcVar14 == '\0') goto LAB_1400020f4;
            if ((cVar11 != *pcVar14) ||
               ((longlong)pcVar21 <=
                (longlong)
                (pcVar14 +
                ((longlong)(pcVar10 + (longlong)(pcVar7 + -0x140005720)) - (longlong)pcVar7))))
            break;
            cVar11 = (pcVar10 + (longlong)(pcVar7 + -0x140005720) + 1)[(longlong)pcVar14];
            pcVar14 = pcVar14 + 1;
          } while (cVar11 != '\0');
          if (*pcVar14 == '\0') {
LAB_1400020f4:
            if ((uVar5 != 0xffffffff) && (uVar5 < uVar23)) {
              uVar4 = uVar23 + uVar5;
              if (uVar4 < uVar23) {
                memmove(pcVar10 + (longlong)pcVar7,pcVar7 + uVar4,(ulonglong)(uVar23 - uVar4));
                local_res10[0] = (uVar23 - uVar4) + uVar5;
                pcVar21 = (char *)(ulonglong)local_res10[0];
                pcVar21[(longlong)pcVar7] = '\0';
                local_1480 = local_res10[0];
              }
              else {
                pcVar10[(longlong)pcVar7] = '\0';
                pcVar21 = pcVar10;
                local_res10[0] = uVar5;
                local_1480 = uVar5;
              }
            }
            break;
          }
        }
        pcVar10 = (char *)(ulonglong)(uVar5 + 1);
      } while (uVar5 + 1 < uVar23);
    }
  }
  puVar8 = FUN_140003250(&local_1488,local_1478,"*");
  FUN_140003250(puVar8,local_1438,".navtile");
  free(local_1478[0]);
  pCVar2 = local_1438[0];
  pcVar7 = "";
  if (local_1438[0] != (LPCSTR)0x0) {
    pcVar7 = local_1438[0];
  }
  fs::extract_path(local_1048,0x1000,pcVar7,true);
  memset(&local_1188,0,0x140);
  lpFileName = "";
  if (pCVar2 != (LPCSTR)0x0) {
    lpFileName = pCVar2;
  }
  local_1478[0] = FindFirstFileA(lpFileName,&local_1188);
  uVar16 = 0;
  uVar23 = 0;
  uVar12 = 0;
  local_res20 = (string_base<char> *)0x0;
  uVar22 = uVar16;
  if (local_1478[0] != (HANDLE)0xffffffffffffffff) {
    do {
      if (local_1048 != _Str) {
        uVar12 = 0xffffffffffffffff;
        pcVar21 = local_1048;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          cVar11 = *pcVar21;
          pcVar21 = pcVar21 + 1;
        } while (cVar11 != '\0');
        uVar5 = (uint)(~uVar12 - 1);
        if (uVar5 == 0) {
          free(_Str);
          _Str = (char *)0x0;
          uVar12 = 0;
          uVar22 = 0;
        }
        else {
          uVar12 = ~uVar12 - 1 & 0xffffffff;
          if ((uint)uVar22 < uVar5) {
            free(_Str);
            _Str = malloc((ulonglong)(uVar5 + 1));
            memcpy(_Str,local_1048,(ulonglong)(uVar5 + 1));
            uVar22 = uVar12;
          }
          else {
            memcpy(_Str,local_1048,(ulonglong)(uVar5 + 1));
          }
        }
      }
      lVar13 = -1;
      pCVar19 = local_1188.cFileName;
      do {
        if (lVar13 == 0) break;
        lVar13 = lVar13 + -1;
        cVar11 = *pCVar19;
        pCVar19 = pCVar19 + 1;
      } while (cVar11 != '\0');
      iVar18 = ~(uint)lVar13 - 1;
      if (iVar18 != 0) {
        iVar1 = (int)uVar12;
        uVar5 = iVar1 + iVar18;
        pcVar21 = _Str;
        local_res18 = uVar5;
        if ((uint)uVar22 < uVar5) {
          pcVar21 = malloc((ulonglong)(uVar5 + 1));
          if (iVar1 == 0) {
            *pcVar21 = '\0';
          }
          else {
            memcpy(pcVar21,_Str,(ulonglong)(iVar1 + 1));
          }
          free(_Str);
          uVar22 = (ulonglong)uVar5;
        }
        memcpy(pcVar21 + uVar12,local_1188.cFileName,(ulonglong)~(uint)lVar13);
        uVar12 = (ulonglong)local_res18;
        _Str = pcVar21;
      }
      if (_Str != (char *)0x0) {
        _strlwr_s(_Str,(ulonglong)((int)uVar22 + 1));
      }
      if (((byte)local_1188.dwFileAttributes & 0x10) == 0) {
        uVar5 = (int)uVar16 + 1;
        if (uVar23 < uVar5) {
          uVar23 = (uVar23 * 10 >> 3) + 0x10 & 0xfffffff0;
          if (uVar23 < uVar5) {
            uVar23 = uVar5;
          }
          local_res20 = realloc(local_res20,(ulonglong)(uVar23 << 4));
        }
        psVar17 = local_res20 + uVar16 * 0x10;
        if (psVar17 != (string_base<char> *)0x0) {
          iVar18 = (int)uVar12;
          if (iVar18 == 0) {
            *(undefined8 *)psVar17 = 0;
            *(undefined8 *)(psVar17 + 8) = 0;
          }
          else {
            *(int *)(psVar17 + 8) = iVar18;
            *(int *)(psVar17 + 0xc) = iVar18;
            pvVar9 = malloc((ulonglong)(iVar18 + 1U));
            *(void **)psVar17 = pvVar9;
            memcpy(pvVar9,_Str,(ulonglong)(iVar18 + 1U));
          }
        }
        uVar16 = (ulonglong)uVar5;
      }
      pvVar9 = local_1478[0];
      BVar6 = FindNextFileA(local_1478[0],&local_1188);
    } while (BVar6 != 0);
    FindClose(pvVar9);
    pcVar21 = (char *)(ulonglong)local_res10[0];
  }
  psVar17 = local_res20;
  SNavMeshParams::SNavMeshParams(local_1308);
  uVar23 = (uint)uVar16;
  pcVar7 = local_1488;
  if (uVar23 != 0) {
    FUN_140001410(local_1428);
    pcVar10 = (char *)0x0;
    bVar3 = false;
    local_1448 = 0;
    local_1440 = 0;
    local_1468 = 0;
    local_1464 = 0;
    local_1460 = 0;
    local_res10[0] = 0;
    local_145c = 0;
    local_1458 = 0;
    local_1454 = 0;
    local_1450 = 0;
    local_144c = 0;
    pcVar7 = pcVar10;
    do {
      iVar18 = (int)pcVar7;
      if ((int)uVar23 <= iVar18) {
        if (bVar3 == false) {
          puVar15 = &DAT_140005904;
          if (*(undefined **)psVar17 != (undefined *)0x0) {
            puVar15 = *(undefined **)psVar17;
          }
          printf("no tile to load navmesh init params: %s\n",puVar15);
          FUN_140001560((longlong)local_1428);
          SNavMeshParams::~SNavMeshParams(local_1428);
          SNavMeshParams::~SNavMeshParams(local_1308);
          free(_Str);
          psVar20 = psVar17 + (ulonglong)(uVar23 - 1) * 0x10;
          while (uVar23 != 0) {
            free(*(void **)psVar20);
            *(undefined8 *)psVar20 = 0;
            psVar20 = psVar20 + -0x10;
            uVar23 = (int)uVar16 - 1;
            uVar16 = (ulonglong)uVar23;
          }
          free(psVar17);
          free(local_1438[0]);
          free(local_1488);
          return 2;
        }
        break;
      }
      bVar3 = CNavMeshBuilder::LoadTileData
                        (psVar17 + (longlong)iVar18 * 0x10,(SBuildTileTaskData *)local_1428,
                         (SNavMeshInitParams *)&local_1468,local_res10);
      pcVar7 = (char *)(ulonglong)(iVar18 + 1);
    } while (!bVar3);
    SNavMeshParams::operator=(local_1308,local_1428);
    FUN_140001560((longlong)local_1428);
    dtNavMesh::dtNavMesh(local_1288);
    bVar3 = dtNavMesh::init(local_1288,(SNavMeshInitParams *)&local_1468);
    if (!bVar3) {
      printf("NavMesh init error\n");
      dtNavMesh::~dtNavMesh(local_1288);
      FUN_140001560((longlong)local_1428);
      SNavMeshParams::~SNavMeshParams(local_1428);
      SNavMeshParams::~SNavMeshParams(local_1308);
      free(_Str);
      psVar20 = psVar17 + (ulonglong)(uVar23 - 1) * 0x10;
      while (uVar23 != 0) {
        free(*(void **)psVar20);
        *(undefined8 *)psVar20 = 0;
        psVar20 = psVar20 + -0x10;
        uVar23 = (int)uVar16 - 1;
        uVar16 = (ulonglong)uVar23;
      }
      free(psVar17);
      free(local_1438[0]);
      free(local_1488);
      return 3;
    }
    psVar20 = psVar17;
    uVar22 = uVar16;
    if (uVar23 != 0) {
      do {
        CNavMeshBuilder::LoadTileData
                  (psVar20,(SBuildTileTaskData *)local_1428,(SNavMeshInitParams *)&local_1468,
                   local_res10);
        dtNavMesh::addTileAt(local_1288,local_137c,local_1378,local_1318);
        FUN_140001560((longlong)local_1428);
        uVar22 = uVar22 - 1;
        psVar20 = psVar20 + 0x10;
      } while (uVar22 != 0);
    }
    CNavMeshBuilder::PostBuildStep(local_1308,local_1288);
    local_res18 = 0;
    uVar5 = (int)pcVar21 + 8;
    local_res20 = (string_base<char> *)CONCAT44(local_res20._4_4_,uVar5);
    if (uVar5 != 0) {
      pcVar10 = malloc((ulonglong)((int)pcVar21 + 9));
      *pcVar10 = '\0';
      free((void *)0x0);
      local_res18 = uVar5;
    }
    pcVar7 = local_1488;
    memcpy(pcVar10,local_1488,(ulonglong)pcVar21 & 0xffffffff);
    memcpy(pcVar10 + ((ulonglong)pcVar21 & 0xffffffff),".navmesh",9);
    local_1480 = (uint)local_res20;
    uStack_147c = local_res18;
    local_1488 = pcVar10;
    free((void *)0x0);
    pcVar21 = "";
    if (pcVar10 != (char *)0x0) {
      pcVar21 = pcVar10;
    }
    fs::read_only_remove(pcVar21);
    FUN_140001810(param_1,(longlong *)&local_1488);
    fs::file::file((file *)local_1478);
    pcVar21 = local_1488;
    pcVar10 = "";
    if (local_1488 != (char *)0x0) {
      pcVar10 = local_1488;
    }
    fs::file::open((file *)local_1478,pcVar10,1,0);
    dtNavMesh::save(local_1288,(ifile *)local_1478);
    fs::file::close((file *)local_1478);
    fs::file::~file((file *)local_1478);
    free(pcVar21);
    dtNavMesh::~dtNavMesh(local_1288);
    FUN_140001560((longlong)local_1428);
    SNavMeshParams::~SNavMeshParams(local_1428);
  }
  SNavMeshParams::~SNavMeshParams(local_1308);
  free(_Str);
  psVar20 = psVar17 + (ulonglong)(uVar23 - 1) * 0x10;
  while (uVar23 != 0) {
    free(*(void **)psVar20);
    *(undefined8 *)psVar20 = 0;
    psVar20 = psVar20 + -0x10;
    uVar23 = (int)uVar16 - 1;
    uVar16 = (ulonglong)uVar23;
  }
  free(psVar17);
  free(local_1438[0]);
  free(pcVar7);
  return 0;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Removing unreachable block (ram,0x000140002934)
// WARNING: Removing unreachable block (ram,0x0001400029ad)
// WARNING: Removing unreachable block (ram,0x0001400029c0)

void FUN_140002860(longlong *param_1)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  HANDLE hFindFile;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  LPCSTR pCVar9;
  int iVar10;
  CHAR *pCVar11;
  uint uVar12;
  _WIN32_FIND_DATAA local_1168;
  char local_1028 [4088];
  undefined8 uStack_30;
  
  uStack_30 = 0x140002872;
  pcVar4 = "";
  if ((char *)*param_1 != (char *)0x0) {
    pcVar4 = (char *)*param_1;
  }
  fs::extract_path(local_1028,0x1000,pcVar4,true);
  memset(&local_1168,0,0x140);
  pCVar9 = "";
  if ((LPCSTR)*param_1 != (LPCSTR)0x0) {
    pCVar9 = (LPCSTR)*param_1;
  }
  hFindFile = FindFirstFileA(pCVar9,&local_1168);
  pcVar4 = (char *)0x0;
  uVar7 = 0;
  uVar12 = 0;
  if (hFindFile != (HANDLE)0xffffffffffffffff) {
    do {
      uVar6 = uVar12;
      if (local_1028 != pcVar4) {
        uVar7 = 0xffffffffffffffff;
        pcVar5 = local_1028;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        uVar6 = (uint)(~uVar7 - 1);
        if (uVar6 == 0) {
          free(pcVar4);
          pcVar4 = (char *)0x0;
          uVar7 = 0;
          uVar6 = 0;
        }
        else {
          uVar7 = ~uVar7 - 1 & 0xffffffff;
          if (uVar12 < uVar6) {
            free(pcVar4);
            pcVar4 = malloc((ulonglong)(uVar6 + 1));
            memcpy(pcVar4,local_1028,(ulonglong)(uVar6 + 1));
          }
          else {
            memcpy(pcVar4,local_1028,(ulonglong)(uVar6 + 1));
            uVar6 = uVar12;
          }
        }
      }
      lVar8 = -1;
      pCVar11 = local_1168.cFileName;
      do {
        if (lVar8 == 0) break;
        lVar8 = lVar8 + -1;
        cVar1 = *pCVar11;
        pCVar11 = pCVar11 + 1;
      } while (cVar1 != '\0');
      iVar10 = ~(uint)lVar8 - 1;
      uVar12 = uVar6;
      if (iVar10 != 0) {
        iVar2 = (int)uVar7;
        uVar12 = iVar10 + iVar2;
        pcVar5 = pcVar4;
        if (uVar6 < uVar12) {
          pcVar5 = malloc((ulonglong)(uVar12 + 1));
          if (iVar2 == 0) {
            *pcVar5 = '\0';
          }
          else {
            memcpy(pcVar5,pcVar4,(ulonglong)(iVar2 + 1));
          }
          free(pcVar4);
          uVar6 = uVar12;
        }
        memcpy(pcVar5 + uVar7,local_1168.cFileName,(ulonglong)~(uint)lVar8);
        uVar7 = (ulonglong)uVar12;
        pcVar4 = pcVar5;
        uVar12 = uVar6;
      }
      if (pcVar4 != (char *)0x0) {
        _strlwr_s(pcVar4,(ulonglong)(uVar12 + 1));
      }
      if (((byte)local_1168.dwFileAttributes & 0x10) == 0) {
        pCVar9 = "";
        if (pcVar4 != (char *)0x0) {
          pCVar9 = pcVar4;
        }
        DeleteFileA(pCVar9);
      }
      BVar3 = FindNextFileA(hFindFile,&local_1168);
    } while (BVar3 != 0);
    FindClose(hFindFile);
  }
  free(pcVar4);
  return;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Removing unreachable block (ram,0x000140003097)
// WARNING: Removing unreachable block (ram,0x000140002d7b)
// WARNING: Removing unreachable block (ram,0x000140002ce2)
// WARNING: Removing unreachable block (ram,0x000140002cd0)
// WARNING: Removing unreachable block (ram,0x000140002ca8)
// WARNING: Removing unreachable block (ram,0x000140002f7a)
// WARNING: Removing unreachable block (ram,0x000140002f86)
// WARNING: Removing unreachable block (ram,0x000140002d8d)
// WARNING: Removing unreachable block (ram,0x000140003013)
// WARNING: Removing unreachable block (ram,0x000140003021)
// WARNING: Removing unreachable block (ram,0x0001400030a4)

undefined8 FUN_140002a90(longlong *param_1,undefined8 *param_2)

{
  HANDLE hFindFile;
  LPCSTR pCVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  BOOL BVar5;
  uint uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  char *_Str;
  char *_Dst;
  undefined1 *_Dst_00;
  SFsFile *pSVar10;
  int iVar11;
  LPCSTR lpFileName;
  ulonglong uVar12;
  longlong lVar13;
  char *pcVar14;
  int iVar15;
  undefined1 *puVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  char *pcVar20;
  CHAR *pCVar21;
  char *pcVar22;
  char *pcVar23;
  uint *puVar24;
  uint uVar25;
  uint local_res10;
  HANDLE local_res18;
  uint local_res20 [2];
  void *local_11f8;
  undefined1 *local_11f0;
  int local_11e8;
  int local_11e4;
  void *local_11e0;
  undefined8 local_11d8;
  char *local_11d0;
  void *local_11c8;
  undefined8 local_11c0;
  uint *local_11b8;
  char *local_11b0;
  int local_11a8;
  int local_11a4;
  char *local_11a0;
  LPCSTR local_1198 [2];
  _WIN32_FIND_DATAA local_1188;
  char local_1048 [4096];
  undefined8 uStack_48;
  
  uStack_48 = 0x140002ab3;
  uVar25 = *(uint *)(param_2 + 1);
  if (uVar25 == 0) {
    local_11e0 = (void *)0x0;
    local_11d8 = 0;
  }
  else {
    local_11d8 = CONCAT44(uVar25,uVar25);
    pvVar7 = malloc((ulonglong)(uVar25 + 1));
    local_11e0 = pvVar7;
    memcpy(pvVar7,(void *)*param_2,(ulonglong)(uVar25 + 1));
    if ((pvVar7 != (void *)0x0) && (uVar25 != 0)) {
      uVar17 = 0;
      do {
        uVar12 = (ulonglong)uVar17;
        pcVar14 = ".navgeom";
        cVar2 = *(char *)(uVar12 + (longlong)pvVar7);
        if (cVar2 != '\0') {
          do {
            if (*pcVar14 == '\0') goto LAB_140002cc7;
            if ((cVar2 != *pcVar14) ||
               ((longlong)(int)uVar25 <= (longlong)(pcVar14 + (uVar12 - 0x140005720)))) break;
            cVar2 = pcVar14[(longlong)pvVar7 + (uVar12 - 0x14000571f)];
            pcVar14 = pcVar14 + 1;
          } while (cVar2 != '\0');
          if (*pcVar14 == '\0') {
LAB_140002cc7:
            if ((uVar17 != 0xffffffff) && (uVar12 = (ulonglong)uVar17, uVar17 < uVar25)) {
              uVar6 = uVar25 + uVar17;
              if (uVar6 < uVar25) {
                memmove((void *)(uVar12 + (longlong)pvVar7),
                        (void *)((ulonglong)uVar6 + (longlong)pvVar7),(ulonglong)(uVar25 - uVar6));
                uVar12 = (ulonglong)(uVar17 + (uVar25 - uVar6));
              }
              local_11d8 = CONCAT44(local_11d8._4_4_,(int)uVar12);
              *(undefined1 *)(uVar12 + (longlong)pvVar7) = 0;
            }
            break;
          }
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar25);
    }
  }
  pcVar14 = (char *)0x0;
  puVar8 = FUN_140003250(&local_11e0,local_1198,"*");
  plVar9 = FUN_140003250(puVar8,&local_11f0,".navgeom.unmodified");
  FUN_140002860(plVar9);
  free(local_11f0);
  local_11f0 = (undefined1 *)0x0;
  free(local_1198[0]);
  puVar8 = FUN_140003250(&local_11e0,&local_11f0,"*");
  FUN_140003250(puVar8,local_1198,".navgeom");
  free(local_11f0);
  pCVar1 = local_1198[0];
  pcVar20 = "";
  if (local_1198[0] != (LPCSTR)0x0) {
    pcVar20 = local_1198[0];
  }
  fs::extract_path(local_1048,0x1000,pcVar20,true);
  memset(&local_1188,0,0x140);
  lpFileName = "";
  if (pCVar1 != (LPCSTR)0x0) {
    lpFileName = pCVar1;
  }
  local_res18 = FindFirstFileA(lpFileName,&local_1188);
  local_res10 = 0;
  local_11d0 = (char *)0x0;
  local_11f8 = (void *)0x0;
  pcVar20 = pcVar14;
  pcVar22 = pcVar14;
  pcVar23 = pcVar14;
  _Str = pcVar14;
  if (local_res18 != (HANDLE)0xffffffffffffffff) {
    do {
      if (local_1048 != _Str) {
        uVar12 = 0xffffffffffffffff;
        pcVar20 = local_1048;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          cVar2 = *pcVar20;
          pcVar20 = pcVar20 + 1;
        } while (cVar2 != '\0');
        uVar25 = (uint)(~uVar12 - 1);
        if (uVar25 == 0) {
          free(_Str);
          pcVar20 = (char *)0x0;
          pcVar23 = (char *)0x0;
          _Str = (char *)0x0;
        }
        else {
          pcVar20 = (char *)(~uVar12 - 1 & 0xffffffff);
          if ((uint)pcVar23 < uVar25) {
            free(_Str);
            _Str = malloc((ulonglong)(uVar25 + 1));
            memcpy(_Str,local_1048,(ulonglong)(uVar25 + 1));
            pcVar23 = pcVar20;
          }
          else {
            memcpy(_Str,local_1048,(ulonglong)(uVar25 + 1));
          }
        }
      }
      lVar13 = -1;
      pCVar21 = local_1188.cFileName;
      do {
        if (lVar13 == 0) break;
        lVar13 = lVar13 + -1;
        cVar2 = *pCVar21;
        pCVar21 = pCVar21 + 1;
      } while (cVar2 != '\0');
      iVar11 = ~(uint)lVar13 - 1;
      if (iVar11 != 0) {
        iVar15 = (int)pcVar20;
        uVar25 = iVar15 + iVar11;
        _Dst = _Str;
        if ((uint)pcVar23 < uVar25) {
          _Dst = malloc((ulonglong)(uVar25 + 1));
          if (iVar15 == 0) {
            *_Dst = '\0';
          }
          else {
            memcpy(_Dst,_Str,(ulonglong)(iVar15 + 1));
          }
          free(_Str);
          pcVar23 = (char *)(ulonglong)uVar25;
        }
        memcpy(pcVar20 + (longlong)_Dst,local_1188.cFileName,(ulonglong)~(uint)lVar13);
        pcVar14 = (char *)(ulonglong)local_res10;
        pcVar20 = (char *)(ulonglong)uVar25;
        _Str = _Dst;
      }
      if (_Str != (char *)0x0) {
        _strlwr_s(_Str,(ulonglong)((int)pcVar23 + 1));
      }
      if (((byte)local_1188.dwFileAttributes & 0x10) == 0) {
        local_res10 = (int)pcVar14 + 1;
        if ((uint)pcVar22 < local_res10) {
          uVar25 = ((uint)pcVar22 * 10 >> 3) + 0x10 & 0xfffffff0;
          if (uVar25 < local_res10) {
            uVar25 = local_res10;
          }
          pcVar22 = (char *)(ulonglong)uVar25;
          local_11f8 = realloc(local_11f8,(ulonglong)(uVar25 << 4));
        }
        puVar8 = (undefined8 *)((longlong)pcVar14 * 0x10 + (longlong)local_11f8);
        if (puVar8 != (undefined8 *)0x0) {
          iVar11 = (int)pcVar20;
          if (iVar11 == 0) {
            *puVar8 = 0;
            puVar8[1] = 0;
          }
          else {
            *(int *)(puVar8 + 1) = iVar11;
            *(int *)((longlong)puVar8 + 0xc) = iVar11;
            pvVar7 = malloc((ulonglong)(iVar11 + 1U));
            *puVar8 = pvVar7;
            memcpy(pvVar7,_Str,(ulonglong)(iVar11 + 1U));
          }
        }
        pcVar14 = (char *)(ulonglong)local_res10;
      }
      hFindFile = local_res18;
      BVar5 = FindNextFileA(local_res18,&local_1188);
    } while (BVar5 != 0);
    local_11d0 = _Str;
    FindClose(hFindFile);
  }
  if ((int)pcVar14 != 0) {
    puVar24 = (uint *)((longlong)local_11f8 + 8);
    local_11a0 = pcVar14;
    do {
      _Dst_00 = (undefined1 *)0x0;
      uVar25 = *puVar24;
      puVar16 = (undefined1 *)(longlong)(int)uVar25;
      local_11b8 = puVar24;
      if (uVar25 == 0) {
        pvVar7 = (void *)0x0;
        puVar16 = (undefined1 *)0x0;
      }
      else {
        pvVar7 = malloc((ulonglong)(uVar25 + 1));
        memcpy(pvVar7,*(void **)(puVar24 + -2),(ulonglong)(uVar25 + 1));
        if ((pvVar7 != (void *)0x0) && (puVar19 = _Dst_00, uVar25 != 0)) {
          do {
            uVar17 = (uint)puVar19;
            pcVar14 = ".navgeom";
            cVar2 = *(char *)((longlong)pvVar7 + (longlong)puVar19);
            if (cVar2 != '\0') {
              do {
                if (*pcVar14 == '\0') goto LAB_140002f73;
                if ((cVar2 != *pcVar14) ||
                   ((longlong)puVar16 <= (longlong)(pcVar14 + (longlong)(puVar19 + -0x140005720))))
                break;
                cVar2 = (puVar19 + (longlong)pvVar7 + -0x14000571f)[(longlong)pcVar14];
                pcVar14 = pcVar14 + 1;
              } while (cVar2 != '\0');
              if (*pcVar14 == '\0') {
LAB_140002f73:
                if ((uVar17 != 0xffffffff) && (uVar17 < uVar25)) {
                  uVar6 = uVar25 + uVar17;
                  if (uVar6 < uVar25) {
                    memmove(puVar19 + (longlong)pvVar7,(void *)((ulonglong)uVar6 + (longlong)pvVar7)
                            ,(ulonglong)(uVar25 - uVar6));
                    puVar16 = (undefined1 *)(ulonglong)((uVar25 - uVar6) + uVar17);
                    puVar16[(longlong)pvVar7] = 0;
                  }
                  else {
                    puVar19[(longlong)pvVar7] = 0;
                    puVar16 = puVar19;
                  }
                }
                break;
              }
            }
            puVar19 = (undefined1 *)(ulonglong)(uVar17 + 1);
          } while (uVar17 + 1 < uVar25);
        }
      }
      uVar25 = *puVar24;
      if (uVar25 == 0) {
        local_11c8 = (void *)0x0;
        local_11c0 = 0;
      }
      else {
        local_11c0 = CONCAT44(uVar25,uVar25);
        local_11c8 = malloc((ulonglong)(uVar25 + 1));
        memcpy(local_11c8,*(void **)(puVar24 + -2),(ulonglong)(uVar25 + 1));
      }
      iVar11 = 0;
      iVar15 = (int)puVar16;
      iVar18 = iVar15 + 8;
      if (iVar18 != 0) {
        _Dst_00 = malloc((ulonglong)(iVar15 + 9));
        *_Dst_00 = 0;
        free((void *)0x0);
        iVar11 = iVar18;
      }
      uVar12 = (ulonglong)puVar16 & 0xffffffff;
      memcpy(_Dst_00,pvVar7,(ulonglong)puVar16 & 0xffffffff);
      memcpy(_Dst_00 + uVar12,".navtile",9);
      local_11f0 = _Dst_00;
      local_11e8 = iVar18;
      local_11e4 = iVar11;
      free((void *)0x0);
      pcVar14 = (char *)0x0;
      iVar11 = 0;
      iVar18 = iVar15 + 0x13;
      if (iVar18 != 0) {
        pcVar14 = malloc((ulonglong)(iVar15 + 0x14));
        *pcVar14 = '\0';
        free((void *)0x0);
        iVar11 = iVar18;
      }
      memcpy(pcVar14,pvVar7,uVar12);
      memcpy(pcVar14 + uVar12,".navgeom.unmodified",0x14);
      local_11b0 = pcVar14;
      local_11a8 = iVar18;
      local_11a4 = iVar11;
      free((void *)0x0);
      local_res20[0] = 0;
      local_res18 = (HANDLE)((ulonglong)local_res18 & 0xffffffff00000000);
      bVar3 = CNavMeshBuilder::LoadTileDataGeomCRC((string_base<char> *)&local_11c8,local_res20);
      bVar4 = CNavMeshBuilder::LoadTileDataGeomCRC
                        ((string_base<char> *)&local_11f0,(uint *)&local_res18);
      if (((bVar3) && (bVar4)) && (local_res20[0] == (uint)local_res18)) {
        FUN_140001810(param_1,(longlong *)&local_11b0);
        pcVar14 = local_11b0;
        pcVar20 = "";
        if (local_11b0 != (char *)0x0) {
          pcVar20 = local_11b0;
        }
        pSVar10 = fs::open(pcVar20,1,0);
        fs::close(pSVar10);
      }
      free(pcVar14);
      local_11b0 = (char *)0x0;
      free(local_11f0);
      local_11f0 = (undefined1 *)0x0;
      free(local_11c8);
      local_11c8 = (void *)0x0;
      free(pvVar7);
      puVar24 = local_11b8 + 4;
      local_11a0 = local_11a0 + -1;
    } while (local_11a0 != (char *)0x0);
    pcVar14 = (char *)(ulonglong)local_res10;
    local_11a0 = (char *)0x0;
    local_11b8 = puVar24;
  }
  free(local_11d0);
  uVar25 = (uint)pcVar14;
  puVar8 = (undefined8 *)((ulonglong)(uVar25 - 1) * 0x10 + (longlong)local_11f8);
  while (uVar25 != 0) {
    free((void *)*puVar8);
    *puVar8 = 0;
    puVar8 = puVar8 + -2;
    uVar25 = (int)pcVar14 - 1;
    pcVar14 = (char *)(ulonglong)uVar25;
  }
  free(local_11f8);
  free(local_1198[0]);
  free(local_11e0);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0001400032ad)
// WARNING: Removing unreachable block (ram,0x0001400032ba)

undefined8 * FUN_140003250(undefined8 *param_1,undefined8 *param_2,char *param_3)

{
  char cVar1;
  void *_Src;
  undefined1 *_Dst;
  void *_Dst_00;
  int iVar2;
  longlong lVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
  if (param_3 != (char *)0x0) {
    lVar3 = -1;
    pcVar5 = param_3;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar2 = ~(uint)lVar3 - 1;
    if (iVar2 != 0) {
      _Dst = (undefined1 *)0x0;
      iVar6 = 0;
      iVar4 = *(int *)(param_1 + 1) + iVar2;
      if (iVar4 != 0) {
        _Dst = malloc((ulonglong)(iVar4 + 1));
        *_Dst = 0;
        free((void *)0x0);
        iVar6 = iVar4;
      }
      memcpy(_Dst,(void *)*param_1,(ulonglong)*(uint *)(param_1 + 1));
      memcpy(_Dst + *(uint *)(param_1 + 1),param_3,(ulonglong)~(uint)lVar3);
      iVar4 = *(int *)(param_1 + 1);
      *param_2 = _Dst;
      *(int *)((longlong)param_2 + 0xc) = iVar6;
      *(int *)(param_2 + 1) = iVar2 + iVar4;
      free((void *)0x0);
      return param_2;
    }
  }
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *(int *)(param_2 + 1) = iVar2;
    *(int *)((longlong)param_2 + 0xc) = iVar2;
    _Dst_00 = malloc((ulonglong)(iVar2 + 1U));
    _Src = (void *)*param_1;
    *param_2 = _Dst_00;
    memcpy(_Dst_00,_Src,(ulonglong)(iVar2 + 1U));
  }
  return param_2;
}



ulonglong FUN_140003380(longlong *param_1,char *param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    for (; param_3 < *(uint *)(param_1 + 1); param_3 = param_3 + 1) {
      cVar2 = *(char *)((ulonglong)param_3 + lVar3);
      pcVar4 = param_2;
      if (cVar2 != '\0') {
        lVar1 = ((ulonglong)param_3 - (longlong)param_2) + lVar3;
        do {
          if (*pcVar4 == '\0') goto LAB_140003402;
          if ((cVar2 != *pcVar4) ||
             ((longlong)(int)*(uint *)(param_1 + 1) <= (longlong)(pcVar4 + (lVar1 - lVar3)))) break;
          cVar2 = pcVar4[lVar1 + 1];
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
      }
      if (*pcVar4 == '\0') {
LAB_140003402:
        return (ulonglong)param_3;
      }
    }
  }
  return 0xffffffff;
}



void FUN_140003410(void)

{
  printf("------------------------------------------------\n");
  printf("Chrome Engine NavMesh builder ver. %i\n");
  printf("------------------------------------------------\n");
  printf(
        "NavMesh builder uses geom data files (*.navgeom) generated by Chrome Editor to generate NavMesh tiles (*.navtile) and to merge all tiles to "
        );
  printf("one NavMesh file (*.navmesh).\n");
  printf("\n");
  printf("Usage:\n");
  printf("    %s<game dir> - e.g. %s\"DW\"\n");
  printf("    %s<geom/tile data file name> - e.g. \"%stestmap1%s\"\n");
  printf("    %s<%s | %s | %s> - action to do (required)\n");
  printf("    %s - show this help\n");
                    // WARNING: Could not recover jumptable at 0x000140003505. Too many branches
                    // WARNING: Treating indirect jump as call
  printf("    %s - show this help\n");
  return;
}



undefined8 FUN_140003510(LPCSTR param_1)

{
  char cVar1;
  BOOL BVar2;
  undefined7 extraout_var;
  int iVar3;
  longlong lVar4;
  LPCSTR pCVar5;
  char *pcVar6;
  char *pcVar7;
  char local_res10 [24];
  char local_b08 [1024];
  char local_708 [256];
  char local_608 [256];
  char local_508 [256];
  CHAR local_408 [1024];
  
  BVar2 = PathIsRelativeA(param_1);
  if (BVar2 == 0) {
    pCVar5 = param_1;
    do {
      cVar1 = *pCVar5;
      pCVar5 = pCVar5 + 1;
      pCVar5[(longlong)(local_b08 + (-1 - (longlong)param_1))] = cVar1;
    } while (cVar1 != '\0');
    lVar4 = -1;
    pcVar6 = local_b08;
    do {
      if (lVar4 == 0) break;
      lVar4 = lVar4 + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar3 = ~(uint)lVar4 - 1;
    if (((iVar3 == 0) || (local_b08[(longlong)iVar3 + -1] == '\\')) ||
       (local_b08[(longlong)iVar3 + -1] == '/')) goto LAB_14000364f;
  }
  else {
    GetModuleFileNameA((HMODULE)0x0,local_408,0x400);
    _splitpath(local_408,local_res10,local_708,local_608,local_508);
    lVar4 = 0;
    do {
      pcVar6 = local_res10 + lVar4;
      local_b08[lVar4] = *pcVar6;
      lVar4 = lVar4 + 1;
    } while (*pcVar6 != '\0');
    lVar4 = -1;
    pcVar6 = local_b08;
    do {
      pcVar7 = pcVar6;
      if (lVar4 == 0) break;
      lVar4 = lVar4 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    lVar4 = 0;
    do {
      cVar1 = local_708[lVar4];
      pcVar7[lVar4 + -1] = cVar1;
      lVar4 = lVar4 + 1;
    } while (cVar1 != '\0');
    SetCurrentDirectoryA(local_b08);
    lVar4 = -1;
    pcVar6 = local_b08;
    do {
      pcVar7 = pcVar6;
      if (lVar4 == 0) break;
      lVar4 = lVar4 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    lVar4 = 0;
    do {
      cVar1 = param_1[lVar4];
      pcVar7[lVar4 + -1] = cVar1;
      lVar4 = lVar4 + 1;
    } while (cVar1 != '\0');
  }
  lVar4 = -1;
  pcVar6 = local_b08;
  do {
    pcVar7 = pcVar6;
    if (lVar4 == 0) break;
    lVar4 = lVar4 + -1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7[-1] = '\\';
  pcVar7[0] = '\0';
LAB_14000364f:
  fs::init(local_b08,0,"",true,false,(char **)0x0);
  return CONCAT71(extraout_var,1);
}



// WARNING: Removing unreachable block (ram,0x000140003a68)
// WARNING: Removing unreachable block (ram,0x0001400038b3)
// WARNING: Removing unreachable block (ram,0x0001400037e2)
// WARNING: Removing unreachable block (ram,0x000140003952)
// WARNING: Removing unreachable block (ram,0x000140003abf)
// WARNING: Removing unreachable block (ram,0x000140003a78)
// WARNING: Removing unreachable block (ram,0x000140003acf)

int FUN_140003690(uint param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *_Memory;
  char *_Memory_00;
  char *_Str;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  ulonglong uVar11;
  longlong lVar12;
  char *pcVar13;
  int iVar14;
  uint local_res8;
  longlong *local_res10;
  uint local_res18;
  char *local_res20;
  char *local_68;
  undefined8 local_60;
  char *local_58;
  uint local_50;
  uint local_4c;
  
  if ((int)param_1 < 2) {
    FUN_140003410();
    return 0;
  }
  iVar14 = 1;
  plVar3 = param_2;
  if (1 < (int)param_1) {
    do {
      pcVar5 = (char *)plVar3[1];
      pcVar10 = pcVar5;
      do {
        cVar1 = *pcVar10;
        cVar2 = pcVar10[(longlong)&DAT_1400056bc - (longlong)pcVar5];
        if (cVar1 != cVar2) break;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
LAB_1400037fd:
        FUN_140003410();
        return 0;
      }
      lVar12 = (longlong)&DAT_1400056c0 - (longlong)pcVar5;
      do {
        cVar1 = *pcVar5;
        cVar2 = pcVar5[lVar12];
        if (cVar1 != cVar2) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) goto LAB_1400037fd;
      iVar14 = iVar14 + 1;
      plVar3 = plVar3 + 1;
    } while (iVar14 < (int)param_1);
  }
  _Str = (char *)0x0;
  local_58 = (char *)0x0;
  local_4c = 0;
  local_res20 = (char *)0x0;
  local_50 = 0;
  local_res8 = 0;
  local_res18 = 0;
  pcVar5 = _Str;
  pcVar10 = _Str;
  _Memory_00 = _Str;
  _Memory = _Str;
  pcVar6 = _Str;
  local_res10 = param_2;
  pcVar13 = (char *)(ulonglong)param_1;
  if (0 < (int)param_1) {
    do {
      local_68 = pcVar13;
      pcVar6 = strstr((char *)*local_res10,"tile=");
      if ((pcVar6 == (char *)*local_res10) && (pcVar6 = (char *)*local_res10 + 5, pcVar6 != _Memory)
         ) {
        if (pcVar6 != (char *)0x0) {
          uVar11 = 0xffffffffffffffff;
          pcVar5 = pcVar6;
          do {
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          uVar8 = (uint)(~uVar11 - 1);
          if (uVar8 != 0) {
            pcVar5 = (char *)(~uVar11 - 1 & 0xffffffff);
            if (local_4c < uVar8) {
              free(_Memory);
              local_50 = uVar8;
              local_4c = uVar8;
              _Memory = malloc((ulonglong)(uVar8 + 1));
              local_58 = _Memory;
              memcpy(_Memory,pcVar6,(ulonglong)(uVar8 + 1));
            }
            else {
              local_50 = uVar8;
              memcpy(_Memory,pcVar6,(ulonglong)(uVar8 + 1));
            }
            goto LAB_140003861;
          }
        }
        free(_Memory);
        pcVar5 = (char *)0x0;
        local_58 = (char *)0x0;
        local_4c = 0;
        local_50 = 0;
        _Memory = _Str;
      }
LAB_140003861:
      pcVar6 = strstr((char *)*local_res10,"action=");
      if ((pcVar6 == (char *)*local_res10) &&
         (pcVar6 = (char *)*local_res10 + 7, pcVar6 != local_res20)) {
        if (pcVar6 != (char *)0x0) {
          lVar12 = -1;
          pcVar13 = pcVar6;
          do {
            if (lVar12 == 0) break;
            lVar12 = lVar12 + -1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar1 != '\0');
          uVar8 = ~(uint)lVar12;
          uVar9 = uVar8 - 1;
          if (uVar9 != 0) {
            if (local_res8 < uVar9) {
              free(local_res20);
              local_res20 = malloc((ulonglong)uVar8);
              memcpy(local_res20,pcVar6,(ulonglong)uVar8);
              local_res8 = uVar9;
            }
            else {
              memcpy(local_res20,pcVar6,(ulonglong)uVar8);
            }
            goto LAB_140003904;
          }
        }
        free(local_res20);
        local_res20 = (char *)0x0;
        local_res8 = 0;
      }
LAB_140003904:
      pcVar6 = strstr((char *)*local_res10,"game_dir=");
      if ((pcVar6 == (char *)*local_res10) &&
         (pcVar6 = (char *)*local_res10 + 9, pcVar6 != _Memory_00)) {
        if (pcVar6 != (char *)0x0) {
          uVar11 = 0xffffffffffffffff;
          pcVar10 = pcVar6;
          do {
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar1 != '\0');
          uVar8 = (uint)(~uVar11 - 1);
          if (uVar8 != 0) {
            pcVar10 = (char *)(~uVar11 - 1 & 0xffffffff);
            if (local_res18 < uVar8) {
              free(_Memory_00);
              _Memory_00 = malloc((ulonglong)(uVar8 + 1));
              memcpy(_Memory_00,pcVar6,(ulonglong)(uVar8 + 1));
              local_res18 = uVar8;
            }
            else {
              memcpy(_Memory_00,pcVar6,(ulonglong)(uVar8 + 1));
            }
            goto LAB_1400039a8;
          }
        }
        free(_Memory_00);
        pcVar10 = (char *)0x0;
        local_res18 = 0;
        _Memory_00 = _Str;
      }
LAB_1400039a8:
      local_res10 = local_res10 + 1;
      pcVar13 = local_68 + -1;
    } while (local_68 + -1 != (char *)0x0);
    local_68 = (char *)0x0;
    pcVar6 = local_res20;
  }
  while ((_Memory != (char *)0x0 && (uVar8 = (uint)pcVar5, pcVar13 = _Str, uVar8 != 0))) {
    while (uVar9 = (uint)pcVar13, pcVar13[(longlong)_Memory] != '\"') {
      pcVar13 = (char *)(ulonglong)(uVar9 + 1);
      if (uVar8 <= uVar9 + 1) goto LAB_1400039e4;
    }
    if (uVar9 == 0xffffffff) break;
    if (uVar9 < uVar8) {
      uVar4 = uVar9 + 1;
      if (uVar4 < uVar8) {
        memmove(pcVar13 + (longlong)_Memory,_Memory + uVar4,(ulonglong)(uVar8 - uVar4));
        local_50 = (uVar8 - uVar4) + uVar9;
        pcVar5 = (char *)(ulonglong)local_50;
        pcVar5[(longlong)_Memory] = '\0';
      }
      else {
        pcVar13[(longlong)_Memory] = '\0';
        pcVar5 = pcVar13;
        local_50 = uVar9;
      }
    }
  }
LAB_1400039e4:
  uVar8 = (uint)pcVar10;
  if (_Memory_00 != (char *)0x0) {
    pcVar5 = _Str;
    if (uVar8 == 0) {
LAB_140003a03:
      pcVar5 = _Memory_00;
      if (_Memory_00 != (char *)0x0) goto LAB_140003a12;
      goto LAB_140003a0b;
    }
    while (uVar9 = (uint)pcVar5, pcVar5[(longlong)_Memory_00] != '\"') {
      pcVar5 = (char *)(ulonglong)(uVar9 + 1);
      if (uVar8 <= uVar9 + 1) goto LAB_140003a03;
    }
    if (uVar9 == 0xffffffff) goto LAB_140003a03;
    if (uVar9 < uVar8) {
      uVar4 = uVar9 + 1;
      if (uVar4 < uVar8) {
        memmove(pcVar5 + (longlong)_Memory_00,_Memory_00 + uVar4,(ulonglong)(uVar8 - uVar4));
        pcVar10 = (char *)(ulonglong)((uVar8 - uVar4) + uVar9);
        pcVar10[(longlong)_Memory_00] = '\0';
      }
      else {
        pcVar5[(longlong)_Memory_00] = '\0';
        pcVar10 = pcVar5;
      }
    }
    goto LAB_1400039e4;
  }
LAB_140003a0b:
  pcVar5 = "";
LAB_140003a12:
  FUN_140003510(pcVar5);
  if (uVar8 == 0) {
    local_68 = (char *)0x0;
    local_60 = 0;
  }
  else {
    uVar9 = uVar8 + 1;
    local_60 = CONCAT44(uVar8,uVar8);
    _Str = malloc((ulonglong)uVar9);
    local_68 = _Str;
    memcpy(_Str,_Memory_00,(ulonglong)uVar9);
    if (_Str != (char *)0x0) {
      _strlwr_s(_Str,(ulonglong)uVar9);
    }
  }
  if (pcVar6 == (char *)0x0) {
LAB_140003b85:
    iVar14 = 1;
  }
  else {
    iVar14 = _stricmp(pcVar6,"buildtile");
    if (iVar14 == 0) {
      uVar7 = FUN_140001910((longlong *)&local_68,&local_58);
      iVar14 = (int)uVar7;
    }
    else {
      iVar14 = _stricmp(pcVar6,"buildnavmesh");
      if (iVar14 == 0) {
        uVar7 = FUN_140002010((longlong *)&local_68,&local_58);
        iVar14 = (int)uVar7;
      }
      else {
        iVar14 = _stricmp(pcVar6,"check_unmodified");
        if (iVar14 != 0) goto LAB_140003b85;
        uVar7 = FUN_140002a90((longlong *)&local_68,&local_58);
        iVar14 = (int)uVar7;
      }
    }
    if (iVar14 != 1) goto LAB_140003b9c;
  }
  printf("Unknown command...\n\n");
  FUN_140003410();
LAB_140003b9c:
  fs::shutdown();
  free(_Str);
  free(_Memory_00);
  free(pcVar6);
  free(_Memory);
  return iVar14;
}



void FUN_140003bf0(void)

{
  longlong lVar1;
  
  lVar1 = DAT_140007188;
  while (DAT_140007190 != 0) {
    DAT_140007188 = lVar1;
    free(*(void **)(lVar1 + -0x10));
    *(undefined8 *)(lVar1 + -0x10) = 0;
    if (DAT_140007180 == DAT_140007188) {
      DAT_140007180 = 0;
      DAT_140007188 = 0;
    }
    else {
      **(undefined8 **)(DAT_140007188 + 8) = 0;
      DAT_140007188 = *(longlong *)(DAT_140007188 + 8);
    }
    DAT_140007190 = DAT_140007190 + -1;
    free((void *)(lVar1 + -0x10));
    lVar1 = DAT_140007188;
  }
  DAT_140007188 = lVar1;
  return;
}



void FUN_140003c80(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1400071c0;
  while (DAT_1400071c8 != 0) {
    DAT_1400071c0 = lVar1;
    free(*(void **)(lVar1 + -0x10));
    *(undefined8 *)(lVar1 + -0x10) = 0;
    if (DAT_1400071b8 == DAT_1400071c0) {
      DAT_1400071b8 = 0;
      DAT_1400071c0 = 0;
    }
    else {
      **(undefined8 **)(DAT_1400071c0 + 8) = 0;
      DAT_1400071c0 = *(longlong *)(DAT_1400071c0 + 8);
    }
    DAT_1400071c8 = DAT_1400071c8 + -1;
    free((void *)(lVar1 + -0x10));
    lVar1 = DAT_1400071c0;
  }
  DAT_1400071c0 = lVar1;
  return;
}



void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x000140003d10. Too many branches
                    // WARNING: Treating indirect jump as call
  DeleteCriticalSection(lpCriticalSection);
  return;
}



LPCRITICAL_SECTION FUN_140003d20(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_140003d50(void)

{
  uint uVar1;
  undefined8 *puVar2;
  HANDLE hSourceHandle;
  
  DAT_1400072f8 = 0;
  _DAT_140007300 = 0;
  hSourceHandle = GetCurrentThread();
  DuplicateHandle((HANDLE)0x0,hSourceHandle,(HANDLE)0x0,(LPHANDLE)&DAT_1400072f8,0,0,0);
  _DAT_140007300 = GetCurrentThreadId();
  uVar1 = DAT_1400071f8 + 1;
  if (DAT_1400071fc < uVar1) {
    DAT_1400071fc = (DAT_1400071fc * 10 >> 3) + 0x10 & 0xfffffff0;
    if (DAT_1400071fc < uVar1) {
      DAT_1400071fc = uVar1;
    }
    DAT_1400071f0 = realloc(DAT_1400071f0,(ulonglong)(DAT_1400071fc << 3));
  }
  puVar2 = (undefined8 *)((longlong)DAT_1400071f0 + (ulonglong)DAT_1400071f8 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &DAT_1400072f8;
  }
  DAT_1400071f8 = DAT_1400071f8 + 1;
  atexit((_func_5014 *)&LAB_140003d40);
  return &DAT_1400072f8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140003e30(void)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar3 = (ulonglong)(int)DAT_1400071f8;
  uVar4 = 0;
  uVar2 = 0;
  if (DAT_1400071f8 != 0) {
    uVar6 = DAT_1400071f8 - 1;
    lVar7 = uVar3 * 8 + -8;
    puVar1 = DAT_1400071f0;
    puVar5 = DAT_1400071f0;
    do {
      if ((HANDLE *)*puVar5 == &DAT_1400072f8) {
        if (uVar4 < uVar6) {
          *puVar5 = *(undefined8 *)(lVar7 + (longlong)puVar1);
          puVar1 = DAT_1400071f0;
        }
        uVar3 = (ulonglong)((int)uVar3 - 1);
        uVar6 = uVar6 - 1;
        lVar7 = lVar7 + -8;
      }
      else {
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar2 = (uint)uVar3;
    } while (uVar4 < uVar2);
  }
  DAT_1400071f8 = uVar2;
  CloseHandle(DAT_1400072f8);
  DAT_1400072f8 = (HANDLE)0x0;
  _DAT_140007300 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140003ebc(void)

{
  atexit(FUN_1400042ec);
  _DAT_14000722c = DAT_14000723c;
  _DAT_140007228 =
       __getmainargs(&DAT_140007210,&DAT_140007220,&DAT_140007218,DAT_140007238,&DAT_14000722c);
  if (_DAT_140007228 < 0) {
    _amsg_exit(8);
  }
  return;
}



// Library Function - Single Match
//  __tmainCRTStartup
// 
// Library: Visual Studio 2010 Release

int __tmainCRTStartup(void)

{
  void *pvVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  BOOL BVar5;
  void *pvVar6;
  bool bVar7;
  
  pvVar1 = StackBase;
  bVar2 = false;
  while( true ) {
    pvVar6 = (void *)0x0;
    LOCK();
    bVar7 = DAT_140007438 == (void *)0x0;
    pvVar3 = pvVar1;
    if (!bVar7) {
      pvVar6 = DAT_140007438;
      pvVar3 = DAT_140007438;
    }
    DAT_140007438 = pvVar3;
    UNLOCK();
    if (bVar7) goto LAB_140003f6a;
    if (pvVar6 == pvVar1) break;
    Sleep(1000);
  }
  bVar2 = true;
LAB_140003f6a:
  if (DAT_140007430 == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_140007430 == 0) {
    DAT_140007430 = 1;
    iVar4 = _initterm_e(&DAT_140005390,&DAT_1400053a8);
    if (iVar4 != 0) {
      return 0xff;
    }
  }
  else {
    DAT_140007234 = 1;
  }
  if (DAT_140007430 == 1) {
    _initterm(&DAT_1400052a0,&DAT_140005388);
    DAT_140007430 = 2;
  }
  if (!bVar2) {
    LOCK();
    DAT_140007438 = (void *)0x0;
    UNLOCK();
  }
  if ((DAT_140007450 != (code *)0x0) &&
     (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_140007450), BVar5 != 0)) {
    (*DAT_140007450)(0,2);
  }
  *(undefined8 *)__initenv_exref = DAT_140007218;
  DAT_140007230 = FUN_140003690(DAT_140007210,DAT_140007220);
  if (DAT_140007214 != 0) {
    if (DAT_140007234 == 0) {
      _cexit();
    }
    return DAT_140007230;
  }
                    // WARNING: Subroutine does not return
  exit(DAT_140007230);
}



// WARNING: Removing unreachable block (ram,0x0001400040b6)

undefined8 FUN_1400040a4(void)

{
  DAT_140007214 = 0;
  __set_app_type(1);
  DAT_140007440 = EncodePointer((PVOID)0xffffffffffffffff);
  DAT_140007448 = DAT_140007440;
  *(undefined4 *)_fmode_exref = DAT_140007244;
  *(undefined4 *)_commode_exref = DAT_140007240;
  FUN_1400042b4();
  FUN_140004400();
  if (DAT_14000700c == 0) {
    __setusermatherr(FUN_140004400);
  }
  if (DAT_140007008 == -1) {
    _configthreadlocale(-1);
  }
  return 0;
}



void entry(void)

{
  __security_init_cookie();
  __tmainCRTStartup();
  return;
}



// Library Function - Single Match
//  _onexit
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  PVOID pvVar2;
  PVOID local_res10;
  PVOID local_res18 [2];
  
  local_res10 = DecodePointer(DAT_140007448);
  if (local_res10 == (PVOID)0xffffffffffffffff) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = DecodePointer(DAT_140007448);
    local_res18[0] = DecodePointer(DAT_140007440);
    pvVar2 = EncodePointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(pvVar2,&local_res10,local_res18);
    DAT_140007448 = EncodePointer(local_res10);
    DAT_140007440 = EncodePointer(local_res18[0]);
    _unlock(8);
  }
  return p_Var1;
}



// Library Function - Single Match
//  atexit
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



undefined8 FUN_140004250(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  if (((*piVar2 == -0x1f928c9d) && (piVar2[6] == 4)) &&
     ((iVar1 = piVar2[8], iVar1 == 0x19930520 ||
      (((iVar1 == 0x19930521 || (iVar1 == 0x19930522)) || (iVar1 == 0x1994000)))))) {
                    // WARNING: Subroutine does not return
    terminate();
  }
  return 0;
}



undefined8 FUN_140004294(void)

{
  SetUnhandledExceptionFilter(FUN_140004250);
  return 0;
}



void __cdecl _amsg_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001400042ac. Too many branches
                    // WARNING: Treating indirect jump as call
  _amsg_exit(param_1);
  return;
}



void FUN_1400042b4(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140005c28; puVar1 < &DAT_140005c28; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



void FUN_1400042ec(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140005c38; puVar1 < &DAT_140005c38; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014000432a. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



// Library Function - Single Match
//  _ValidateImageBase
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release

BOOL __cdecl _ValidateImageBase(PBYTE pImageBase)

{
  uint uVar1;
  
  if (*(short *)pImageBase != 0x5a4d) {
    return 0;
  }
  uVar1 = 0;
  if (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550) {
    uVar1 = (uint)((short)*(int *)((longlong)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) ==
                  0x20b);
  }
  return uVar1;
}



// Library Function - Single Match
//  _FindPESection
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2019 Release

PIMAGE_SECTION_HEADER __cdecl _FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase +
           (ulonglong)*(ushort *)(pImageBase + (longlong)iVar1 + 0x14) + 0x18 + (longlong)iVar1);
  if (*(ushort *)(pImageBase + (longlong)iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + (longlong)iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}



// Library Function - Single Match
//  _IsNonwritableInCurrentImage
// 
// Library: Visual Studio 2010 Release

BOOL __cdecl _IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  uint uVar2;
  PIMAGE_SECTION_HEADER p_Var3;
  IMAGE_DOS_HEADER *pImageBase;
  
  pImageBase = &IMAGE_DOS_HEADER_140000000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_140000000);
  uVar2 = 0;
  if (BVar1 != 0) {
    p_Var3 = _FindPESection((PBYTE)pImageBase,(longlong)pTarget - (longlong)pImageBase);
    uVar2 = 0;
    if (p_Var3 != (PIMAGE_SECTION_HEADER)0x0) {
      uVar2 = ~(p_Var3->Characteristics >> 0x1f) & 1;
    }
  }
  return uVar2;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x0001400043f2. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x0001400043f8. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



undefined8 FUN_140004400(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __security_init_cookie
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release

void __cdecl __security_init_cookie(void)

{
  _FILETIME _Var1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD DVar4;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  
  local_res8.dwLowDateTime = 0;
  local_res8.dwHighDateTime = 0;
  if (DAT_140007010 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_140007010 =
         (local_res10.QuadPart ^
         (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff
    ;
    if (DAT_140007010 == 0x2b992ddfa232) {
      DAT_140007010 = 0x2b992ddfa233;
    }
  }
  _DAT_140007018 = ~DAT_140007010;
  return;
}



void __cdecl _unlock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x0001400044b8. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock(_File);
  return;
}



void __dllonexit(void)

{
                    // WARNING: Could not recover jumptable at 0x0001400044be. Too many branches
                    // WARNING: Treating indirect jump as call
  __dllonexit();
  return;
}



void __cdecl _lock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x0001400044c4. Too many branches
                    // WARNING: Treating indirect jump as call
  _lock(_File);
  return;
}



void __cdecl terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x0001400044ca. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400044d0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400044d6. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



// WARNING: This is an inlined function
// Library Function - Single Match
//  __chkstk
// 
// Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012

void __chkstk(void)

{
  undefined1 *in_RAX;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined1 *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined1 *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}



void FUN_140004540(_EXCEPTION_POINTERS *param_1)

{
  _XcptFilter(param_1->ExceptionRecord->ExceptionCode,param_1);
  return;
}



void FUN_14000455e(void)

{
  _unlock(8);
  return;
}



bool FUN_140004580(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



void FUN_140004610(void)

{
  FUN_140003d20((LPCRITICAL_SECTION)&DAT_1400072d0);
  atexit(FUN_1400048f0);
  return;
}



void FUN_140004790(void)

{
  free(DAT_1400072b0);
  DAT_1400072b0 = (void *)0x0;
  return;
}



void FUN_1400047c0(void)

{
  free(DAT_1400072c0);
  DAT_1400072c0 = (void *)0x0;
  return;
}



void thunk_FUN_140003bf0(void)

{
  FUN_140003bf0();
  return;
}



void FUN_140004800(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)((ulonglong)(DAT_1400071a8 - 1) * 0x10 + (longlong)DAT_1400071a0);
  for (iVar2 = DAT_1400071a8; iVar2 != 0; iVar2 = iVar2 + -1) {
    free((void *)*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + -2;
  }
  DAT_1400071a8 = 0;
                    // WARNING: Could not recover jumptable at 0x000140004860. Too many branches
                    // WARNING: Treating indirect jump as call
  free(DAT_1400071a0);
  return;
}



void thunk_FUN_140003c80(void)

{
  FUN_140003c80();
  return;
}



void FUN_140004880(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)((ulonglong)(DAT_1400071e0 - 1) * 0x10 + (longlong)DAT_1400071d8);
  for (iVar2 = DAT_1400071e0; iVar2 != 0; iVar2 = iVar2 + -1) {
    free((void *)*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + -2;
  }
  DAT_1400071e0 = 0;
                    // WARNING: Could not recover jumptable at 0x0001400048e0. Too many branches
                    // WARNING: Treating indirect jump as call
  free(DAT_1400071d8);
  return;
}



void FUN_1400048f0(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_1400072d0);
  return;
}



void FUN_140004910(void)

{
  DAT_1400071f8 = 0;
                    // WARNING: Could not recover jumptable at 0x000140004921. Too many branches
                    // WARNING: Treating indirect jump as call
  free(DAT_1400071f0);
  return;
}


