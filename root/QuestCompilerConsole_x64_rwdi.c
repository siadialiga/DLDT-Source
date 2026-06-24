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
typedef struct _s__RTTIBaseClassDescriptor _s__RTTIBaseClassDescriptor, *P_s__RTTIBaseClassDescriptor;

typedef struct _s__RTTIBaseClassDescriptor RTTIBaseClassDescriptor;

typedef RTTIBaseClassDescriptor *RTTIBaseClassDescriptor *32 __((image-base-relative));

typedef RTTIBaseClassDescriptor *32 __((image-base-relative)) *RTTIBaseClassDescriptor *32 __((image-base-relative)) *32 __((image-base-relative));

typedef struct PMD PMD, *PPMD;

struct PMD {
    int mdisp;
    int pdisp;
    int vdisp;
};

struct _s__RTTIBaseClassDescriptor {
    ImageBaseOffset32 pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    dword numContainedBases; // count of extended classes in BaseClassArray (RTTI 2)
    struct PMD where; // member displacement structure
    dword attributes; // bit flags
    ImageBaseOffset32 pClassHierarchyDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3) for class
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct _s__RTTIClassHierarchyDescriptor _s__RTTIClassHierarchyDescriptor, *P_s__RTTIClassHierarchyDescriptor;

typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;

struct _s__RTTIClassHierarchyDescriptor {
    dword signature;
    dword attributes; // bit flags
    dword numBaseClasses; // number of base classes (i.e. rtti1Count)
    RTTIBaseClassDescriptor *32 __((image-base-relative)) *32 __((image-base-relative)) pBaseClassArray; // ref to BaseClassArray (RTTI 2)
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

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    ImageBaseOffset32 pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    ImageBaseOffset32 pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

typedef ulonglong __uint64;

typedef struct type_info type_info, *Ptype_info;

struct type_info { // PlaceHolder Class Structure
};

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef long LONG;

typedef void *HANDLE;

typedef ulonglong ULONG_PTR;

typedef ushort WORD;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

typedef ulong DWORD;

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

typedef uchar BYTE;

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

typedef char CHAR;

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

typedef ULONG_PTR DWORD_PTR;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[113];
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef HANDLE *LPHANDLE;

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

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
};

typedef struct _iobuf FILE;

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

struct TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
};

typedef char *va_list;

typedef struct FS_NAME FS_NAME, *PFS_NAME;

struct FS_NAME { // PlaceHolder Structure
};

typedef enum ENUM {
} ENUM;

typedef struct string_base<char> string_base<char>, *Pstring_base<char>;

struct string_base<char> { // PlaceHolder Structure
};

typedef int (*_onexit_t)(void);

typedef ulonglong size_t;

typedef int errno_t;

typedef size_t rsize_t;



int DAT_140013488;
void *DAT_140013480;
pointer[1] vftable;
uint DAT_140013498;
void *DAT_140013490;
uint DAT_1400134a8;
void *DAT_1400134a0;
undefined8 DAT_140013328;
undefined DAT_140013330;
uint DAT_1400131ec;
uint DAT_1400131e8;
void *DAT_1400131e0;
undefined LAB_140001ae0;
undefined8 *DAT_1400131e0;
int DAT_140013180;
longlong DAT_140013178;
longlong DAT_140013170;
int DAT_1400131b8;
longlong DAT_1400131b0;
longlong DAT_1400131a8;
pointer[3] vftable;
undefined1 DAT_14000ff00;
undefined8 DAT_1400134c0;
undefined8 DAT_140013338;
undefined1 DAT_140010078;
undefined8 DAT_1400134b0;
undefined1 DAT_140010220;
undefined1 DAT_140010248;
undefined1 DAT_140010124;
undefined1 DAT_140010160;
undefined1 DAT_1400101e4;
undefined1 DAT_140013cf0;
pointer[15] vftable;
longlong DAT_1400132b8;
int DAT_1400132c0;
undefined1 DAT_140010314;
undefined1 DAT_1400134f0;
int DAT_140013340;
void *DAT_140013338;
undefined8 DAT_1400132b8;
undefined DAT_1400132b0;
char *DAT_140013260;
undefined1 DAT_140010370;
undefined4 DAT_1400134d0;
undefined4 DAT_1400134d4;
undefined8 DAT_1400134d8;
undefined DAT_1400138f0;
int DAT_1400132c4;
uint DAT_1400132e8;
FILE *DAT_1400132f0;
FILE *DAT_1400132f8;
longlong DAT_1400132d8;
longlong DAT_1400132c8;
longlong DAT_140013298;
byte DAT_14001328c;
int DAT_14001325c;
byte *DAT_140013280;
byte *DAT_140013278;
byte *DAT_1400132e0;
size_t DAT_140013290;
undefined DAT_140013288;
undefined DAT_140013270;
undefined8 DAT_140013260;
pointer PTR_14000f3d0;
undefined DAT_14000f450;
undefined DAT_14000f850;
undefined DAT_14000f8b0;
undefined DAT_14000f940;
undefined DAT_14000f9d0;
undefined DAT_14000fac0;
undefined1 *DAT_1400132e0;
size_t DAT_140013298;
longlong DAT_140013278;
uint DAT_14001325c;
undefined8 DAT_1400132e0;
undefined8 DAT_140013280;
undefined DAT_14000fac2;
undefined8 DAT_1400132f0;
undefined8 DAT_140013298;
undefined1 *DAT_140013278;
undefined1 DAT_14001328c;
undefined8 *DAT_1400132d8;
longlong DAT_1400132d0;
ulonglong DAT_1400132c8;
void *DAT_1400132d8;
undefined8 DAT_1400132d0;
undefined4 DAT_1400132c4;
undefined4 DAT_1400132e8;
undefined8 DAT_1400132f8;
char *DAT_140013278;
longlong *DAT_1400132b8;
undefined1 *DAT_140013260;
undefined1 UNK_00000000;
undefined FUN_14000d7ac;
undefined4 DAT_14001322c;
undefined4 DAT_140013228;
undefined DAT_14001321c;
undefined DAT_140013218;
undefined4 DAT_140013200;
undefined8 DAT_140013208;
undefined8 DAT_140013210;
void *DAT_1400140f8;
int DAT_1400140f0;
undefined8 DAT_140014110;
undefined *PTR___initenv_14000f0f0;
longlong DAT_140013210;
int DAT_140013200;
uint DAT_140013220;
int DAT_140013204;
int DAT_140013224;
undefined DAT_14000f260;
undefined DAT_14000f378;
undefined DAT_14000f380;
undefined DAT_14000f398;
void *StackBase;
undefined4 DAT_140013204;
undefined FUN_14000d8c0;
undefined *PTR__fmode_14000f0c0;
PVOID DAT_140014100;
PVOID DAT_140014108;
undefined4 DAT_140013234;
undefined *PTR__commode_14000f0c8;
undefined4 DAT_140013230;
int DAT_14001302c;
int DAT_140013028;
undefined _type_info_dtor_internal_method;
undefined FUN_14000d710;
undefined8 DAT_140011200;
undefined8 DAT_140011210;
IMAGE_DOS_HEADER IMAGE_DOS_HEADER_140000000;
ulonglong DAT_140013030;
undefined DAT_140013038;
void *StackLimit;
undefined DAT_140013300;
undefined FUN_14000e160;
undefined DAT_14001348c;
uint DAT_140013488;
undefined FUN_14000e300;
undefined DAT_14001349c;
undefined FUN_14000e330;
undefined DAT_1400134ac;
undefined FUN_14000e360;
undefined DAT_1400134bc;
uint DAT_1400134b8;
void *DAT_1400134b0;
undefined FUN_14000e390;
undefined DAT_1400134cc;
uint DAT_1400134c8;
void *DAT_1400134c0;
undefined FUN_14000e3c0;
undefined DAT_1400134e0;
void *DAT_1400134d8;
undefined FUN_14000e3f0;
void *DAT_140013348;
int DAT_140013198;
void *DAT_140013190;
int DAT_1400131d0;
void *DAT_1400131c8;
undefined4 DAT_1400131e8;

// WARNING: Removing unreachable block (ram,0x000140001074)

undefined8 FUN_140001000(int param_1,longlong param_2)

{
  char *_Src;
  longlong *plVar1;
  undefined8 *puVar2;
  char *pcVar3;
  void *_Dst;
  void *pvVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *local_res18;
  undefined **local_c8;
  int local_c0;
  undefined **local_b8;
  void *local_b0;
  ulonglong local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined4 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  longlong *local_40;
  
  uVar6 = 0;
  lVar9 = 1;
  local_res18 = (longlong *)0x0;
  uVar11 = uVar6;
  if (1 < (longlong)param_1) {
    do {
      _Dst = (void *)0x0;
      _Src = *(char **)(param_2 + lVar9 * 8);
      pcVar3 = _Src;
      pvVar4 = _Dst;
      do {
        if (*pcVar3 == '\0') break;
        uVar7 = (int)pvVar4 + 1;
        pvVar4 = (void *)(ulonglong)uVar7;
        pcVar3 = pcVar3 + 1;
      } while (uVar7 != 0xffffffff);
      iVar8 = (int)pvVar4;
      if (iVar8 != 0) {
        _Dst = malloc((ulonglong)(iVar8 + 1));
        memcpy(_Dst,_Src,(size_t)pvVar4);
        *(undefined1 *)((longlong)pvVar4 + (longlong)_Dst) = 0;
      }
      uVar7 = (int)uVar6 + 1;
      if ((uint)uVar11 < uVar7) {
        uVar10 = ((uint)uVar11 * 10 >> 3) + 0x10 & 0xfffffff0;
        if (uVar10 < uVar7) {
          uVar10 = uVar7;
        }
        uVar11 = (ulonglong)uVar10;
        local_res18 = realloc(local_res18,(ulonglong)(uVar10 << 4));
      }
      plVar5 = local_res18 + uVar6 * 2;
      if (plVar5 != (longlong *)0x0) {
        if (iVar8 == 0) {
          *plVar5 = 0;
          plVar5[1] = 0;
        }
        else {
          *(int *)(plVar5 + 1) = iVar8;
          *(int *)((longlong)plVar5 + 0xc) = iVar8;
          pvVar4 = malloc((ulonglong)(iVar8 + 1U));
          *plVar5 = (longlong)pvVar4;
          memcpy(pvVar4,_Dst,(ulonglong)(iVar8 + 1U));
        }
      }
      uVar6 = (ulonglong)uVar7;
      free(_Dst);
      lVar9 = lVar9 + 1;
    } while (lVar9 < param_1);
  }
  uVar11 = 0;
  local_c0 = 0;
  local_b0 = (void *)0x0;
  local_c8 = CQuestCompiler::vftable;
  local_b8 = CQuestCompilerOptions::vftable;
  local_a8 = 0;
  local_a0 = 0x39;
  local_98 = (longlong *)0x0;
  local_90 = 0;
  local_88 = 0x39;
  local_80 = (void *)0x0;
  local_78 = 0;
  local_70 = (void *)0x0;
  local_68 = 0;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_50 = (undefined8 *)0x0;
  local_48 = (undefined8 *)0x0;
  local_40 = (longlong *)0x0;
  if (DAT_140013488 == 0) {
    free((void *)0x0);
    local_80 = (void *)0x0;
    local_78 = 0;
  }
  else {
    free((void *)0x0);
    local_78 = CONCAT44(DAT_140013488,DAT_140013488);
    uVar7 = DAT_140013488 + 1;
    local_80 = malloc((ulonglong)uVar7);
    memcpy(local_80,DAT_140013480,(ulonglong)uVar7);
  }
  if (DAT_140013498 == 0) {
    free(local_60);
    local_60 = (void *)0x0;
    local_58 = 0;
  }
  else if (local_58._4_4_ < DAT_140013498) {
    free(local_60);
    local_58 = CONCAT44(DAT_140013498,DAT_140013498);
    uVar7 = DAT_140013498 + 1;
    local_60 = malloc((ulonglong)uVar7);
    memcpy(local_60,DAT_140013490,(ulonglong)uVar7);
  }
  else {
    local_58 = CONCAT44(local_58._4_4_,DAT_140013498);
    memcpy(local_60,DAT_140013490,(ulonglong)(DAT_140013498 + 1));
  }
  if (DAT_1400134a8 == 0) {
    free(local_70);
    local_70 = (void *)0x0;
    local_68 = 0;
  }
  else if (local_68._4_4_ < DAT_1400134a8) {
    free(local_70);
    local_68 = CONCAT44(DAT_1400134a8,DAT_1400134a8);
    uVar7 = DAT_1400134a8 + 1;
    local_70 = malloc((ulonglong)uVar7);
    memcpy(local_70,DAT_1400134a0,(ulonglong)uVar7);
  }
  else {
    local_68 = CONCAT44(local_68._4_4_,DAT_1400134a8);
    memcpy(local_70,DAT_1400134a0,(ulonglong)(DAT_1400134a8 + 1));
  }
  FUN_1400036a0((longlong)&local_b8);
  uVar7 = (uint)uVar6;
  for (plVar5 = local_res18; plVar5 != local_res18 + uVar6 * 2; plVar5 = plVar5 + 2) {
    FUN_1400042e0((longlong)&local_b8,plVar5);
  }
  FUN_140002220((longlong)&local_c8);
  FUN_140002d40((longlong)&local_c8);
  puVar2 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    pvVar4 = (void *)*local_50;
    if (pvVar4 != (void *)0x0) {
      FUN_140004860((longlong)pvVar4);
      operator_delete(pvVar4);
    }
    operator_delete(puVar2);
    local_50 = (undefined8 *)0x0;
  }
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
    local_48 = (undefined8 *)0x0;
  }
  plVar5 = local_40;
  if (local_40 != (longlong *)0x0) {
    if ((int)local_40[1] != 0) {
      do {
        free(*(void **)(*plVar5 + uVar11 * 8));
        uVar11 = uVar11 + 1;
        *(undefined8 *)(*plVar5 + -8 + uVar11 * 8) = 0;
      } while (uVar11 < *(uint *)(plVar5 + 1));
    }
    *(undefined4 *)(plVar5 + 1) = 0;
    free((void *)*plVar5);
    operator_delete(plVar5);
    local_40 = (longlong *)0x0;
  }
  uVar11 = 0;
  if (local_c0 == 0) {
    fs::shutdown();
  }
  puVar2 = local_50;
  local_c8 = CQuestCompiler::vftable;
  if (local_50 != (undefined8 *)0x0) {
    pvVar4 = (void *)*local_50;
    if (pvVar4 != (void *)0x0) {
      FUN_140004860((longlong)pvVar4);
      operator_delete(pvVar4);
    }
    operator_delete(puVar2);
    local_50 = (undefined8 *)0x0;
  }
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
    local_48 = (undefined8 *)0x0;
  }
  plVar5 = local_40;
  if (local_40 != (longlong *)0x0) {
    if ((int)local_40[1] != 0) {
      do {
        free(*(void **)(*plVar5 + uVar11 * 8));
        uVar11 = uVar11 + 1;
        *(undefined8 *)(*plVar5 + -8 + uVar11 * 8) = 0;
      } while (uVar11 < *(uint *)(plVar5 + 1));
    }
    *(undefined4 *)(plVar5 + 1) = 0;
    free((void *)*plVar5);
    operator_delete(plVar5);
    local_40 = (longlong *)0x0;
  }
  free(local_60);
  local_60 = (void *)0x0;
  free(local_70);
  local_70 = (void *)0x0;
  free(local_80);
  local_b8 = CQuestCompilerOptions::vftable;
  local_80 = (void *)0x0;
  FUN_1400046f0((longlong *)&local_b0);
  plVar5 = local_98;
  while (plVar5 != (longlong *)0x0) {
    FUN_140004680(&local_98,(undefined8 *)plVar5[2]);
    plVar1 = (longlong *)*plVar5;
    free((void *)plVar5[-2]);
    plVar5[-2] = 0;
    free(plVar5 + -3);
    plVar5 = plVar1;
  }
  local_98 = (longlong *)0x0;
  local_90 = 0;
  local_a8 = local_a8 & 0xffffffff00000000;
  free(local_b0);
  plVar5 = local_res18 + (ulonglong)(uVar7 - 1) * 2;
  while (uVar7 != 0) {
    free((void *)*plVar5);
    *plVar5 = 0;
    plVar5 = plVar5 + -2;
    uVar7 = (int)uVar6 - 1;
    uVar6 = (ulonglong)uVar7;
  }
  free(local_res18);
  return 0;
}



undefined8 * FUN_140001570(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Dst;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    *(int *)(param_1 + 1) = iVar1;
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    _Dst = malloc((ulonglong)(iVar1 + 1));
    *param_1 = _Dst;
    memcpy(_Dst,(void *)*param_2,(ulonglong)(iVar1 + 1));
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000140001612)

void FUN_1400015e0(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *_Dst;
  
  if (*(int *)(param_2 + 1) != 0) {
    iVar2 = (int)param_1[1];
    uVar1 = iVar2 + *(int *)(param_2 + 1);
    if (*(uint *)((longlong)param_1 + 0xc) < uVar1) {
      _Dst = malloc((ulonglong)(uVar1 + 1));
      if (iVar2 == 0) {
        *_Dst = 0;
      }
      else {
        memcpy(_Dst,(void *)*param_1,(ulonglong)(iVar2 + 1));
      }
      free((void *)*param_1);
      *param_1 = (longlong)_Dst;
      *(uint *)((longlong)param_1 + 0xc) = uVar1;
    }
    memcpy((void *)((ulonglong)*(uint *)(param_1 + 1) + *param_1),(void *)*param_2,
           (ulonglong)(*(int *)(param_2 + 1) + 1));
    *(int *)(param_1 + 1) = (int)param_1[1] + *(int *)(param_2 + 1);
  }
  return;
}



undefined8 * FUN_140001690(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    if (uVar1 != 0) {
      if (uVar1 <= *(uint *)((longlong)param_1 + 0xc)) {
        *(uint *)(param_1 + 1) = uVar1;
        memcpy((void *)*param_1,(void *)*param_2,(ulonglong)(*(int *)(param_2 + 1) + 1));
        return param_1;
      }
      free((void *)*param_1);
      iVar2 = *(int *)(param_2 + 1);
      *(int *)(param_1 + 1) = iVar2;
      *(int *)((longlong)param_1 + 0xc) = iVar2;
      _Dst = malloc((ulonglong)(iVar2 + 1));
      *param_1 = _Dst;
      memcpy(_Dst,(void *)*param_2,(ulonglong)(iVar2 + 1));
      return param_1;
    }
    free((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000140001794)

undefined8 * FUN_140001740(undefined8 *param_1,char *param_2)

{
  char cVar1;
  char *_Memory;
  uint uVar2;
  void *_Dst;
  uint uVar3;
  longlong lVar4;
  char *pcVar5;
  
  _Memory = (char *)*param_1;
  if (param_2 == _Memory) {
    return param_1;
  }
  if (param_2 != (char *)0x0) {
    lVar4 = -1;
    pcVar5 = param_2;
    do {
      if (lVar4 == 0) break;
      lVar4 = lVar4 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~(uint)lVar4;
    uVar3 = uVar2 - 1;
    if (uVar3 != 0) {
      if (*(uint *)((longlong)param_1 + 0xc) < uVar3) {
        free(_Memory);
        *(uint *)(param_1 + 1) = uVar3;
        *(uint *)((longlong)param_1 + 0xc) = uVar3;
        _Dst = malloc((ulonglong)uVar2);
        *param_1 = _Dst;
        memcpy(_Dst,param_2,(ulonglong)uVar2);
        return param_1;
      }
      *(uint *)(param_1 + 1) = uVar3;
      memcpy(_Memory,param_2,(ulonglong)uVar2);
      return param_1;
    }
  }
  free(_Memory);
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000140001855)
// WARNING: Removing unreachable block (ram,0x000140001872)

void FUN_140001820(longlong *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *_Dst;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  char *pcVar6;
  
  if (param_2 != (char *)0x0) {
    lVar4 = -1;
    pcVar6 = param_2;
    do {
      if (lVar4 == 0) break;
      lVar4 = lVar4 + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar3 = ~(uint)lVar4 - 1;
    if (iVar3 != 0) {
      iVar2 = (int)param_1[1];
      uVar5 = iVar2 + iVar3;
      if (*(uint *)((longlong)param_1 + 0xc) < uVar5) {
        _Dst = malloc((ulonglong)(uVar5 + 1));
        if (iVar2 == 0) {
          *_Dst = 0;
        }
        else {
          memcpy(_Dst,(void *)*param_1,(ulonglong)(iVar2 + 1));
        }
        free((void *)*param_1);
        *param_1 = (longlong)_Dst;
        *(uint *)((longlong)param_1 + 0xc) = uVar5;
      }
      memcpy((void *)((ulonglong)*(uint *)(param_1 + 1) + *param_1),param_2,(ulonglong)~(uint)lVar4)
      ;
      *(int *)(param_1 + 1) = (int)param_1[1] + iVar3;
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00014000194d)
// WARNING: Removing unreachable block (ram,0x00014000195a)

undefined8 * FUN_1400018f0(undefined8 *param_1,undefined8 *param_2,char *param_3)

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



ulonglong FUN_140001a20(longlong *param_1,char *param_2,uint param_3)

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
          if (*pcVar4 == '\0') goto LAB_140001aa2;
          if ((cVar2 != *pcVar4) ||
             ((longlong)(int)*(uint *)(param_1 + 1) <= (longlong)(pcVar4 + (lVar1 - lVar3)))) break;
          cVar2 = pcVar4[lVar1 + 1];
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
      }
      if (*pcVar4 == '\0') {
LAB_140001aa2:
        return (ulonglong)param_3;
      }
    }
  }
  return 0xffffffff;
}



void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x000140001ab0. Too many branches
                    // WARNING: Treating indirect jump as call
  DeleteCriticalSection(lpCriticalSection);
  return;
}



LPCRITICAL_SECTION FUN_140001ac0(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_140001af0(void)

{
  uint uVar1;
  undefined8 *puVar2;
  HANDLE hSourceHandle;
  
  DAT_140013328 = 0;
  _DAT_140013330 = 0;
  hSourceHandle = GetCurrentThread();
  DuplicateHandle((HANDLE)0x0,hSourceHandle,(HANDLE)0x0,(LPHANDLE)&DAT_140013328,0,0,0);
  _DAT_140013330 = GetCurrentThreadId();
  uVar1 = DAT_1400131e8 + 1;
  if (DAT_1400131ec < uVar1) {
    DAT_1400131ec = (DAT_1400131ec * 10 >> 3) + 0x10 & 0xfffffff0;
    if (DAT_1400131ec < uVar1) {
      DAT_1400131ec = uVar1;
    }
    DAT_1400131e0 = realloc(DAT_1400131e0,(ulonglong)(DAT_1400131ec << 3));
  }
  puVar2 = (undefined8 *)((longlong)DAT_1400131e0 + (ulonglong)DAT_1400131e8 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &DAT_140013328;
  }
  DAT_1400131e8 = DAT_1400131e8 + 1;
  atexit((_func_5014 *)&LAB_140001ae0);
  return &DAT_140013328;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140001bd0(void)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar3 = (ulonglong)(int)DAT_1400131e8;
  uVar4 = 0;
  uVar2 = 0;
  if (DAT_1400131e8 != 0) {
    uVar6 = DAT_1400131e8 - 1;
    lVar7 = uVar3 * 8 + -8;
    puVar1 = DAT_1400131e0;
    puVar5 = DAT_1400131e0;
    do {
      if ((HANDLE *)*puVar5 == &DAT_140013328) {
        if (uVar4 < uVar6) {
          *puVar5 = *(undefined8 *)(lVar7 + (longlong)puVar1);
          puVar1 = DAT_1400131e0;
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
  DAT_1400131e8 = uVar2;
  CloseHandle(DAT_140013328);
  DAT_140013328 = (HANDLE)0x0;
  _DAT_140013330 = 0;
  return;
}



void FUN_140001c60(void)

{
  longlong lVar1;
  
  lVar1 = DAT_140013178;
  while (DAT_140013180 != 0) {
    DAT_140013178 = lVar1;
    free(*(void **)(lVar1 + -0x10));
    *(undefined8 *)(lVar1 + -0x10) = 0;
    if (DAT_140013170 == DAT_140013178) {
      DAT_140013170 = 0;
      DAT_140013178 = 0;
    }
    else {
      **(undefined8 **)(DAT_140013178 + 8) = 0;
      DAT_140013178 = *(longlong *)(DAT_140013178 + 8);
    }
    DAT_140013180 = DAT_140013180 + -1;
    free((void *)(lVar1 + -0x10));
    lVar1 = DAT_140013178;
  }
  DAT_140013178 = lVar1;
  return;
}



void FUN_140001cf0(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1400131b0;
  while (DAT_1400131b8 != 0) {
    DAT_1400131b0 = lVar1;
    free(*(void **)(lVar1 + -0x10));
    *(undefined8 *)(lVar1 + -0x10) = 0;
    if (DAT_1400131a8 == DAT_1400131b0) {
      DAT_1400131a8 = 0;
      DAT_1400131b0 = 0;
    }
    else {
      **(undefined8 **)(DAT_1400131b0 + 8) = 0;
      DAT_1400131b0 = *(longlong *)(DAT_1400131b0 + 8);
    }
    DAT_1400131b8 = DAT_1400131b8 + -1;
    free((void *)(lVar1 + -0x10));
    lVar1 = DAT_1400131b0;
  }
  DAT_1400131b0 = lVar1;
  return;
}



longlong * FUN_140001d80(longlong *param_1,longlong *param_2,char param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  param_2[1] = (longlong)param_4;
  *param_2 = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  plVar3 = param_2;
  if (param_4 == (undefined8 *)0x0) {
    *param_1 = (longlong)param_2;
  }
  else if (param_3 == '\0') {
    param_4[2] = param_2;
  }
  else {
    *param_4 = param_2;
  }
  do {
    while( true ) {
      plVar1 = (longlong *)plVar3[1];
      if ((plVar1 == (longlong *)0x0) || ((int)plVar1[3] != 0)) {
        *(undefined4 *)(*param_1 + 0x18) = 1;
        return param_2;
      }
      plVar2 = (longlong *)plVar1[1];
      if (plVar1 != (longlong *)*plVar2) break;
      lVar4 = plVar2[2];
      if ((lVar4 == 0) || (*(int *)(lVar4 + 0x18) != 0)) {
        if (plVar3 == (longlong *)plVar1[2]) {
          plVar3 = (longlong *)plVar1[2];
          plVar1[2] = *plVar3;
          if (*plVar3 != 0) {
            *(longlong **)(*plVar3 + 8) = plVar1;
          }
          plVar3[1] = plVar1[1];
          if (plVar1 == (longlong *)*param_1) {
            *param_1 = (longlong)plVar3;
          }
          else {
            plVar2 = (longlong *)plVar1[1];
            if (plVar1 == (longlong *)*plVar2) {
              *plVar2 = (longlong)plVar3;
            }
            else {
              plVar2[2] = (longlong)plVar3;
            }
          }
          *plVar3 = (longlong)plVar1;
          plVar1[1] = (longlong)plVar3;
          plVar3 = plVar1;
        }
        *(undefined4 *)(plVar3[1] + 0x18) = 1;
        *(undefined4 *)(*(longlong *)(plVar3[1] + 8) + 0x18) = 0;
        plVar1 = *(longlong **)(plVar3[1] + 8);
        lVar4 = *plVar1;
        *plVar1 = *(longlong *)(lVar4 + 0x10);
        if (*(longlong *)(lVar4 + 0x10) != 0) {
          *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar1;
        }
        *(longlong *)(lVar4 + 8) = plVar1[1];
        if (plVar1 == (longlong *)*param_1) {
          *param_1 = lVar4;
          *(longlong **)(lVar4 + 0x10) = plVar1;
          plVar1[1] = lVar4;
        }
        else {
          plVar2 = (longlong *)plVar1[1];
          if (plVar1 == (longlong *)plVar2[2]) {
            plVar2[2] = lVar4;
            *(longlong **)(lVar4 + 0x10) = plVar1;
            plVar1[1] = lVar4;
          }
          else {
            *plVar2 = lVar4;
            *(longlong **)(lVar4 + 0x10) = plVar1;
            plVar1[1] = lVar4;
          }
        }
      }
      else {
LAB_140001ecc:
        *(undefined4 *)(plVar1 + 3) = 1;
        *(undefined4 *)(lVar4 + 0x18) = 1;
        *(undefined4 *)(*(longlong *)(plVar3[1] + 8) + 0x18) = 0;
        plVar3 = *(longlong **)(plVar3[1] + 8);
      }
    }
    lVar4 = *plVar2;
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x18) == 0)) goto LAB_140001ecc;
    if (plVar3 == (longlong *)*plVar1) {
      lVar4 = *plVar1;
      *plVar1 = *(longlong *)(lVar4 + 0x10);
      if (*(longlong *)(lVar4 + 0x10) != 0) {
        *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar1;
      }
      *(longlong *)(lVar4 + 8) = plVar1[1];
      if (plVar1 == (longlong *)*param_1) {
        *param_1 = lVar4;
      }
      else {
        plVar3 = (longlong *)plVar1[1];
        if (plVar1 == (longlong *)plVar3[2]) {
          plVar3[2] = lVar4;
        }
        else {
          *plVar3 = lVar4;
        }
      }
      *(longlong **)(lVar4 + 0x10) = plVar1;
      plVar1[1] = lVar4;
      plVar3 = plVar1;
    }
    *(undefined4 *)(plVar3[1] + 0x18) = 1;
    *(undefined4 *)(*(longlong *)(plVar3[1] + 8) + 0x18) = 0;
    lVar4 = *(longlong *)(plVar3[1] + 8);
    plVar1 = *(longlong **)(lVar4 + 0x10);
    *(longlong *)(lVar4 + 0x10) = *plVar1;
    if (*plVar1 != 0) {
      *(longlong *)(*plVar1 + 8) = lVar4;
    }
    plVar1[1] = *(longlong *)(lVar4 + 8);
    if (lVar4 == *param_1) {
      *param_1 = (longlong)plVar1;
      *plVar1 = lVar4;
      *(longlong **)(lVar4 + 8) = plVar1;
    }
    else {
      plVar2 = *(longlong **)(lVar4 + 8);
      if (lVar4 == *plVar2) {
        *plVar2 = (longlong)plVar1;
        *plVar1 = lVar4;
        *(longlong **)(lVar4 + 8) = plVar1;
      }
      else {
        plVar2[2] = (longlong)plVar1;
        *plVar1 = lVar4;
        *(longlong **)(lVar4 + 8) = plVar1;
      }
    }
  } while( true );
}



undefined8 * FUN_140001fd0(undefined8 *param_1,byte param_2)

{
  *param_1 = pxsl::IPxslErrorReporter::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



void FUN_140002000(void)

{
                    // WARNING: Could not recover jumptable at 0x00014000202b. Too many branches
                    // WARNING: Treating indirect jump as call
  printf("ERROR %s: %d: %s\n");
  return;
}



void FUN_140002040(void)

{
                    // WARNING: Could not recover jumptable at 0x00014000206b. Too many branches
                    // WARNING: Treating indirect jump as call
  printf("Warning %s: %d: %s\n");
  return;
}



undefined8 * FUN_140002080(undefined8 *param_1,uint param_2)

{
  FUN_1400020b0(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



void FUN_1400020b0(undefined8 *param_1)

{
  *param_1 = CQuestCompiler::vftable;
  FUN_140002140((longlong)param_1);
  free((void *)param_1[0xd]);
  param_1[0xd] = 0;
  free((void *)param_1[0xb]);
  param_1[0xb] = 0;
  free((void *)param_1[9]);
  param_1[9] = 0;
  param_1[2] = CQuestCompilerOptions::vftable;
  FUN_1400046f0(param_1 + 3);
  FUN_140004600(param_1 + 6);
  *(undefined4 *)(param_1 + 4) = 0;
                    // WARNING: Could not recover jumptable at 0x000140002130. Too many branches
                    // WARNING: Treating indirect jump as call
  free((void *)param_1[3]);
  return;
}



void FUN_140002140(longlong param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x78);
  uVar4 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    if (pvVar2 != (void *)0x0) {
      FUN_140004860((longlong)pvVar2);
      operator_delete(pvVar2);
    }
    operator_delete(puVar1);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x88);
  if (plVar3 != (longlong *)0x0) {
    if ((int)plVar3[1] != 0) {
      do {
        free(*(void **)(*plVar3 + uVar4 * 8));
        uVar4 = uVar4 + 1;
        *(undefined8 *)(*plVar3 + -8 + uVar4 * 8) = 0;
      } while (uVar4 < *(uint *)(plVar3 + 1));
    }
    *(undefined4 *)(plVar3 + 1) = 0;
    free((void *)*plVar3);
    operator_delete(plVar3);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  return;
}



void FUN_140002220(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  void *local_18 [2];
  
  if (*(int *)(param_1 + 8) == 0) {
    FUN_140002ed0(param_1);
  }
  puVar1 = malloc(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = pxsl::DefaultErrorReporter::vftable;
  }
  *(undefined8 **)(param_1 + 0x80) = puVar1;
  puVar1 = malloc(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0x39;
  }
  *(undefined8 **)(param_1 + 0x88) = puVar1;
  puVar2 = malloc(8);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = FUN_1400047a0(puVar2,puVar1,*(undefined8 *)(param_1 + 0x80));
  }
  *(undefined8 **)(param_1 + 0x78) = puVar3;
  plVar4 = (longlong *)fs::full_path((char *)local_18);
  FUN_140004f70(**(longlong **)(param_1 + 0x78),plVar4);
  free(local_18[0]);
  plVar4 = (longlong *)fs::full_path((char *)local_18);
  FUN_1400055b0((longlong *)**(undefined8 **)(param_1 + 0x78),plVar4);
  free(local_18[0]);
  plVar4 = (longlong *)fs::full_path((char *)local_18);
  FUN_1400055b0((longlong *)**(undefined8 **)(param_1 + 0x78),plVar4);
  free(local_18[0]);
  puVar3 = (undefined8 *)0x0;
  *(undefined1 *)(**(longlong **)(param_1 + 0x78) + 0x61) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
    do {
      if (*(int *)(puVar1 + -3) < 5) {
        puVar2 = (undefined8 *)puVar1[2];
      }
      else {
        puVar2 = (undefined8 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
    if ((puVar3 != (undefined8 *)0x0) && (*(int *)(puVar3 + -3) < 6)) goto LAB_140002394;
  }
  puVar3 = (undefined8 *)0x0;
LAB_140002394:
  *(bool *)(**(longlong **)(param_1 + 0x78) + 0x40) = puVar3 != (undefined8 *)0x0;
  return;
}



void FUN_1400023b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FUN_140003240(param_2,(longlong *)&local_18);
  FUN_140002400(param_1,param_2,&local_18,param_4);
                    // WARNING: Could not recover jumptable at 0x0001400023f8. Too many branches
                    // WARNING: Treating indirect jump as call
  free(local_18);
  return;
}



void FUN_140002400(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  FILE *_File;
  uint uVar7;
  char *_Filename;
  undefined1 *_Str;
  undefined1 *local_48;
  ulonglong local_40;
  char *local_38 [2];
  void *local_28 [2];
  
  fs::full_path((char *)local_28);
  fs::full_path((char *)local_38);
  puVar1 = *(undefined8 **)(param_1 + 0x78);
  plVar2 = *(longlong **)*puVar1;
  puVar4 = malloc(0x10);
  uVar3 = (int)plVar2[1] + 1;
  if (*(uint *)((longlong)plVar2 + 0xc) < uVar3) {
    uVar7 = (*(uint *)((longlong)plVar2 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
    if (uVar7 < uVar3) {
      uVar7 = uVar3;
    }
    *(uint *)((longlong)plVar2 + 0xc) = uVar7;
    pvVar5 = realloc((void *)*plVar2,(ulonglong)(uVar7 << 3));
    *plVar2 = (longlong)pvVar5;
  }
  puVar6 = (undefined8 *)(*plVar2 + (ulonglong)*(uint *)(plVar2 + 1) * 8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = puVar4;
  }
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  puVar6 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    puVar6 = FUN_140007270(puVar4,(longlong *)*puVar1);
  }
  FUN_140007480((longlong *)puVar6[1],(longlong *)local_28);
  plVar2 = (longlong *)puVar6[1];
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  FUN_140008fb0(plVar2,plVar2[7]);
  plVar2[0xb] = (longlong)&local_48;
  FUN_14000a730(plVar2,(longlong *)plVar2[7],0,param_4);
  plVar2[0xb] = 0;
  _Filename = "";
  if (local_38[0] != (char *)0x0) {
    _Filename = local_38[0];
  }
  _File = fopen(_Filename,"wt");
  if (_File == (FILE *)0x0) {
    FUN_140004c80(*plVar2,0,0,"FILE","Could not open file \'%s\' for writing");
  }
  else {
    _Str = &DAT_14000ff00;
    if (local_48 != (undefined1 *)0x0) {
      _Str = local_48;
    }
    fwrite(_Str,1,local_40 & 0xffffffff,_File);
    fclose(_File);
  }
  free(local_48);
  (**(code **)*puVar6)(puVar6,0);
  printf("Compiled %s\n");
  free(local_38[0]);
  local_38[0] = (char *)0x0;
  free(local_28[0]);
  return;
}



// WARNING: Removing unreachable block (ram,0x0001400026b2)

void FUN_140002610(longlong param_1)

{
  char *_Src;
  FS_NAME *pFVar1;
  char *pcVar2;
  void *pvVar3;
  ulonglong _Size;
  undefined8 uVar4;
  FS_NAME *pFVar5;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  uint local_50;
  uint local_4c;
  LARGE_INTEGER local_48;
  LARGE_INTEGER local_40;
  undefined1 local_38;
  char *local_30;
  
  local_30 = "ALL QUESTS COMPILED";
  local_38 = 1;
  QueryPerformanceCounter(&local_48);
  uVar4 = 0;
  pFVar1 = fs::search((char *)0x0,"*.pxsl",true,false);
  if (pFVar1 != (FS_NAME *)0x0) {
    local_68 = (void *)0x0;
    pFVar5 = pFVar1;
    do {
      _Src = *(char **)pFVar5;
      pcVar2 = _Src;
      pvVar3 = (void *)0x0;
      do {
        local_50 = (uint)pvVar3;
        if (*pcVar2 == '\0') break;
        local_50 = local_50 + 1;
        pvVar3 = (void *)(ulonglong)local_50;
        pcVar2 = pcVar2 + 1;
      } while (local_50 != 0xffffffff);
      _Size = (ulonglong)local_50;
      local_4c = local_50;
      if (local_50 == 0) {
        local_58 = (void *)0x0;
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = malloc((ulonglong)(local_50 + 1));
        local_58 = pvVar3;
        memcpy(pvVar3,_Src,_Size);
        *(undefined1 *)(_Size + (longlong)pvVar3) = 0;
      }
      local_60 = 0;
      FUN_140003240(&local_58,(longlong *)&local_68);
      FUN_140002400(param_1,&local_58,&local_68,uVar4);
      free(local_68);
      local_68 = (void *)0x0;
      free(pvVar3);
      pFVar5 = *(FS_NAME **)(pFVar5 + 8);
      local_58 = (void *)0x0;
    } while (pFVar5 != (FS_NAME *)0x0);
  }
  while (pFVar1 != (FS_NAME *)0x0) {
    pFVar5 = *(FS_NAME **)(pFVar1 + 8);
    operator_delete__(*(void **)pFVar1);
    *(undefined8 *)pFVar1 = 0;
    operator_delete(pFVar1);
    pFVar1 = pFVar5;
  }
  local_38 = 0;
  QueryPerformanceCounter(&local_40);
  return;
}



// WARNING: Removing unreachable block (ram,0x00014000280d)
// WARNING: Removing unreachable block (ram,0x0001400028c2)

void FUN_1400027b0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  undefined1 *_Dst;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 *local_58;
  uint local_50;
  uint uStack_4c;
  void *local_48 [2];
  void *local_38 [2];
  
  ppuVar2 = (undefined1 **)FUN_1400018f0(&DAT_1400134c0,local_38,"/");
  uVar4 = *(int *)(param_2 + 1) + *(int *)(ppuVar2 + 1);
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uStack_4c = 0;
  if (uVar4 != 0) {
    puVar3 = malloc((ulonglong)(uVar4 + 1));
    *puVar3 = 0;
    free((void *)0x0);
    local_58 = puVar3;
    uStack_4c = uVar4;
  }
  uVar4 = uStack_4c;
  puVar3 = local_58;
  uVar6 = 0;
  if (&local_58 != ppuVar2) {
    uVar5 = *(uint *)(ppuVar2 + 1);
    if (uVar5 == 0) {
      free(local_58);
      puVar3 = (undefined1 *)0x0;
      uVar4 = 0;
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      uStack_4c = 0;
      uVar6 = 0;
    }
    else if (uStack_4c < uVar5) {
      free(local_58);
      uVar4 = *(uint *)(ppuVar2 + 1);
      local_50 = uVar4;
      uStack_4c = uVar4;
      puVar3 = malloc((ulonglong)(uVar4 + 1));
      local_58 = puVar3;
      memcpy(puVar3,*ppuVar2,(ulonglong)(uVar4 + 1));
      uVar6 = (ulonglong)uVar4;
    }
    else {
      local_50 = uVar5;
      memcpy(local_58,*ppuVar2,(ulonglong)(uVar5 + 1));
      uVar6 = (ulonglong)uVar5;
    }
  }
  _Dst = puVar3;
  if (*(int *)(param_2 + 1) != 0) {
    iVar1 = (int)uVar6;
    uVar5 = *(int *)(param_2 + 1) + iVar1;
    if (uVar4 < uVar5) {
      _Dst = malloc((ulonglong)(uVar5 + 1));
      if (iVar1 == 0) {
        *_Dst = 0;
      }
      else {
        memcpy(_Dst,puVar3,(ulonglong)(iVar1 + 1));
      }
      free(puVar3);
      local_58 = _Dst;
      uStack_4c = uVar5;
    }
    memcpy(_Dst + uVar6,(void *)*param_2,(ulonglong)(*(int *)(param_2 + 1) + 1));
    local_50 = iVar1 + *(int *)(param_2 + 1);
  }
  FUN_1400018f0(&local_58,local_48,"/");
  free(_Dst);
  free(local_38[0]);
  FUN_140002980(param_1,(longlong *)local_48);
                    // WARNING: Could not recover jumptable at 0x000140002979. Too many branches
                    // WARNING: Treating indirect jump as call
  free(local_48[0]);
  return;
}



// WARNING: Removing unreachable block (ram,0x000140002a12)

void FUN_140002980(longlong param_1,longlong *param_2)

{
  FS_NAME *pFVar1;
  char *pcVar2;
  void *pvVar3;
  char *pcVar4;
  ulonglong _Size;
  undefined8 uVar5;
  FS_NAME *pFVar6;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  uint local_30;
  uint local_2c;
  
  pcVar4 = "";
  if ((char *)*param_2 != (char *)0x0) {
    pcVar4 = (char *)*param_2;
  }
  uVar5 = 0;
  pFVar1 = fs::search(pcVar4,"*.pxsl",true,false);
  if (pFVar1 != (FS_NAME *)0x0) {
    local_48 = (void *)0x0;
    pFVar6 = pFVar1;
    do {
      pcVar4 = *(char **)pFVar6;
      pcVar2 = pcVar4;
      pvVar3 = (void *)0x0;
      do {
        local_30 = (uint)pvVar3;
        if (*pcVar2 == '\0') break;
        local_30 = local_30 + 1;
        pvVar3 = (void *)(ulonglong)local_30;
        pcVar2 = pcVar2 + 1;
      } while (local_30 != 0xffffffff);
      _Size = (ulonglong)local_30;
      local_2c = local_30;
      if (local_30 == 0) {
        local_38 = (void *)0x0;
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = malloc((ulonglong)(local_30 + 1));
        local_38 = pvVar3;
        memcpy(pvVar3,pcVar4,_Size);
        *(undefined1 *)(_Size + (longlong)pvVar3) = 0;
      }
      local_40 = 0;
      FUN_140003240(&local_38,(longlong *)&local_48);
      FUN_140002400(param_1,&local_38,&local_48,uVar5);
      free(local_48);
      local_48 = (void *)0x0;
      free(pvVar3);
      pFVar6 = *(FS_NAME **)(pFVar6 + 8);
      local_38 = (void *)0x0;
    } while (pFVar6 != (FS_NAME *)0x0);
  }
  while (pFVar1 != (FS_NAME *)0x0) {
    pFVar6 = *(FS_NAME **)(pFVar1 + 8);
    operator_delete__(*(void **)pFVar1);
    *(undefined8 *)pFVar1 = 0;
    operator_delete(pFVar1);
    pFVar1 = pFVar6;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000140002c79)
// WARNING: Removing unreachable block (ram,0x000140002b62)
// WARNING: Removing unreachable block (ram,0x000140002c66)
// WARNING: Removing unreachable block (ram,0x000140002c94)

void FUN_140002b00(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  char *pcVar3;
  undefined1 *_Dst;
  undefined1 *puVar4;
  uint uVar5;
  size_t _Size;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *local_148;
  uint local_140;
  uint local_13c;
  char local_138 [272];
  
  pcVar3 = "";
  if ((char *)*param_2 != (char *)0x0) {
    pcVar3 = (char *)*param_2;
  }
  fs::path_normalize(local_138,pcVar3,false);
  puVar8 = (undefined1 *)0x0;
  pcVar3 = local_138;
  puVar4 = puVar8;
  do {
    uVar5 = (uint)puVar4;
    if (*pcVar3 == '\0') break;
    uVar5 = uVar5 + 1;
    puVar4 = (undefined1 *)(ulonglong)uVar5;
    pcVar3 = pcVar3 + 1;
  } while (uVar5 != 0xffffffff);
  _Size = (size_t)uVar5;
  local_140 = uVar5;
  local_13c = uVar5;
  if (uVar5 == 0) {
    local_148 = (undefined1 *)0x0;
    puVar4 = puVar8;
  }
  else {
    _Dst = malloc((ulonglong)(uVar5 + 1));
    local_148 = _Dst;
    memcpy(_Dst,local_138,_Size);
    _Dst[_Size] = 0;
    if (_Dst[uVar5 - 1] == '/') {
      _Dst[uVar5 - 1] = 0;
    }
    puVar4 = _Dst;
    uVar1 = _Size;
    uVar6 = uVar5;
    if (_Dst != (undefined1 *)0x0) {
      while (uVar6 != 0) {
        cVar2 = _Dst[uVar1 - 1];
        uVar6 = (uint)uVar1;
        pcVar3 = "/";
        if (cVar2 != '\0') {
          do {
            if (*pcVar3 == '\0') goto LAB_140002c36;
            if ((cVar2 != *pcVar3) ||
               ((longlong)(int)uVar5 <= (longlong)(pcVar3 + (uVar1 - 0x140010075)))) break;
            cVar2 = (_Dst + (uVar1 - 0x140010074))[(longlong)pcVar3];
            pcVar3 = pcVar3 + 1;
          } while (cVar2 != '\0');
          if (*pcVar3 == '\0') {
LAB_140002c36:
            if (uVar6 != 0) {
              puVar4 = puVar8;
              uVar7 = 0;
              if (uVar6 < uVar5) {
                if (uVar5 < uVar6 + uVar5) {
                  _Size = (size_t)(uVar5 - uVar6);
                }
                uVar5 = (uint)_Size;
                if (uVar5 != 0) {
                  puVar4 = malloc((ulonglong)(uVar5 + 1));
                  *puVar4 = 0;
                  free((void *)0x0);
                  memcpy(puVar4,_Dst + uVar1,_Size);
                  puVar4[_Size] = 0;
                  uVar7 = uVar5;
                }
              }
              free((void *)0x0);
              free(_Dst);
              local_148 = puVar4;
              local_140 = uVar7;
              local_13c = uVar7;
              free((void *)0x0);
            }
            break;
          }
        }
        uVar1 = (ulonglong)(uVar6 - 1);
        uVar6 = uVar6 - 1;
      }
    }
    FUN_1400027b0(param_1,&local_148);
  }
  free(puVar4);
  return;
}



void FUN_140002d40(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  puVar6 = (undefined8 *)0x0;
  puVar1 = puVar3;
  puVar7 = puVar6;
  if (puVar3 != (undefined8 *)0x0) {
    do {
      if (*(int *)(puVar1 + -3) < 0) {
        puVar5 = (undefined8 *)puVar1[2];
      }
      else {
        puVar5 = (undefined8 *)*puVar1;
        puVar7 = puVar1;
      }
      puVar1 = puVar5;
    } while (puVar5 != (undefined8 *)0x0);
    if ((puVar7 != (undefined8 *)0x0) && (*(int *)(puVar7 + -3) < 1)) {
      FUN_140002610(param_1);
      return;
    }
  }
  puVar1 = puVar3;
  puVar5 = puVar6;
  if (puVar3 != (undefined8 *)0x0) {
    do {
      if (*(int *)(puVar1 + -3) < 1) {
        puVar2 = (undefined8 *)puVar1[2];
      }
      else {
        puVar2 = (undefined8 *)*puVar1;
        puVar5 = puVar1;
      }
      puVar1 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
    if ((puVar5 != (undefined8 *)0x0) && (*(int *)(puVar5 + -3) < 2)) {
      if (puVar3 != (undefined8 *)0x0) {
        do {
          if (*(int *)(puVar3 + -3) < 1) {
            puVar1 = (undefined8 *)puVar3[2];
          }
          else {
            puVar1 = (undefined8 *)*puVar3;
            puVar6 = puVar3;
          }
          puVar3 = puVar1;
        } while (puVar1 != (undefined8 *)0x0);
        if ((puVar6 != (undefined8 *)0x0) && (puVar3 = puVar6 + -2, *(int *)(puVar6 + -3) < 2))
        goto LAB_140002dde;
      }
      puVar3 = &DAT_140013338;
LAB_140002dde:
      FUN_1400027b0(param_1,puVar3);
      return;
    }
  }
  puVar1 = puVar3;
  puVar5 = puVar6;
  if (puVar3 != (undefined8 *)0x0) {
    do {
      if (*(int *)(puVar1 + -3) < 3) {
        puVar2 = (undefined8 *)puVar1[2];
      }
      else {
        puVar2 = (undefined8 *)*puVar1;
        puVar5 = puVar1;
      }
      puVar1 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
    if ((puVar5 != (undefined8 *)0x0) && (*(int *)(puVar5 + -3) < 4)) {
      if (puVar3 != (undefined8 *)0x0) {
        do {
          if (*(int *)(puVar3 + -3) < 3) {
            puVar1 = (undefined8 *)puVar3[2];
          }
          else {
            puVar1 = (undefined8 *)*puVar3;
            puVar6 = puVar3;
          }
          puVar3 = puVar1;
        } while (puVar1 != (undefined8 *)0x0);
        if ((puVar6 != (undefined8 *)0x0) && (plVar4 = puVar6 + -2, *(int *)(puVar6 + -3) < 4))
        goto LAB_140002e46;
      }
      plVar4 = &DAT_140013338;
LAB_140002e46:
      FUN_140002b00(param_1,plVar4);
      return;
    }
  }
  puVar1 = puVar3;
  puVar5 = puVar6;
  if (puVar3 == (undefined8 *)0x0) {
LAB_140002ebd:
    FUN_140004450(param_1 + 0x10);
    return;
  }
  do {
    if (*(int *)(puVar1 + -3) < 2) {
      puVar2 = (undefined8 *)puVar1[2];
    }
    else {
      puVar2 = (undefined8 *)*puVar1;
      puVar5 = puVar1;
    }
    puVar1 = puVar2;
  } while (puVar2 != (undefined8 *)0x0);
  if ((puVar5 == (undefined8 *)0x0) || (2 < *(int *)(puVar5 + -3))) goto LAB_140002ebd;
  if (puVar3 != (undefined8 *)0x0) {
    do {
      if (*(int *)(puVar3 + -3) < 2) {
        puVar1 = (undefined8 *)puVar3[2];
      }
      else {
        puVar1 = (undefined8 *)*puVar3;
        puVar6 = puVar3;
      }
      puVar3 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    if ((puVar6 != (undefined8 *)0x0) && (puVar3 = puVar6 + -2, *(int *)(puVar6 + -3) < 3))
    goto LAB_140002eb5;
  }
  puVar3 = &DAT_140013338;
LAB_140002eb5:
  FUN_1400023b0(param_1,puVar3,puVar6,puVar7);
  return;
}



// WARNING: Removing unreachable block (ram,0x000140002f05)

void FUN_140002ed0(longlong param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong _Size;
  undefined8 *puVar7;
  undefined8 *local_18;
  uint local_10;
  uint local_c;
  
  puVar7 = (undefined8 *)0x0;
  pcVar1 = "dw";
  puVar2 = puVar7;
  do {
    local_10 = (uint)puVar2;
    if (*pcVar1 == '\0') break;
    local_10 = local_10 + 1;
    puVar2 = (undefined8 *)(ulonglong)local_10;
    pcVar1 = pcVar1 + 1;
  } while (local_10 != 0xffffffff);
  _Size = (ulonglong)local_10;
  local_c = local_10;
  if (local_10 == 0) {
    local_18 = (undefined8 *)0x0;
    puVar2 = puVar7;
  }
  else {
    puVar2 = malloc((ulonglong)(local_10 + 1));
    local_18 = puVar2;
    memcpy(puVar2,&DAT_140010078,_Size);
    *(undefined1 *)(_Size + (longlong)puVar2) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  puVar4 = puVar3;
  puVar6 = puVar7;
  if (puVar3 == (undefined8 *)0x0) goto LAB_140002fbc;
  do {
    if (*(int *)(puVar4 + -3) < 4) {
      puVar5 = (undefined8 *)puVar4[2];
    }
    else {
      puVar5 = (undefined8 *)*puVar4;
      puVar6 = puVar4;
    }
    puVar4 = puVar5;
  } while (puVar5 != (undefined8 *)0x0);
  if ((puVar6 == (undefined8 *)0x0) || (4 < *(int *)(puVar6 + -3))) goto LAB_140002fbc;
  if (puVar3 == (undefined8 *)0x0) {
LAB_140002fa6:
    puVar2 = &DAT_140013338;
  }
  else {
    do {
      if (*(int *)(puVar3 + -3) < 4) {
        puVar2 = (undefined8 *)puVar3[2];
      }
      else {
        puVar2 = (undefined8 *)*puVar3;
        puVar7 = puVar3;
      }
      puVar3 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
    if ((puVar7 == (undefined8 *)0x0) || (puVar2 = puVar7 + -2, 4 < *(int *)(puVar7 + -3)))
    goto LAB_140002fa6;
  }
  FUN_140001690(&local_18,puVar2);
  puVar2 = local_18;
LAB_140002fbc:
  FUN_140002ff0(&local_18);
                    // WARNING: Could not recover jumptable at 0x000140002fdd. Too many branches
                    // WARNING: Treating indirect jump as call
  free(puVar2);
  return;
}



void FUN_140002ff0(undefined8 *param_1)

{
  void *_Memory;
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  char local_res8 [8];
  void *local_678;
  ulonglong local_670;
  undefined4 local_668;
  char local_658 [256];
  char local_558 [272];
  char local_448 [272];
  CHAR local_338 [272];
  char local_228 [256];
  char local_128 [256];
  
  puVar1 = &DAT_14000ff00;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_1;
  }
  local_678 = (void *)0x0;
  local_670 = 0;
  local_668 = 0x39;
  FUN_140003440((longlong *)&local_678,(longlong)puVar1,*(uint *)(param_1 + 1),';');
  uVar5 = (uint)local_670;
  uVar6 = local_670 & 0xffffffff;
  if ((uint)local_670 != 0) {
    GetModuleFileNameA((HMODULE)0x0,local_338,0x104);
    _splitpath(local_338,local_res8,local_658,local_228,local_128);
    strcpy_s(local_558,0x104,local_res8);
    strcat_s(local_558,0x104,local_658);
    SetCurrentDirectoryA(local_558);
    _Memory = local_678;
    puVar3 = (undefined8 *)((ulonglong)(uVar5 - 1) * 0x10 + (longlong)local_678);
    puVar1 = &DAT_14000ff00;
    if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*puVar3;
    }
    FUN_1400033e0(local_448,"%s%s",local_558,puVar1);
    uVar4 = CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
    fs::init(local_448,0,"/out/cache",true,true,(char **)0x0);
    FUN_140003410(local_658,"%s/out",local_448,uVar4);
    fs::add_source(local_658,0xf);
    for (puVar2 = (undefined8 *)((longlong)_Memory + uVar6 * 0x10 + -0x10);
        puVar2 != (undefined8 *)((longlong)_Memory + -0x10); puVar2 = puVar2 + -2) {
      puVar1 = &DAT_14000ff00;
      if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
        puVar1 = (undefined1 *)*puVar2;
      }
      FUN_140003410(local_658,"%s%s/%s",local_558,puVar1);
      fs::add_source(local_658,0xf);
    }
    while (uVar5 != 0) {
      free((void *)*puVar3);
      *puVar3 = 0;
      puVar3 = puVar3 + -2;
      uVar5 = (int)uVar6 - 1;
      uVar6 = (ulonglong)uVar5;
    }
    free(_Memory);
    return;
  }
  free(local_678);
  return;
}



// WARNING: Removing unreachable block (ram,0x00014000332b)
// WARNING: Removing unreachable block (ram,0x00014000333f)

void FUN_140003240(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined1 *_Dst;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  void *local_38;
  uint local_30;
  longlong local_28 [2];
  
  fs::full_path((char *)&local_38);
  if (local_38 != (void *)0x0) {
    for (uVar4 = local_30; uVar4 != 0; uVar4 = uVar4 - 1) {
      uVar5 = (ulonglong)uVar4;
      cVar1 = *(char *)((uVar5 - 1) + (longlong)local_38);
      pcVar2 = ".pxsl";
      if (cVar1 != '\0') {
        do {
          if (*pcVar2 == '\0') goto LAB_140003306;
          if ((cVar1 != *pcVar2) ||
             ((longlong)(int)local_30 <= (longlong)(pcVar2 + (uVar5 - 0x1400100a9)))) break;
          cVar1 = pcVar2[(longlong)local_38 + (uVar5 - 0x1400100a8)];
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        if (*pcVar2 == '\0') {
LAB_140003306:
          uVar4 = uVar4 - 1;
          if (uVar4 != 0xffffffff) {
            _Dst = (undefined1 *)0x0;
            uVar3 = 0;
            if (local_30 != 0) {
              if (local_30 < uVar4) {
                uVar4 = local_30;
              }
              if (uVar4 != 0) {
                _Dst = malloc((ulonglong)(uVar4 + 1));
                *_Dst = 0;
                free((void *)0x0);
                memcpy(_Dst,local_38,(ulonglong)uVar4);
                _Dst[uVar4] = 0;
                uVar3 = uVar4;
              }
            }
            free((void *)0x0);
            if (param_2 != local_28) {
              free((void *)*param_2);
              *param_2 = (longlong)_Dst;
              _Dst = (undefined1 *)0x0;
              *(uint *)(param_2 + 1) = uVar3;
              *(uint *)((longlong)param_2 + 0xc) = uVar3;
            }
            free(_Dst);
            FUN_140001820(param_2,"_quest.xml");
          }
          break;
        }
      }
    }
  }
  free(local_38);
  return;
}



void FUN_1400033e0(char *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  vsprintf_s(param_1,0x104,param_2,(va_list)&local_res18);
  return;
}



void FUN_140003410(char *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  vsprintf_s(param_1,0x100,param_2,(va_list)&local_res18);
  return;
}



// WARNING: Removing unreachable block (ram,0x0001400034b7)
// WARNING: Removing unreachable block (ram,0x000140003594)

void FUN_140003440(longlong *param_1,longlong param_2,uint param_3,char param_4)

{
  char *pcVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar5 = 0;
  uVar9 = 0;
  lVar6 = 0;
  if (param_3 != 0) {
    lVar10 = 1;
    do {
      if (*(char *)(param_2 + -1 + lVar10) == param_4) {
        if (uVar5 != uVar9) {
          uVar8 = 0;
          pcVar1 = (char *)(lVar6 + param_2);
          if (uVar9 == uVar5) {
LAB_1400034e0:
            pvVar2 = (void *)0x0;
          }
          else {
            do {
              if (*pcVar1 == '\0') break;
              uVar7 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar7;
              pcVar1 = pcVar1 + 1;
            } while (uVar7 < uVar9 - uVar5);
            if ((int)uVar8 == 0) goto LAB_1400034e0;
            pvVar2 = malloc((ulonglong)((int)uVar8 + 1));
            memcpy(pvVar2,(char *)(lVar6 + param_2),uVar8);
            *(undefined1 *)(uVar8 + (longlong)pvVar2) = 0;
          }
          uVar5 = (int)param_1[1] + 1;
          if (*(uint *)((longlong)param_1 + 0xc) < uVar5) {
            uVar7 = (*(uint *)((longlong)param_1 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
            if (uVar7 < uVar5) {
              uVar7 = uVar5;
            }
            *(uint *)((longlong)param_1 + 0xc) = uVar7;
            pvVar3 = realloc((void *)*param_1,(ulonglong)(uVar7 << 4));
            *param_1 = (longlong)pvVar3;
          }
          puVar4 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 1) * 0x10 + *param_1);
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = pvVar2;
            *(int *)(puVar4 + 1) = (int)uVar8;
            *(int *)((longlong)puVar4 + 0xc) = (int)uVar8;
            pvVar2 = (void *)0x0;
          }
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
          free(pvVar2);
        }
        uVar5 = uVar9 + 1;
        lVar6 = lVar10;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 1;
    } while (uVar9 < param_3);
  }
  if (uVar5 == param_3) {
    return;
  }
  uVar8 = 0;
  pcVar1 = (char *)((ulonglong)uVar5 + param_2);
  if (param_3 != uVar5) {
    do {
      if (*pcVar1 == '\0') break;
      uVar9 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar9;
      pcVar1 = pcVar1 + 1;
    } while (uVar9 < param_3 - uVar5);
    if ((int)uVar8 != 0) {
      pvVar2 = malloc((ulonglong)((int)uVar8 + 1));
      memcpy(pvVar2,(char *)((ulonglong)uVar5 + param_2),uVar8);
      *(undefined1 *)(uVar8 + (longlong)pvVar2) = 0;
      goto LAB_1400035bf;
    }
  }
  pvVar2 = (void *)0x0;
LAB_1400035bf:
  uVar5 = (int)param_1[1] + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar5) {
    uVar9 = (*(uint *)((longlong)param_1 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
    if (uVar9 < uVar5) {
      uVar9 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar9;
    pvVar3 = realloc((void *)*param_1,(ulonglong)(uVar9 << 4));
    *param_1 = (longlong)pvVar3;
  }
  puVar4 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 1) * 0x10 + *param_1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = pvVar2;
    *(int *)(puVar4 + 1) = (int)uVar8;
    *(int *)((longlong)puVar4 + 0xc) = (int)uVar8;
    pvVar2 = (void *)0x0;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  free(pvVar2);
  return;
}



undefined8 * FUN_140003630(undefined8 *param_1,uint param_2)

{
  *param_1 = CQuestCompilerOptions::vftable;
  FUN_1400046f0(param_1 + 1);
  FUN_140004600(param_1 + 4);
  *(undefined4 *)(param_1 + 2) = 0;
  free((void *)param_1[1]);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000140004138)
// WARNING: Removing unreachable block (ram,0x000140003f9a)
// WARNING: Removing unreachable block (ram,0x000140003ef6)
// WARNING: Removing unreachable block (ram,0x000140003d58)
// WARNING: Removing unreachable block (ram,0x000140003bba)
// WARNING: Removing unreachable block (ram,0x000140003b16)
// WARNING: Removing unreachable block (ram,0x000140003978)
// WARNING: Removing unreachable block (ram,0x0001400037db)
// WARNING: Removing unreachable block (ram,0x000140003737)
// WARNING: Removing unreachable block (ram,0x000140003789)
// WARNING: Removing unreachable block (ram,0x000140003926)
// WARNING: Removing unreachable block (ram,0x0001400039ca)
// WARNING: Removing unreachable block (ram,0x000140003b68)
// WARNING: Removing unreachable block (ram,0x000140003d06)
// WARNING: Removing unreachable block (ram,0x000140003daa)
// WARNING: Removing unreachable block (ram,0x000140003f48)
// WARNING: Removing unreachable block (ram,0x0001400040e6)
// WARNING: Removing unreachable block (ram,0x00014000418e)

void FUN_1400036a0(longlong param_1)

{
  void *pvVar1;
  char *pcVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  void *pvVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  size_t sVar12;
  uint uVar13;
  int iVar14;
  
  sVar12 = 0;
  if (*(uint *)(param_1 + 0x10) < 7) {
    if (*(uint *)(param_1 + 0x14) < 6) {
      *(undefined4 *)(param_1 + 0x14) = 6;
      pvVar1 = realloc(*(void **)(param_1 + 8),0x30);
      *(void **)(param_1 + 8) = pvVar1;
    }
    uVar13 = *(uint *)(param_1 + 0x10);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar13 * 8);
    if (uVar13 < 6) {
      uVar9 = (ulonglong)(6 - uVar13);
      do {
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = 0;
        }
        puVar5 = puVar5 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 6;
  pcVar2 = "Compile all quests";
  pvVar1 = (void *)0x0;
  do {
    if (*pcVar2 == '\0') break;
    uVar13 = (int)sVar12 + 1;
    sVar12 = (size_t)uVar13;
    pcVar2 = pcVar2 + 1;
  } while (uVar13 != 0xffffffff);
  iVar14 = (int)sVar12;
  if (iVar14 != 0) {
    pvVar1 = malloc((ulonglong)(iVar14 + 1));
    memcpy(pvVar1,"Compile all quests",sVar12);
    *(undefined1 *)(sVar12 + (longlong)pvVar1) = 0;
  }
  pvVar3 = (void *)0x0;
  pcVar2 = "-all";
  pvVar4 = pvVar3;
  do {
    if (*pcVar2 == '\0') break;
    uVar13 = (int)pvVar4 + 1;
    pvVar4 = (void *)(ulonglong)uVar13;
    pcVar2 = pcVar2 + 1;
  } while (uVar13 != 0xffffffff);
  iVar11 = (int)pvVar4;
  if (iVar11 != 0) {
    pvVar3 = malloc((ulonglong)(iVar11 + 1));
    memcpy(pvVar3,&DAT_140010124,(size_t)pvVar4);
    *(undefined1 *)((longlong)pvVar4 + (longlong)pvVar3) = 0;
  }
  sVar12 = 0;
  pcVar2 = "-all";
  do {
    if (*pcVar2 == '\0') break;
    uVar13 = (int)sVar12 + 1;
    sVar12 = (size_t)uVar13;
    pcVar2 = pcVar2 + 1;
  } while (uVar13 != 0xffffffff);
  iVar10 = (int)sVar12;
  if (iVar10 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = malloc((ulonglong)(iVar10 + 1));
    memcpy(pvVar4,&DAT_140010124,sVar12);
    *(undefined1 *)(sVar12 + (longlong)pvVar4) = 0;
  }
  puVar5 = malloc(0x30);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    if (iVar10 == 0) {
      *puVar5 = 0;
      puVar5[1] = 0;
    }
    else {
      *(int *)(puVar5 + 1) = iVar10;
      *(int *)((longlong)puVar5 + 0xc) = iVar10;
      pvVar6 = malloc((ulonglong)(iVar10 + 1U));
      *puVar5 = pvVar6;
      memcpy(pvVar6,pvVar4,(ulonglong)(iVar10 + 1U));
    }
    if (iVar11 == 0) {
      puVar5[2] = 0;
      puVar5[3] = 0;
    }
    else {
      *(int *)(puVar5 + 3) = iVar11;
      *(int *)((longlong)puVar5 + 0x1c) = iVar11;
      pvVar6 = malloc((ulonglong)(iVar11 + 1U));
      puVar5[2] = pvVar6;
      memcpy(pvVar6,pvVar3,(ulonglong)(iVar11 + 1U));
    }
    if (iVar14 == 0) {
      puVar5[4] = 0;
      puVar5[5] = 0;
    }
    else {
      *(int *)(puVar5 + 5) = iVar14;
      *(int *)((longlong)puVar5 + 0x2c) = iVar14;
      pvVar6 = malloc((ulonglong)(iVar14 + 1U));
      puVar5[4] = pvVar6;
      memcpy(pvVar6,pvVar1,(ulonglong)(iVar14 + 1U));
    }
  }
  pvVar6 = (void *)0x0;
  **(undefined8 **)(param_1 + 8) = puVar5;
  free(pvVar4);
  free(pvVar3);
  free(pvVar1);
  pcVar2 = "Compile level quests";
  pvVar1 = pvVar6;
  do {
    if (*pcVar2 == '\0') break;
    uVar13 = (int)pvVar1 + 1;
    pvVar1 = (void *)(ulonglong)uVar13;
    pcVar2 = pcVar2 + 1;
  } while (uVar13 != 0xffffffff);
  iVar14 = (int)pvVar1;
  if (iVar14 != 0) {
    pvVar6 = malloc((ulonglong)(iVar14 + 1));
    memcpy(pvVar6,"Compile level quests",(size_t)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + (longlong)pvVar6) = 0;
  }
  pvVar4 = (void *)0x0;
  pcVar2 = "-level=[level_name]";
  pvVar1 = pvVar4;
  do {
    if (*pcVar2 == '\0') break;
    uVar13 = (int)pvVar1 + 1;
    pvVar1 = (void *)(ulonglong)uVar13;
    pcVar2 = pcVar2 + 1;
  } while (uVar13 != 0xffffffff);
  iVar11 = (int)pvVar1;
  if (iVar11 != 0) {
    pvVar4 = malloc((ulonglong)(iVar11 + 1));
    memcpy(pvVar4,"-level=[level_name]",(size_t)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + (longlong)pvVar4) = 0;
  }
  pvVar3 = (void *)0x0;
  pcVar2 = "-level=";
  pvVar1 = pvVar3;
  do {
    if (*pcVar2 == '\0') break;
    uVar13 = (int)pvVar1 + 1;
    pvVar1 = (void *)(ulonglong)uVar13;
    pcVar2 = pcVar2 + 1;
  } while (uVar13 != 0xffffffff);
  iVar10 = (int)pvVar1;
  if (iVar10 != 0) {
    pvVar3 = malloc((ulonglong)(iVar10 + 1));
    memcpy(pvVar3,&DAT_140010160,(size_t)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + (longlong)pvVar3) = 0;
  }
  puVar5 = (undefined8 *)0x0;
  puVar7 = malloc(0x30);
  if (puVar7 != (undefined8 *)0x0) {
    if (iVar10 == 0) {
      *puVar7 = 0;
      puVar7[1] = 0;
    }
    else {
      *(int *)(puVar7 + 1) = iVar10;
      *(int *)((longlong)puVar7 + 0xc) = iVar10;
      pvVar1 = malloc((ulonglong)(iVar10 + 1U));
      *puVar7 = pvVar1;
      memcpy(pvVar1,pvVar3,(ulonglong)(iVar10 + 1U));
    }
    if (iVar11 == 0) {
      puVar7[2] = 0;
      puVar7[3] = 0;
    }
    else {
      *(int *)(puVar7 + 3) = iVar11;
      *(int *)((longlong)puVar7 + 0x1c) = iVar11;
      pvVar1 = malloc((ulonglong)(iVar11 + 1U));
      puVar7[2] = pvVar1;
      memcpy(pvVar1,pvVar4,(ulonglong)(iVar11 + 1U));
    }
    puVar5 = puVar7;
    if (iVar14 == 0) {
      puVar7[4] = 0;
      puVar7[5] = 0;
    }
    else {
      *(int *)(puVar7 + 5) = iVar14;
      *(int *)((longlong)puVar7 + 0x2c) = iVar14;
      pvVar1 = malloc((ulonglong)(iVar14 + 1U));
      puVar7[4] = pvVar1;
      memcpy(pvVar1,pvVar6,(ulonglong)(iVar14 + 1U));
    }
  }
  pvVar8 = (void *)0x0;
  *(undefined8 **)(*(longlong *)(param_1 + 8) + 8) = puVar5;
  free(pvVar3);
  free(pvVar4);
  free(pvVar6);
  pcVar2 = "Compile single quest file";
  pvVar1 = pvVar8;
  do {
    if (*pcVar2 == '\0') break;
    uVar13 = (int)pvVar1 + 1;
    pvVar1 = (void *)(ulonglong)uVar13;
    pcVar2 = pcVar2 + 1;
  } while (uVar13 != 0xffffffff);
  iVar14 = (int)pvVar1;
  if (iVar14 != 0) {
    pvVar8 = malloc((ulonglong)(iVar14 + 1));
    memcpy(pvVar8,"Compile single quest file",(size_t)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + (longlong)pvVar8) = 0;
  }
  pvVar4 = (void *)0x0;
  pcVar2 = "-file=[file_name]";
  pvVar1 = pvVar4;
  do {
    if (*pcVar2 == '\0') break;
    uVar13 = (int)pvVar1 + 1;
    pvVar1 = (void *)(ulonglong)uVar13;
    pcVar2 = pcVar2 + 1;
  } while (uVar13 != 0xffffffff);
  iVar11 = (int)pvVar1;
  if (iVar11 != 0) {
    pvVar4 = malloc((ulonglong)(iVar11 + 1));
    memcpy(pvVar4,"-file=[file_name]",(size_t)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + (longlong)pvVar4) = 0;
  }
  pvVar3 = (void *)0x0;
  pcVar2 = "-file=";
  pvVar1 = pvVar3;
  do {
    if (*pcVar2 == '\0') break;
    uVar13 = (int)pvVar1 + 1;
    pvVar1 = (void *)(ulonglong)uVar13;
    pcVar2 = pcVar2 + 1;
  } while (uVar13 != 0xffffffff);
  iVar10 = (int)pvVar1;
  if (iVar10 != 0) {
    pvVar3 = malloc((ulonglong)(iVar10 + 1));
    memcpy(pvVar3,"-file=",(size_t)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + (longlong)pvVar3) = 0;
  }
  puVar5 = (undefined8 *)0x0;
  puVar7 = malloc(0x30);
  if (puVar7 != (undefined8 *)0x0) {
    if (iVar10 == 0) {
      *puVar7 = 0;
      puVar7[1] = 0;
    }
    else {
      *(int *)(puVar7 + 1) = iVar10;
      *(int *)((longlong)puVar7 + 0xc) = iVar10;
      pvVar1 = malloc((ulonglong)(iVar10 + 1U));
      *puVar7 = pvVar1;
      memcpy(pvVar1,pvVar3,(ulonglong)(iVar10 + 1U));
    }
    if (iVar11 == 0) {
      puVar7[2] = 0;
      puVar7[3] = 0;
    }
    else {
      *(int *)(puVar7 + 3) = iVar11;
      *(int *)((longlong)puVar7 + 0x1c) = iVar11;
      pvVar1 = malloc((ulonglong)(iVar11 + 1U));
      puVar7[2] = pvVar1;
      memcpy(pvVar1,pvVar4,(ulonglong)(iVar11 + 1U));
    }
    puVar5 = puVar7;
    if (iVar14 == 0) {
      puVar7[4] = 0;
      puVar7[5] = 0;
    }
    else {
      *(int *)(puVar7 + 5) = iVar14;
      *(int *)((longlong)puVar7 + 0x2c) = iVar14;
      pvVar1 = malloc((ulonglong)(iVar14 + 1U));
      puVar7[4] = pvVar1;
      memcpy(pvVar1,pvVar8,(ulonglong)(iVar14 + 1U));
    }
  }
  pvVar6 = (void *)0x0;
  *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x10) = puVar5;
  free(pvVar3);
  free(pvVar4);
  free(pvVar8);
  pcVar2 = "Compile quests from specified path";
  pvVar1 = pvVar6;
  do {
    if (*pcVar2 == '\0') break;
    uVar13 = (int)pvVar1 + 1;
    pvVar1 = (void *)(ulonglong)uVar13;
    pcVar2 = pcVar2 + 1;
  } while (uVar13 != 0xffffffff);
  iVar14 = (int)pvVar1;
  if (iVar14 != 0) {
    pvVar6 = malloc((ulonglong)(iVar14 + 1));
    memcpy(pvVar6,"Compile quests from specified path",(size_t)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + (longlong)pvVar6) = 0;
  }
  pvVar4 = (void *)0x0;
  pcVar2 = "-path=[full_path]";
  pvVar1 = pvVar4;
  do {
    if (*pcVar2 == '\0') break;
    uVar13 = (int)pvVar1 + 1;
    pvVar1 = (void *)(ulonglong)uVar13;
    pcVar2 = pcVar2 + 1;
  } while (uVar13 != 0xffffffff);
  iVar11 = (int)pvVar1;
  if (iVar11 != 0) {
    pvVar4 = malloc((ulonglong)(iVar11 + 1));
    memcpy(pvVar4,"-path=[full_path]",(size_t)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + (longlong)pvVar4) = 0;
  }
  pvVar3 = (void *)0x0;
  pcVar2 = "-path=";
  pvVar1 = pvVar3;
  do {
    if (*pcVar2 == '\0') break;
    uVar13 = (int)pvVar1 + 1;
    pvVar1 = (void *)(ulonglong)uVar13;
    pcVar2 = pcVar2 + 1;
  } while (uVar13 != 0xffffffff);
  iVar10 = (int)pvVar1;
  if (iVar10 != 0) {
    pvVar3 = malloc((ulonglong)(iVar10 + 1));
    memcpy(pvVar3,&DAT_1400101e4,(size_t)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + (longlong)pvVar3) = 0;
  }
  puVar5 = (undefined8 *)0x0;
  puVar7 = malloc(0x30);
  if (puVar7 != (undefined8 *)0x0) {
    if (iVar10 == 0) {
      *puVar7 = 0;
      puVar7[1] = 0;
    }
    else {
      *(int *)(puVar7 + 1) = iVar10;
      *(int *)((longlong)puVar7 + 0xc) = iVar10;
      pvVar1 = malloc((ulonglong)(iVar10 + 1U));
      *puVar7 = pvVar1;
      memcpy(pvVar1,pvVar3,(ulonglong)(iVar10 + 1U));
    }
    if (iVar11 == 0) {
      puVar7[2] = 0;
      puVar7[3] = 0;
    }
    else {
      *(int *)(puVar7 + 3) = iVar11;
      *(int *)((longlong)puVar7 + 0x1c) = iVar11;
      pvVar1 = malloc((ulonglong)(iVar11 + 1U));
      puVar7[2] = pvVar1;
      memcpy(pvVar1,pvVar4,(ulonglong)(iVar11 + 1U));
    }
    puVar5 = puVar7;
    if (iVar14 == 0) {
      puVar7[4] = 0;
      puVar7[5] = 0;
    }
    else {
      *(int *)(puVar7 + 5) = iVar14;
      *(int *)((longlong)puVar7 + 0x2c) = iVar14;
      pvVar1 = malloc((ulonglong)(iVar14 + 1U));
      puVar7[4] = pvVar1;
      memcpy(pvVar1,pvVar6,(ulonglong)(iVar14 + 1U));
    }
  }
  pvVar8 = (void *)0x0;
  *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x18) = puVar5;
  free(pvVar3);
  free(pvVar4);
  free(pvVar6);
  pcVar2 = "Set game directory name (eg.DW)";
  pvVar1 = pvVar8;
  do {
    if (*pcVar2 == '\0') break;
    uVar13 = (int)pvVar1 + 1;
    pvVar1 = (void *)(ulonglong)uVar13;
    pcVar2 = pcVar2 + 1;
  } while (uVar13 != 0xffffffff);
  iVar14 = (int)pvVar1;
  if (iVar14 != 0) {
    pvVar8 = malloc((ulonglong)(iVar14 + 1));
    memcpy(pvVar8,"Set game directory name (eg.DW)",(size_t)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + (longlong)pvVar8) = 0;
  }
  pvVar4 = (void *)0x0;
  pcVar2 = "-dn=[game_name]";
  pvVar1 = pvVar4;
  do {
    if (*pcVar2 == '\0') break;
    uVar13 = (int)pvVar1 + 1;
    pvVar1 = (void *)(ulonglong)uVar13;
    pcVar2 = pcVar2 + 1;
  } while (uVar13 != 0xffffffff);
  iVar11 = (int)pvVar1;
  if (iVar11 != 0) {
    pvVar4 = malloc((ulonglong)(iVar11 + 1));
    memcpy(pvVar4,"-dn=[game_name]",(size_t)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + (longlong)pvVar4) = 0;
  }
  pvVar3 = (void *)0x0;
  pcVar2 = "-dn=";
  pvVar1 = pvVar3;
  do {
    if (*pcVar2 == '\0') break;
    uVar13 = (int)pvVar1 + 1;
    pvVar1 = (void *)(ulonglong)uVar13;
    pcVar2 = pcVar2 + 1;
  } while (uVar13 != 0xffffffff);
  iVar10 = (int)pvVar1;
  if (iVar10 != 0) {
    pvVar3 = malloc((ulonglong)(iVar10 + 1));
    memcpy(pvVar3,&DAT_140010220,(size_t)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + (longlong)pvVar3) = 0;
  }
  puVar5 = (undefined8 *)0x0;
  puVar7 = malloc(0x30);
  if (puVar7 != (undefined8 *)0x0) {
    if (iVar10 == 0) {
      *puVar7 = 0;
      puVar7[1] = 0;
    }
    else {
      *(int *)(puVar7 + 1) = iVar10;
      *(int *)((longlong)puVar7 + 0xc) = iVar10;
      pvVar1 = malloc((ulonglong)(iVar10 + 1U));
      *puVar7 = pvVar1;
      memcpy(pvVar1,pvVar3,(ulonglong)(iVar10 + 1U));
    }
    if (iVar11 == 0) {
      puVar7[2] = 0;
      puVar7[3] = 0;
    }
    else {
      *(int *)(puVar7 + 3) = iVar11;
      *(int *)((longlong)puVar7 + 0x1c) = iVar11;
      pvVar1 = malloc((ulonglong)(iVar11 + 1U));
      puVar7[2] = pvVar1;
      memcpy(pvVar1,pvVar4,(ulonglong)(iVar11 + 1U));
    }
    puVar5 = puVar7;
    if (iVar14 == 0) {
      puVar7[4] = 0;
      puVar7[5] = 0;
    }
    else {
      *(int *)(puVar7 + 5) = iVar14;
      *(int *)((longlong)puVar7 + 0x2c) = iVar14;
      pvVar1 = malloc((ulonglong)(iVar14 + 1U));
      puVar7[4] = pvVar1;
      memcpy(pvVar1,pvVar8,(ulonglong)(iVar14 + 1U));
    }
  }
  pvVar6 = (void *)0x0;
  *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x20) = puVar5;
  free(pvVar3);
  free(pvVar4);
  free(pvVar8);
  pcVar2 = "Keep attributes in single line";
  pvVar1 = pvVar6;
  do {
    if (*pcVar2 == '\0') break;
    uVar13 = (int)pvVar1 + 1;
    pvVar1 = (void *)(ulonglong)uVar13;
    pcVar2 = pcVar2 + 1;
  } while (uVar13 != 0xffffffff);
  iVar14 = (int)pvVar1;
  if (iVar14 != 0) {
    pvVar6 = malloc((ulonglong)(iVar14 + 1));
    memcpy(pvVar6,"Keep attributes in single line",(size_t)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + (longlong)pvVar6) = 0;
  }
  pvVar4 = (void *)0x0;
  pcVar2 = "-sl";
  pvVar1 = pvVar4;
  do {
    if (*pcVar2 == '\0') break;
    uVar13 = (int)pvVar1 + 1;
    pvVar1 = (void *)(ulonglong)uVar13;
    pcVar2 = pcVar2 + 1;
  } while (uVar13 != 0xffffffff);
  iVar11 = (int)pvVar1;
  if (iVar11 != 0) {
    pvVar4 = malloc((ulonglong)(iVar11 + 1));
    memcpy(pvVar4,&DAT_140010248,(size_t)pvVar1);
    *(undefined1 *)((longlong)pvVar4 + (longlong)pvVar1) = 0;
  }
  pvVar3 = (void *)0x0;
  pcVar2 = "-sl";
  pvVar1 = pvVar3;
  do {
    if (*pcVar2 == '\0') break;
    uVar13 = (int)pvVar1 + 1;
    pvVar1 = (void *)(ulonglong)uVar13;
    pcVar2 = pcVar2 + 1;
  } while (uVar13 != 0xffffffff);
  iVar10 = (int)pvVar1;
  if (iVar10 != 0) {
    pvVar3 = malloc((ulonglong)(iVar10 + 1));
    memcpy(pvVar3,&DAT_140010248,(size_t)pvVar1);
    *(undefined1 *)((longlong)pvVar3 + (longlong)pvVar1) = 0;
  }
  puVar5 = (undefined8 *)0x0;
  puVar7 = malloc(0x30);
  if (puVar7 != (undefined8 *)0x0) {
    if (iVar10 == 0) {
      *puVar7 = 0;
      puVar7[1] = 0;
    }
    else {
      *(int *)(puVar7 + 1) = iVar10;
      *(int *)((longlong)puVar7 + 0xc) = iVar10;
      pvVar1 = malloc((ulonglong)(iVar10 + 1U));
      *puVar7 = pvVar1;
      memcpy(pvVar1,pvVar3,(ulonglong)(iVar10 + 1U));
    }
    if (iVar11 == 0) {
      puVar7[2] = 0;
      puVar7[3] = 0;
    }
    else {
      *(int *)(puVar7 + 3) = iVar11;
      *(int *)((longlong)puVar7 + 0x1c) = iVar11;
      pvVar1 = malloc((ulonglong)(iVar11 + 1U));
      puVar7[2] = pvVar1;
      memcpy(pvVar1,pvVar4,(ulonglong)(iVar11 + 1U));
    }
    puVar5 = puVar7;
    if (iVar14 == 0) {
      puVar7[4] = 0;
      puVar7[5] = 0;
    }
    else {
      *(int *)(puVar7 + 5) = iVar14;
      *(int *)((longlong)puVar7 + 0x2c) = iVar14;
      pvVar1 = malloc((ulonglong)(iVar14 + 1U));
      puVar7[4] = pvVar1;
      memcpy(pvVar1,pvVar6,(ulonglong)(iVar14 + 1U));
    }
  }
  *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x28) = puVar5;
  free(pvVar3);
  free(pvVar4);
                    // WARNING: Could not recover jumptable at 0x0001400042cd. Too many branches
                    // WARNING: Treating indirect jump as call
  free(pvVar6);
  return;
}



// WARNING: Removing unreachable block (ram,0x00014000439c)
// WARNING: Removing unreachable block (ram,0x000140004370)
// WARNING: Removing unreachable block (ram,0x000140004384)

void FUN_1400042e0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 *_Dst;
  longlong *plVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint local_res8 [2];
  longlong *local_res10;
  longlong local_48 [2];
  
  uVar6 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar7 = 0;
    local_res10 = param_2;
    do {
      plVar3 = *(longlong **)(lVar7 + *(longlong *)(param_1 + 8));
      if ((plVar3 != (longlong *)0x0) && (uVar1 = *(uint *)(plVar3 + 1), uVar1 != 0)) {
        pcVar4 = "";
        if ((char *)*plVar3 != (char *)0x0) {
          pcVar4 = (char *)*plVar3;
        }
        uVar2 = FUN_140001a20(param_2,pcVar4,0);
        if ((int)uVar2 == 0) {
          uVar5 = *(uint *)(param_2 + 1);
          _Dst = (undefined1 *)0x0;
          local_res8[0] = uVar6;
          uVar8 = 0;
          if (uVar1 < uVar5) {
            if (uVar5 < uVar1 + uVar5) {
              uVar5 = uVar5 - uVar1;
            }
            if (uVar5 != 0) {
              _Dst = malloc((ulonglong)(uVar5 + 1));
              *_Dst = 0;
              free((void *)0x0);
              memcpy(_Dst,(void *)((ulonglong)uVar1 + *local_res10),(ulonglong)uVar5);
              _Dst[uVar5] = 0;
              uVar8 = uVar5;
            }
          }
          free((void *)0x0);
          plVar3 = FUN_1400044e0((longlong *)(param_1 + 0x20),(int *)local_res8);
          if (plVar3 != local_48) {
            free((void *)*plVar3);
            *plVar3 = (longlong)_Dst;
            _Dst = (undefined1 *)0x0;
            *(uint *)(plVar3 + 1) = uVar8;
            *(uint *)((longlong)plVar3 + 0xc) = uVar8;
          }
          free(_Dst);
          param_2 = local_res10;
        }
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (uVar6 < *(uint *)(param_1 + 0x10));
  }
  return;
}



void FUN_140004450(longlong param_1)

{
  uint uVar1;
  
  printf("\n");
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    do {
      printf("    %-20s %s\n");
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x10));
  }
  return;
}



longlong * FUN_1400044e0(longlong *param_1,int *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar6 = (longlong *)0x0;
  bVar7 = false;
  if ((longlong *)*param_1 != (longlong *)0x0) {
    plVar2 = (longlong *)*param_1;
    do {
      plVar6 = plVar2;
      bVar7 = *param_2 < (int)plVar6[-3];
      if (bVar7) {
        plVar2 = (longlong *)*plVar6;
      }
      else {
        plVar2 = (longlong *)plVar6[2];
      }
    } while (plVar2 != (longlong *)0x0);
  }
  plVar2 = plVar6;
  if (bVar7 != false) {
    plVar2 = (longlong *)*plVar6;
    if (plVar2 == (longlong *)0x0) {
      plVar3 = plVar6;
      plVar5 = (longlong *)plVar6[1];
      if ((longlong *)plVar6[1] == (longlong *)0x0) goto LAB_14000458a;
      do {
        plVar2 = plVar5;
        if (plVar3 != (longlong *)*plVar5) break;
        plVar2 = (longlong *)plVar5[1];
        plVar3 = plVar5;
        plVar5 = plVar2;
      } while (plVar2 != (longlong *)0x0);
    }
    else {
      for (plVar3 = (longlong *)plVar2[2]; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[2]
          ) {
        plVar2 = plVar3;
      }
    }
  }
  if ((plVar2 != (longlong *)0x0) && (*param_2 <= (int)plVar2[-3])) {
    return plVar2 + -2;
  }
LAB_14000458a:
  piVar4 = malloc(0x38);
  if (piVar4 != (int *)0x0) {
    *piVar4 = *param_2;
  }
  piVar1 = piVar4 + 2;
  if (piVar1 != (int *)0x0) {
    piVar1[0] = 0;
    piVar1[1] = 0;
    piVar4[4] = 0;
    piVar4[5] = 0;
  }
  FUN_140001d80(param_1,(longlong *)(piVar4 + 6),bVar7,plVar6);
  return (longlong *)(piVar4 + 2);
}



void FUN_140004600(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  if ((longlong *)*param_1 == (longlong *)0x0) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    do {
      FUN_140004680(param_1,(undefined8 *)plVar2[2]);
      plVar1 = (longlong *)*plVar2;
      free((void *)plVar2[-2]);
      plVar2[-2] = 0;
      free(plVar2 + -3);
      plVar2 = plVar1;
    } while (plVar1 != (longlong *)0x0);
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



void FUN_140004680(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  while (param_2 != (undefined8 *)0x0) {
    FUN_140004680(param_1,(undefined8 *)param_2[2]);
    puVar1 = (undefined8 *)*param_2;
    free((void *)param_2[-2]);
    param_2[-2] = 0;
    free(param_2 + -3);
    param_2 = puVar1;
  }
  return;
}



void FUN_1400046f0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 == puVar2 + *(uint *)(param_1 + 1)) {
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  do {
    puVar1 = (undefined8 *)*puVar2;
    if (puVar1 != (undefined8 *)0x0) {
      free((void *)puVar1[4]);
      puVar1[4] = 0;
      free((void *)puVar1[2]);
      puVar1[2] = 0;
      free((void *)*puVar1);
      *puVar1 = 0;
      operator_delete(puVar1);
    }
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while (puVar2 != (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 8));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



undefined8 * FUN_1400047a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = malloc(0x88);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    *(undefined4 *)(puVar1 + 4) = 0x39;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0x39;
    *(undefined2 *)(puVar1 + 8) = 0x100;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0x39;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0x39;
    puVar1[0xc] = 0x101010101010101;
    *(undefined1 *)(puVar1 + 0xd) = 1;
    *param_1 = puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



void FUN_140004860(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar4 = 0;
  uVar6 = uVar4;
  uVar8 = uVar4;
  if (*(int *)(param_1 + 0x50) != 0) {
    do {
      lVar1 = *(longlong *)(uVar8 + *(longlong *)(param_1 + 0x48));
      puVar3 = *(undefined8 **)(lVar1 + 0x68);
      while (puVar3 != (undefined8 *)0x0) {
        FUN_14000b760(lVar1 + 0x68,(undefined8 *)puVar3[2]);
        puVar2 = (undefined8 *)*puVar3;
        free((void *)puVar3[-3]);
        puVar3[-3] = 0;
        free(puVar3 + -3);
        puVar3 = puVar2;
      }
      *(undefined8 *)(lVar1 + 0x68) = 0;
      *(undefined4 *)(lVar1 + 0x70) = 0;
      *(undefined4 *)(lVar1 + 0x48) = 0;
      free(*(void **)(lVar1 + 0x40));
      FUN_14000ad70((longlong *)(lVar1 + 0x20));
      free(*(void **)(lVar1 + 0x20));
      iVar5 = *(int *)(lVar1 + 0x10);
      if (iVar5 != 0) {
        puVar3 = (undefined8 *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(iVar5 - 1) * 0x18);
        do {
          free((void *)*puVar3);
          *puVar3 = 0;
          puVar3 = puVar3 + -3;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      *(undefined4 *)(lVar1 + 0x10) = 0;
      free(*(void **)(lVar1 + 8));
      uVar7 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar7;
      uVar8 = uVar8 + 8;
    } while (uVar7 < *(uint *)(param_1 + 0x50));
  }
  uVar6 = uVar4;
  if (*(int *)(param_1 + 0x78) != 0) {
    do {
      puVar3 = *(undefined8 **)(uVar6 + *(longlong *)(param_1 + 0x70));
      (**(code **)*puVar3)(puVar3,0);
      uVar7 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar7;
      uVar6 = uVar6 + 8;
    } while (uVar7 < *(uint *)(param_1 + 0x78));
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  free(*(void **)(param_1 + 0x70));
  *(undefined4 *)(param_1 + 0x50) = 0;
  free(*(void **)(param_1 + 0x48));
  FUN_140005760((longlong *)(param_1 + 0x28));
  free(*(void **)(param_1 + 0x28));
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  while (puVar3 != (undefined8 *)0x0) {
    FUN_140005950(param_1 + 0x10,(undefined8 *)puVar3[2]);
    puVar2 = (undefined8 *)*puVar3;
    free(puVar3 + -5);
    puVar3 = puVar2;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



void * FUN_140004a40(longlong *param_1,size_t param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  ulonglong *puVar6;
  uint uVar7;
  ulonglong local_res18 [2];
  
  plVar2 = (longlong *)*param_1;
  local_res18[0] = param_3;
  pvVar4 = malloc(param_2);
  uVar3 = (int)plVar2[1] + 1;
  if (*(uint *)((longlong)plVar2 + 0xc) < uVar3) {
    uVar7 = (*(uint *)((longlong)plVar2 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
    if (uVar7 < uVar3) {
      uVar7 = uVar3;
    }
    *(uint *)((longlong)plVar2 + 0xc) = uVar7;
    pvVar5 = realloc((void *)*plVar2,(ulonglong)(uVar7 << 3));
    *plVar2 = (longlong)pvVar5;
  }
  puVar1 = (undefined8 *)(*plVar2 + (ulonglong)*(uint *)(plVar2 + 1) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = pvVar4;
  }
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  if (param_3 != 0) {
    puVar6 = FUN_140005830(param_1 + 2,local_res18);
    puVar6[1] = puVar6[1] + 1;
    puVar6[3] = puVar6[3] + param_2;
    if (*puVar6 == 0) {
      *puVar6 = param_3;
      puVar6[2] = param_2;
    }
  }
  return pvVar4;
}



// WARNING: Removing unreachable block (ram,0x000140004beb)
// WARNING: Removing unreachable block (ram,0x000140004c02)

void FUN_140004b00(longlong param_1,undefined4 param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined1 *_Dst;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *local_38;
  undefined8 local_30;
  undefined1 *puVar6;
  
  lVar1 = *param_3;
  if (lVar1 != 0) {
    uVar4 = *(uint *)(param_3 + 1);
    if (uVar4 != 0) {
      _Dst = (undefined1 *)0x0;
      puVar6 = _Dst;
      do {
        pcVar3 = "EWarning::";
        cVar2 = puVar6[lVar1];
        if (cVar2 != '\0') {
          do {
            if (*pcVar3 == '\0') goto LAB_140004bbf;
            if ((cVar2 != *pcVar3) ||
               ((longlong)(int)uVar4 <= (longlong)(pcVar3 + (longlong)(puVar6 + -0x140010270))))
            break;
            cVar2 = (puVar6 + lVar1 + -0x14001026f)[(longlong)pcVar3];
            pcVar3 = pcVar3 + 1;
          } while (cVar2 != '\0');
          if (*pcVar3 == '\0') {
LAB_140004bbf:
            if ((int)puVar6 != -1) {
              if (uVar4 < 0xb) {
                local_30 = 0;
              }
              else {
                if (uVar4 < uVar4 + 10) {
                  uVar4 = uVar4 - 10;
                }
                uVar5 = 0;
                if (uVar4 != 0) {
                  _Dst = malloc((ulonglong)(uVar4 + 1));
                  *_Dst = 0;
                  free((void *)0x0);
                  memcpy(_Dst,(void *)(*param_3 + 10),(ulonglong)uVar4);
                  _Dst[uVar4] = 0;
                  uVar5 = uVar4;
                }
                local_30 = CONCAT44(uVar5,uVar5);
              }
              local_38 = _Dst;
              free((void *)0x0);
              (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
                        (*(longlong **)(param_1 + 8),param_2,&local_38,param_4);
              free(local_38);
              return;
            }
            break;
          }
        }
        uVar5 = (int)puVar6 + 1;
        puVar6 = (undefined1 *)(ulonglong)uVar5;
      } while (uVar5 < uVar4);
    }
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
            (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
  return;
}



// WARNING: Removing unreachable block (ram,0x000140004da0)
// WARNING: Removing unreachable block (ram,0x000140004ce0)
// WARNING: Removing unreachable block (ram,0x000140004d33)
// WARNING: Removing unreachable block (ram,0x000140004df3)

void FUN_140004c80(longlong param_1,int param_2,undefined4 param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  void *local_58;
  uint local_50;
  uint local_4c;
  void *local_48;
  uint local_40;
  uint local_3c;
  
  _vsnprintf(&DAT_140013cf0,0x400,param_5,&stack0x00000030);
  uVar3 = 0;
  pcVar1 = &DAT_140013cf0;
  uVar2 = uVar3;
  if (param_2 == 0) {
    do {
      if (*pcVar1 == '\0') break;
      uVar2 = uVar2 + 1;
      pcVar1 = pcVar1 + 1;
    } while (uVar2 != 0xffffffff);
    pcVar1 = param_4;
    local_40 = uVar2;
    local_3c = uVar2;
    if (uVar2 == 0) {
      local_48 = (void *)0x0;
    }
    else {
      local_48 = malloc((ulonglong)(uVar2 + 1));
      memcpy(local_48,&DAT_140013cf0,(ulonglong)uVar2);
      *(undefined1 *)((ulonglong)local_40 + (longlong)local_48) = 0;
    }
    do {
      if (*pcVar1 == '\0') break;
      uVar3 = uVar3 + 1;
      pcVar1 = pcVar1 + 1;
    } while (uVar3 != 0xffffffff);
    local_50 = uVar3;
    local_4c = uVar3;
    if (uVar3 == 0) {
      local_58 = (void *)0x0;
    }
    else {
      local_58 = malloc((ulonglong)(uVar3 + 1));
      memcpy(local_58,param_4,(ulonglong)uVar3);
      *(undefined1 *)((ulonglong)local_50 + (longlong)local_58) = 0;
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 8))
              (*(longlong **)(param_1 + 8),param_3,&local_58,&local_48);
  }
  else {
    do {
      if (*pcVar1 == '\0') break;
      uVar2 = uVar2 + 1;
      pcVar1 = pcVar1 + 1;
    } while (uVar2 != 0xffffffff);
    pcVar1 = param_4;
    local_40 = uVar2;
    local_3c = uVar2;
    if (uVar2 == 0) {
      local_48 = (void *)0x0;
    }
    else {
      local_48 = malloc((ulonglong)(uVar2 + 1));
      memcpy(local_48,&DAT_140013cf0,(ulonglong)uVar2);
      *(undefined1 *)((ulonglong)local_40 + (longlong)local_48) = 0;
    }
    do {
      if (*pcVar1 == '\0') break;
      uVar3 = uVar3 + 1;
      pcVar1 = pcVar1 + 1;
    } while (uVar3 != 0xffffffff);
    local_50 = uVar3;
    local_4c = uVar3;
    if (uVar3 == 0) {
      local_58 = (void *)0x0;
    }
    else {
      local_58 = malloc((ulonglong)(uVar3 + 1));
      memcpy(local_58,param_4,(ulonglong)uVar3);
      *(undefined1 *)((ulonglong)local_50 + (longlong)local_58) = 0;
    }
    FUN_140004b00(param_1,param_3,(longlong *)&local_58,&local_48);
  }
  free(local_58);
  local_58 = (void *)0x0;
  free(local_48);
  return;
}



undefined8 * FUN_140004e70(longlong param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (*(uint *)(param_1 + 0x30) != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x28);
    do {
      pbVar4 = (byte *)*puVar6;
      if ((pbVar4 == (byte *)0x0) || (*param_2 == 0)) {
        iVar3 = *(int *)(puVar6 + 1) - (int)param_2[1];
      }
      else {
        lVar5 = *param_2 - (longlong)pbVar4;
        do {
          bVar1 = *pbVar4;
          if (bVar1 != pbVar4[lVar5]) {
            uVar2 = (uint)(bVar1 < pbVar4[lVar5]);
            iVar3 = (1 - uVar2) - (uint)(uVar2 != 0);
            goto LAB_140004ec5;
          }
          pbVar4 = pbVar4 + 1;
        } while (bVar1 != 0);
        iVar3 = 0;
      }
LAB_140004ec5:
      if (iVar3 == 0) {
        return *(undefined8 **)(param_1 + 0x28) + (ulonglong)uVar7 * 7;
      }
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 7;
    } while (uVar7 < *(uint *)(param_1 + 0x30));
  }
  return (undefined8 *)0x0;
}



longlong FUN_140004ef0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (*(uint *)(param_1 + 0x30) != 0) {
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10);
    do {
      pbVar4 = (byte *)*puVar6;
      if ((pbVar4 == (byte *)0x0) || (*param_2 == 0)) {
        iVar3 = *(int *)(puVar6 + 1) - (int)param_2[1];
      }
      else {
        lVar5 = *param_2 - (longlong)pbVar4;
        do {
          bVar1 = *pbVar4;
          if (bVar1 != pbVar4[lVar5]) {
            uVar2 = (uint)(bVar1 < pbVar4[lVar5]);
            iVar3 = (1 - uVar2) - (uint)(uVar2 != 0);
            goto LAB_140004f45;
          }
          pbVar4 = pbVar4 + 1;
        } while (bVar1 != 0);
        iVar3 = 0;
      }
LAB_140004f45:
      if (iVar3 == 0) {
        return (ulonglong)uVar7 * 0x38 + *(longlong *)(param_1 + 0x28);
      }
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 7;
    } while (uVar7 < *(uint *)(param_1 + 0x30));
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x000140005206)

void FUN_140004f70(longlong param_1,longlong *param_2)

{
  char cVar1;
  void *_Src;
  uint uVar2;
  FILE *_File;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  longlong *plVar7;
  void *pvVar8;
  void *pvVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  void *pvVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 *local_res10;
  void *local_res18;
  longlong *local_res20;
  void *local_288;
  undefined8 local_280;
  void *local_278;
  undefined8 local_270;
  void *local_268;
  undefined8 local_260;
  undefined4 local_258;
  FILE *local_250;
  longlong local_248 [2];
  char local_238 [512];
  
  pcVar3 = "";
  if ((char *)*param_2 != (char *)0x0) {
    pcVar3 = (char *)*param_2;
  }
  _File = fopen(pcVar3,"rt");
  local_250 = _File;
  if (_File == (FILE *)0x0) {
    FUN_140004c80(param_1,0,0,"FILE","Could not open file \'%s\' for reading");
    return;
  }
  local_res20 = (longlong *)(param_1 + 0x28);
  FUN_140005760(local_res20);
  local_238[0] = '\0';
  memset(local_238 + 1,0,0x1ff);
  pcVar3 = fgets(local_238,0x1ff,_File);
  do {
    if (pcVar3 == (char *)0x0) {
      fclose(_File);
      return;
    }
    uVar17 = 0;
    pcVar3 = local_238;
    while (cVar1 = *pcVar3, cVar1 != '\0') {
      if (((((cVar1 != ' ') && (cVar1 != '\t')) && (cVar1 != '\r')) && (cVar1 != '\n')) ||
         (pcVar3 = pcVar3 + 1, pcVar3 == (char *)0x0)) break;
    }
    if ((pcVar3 != (char *)0x0) && (pcVar5 = pcVar3, *pcVar3 != '\0')) {
      do {
        pcVar4 = pcVar5;
        pcVar5 = pcVar4 + 1;
      } while (pcVar4[1] != '\0');
      for (; (pcVar3 < pcVar4 &&
             (((cVar1 = *pcVar4, cVar1 == ' ' || (cVar1 == '\t')) ||
              ((cVar1 == '\r' || (cVar1 == '\n')))))); pcVar4 = pcVar4 + -1) {
        *pcVar4 = '\0';
      }
      local_288 = (void *)0x0;
      local_280 = 0;
      local_278 = (void *)0x0;
      local_270 = 0;
      local_268 = (void *)0x0;
      local_260 = 0;
      local_258 = 0x39;
      pcVar5 = strchr(pcVar3,0x3d);
      if (pcVar5 == (char *)0x0) {
        printf("ERROR: invalid shortcut definition with line \'%s\'\n");
        free((void *)0x0);
        free((void *)0x0);
        free((void *)0x0);
      }
      else {
        *pcVar5 = '\0';
        pcVar4 = pcVar3;
        if (*pcVar3 != '\0') {
          do {
            pcVar6 = pcVar4;
            pcVar4 = pcVar6 + 1;
          } while (pcVar6[1] != '\0');
          for (; (pcVar3 < pcVar6 &&
                 ((((cVar1 = *pcVar6, cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == '\r')) ||
                  (cVar1 == '\n')))); pcVar6 = pcVar6 + -1) {
            *pcVar6 = '\0';
          }
        }
        FUN_140001740(&local_288,pcVar3);
        pcVar5 = pcVar5 + 1;
        local_res10 = (undefined8 *)0x0;
        uVar19 = uVar17;
        while (pvVar8 = (void *)0x0, pcVar5 != (char *)0x0) {
          while ((cVar1 = *pcVar5, cVar1 != '\0' &&
                 (((cVar1 == ' ' || (cVar1 == '\t')) || ((cVar1 == '\r' || (cVar1 == '\n'))))))) {
            pcVar5 = pcVar5 + 1;
            if (pcVar5 == (char *)0x0) goto LAB_1400052af;
          }
          if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) break;
          pcVar4 = strchr(pcVar5,0x20);
          pcVar3 = pcVar5;
          pvVar13 = pvVar8;
          if (pcVar4 != (char *)0x0) {
            *pcVar4 = '\0';
          }
          do {
            if (*pcVar3 == '\0') break;
            uVar18 = (int)pvVar13 + 1;
            pvVar13 = (void *)(ulonglong)uVar18;
            pcVar3 = pcVar3 + 1;
          } while (uVar18 != 0xffffffff);
          iVar14 = (int)pvVar13;
          if (iVar14 != 0) {
            pvVar8 = malloc((ulonglong)(iVar14 + 1));
            memcpy(pvVar8,pcVar5,(size_t)pvVar13);
            *(undefined1 *)((longlong)pvVar13 + (longlong)pvVar8) = 0;
          }
          uVar18 = (int)uVar19 + 1;
          if ((uint)uVar17 < uVar18) {
            uVar10 = ((uint)uVar17 * 10 >> 3) + 0x10 & 0xfffffff0;
            if (uVar10 < uVar18) {
              uVar10 = uVar18;
            }
            uVar17 = (ulonglong)uVar10;
            local_res10 = realloc(local_res10,(ulonglong)(uVar10 << 4));
          }
          puVar11 = local_res10 + uVar19 * 2;
          if (puVar11 != (undefined8 *)0x0) {
            *puVar11 = pvVar8;
            *(int *)(puVar11 + 1) = iVar14;
            *(int *)((longlong)puVar11 + 0xc) = iVar14;
            pvVar8 = (void *)0x0;
          }
          uVar19 = (ulonglong)uVar18;
          free(pvVar8);
          if (((pcVar4 == (char *)0x0) || (pcVar5 = pcVar4 + 1, pcVar5 == (char *)0x0)) ||
             (*pcVar5 == '\0')) break;
        }
LAB_1400052af:
        pvVar8 = local_288;
        uVar18 = (uint)uVar19;
        if (uVar18 == 0) {
          printf("Shortcut \'%s\' has empty definition!\n");
          free(local_res10);
          pvVar13 = local_268;
          puVar11 = (undefined8 *)((ulonglong)((int)local_260 - 1) * 0x10 + (longlong)local_268);
          for (iVar14 = (int)local_260; iVar14 != 0; iVar14 = iVar14 + -1) {
            free((void *)*puVar11);
            *puVar11 = 0;
            puVar11 = puVar11 + -2;
          }
          free(pvVar13);
          free(local_278);
        }
        else {
          FUN_140001690(&local_278,local_res10);
          iVar15 = (int)local_260;
          uVar17 = local_260 & 0xffffffff;
          iVar14 = 0;
          puVar16 = local_res10 + uVar19 * 2;
          puVar12 = local_res10 + 2;
          for (puVar11 = puVar12; puVar11 != puVar16; puVar11 = puVar11 + 2) {
            iVar14 = iVar14 + 1;
          }
          uVar10 = (int)local_260 + iVar14;
          if (local_260._4_4_ < uVar10) {
            local_260 = CONCAT44(uVar10,(int)local_260);
            local_268 = realloc(local_268,(ulonglong)(uVar10 * 0x10));
          }
          local_res18 = (void *)(uVar17 * 0x10 + (longlong)local_268);
          if (puVar12 != puVar16) {
            do {
              plVar7 = FUN_140005bb0((longlong *)&local_268,local_248,(longlong *)&local_res18,
                                     puVar12,1);
              puVar12 = puVar12 + 2;
              *plVar7 = *plVar7 + 0x10;
              local_res18 = (void *)*plVar7;
            } while (puVar12 != puVar16);
            iVar15 = (int)local_260;
          }
          pvVar13 = local_268;
          plVar7 = local_res20;
          uVar10 = (int)local_res20[1] + 1;
          if (*(uint *)((longlong)local_res20 + 0xc) < uVar10) {
            uVar2 = (*(uint *)((longlong)local_res20 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
            if (uVar2 < uVar10) {
              uVar2 = uVar10;
            }
            *(uint *)((longlong)local_res20 + 0xc) = uVar2;
            pvVar8 = realloc((void *)*local_res20,(ulonglong)(uVar2 * 0x38));
            *plVar7 = (longlong)pvVar8;
          }
          _Src = local_278;
          pvVar8 = local_288;
          puVar11 = (undefined8 *)((ulonglong)*(uint *)(plVar7 + 1) * 0x38 + *plVar7);
          if (puVar11 != (undefined8 *)0x0) {
            if ((int)local_280 == 0) {
              *puVar11 = 0;
              puVar11[1] = 0;
            }
            else {
              *(int *)(puVar11 + 1) = (int)local_280;
              *(int *)((longlong)puVar11 + 0xc) = (int)local_280;
              uVar10 = (int)local_280 + 1;
              pvVar9 = malloc((ulonglong)uVar10);
              *puVar11 = pvVar9;
              memcpy(pvVar9,pvVar8,(ulonglong)uVar10);
            }
            if ((int)local_270 == 0) {
              puVar11[2] = 0;
              puVar11[3] = 0;
            }
            else {
              *(int *)(puVar11 + 3) = (int)local_270;
              *(int *)((longlong)puVar11 + 0x1c) = (int)local_270;
              uVar10 = (int)local_270 + 1;
              pvVar9 = malloc((ulonglong)uVar10);
              puVar11[2] = pvVar9;
              memcpy(pvVar9,_Src,(ulonglong)uVar10);
            }
            FUN_1400059b0(puVar11 + 4,(longlong *)&local_268);
            plVar7 = local_res20;
          }
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          puVar11 = local_res10 + (ulonglong)(uVar18 - 1) * 2;
          while (uVar18 != 0) {
            free((void *)*puVar11);
            *puVar11 = 0;
            puVar11 = puVar11 + -2;
            uVar18 = (int)uVar19 - 1;
            uVar19 = (ulonglong)uVar18;
          }
          free(local_res10);
          puVar11 = (undefined8 *)((ulonglong)(iVar15 - 1) * 0x10 + (longlong)pvVar13);
          for (; iVar15 != 0; iVar15 = iVar15 + -1) {
            free((void *)*puVar11);
            *puVar11 = 0;
            puVar11 = puVar11 + -2;
          }
          free(pvVar13);
          free(_Src);
        }
        free(pvVar8);
        _File = local_250;
      }
    }
    pcVar3 = fgets(local_238,0x1ff,_File);
  } while( true );
}



void FUN_1400055b0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong *plVar5;
  uint uVar6;
  
  plVar5 = (longlong *)*param_1;
  plVar3 = malloc(0x80);
  uVar6 = (int)plVar5[1] + 1;
  if (*(uint *)((longlong)plVar5 + 0xc) < uVar6) {
    uVar2 = (*(uint *)((longlong)plVar5 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
    if (uVar2 < uVar6) {
      uVar2 = uVar6;
    }
    *(uint *)((longlong)plVar5 + 0xc) = uVar2;
    pvVar4 = realloc((void *)*plVar5,(ulonglong)(uVar2 << 3));
    *plVar5 = (longlong)pvVar4;
  }
  puVar1 = (undefined8 *)(*plVar5 + (ulonglong)*(uint *)(plVar5 + 1) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = plVar3;
  }
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  plVar5 = (longlong *)0x0;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)param_1;
    plVar3[1] = 0;
    plVar3[2] = 0;
    *(undefined4 *)(plVar3 + 3) = 0x39;
    plVar3[4] = 0;
    plVar3[5] = 0;
    *(undefined4 *)(plVar3 + 6) = 0x39;
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[9] = 0;
    *(undefined4 *)(plVar3 + 10) = 0x39;
    plVar3[0xb] = 0;
    *(undefined4 *)(plVar3 + 0xc) = 0;
    plVar3[0xd] = 0;
    *(undefined4 *)(plVar3 + 0xe) = 0;
    *(undefined4 *)(plVar3 + 0xf) = 0x39;
    plVar5 = plVar3;
  }
  FUN_140007480(plVar5,param_2);
  FUN_14000aba0((longlong)plVar5);
  uVar6 = (int)param_1[10] + 1;
  if (*(uint *)((longlong)param_1 + 0x54) < uVar6) {
    uVar2 = (*(uint *)((longlong)param_1 + 0x54) * 10 >> 3) + 0x10 & 0xfffffff0;
    if (uVar2 < uVar6) {
      uVar2 = uVar6;
    }
    *(uint *)((longlong)param_1 + 0x54) = uVar2;
    pvVar4 = realloc((void *)param_1[9],(ulonglong)(uVar2 << 3));
    param_1[9] = (longlong)pvVar4;
  }
  puVar1 = (undefined8 *)(param_1[9] + (ulonglong)*(uint *)(param_1 + 10) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = plVar5;
  }
  *(int *)(param_1 + 10) = (int)param_1[10] + 1;
  return;
}



longlong FUN_1400056f0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  uVar1 = *(uint *)(param_1 + 0x50);
  uVar3 = 0;
  if ((ulonglong)uVar1 != 0) {
    plVar4 = *(longlong **)(param_1 + 0x48);
    do {
      puVar2 = FUN_14000b470((longlong *)(*plVar4 + 0x68),param_2);
      if ((puVar2 != (undefined8 *)0x0) && (puVar2[-1] != 0)) {
        return puVar2[-1];
      }
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}



void FUN_140005760(longlong *param_1)

{
  void *_Memory;
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1[1];
  puVar2 = (undefined8 *)((ulonglong)(iVar4 - 1) * 0x38 + *param_1);
  if (iVar4 != 0) {
    do {
      iVar3 = *(int *)(puVar2 + 5);
      _Memory = (void *)puVar2[4];
      puVar1 = (undefined8 *)((ulonglong)(iVar3 - 1) * 0x10 + (longlong)_Memory);
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        free((void *)*puVar1);
        *puVar1 = 0;
        puVar1 = puVar1 + -2;
      }
      *(undefined4 *)(puVar2 + 5) = 0;
      free(_Memory);
      free((void *)puVar2[2]);
      puVar2[2] = 0;
      free((void *)*puVar2);
      *puVar2 = 0;
      puVar2 = puVar2 + -7;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



ulonglong * FUN_140005830(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  plVar5 = (longlong *)0x0;
  bVar6 = false;
  if ((longlong *)*param_1 != (longlong *)0x0) {
    plVar1 = (longlong *)*param_1;
    do {
      plVar5 = plVar1;
      bVar6 = *param_2 < (ulonglong)plVar5[-5];
      if (bVar6) {
        plVar1 = (longlong *)*plVar5;
      }
      else {
        plVar1 = (longlong *)plVar5[2];
      }
    } while (plVar1 != (longlong *)0x0);
  }
  plVar1 = plVar5;
  if (bVar6 != false) {
    plVar1 = (longlong *)*plVar5;
    if (plVar1 == (longlong *)0x0) {
      plVar2 = plVar5;
      plVar4 = (longlong *)plVar5[1];
      if ((longlong *)plVar5[1] == (longlong *)0x0) goto LAB_1400058dc;
      do {
        plVar1 = plVar4;
        if (plVar2 != (longlong *)*plVar4) break;
        plVar1 = (longlong *)plVar4[1];
        plVar2 = plVar4;
        plVar4 = plVar1;
      } while (plVar1 != (longlong *)0x0);
    }
    else {
      for (plVar2 = (longlong *)plVar1[2]; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[2]
          ) {
        plVar1 = plVar2;
      }
    }
  }
  if ((plVar1 != (longlong *)0x0) && (*param_2 <= (ulonglong)plVar1[-5])) {
    return (ulonglong *)(plVar1 + -4);
  }
LAB_1400058dc:
  puVar3 = malloc(0x48);
  if (puVar3 != (ulonglong *)0x0) {
    *puVar3 = *param_2;
  }
  if (puVar3 + 1 != (ulonglong *)0x0) {
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
  }
  FUN_140001d80(param_1,(longlong *)(puVar3 + 5),bVar6,plVar5);
  return puVar3 + 1;
}



void FUN_140005950(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  while (param_2 != (undefined8 *)0x0) {
    FUN_140005950(param_1,(undefined8 *)param_2[2]);
    puVar1 = (undefined8 *)*param_2;
    free(param_2 + -5);
    param_2 = puVar1;
  }
  return;
}



longlong * FUN_1400059b0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  void *_Dst;
  uint uVar4;
  int *piVar5;
  longlong lVar6;
  
  uVar4 = 0;
  *(int *)(param_1 + 2) = (int)param_2[2];
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = (int)param_2[1];
  if (iVar2 != 0) {
    *(int *)((longlong)param_1 + 0xc) = iVar2;
    pvVar3 = realloc((void *)0x0,(ulonglong)(uint)(iVar2 << 4));
    *param_1 = (longlong)pvVar3;
  }
  if ((int)param_2[1] != 0) {
    lVar6 = *param_2 - *param_1;
    piVar5 = (int *)(*param_1 + 0xc);
    do {
      piVar1 = piVar5 + -3;
      if (piVar1 != (int *)0x0) {
        iVar2 = *(int *)(lVar6 + -4 + (longlong)piVar5);
        if (iVar2 == 0) {
          piVar1[0] = 0;
          piVar1[1] = 0;
          piVar5[-1] = 0;
          piVar5[0] = 0;
        }
        else {
          piVar5[-1] = iVar2;
          *piVar5 = iVar2;
          _Dst = malloc((ulonglong)(iVar2 + 1U));
          pvVar3 = *(void **)(lVar6 + -0xc + (longlong)piVar5);
          *(void **)piVar1 = _Dst;
          memcpy(_Dst,pvVar3,(ulonglong)(iVar2 + 1U));
        }
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(uint *)(param_2 + 1));
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  return param_1;
}



longlong * FUN_140005a90(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  void *_Dst;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  
  if (param_1 != param_2) {
    iVar6 = (int)param_1[1];
    uVar5 = 0;
    puVar4 = (undefined8 *)((ulonglong)(iVar6 - 1) * 0x10 + *param_1);
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      free((void *)*puVar4);
      *puVar4 = 0;
      puVar4 = puVar4 + -2;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    uVar2 = *(uint *)(param_2 + 1);
    if (*(uint *)((longlong)param_1 + 0xc) < uVar2) {
      *(uint *)((longlong)param_1 + 0xc) = uVar2;
      pvVar3 = realloc((void *)*param_1,(ulonglong)(uVar2 << 4));
      *param_1 = (longlong)pvVar3;
    }
    if ((int)param_2[1] != 0) {
      piVar7 = (int *)(*param_1 + 0xc);
      lVar8 = *param_2 - *param_1;
      do {
        piVar1 = piVar7 + -3;
        if (piVar1 != (int *)0x0) {
          iVar6 = *(int *)(lVar8 + -4 + (longlong)piVar7);
          if (iVar6 == 0) {
            piVar1[0] = 0;
            piVar1[1] = 0;
            piVar7[-1] = 0;
            piVar7[0] = 0;
          }
          else {
            piVar7[-1] = iVar6;
            *piVar7 = iVar6;
            _Dst = malloc((ulonglong)(iVar6 + 1U));
            pvVar3 = *(void **)(lVar8 + -0xc + (longlong)piVar7);
            *(void **)piVar1 = _Dst;
            memcpy(_Dst,pvVar3,(ulonglong)(iVar6 + 1U));
          }
        }
        uVar5 = uVar5 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 < *(uint *)(param_2 + 1));
    }
    *(int *)(param_1 + 1) = (int)param_2[1];
  }
  return param_1;
}



longlong *
FUN_140005bb0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,uint param_5
             )

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 == 0) {
    uVar6 = (ulonglong)param_5;
    if (*(uint *)((longlong)param_1 + 0xc) < param_5) {
      uVar3 = (*(uint *)((longlong)param_1 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
      if (uVar3 < param_5) {
        uVar3 = param_5;
      }
      *(uint *)((longlong)param_1 + 0xc) = uVar3;
      pvVar4 = realloc((void *)*param_1,(ulonglong)(uVar3 << 4));
      *param_1 = (longlong)pvVar4;
    }
    if (param_5 != 0) {
      lVar7 = 0;
      do {
        puVar1 = (undefined8 *)(lVar7 + *param_1);
        if (puVar1 != (undefined8 *)0x0) {
          iVar2 = *(int *)(param_4 + 1);
          if (iVar2 == 0) {
            *puVar1 = 0;
            puVar1[1] = 0;
          }
          else {
            *(int *)(puVar1 + 1) = iVar2;
            *(int *)((longlong)puVar1 + 0xc) = iVar2;
            pvVar4 = malloc((ulonglong)(iVar2 + 1));
            *puVar1 = pvVar4;
            memcpy(pvVar4,(void *)*param_4,(ulonglong)(iVar2 + 1));
          }
        }
        lVar7 = lVar7 + 0x10;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    lVar7 = *param_1;
    *(uint *)(param_1 + 1) = param_5;
  }
  else {
    pvVar4 = (void *)*param_1;
    uVar8 = (ulonglong)param_5;
    uVar5 = uVar3 + param_5;
    uVar9 = *param_3 - (longlong)pvVar4 >> 4;
    uVar6 = (longlong)(((ulonglong)uVar3 * 0x10 - *param_3) + (longlong)pvVar4) >> 4;
    if (*(uint *)((longlong)param_1 + 0xc) < uVar5) {
      uVar3 = (*(uint *)((longlong)param_1 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0xc) = uVar3;
      pvVar4 = realloc(pvVar4,(ulonglong)(uVar3 << 4));
      *param_1 = (longlong)pvVar4;
    }
    if ((int)uVar6 != 0) {
      memmove((void *)((ulonglong)((int)uVar9 + param_5) * 0x10 + *param_1),
              (void *)((uVar9 & 0xffffffff) * 0x10 + *param_1),(uVar6 & 0xffffffff) << 4);
    }
    if (param_5 != 0) {
      lVar7 = (longlong)(int)uVar9 << 4;
      do {
        puVar1 = (undefined8 *)(lVar7 + *param_1);
        if (puVar1 != (undefined8 *)0x0) {
          iVar2 = *(int *)(param_4 + 1);
          if (iVar2 == 0) {
            *puVar1 = 0;
            puVar1[1] = 0;
          }
          else {
            *(int *)(puVar1 + 1) = iVar2;
            *(int *)((longlong)puVar1 + 0xc) = iVar2;
            pvVar4 = malloc((ulonglong)(iVar2 + 1));
            *puVar1 = pvVar4;
            memcpy(pvVar4,(void *)*param_4,(ulonglong)(iVar2 + 1));
          }
        }
        lVar7 = lVar7 + 0x10;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    *(uint *)(param_1 + 1) = (int)param_1[1] + param_5;
    lVar7 = (uVar9 & 0xffffffff) * 0x10 + *param_1;
  }
  *param_2 = lVar7;
  return param_2;
}



undefined8 * FUN_140005db0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *(int *)(param_1 + 1) = iVar1;
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    pvVar2 = malloc((ulonglong)(iVar1 + 1));
    *param_1 = pvVar2;
    memcpy(pvVar2,(void *)*param_2,(ulonglong)(iVar1 + 1));
  }
  iVar1 = *(int *)(param_3 + 1);
  if (iVar1 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    *(int *)(param_1 + 3) = iVar1;
    *(int *)((longlong)param_1 + 0x1c) = iVar1;
    pvVar2 = malloc((ulonglong)(iVar1 + 1));
    param_1[2] = pvVar2;
    memcpy(pvVar2,(void *)*param_3,(ulonglong)(iVar1 + 1));
  }
  return param_1;
}



undefined8 * FUN_140005e60(undefined8 *param_1,byte param_2)

{
  *param_1 = pxsl::IPxslNode::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



undefined8 * FUN_140005e90(undefined8 *param_1,uint param_2)

{
  FUN_140006560(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000140005f16)
// WARNING: Removing unreachable block (ram,0x000140005f74)

void FUN_140005ec0(char *param_1)

{
  longlong lVar1;
  char *pcVar2;
  uint uVar3;
  void *local_28;
  uint local_20;
  uint local_1c;
  void *local_18;
  uint local_10;
  uint local_c;
  
  lVar1 = DAT_1400132b8;
  if (DAT_1400132b8 == 0) {
                    // WARNING: Could not recover jumptable at 0x000140005eed. Too many branches
                    // WARNING: Treating indirect jump as call
    printf("%s\n");
    return;
  }
  uVar3 = 0;
  pcVar2 = param_1;
  do {
    if (*pcVar2 == '\0') break;
    uVar3 = uVar3 + 1;
    pcVar2 = pcVar2 + 1;
  } while (uVar3 != 0xffffffff);
  local_10 = uVar3;
  local_c = uVar3;
  if (uVar3 == 0) {
    local_18 = (void *)0x0;
  }
  else {
    local_18 = malloc((ulonglong)(uVar3 + 1));
    memcpy(local_18,param_1,(ulonglong)uVar3);
    *(undefined1 *)((ulonglong)local_10 + (longlong)local_18) = 0;
  }
  uVar3 = 0;
  pcVar2 = "LEX";
  do {
    if (*pcVar2 == '\0') break;
    uVar3 = uVar3 + 1;
    pcVar2 = pcVar2 + 1;
  } while (uVar3 != 0xffffffff);
  local_20 = uVar3;
  local_1c = uVar3;
  if (uVar3 == 0) {
    local_28 = (void *)0x0;
  }
  else {
    local_28 = malloc((ulonglong)(uVar3 + 1));
    memcpy(local_28,&DAT_140010314,(ulonglong)uVar3);
    *(undefined1 *)((ulonglong)local_20 + (longlong)local_28) = 0;
  }
  (**(code **)(**(longlong **)(lVar1 + 8) + 8))
            (*(longlong **)(lVar1 + 8),DAT_1400132c0 + 1,&local_28,&local_18);
  free(local_28);
  local_28 = (void *)0x0;
  free(local_18);
  return;
}



// WARNING: Removing unreachable block (ram,0x000140006090)
// WARNING: Removing unreachable block (ram,0x0001400060f2)

void FUN_140006010(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char *pcVar2;
  uint uVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  void *local_38;
  uint local_30;
  uint local_2c;
  void *local_28;
  uint local_20;
  uint local_1c;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  _vsnprintf(&DAT_1400134f0,0x400,param_1,(va_list)&local_res10);
  lVar1 = DAT_1400132b8;
  if (DAT_1400132b8 == 0) {
    printf("%s\n");
    return;
  }
  uVar3 = 0;
  pcVar2 = &DAT_1400134f0;
  do {
    if (*pcVar2 == '\0') break;
    uVar3 = uVar3 + 1;
    pcVar2 = pcVar2 + 1;
  } while (uVar3 != 0xffffffff);
  local_20 = uVar3;
  local_1c = uVar3;
  if (uVar3 == 0) {
    local_28 = (void *)0x0;
  }
  else {
    local_28 = malloc((ulonglong)(uVar3 + 1));
    memcpy(local_28,&DAT_1400134f0,(ulonglong)uVar3);
    *(undefined1 *)((ulonglong)local_20 + (longlong)local_28) = 0;
  }
  uVar3 = 0;
  pcVar2 = "LEX";
  do {
    if (*pcVar2 == '\0') break;
    uVar3 = uVar3 + 1;
    pcVar2 = pcVar2 + 1;
  } while (uVar3 != 0xffffffff);
  local_30 = uVar3;
  local_2c = uVar3;
  if (uVar3 == 0) {
    local_38 = (void *)0x0;
  }
  else {
    local_38 = malloc((ulonglong)(uVar3 + 1));
    memcpy(local_38,&DAT_140010314,(ulonglong)uVar3);
    *(undefined1 *)((ulonglong)local_30 + (longlong)local_38) = 0;
  }
  (**(code **)(**(longlong **)(lVar1 + 8) + 8))
            (*(longlong **)(lVar1 + 8),DAT_1400132c0 + 1,&local_38,&local_28);
  free(local_38);
  local_38 = (void *)0x0;
  free(local_28);
  return;
}



longlong FUN_140006190(longlong param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  do {
    uVar7 = 0;
    if ((ulonglong)*(uint *)(param_1 + 0xa0) != 0) {
      puVar6 = *(undefined8 **)(param_1 + 0x98);
      do {
        pbVar4 = (byte *)*puVar6;
        if ((pbVar4 == (byte *)0x0) || (*param_2 == 0)) {
          iVar3 = *(int *)(puVar6 + 1) - (int)param_2[1];
        }
        else {
          lVar5 = *param_2 - (longlong)pbVar4;
          do {
            bVar1 = *pbVar4;
            if (bVar1 != pbVar4[lVar5]) {
              uVar2 = (uint)(bVar1 < pbVar4[lVar5]);
              iVar3 = (1 - uVar2) - (uint)(uVar2 != 0);
              goto LAB_1400061f2;
            }
            pbVar4 = pbVar4 + 1;
          } while (bVar1 != 0);
          iVar3 = 0;
        }
LAB_1400061f2:
        if (iVar3 == 0) {
          return uVar7 * 0x30 + *(longlong *)(param_1 + 0x98);
        }
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 6;
      } while (uVar7 < *(uint *)(param_1 + 0xa0));
    }
    param_1 = *(longlong *)(param_1 + 0x40);
    if (param_1 == 0) {
      return 0;
    }
  } while( true );
}



undefined8 * FUN_140006230(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x58);
  puVar5 = malloc(0xb0);
  uVar8 = (int)plVar1[1] + 1;
  if (*(uint *)((longlong)plVar1 + 0xc) < uVar8) {
    uVar4 = (*(uint *)((longlong)plVar1 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
    if (uVar4 < uVar8) {
      uVar4 = uVar8;
    }
    *(uint *)((longlong)plVar1 + 0xc) = uVar4;
    pvVar6 = realloc((void *)*plVar1,(ulonglong)(uVar4 << 3));
    *plVar1 = (longlong)pvVar6;
  }
  puVar10 = (undefined8 *)(*plVar1 + (ulonglong)*(uint *)(plVar1 + 1) * 8);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = puVar5;
  }
  *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
  puVar11 = (undefined8 *)0x0;
  puVar10 = puVar11;
  if (puVar5 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    *puVar5 = pxsl::PxslNode::vftable;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 3) = 0x39;
    puVar5[5] = 0;
    puVar5[6] = 0;
    *(undefined4 *)(puVar5 + 7) = 0x39;
    puVar5[8] = 0;
    puVar5[9] = 0xffffffffffffffff;
    *(undefined4 *)(puVar5 + 10) = 6;
    puVar5[0xb] = uVar2;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    *(undefined1 *)(puVar5 + 0xf) = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    *(undefined4 *)(puVar5 + 0x12) = 0x39;
    puVar5[0x13] = 0;
    puVar5[0x14] = 0;
    *(undefined4 *)(puVar5 + 0x15) = 0x39;
    puVar10 = puVar5;
  }
  lVar3 = *(longlong *)(param_1 + 0x58);
  uVar8 = *(int *)(lVar3 + 0x78) + 1;
  if (*(uint *)(lVar3 + 0x7c) < uVar8) {
    uVar4 = (*(uint *)(lVar3 + 0x7c) * 10 >> 3) + 0x10 & 0xfffffff0;
    if (uVar4 < uVar8) {
      uVar4 = uVar8;
    }
    *(uint *)(lVar3 + 0x7c) = uVar4;
    pvVar6 = realloc(*(void **)(lVar3 + 0x70),(ulonglong)(uVar4 << 3));
    *(void **)(lVar3 + 0x70) = pvVar6;
  }
  puVar5 = (undefined8 *)(*(longlong *)(lVar3 + 0x70) + (ulonglong)*(uint *)(lVar3 + 0x78) * 8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = puVar10;
  }
  *(int *)(lVar3 + 0x78) = *(int *)(lVar3 + 0x78) + 1;
  FUN_140006420((longlong)puVar10,param_1);
  puVar5 = puVar11;
  if (*(int *)(puVar10 + 6) != 0) {
    do {
      lVar3 = *(longlong *)(puVar10[5] + (longlong)puVar5 * 8);
      puVar7 = FUN_140006230(lVar3);
      *(undefined8 **)(puVar10[5] + (longlong)puVar5 * 8) = puVar7;
      puVar9 = puVar11;
      puVar12 = puVar11;
      if (*(int *)(puVar10 + 0x14) != 0) {
        do {
          if (*(longlong *)((longlong)puVar9 + puVar10[0x13] + 0x28) == lVar3) {
            *(undefined8 **)((longlong)puVar9 + puVar10[0x13] + 0x28) = puVar7;
          }
          puVar12 = (undefined8 *)((longlong)puVar12 + 1);
          puVar9 = puVar9 + 6;
        } while (puVar12 < (undefined8 *)(ulonglong)*(uint *)(puVar10 + 0x14));
      }
      puVar7[8] = puVar10;
      puVar5 = (undefined8 *)((longlong)puVar5 + 1);
    } while (puVar5 < (undefined8 *)(ulonglong)*(uint *)(puVar10 + 6));
  }
  return puVar10;
}



longlong FUN_140006420(longlong param_1,longlong param_2)

{
  FUN_14000b8d0((longlong *)(param_1 + 8),(longlong *)(param_2 + 8));
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  FUN_1400064e0((longlong *)(param_1 + 0x28),(longlong *)(param_2 + 0x28));
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  FUN_140001690((undefined8 *)(param_1 + 0x68),(undefined8 *)(param_2 + 0x68));
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  FUN_14000ba00((longlong *)(param_1 + 0x80),(longlong *)(param_2 + 0x80));
  FUN_14000bb60((longlong *)(param_1 + 0x98),(longlong *)(param_2 + 0x98));
  return param_1;
}



longlong * FUN_1400064e0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  
  if (param_1 != param_2) {
    uVar5 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    uVar1 = *(uint *)(param_2 + 1);
    if (*(uint *)((longlong)param_1 + 0xc) < uVar1) {
      *(uint *)((longlong)param_1 + 0xc) = uVar1;
      pvVar2 = realloc((void *)*param_1,(ulonglong)(uVar1 << 3));
      *param_1 = (longlong)pvVar2;
    }
    puVar3 = (undefined8 *)*param_1;
    if ((int)param_2[1] != 0) {
      lVar4 = *param_2 - (longlong)puVar3;
      do {
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = *(undefined8 *)(lVar4 + (longlong)puVar3);
        }
        uVar5 = uVar5 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar5 < *(uint *)(param_2 + 1));
    }
    *(int *)(param_1 + 1) = (int)param_2[1];
  }
  return param_1;
}



void FUN_140006560(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  *param_1 = pxsl::PxslNode::vftable;
  FUN_14000b520(param_1 + 0x13);
  free((void *)param_1[0x13]);
  FUN_14000b3f0(param_1 + 0x10);
  free((void *)param_1[0x10]);
  free((void *)param_1[0xd]);
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  free((void *)param_1[5]);
  iVar2 = *(int *)(param_1 + 2);
  if (iVar2 != 0) {
    puVar1 = (undefined8 *)(param_1[1] + 8 + (ulonglong)(iVar2 - 1) * 0x18);
    do {
      free((void *)*puVar1);
      *puVar1 = 0;
      puVar1 = puVar1 + -3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  free((void *)param_1[1]);
  *param_1 = pxsl::IPxslNode::vftable;
  return;
}



ulonglong FUN_140006630(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong *puVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((ulonglong)*(uint *)(param_1 + 0x30) != 0) {
    puVar1 = *(ulonglong **)(param_1 + 0x28);
    do {
      in_RAX = *puVar1;
      if (*(int *)(in_RAX + 0x50) == 2) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x30));
  }
  return in_RAX & 0xffffffffffffff00;
}



undefined8 FUN_140006660(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



void FUN_140006670(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar6 = 0;
    do {
      uVar2 = *(undefined8 *)(lVar6 + *(longlong *)(param_1 + 0x28));
      uVar5 = (int)param_2[1] + 1;
      if (*(uint *)((longlong)param_2 + 0xc) < uVar5) {
        uVar3 = (*(uint *)((longlong)param_2 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
        if (uVar3 < uVar5) {
          uVar3 = uVar5;
        }
        *(uint *)((longlong)param_2 + 0xc) = uVar3;
        pvVar4 = realloc((void *)*param_2,(ulonglong)(uVar3 << 3));
        *param_2 = (longlong)pvVar4;
      }
      puVar1 = (undefined8 *)(*param_2 + (ulonglong)*(uint *)(param_2 + 1) * 8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = uVar2;
      }
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 8;
    } while (uVar7 < *(uint *)(param_1 + 0x30));
  }
  return;
}



undefined8 * FUN_140006720(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return &DAT_140013338;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  puVar2 = FUN_140004e70(*(longlong *)(param_1 + 0x58),(longlong *)(lVar1 + 8));
  if (puVar2 != (undefined8 *)0x0) {
    return puVar2 + 2;
  }
  return (undefined8 *)(lVar1 + 8);
}



undefined8 * FUN_140006770(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  int *piVar5;
  
  iVar1 = DAT_140013340;
  uVar3 = 0;
  if (*(uint *)(param_1 + 0x10) != 0) {
    piVar5 = *(int **)(param_1 + 8);
    do {
      if (*piVar5 == 4) {
        iVar1 = piVar5[4];
        if (iVar1 != 0) {
          *(int *)(param_2 + 1) = iVar1;
          *(int *)((longlong)param_2 + 0xc) = iVar1;
          pvVar4 = malloc((ulonglong)(iVar1 + 1U));
          pvVar2 = *(void **)(piVar5 + 2);
          *param_2 = pvVar4;
          memcpy(pvVar4,pvVar2,(ulonglong)(iVar1 + 1U));
          return param_2;
        }
        goto LAB_140006824;
      }
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + 6;
    } while (uVar3 < *(uint *)(param_1 + 0x10));
  }
  if (DAT_140013340 != 0) {
    *(int *)(param_2 + 1) = DAT_140013340;
    *(int *)((longlong)param_2 + 0xc) = iVar1;
    uVar3 = iVar1 + 1;
    pvVar4 = malloc((ulonglong)uVar3);
    pvVar2 = DAT_140013338;
    *param_2 = pvVar4;
    memcpy(pvVar4,pvVar2,(ulonglong)uVar3);
    return param_2;
  }
LAB_140006824:
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



void FUN_140006840(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  void *pvVar7;
  void *pvVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong lVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  void *local_res18;
  byte *local_88;
  int local_80;
  void *local_78;
  ulonglong local_70;
  undefined4 local_68;
  void *local_60 [2];
  void *local_50;
  
  (**(code **)(*param_1 + 0x20))(param_1,&local_88);
  if (local_80 == 0) {
    free(local_88);
    return;
  }
  lVar2 = param_1[0xb];
  puVar13 = (undefined8 *)0x0;
  local_68 = 0x39;
  local_70 = 0;
  local_78 = (void *)0x0;
  puVar12 = puVar13;
  pbVar17 = local_88;
  iVar19 = local_80;
  if (*(int *)(lVar2 + 0x50) != 0) {
    do {
      puVar10 = *(undefined8 **)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x48) + (longlong)puVar12 * 8) + 0x68);
      puVar15 = puVar13;
      if (puVar10 != (undefined8 *)0x0) {
        do {
          pbVar6 = (byte *)puVar10[-3];
          iVar14 = 0;
          if ((pbVar6 == (byte *)0x0) || (pbVar17 == (byte *)0x0)) {
            iVar4 = *(int *)(puVar10 + -2) - iVar19;
          }
          else {
            lVar16 = (longlong)pbVar17 - (longlong)pbVar6;
            do {
              bVar1 = *pbVar6;
              if (bVar1 != pbVar6[lVar16]) {
                uVar18 = (uint)(bVar1 < pbVar6[lVar16]);
                iVar4 = (1 - uVar18) - (uint)(uVar18 != 0);
                break;
              }
              pbVar6 = pbVar6 + 1;
              iVar4 = iVar14;
            } while (bVar1 != 0);
          }
          if (iVar4 < 0) {
            puVar11 = (undefined8 *)puVar10[2];
          }
          else {
            puVar11 = (undefined8 *)*puVar10;
            puVar15 = puVar10;
          }
          puVar10 = puVar11;
        } while (puVar11 != (undefined8 *)0x0);
        if (puVar15 != (undefined8 *)0x0) {
          if ((pbVar17 == (byte *)0x0) || (puVar15[-3] == 0)) {
            iVar14 = iVar19 - *(int *)(puVar15 + -2);
          }
          else {
            pbVar6 = pbVar17;
            do {
              bVar1 = *pbVar6;
              if (bVar1 != pbVar6[puVar15[-3] - (longlong)pbVar17]) {
                uVar18 = (uint)(bVar1 < pbVar6[puVar15[-3] - (longlong)pbVar17]);
                iVar14 = (1 - uVar18) - (uint)(uVar18 != 0);
                break;
              }
              pbVar6 = pbVar6 + 1;
            } while (bVar1 != 0);
          }
          if ((-1 < iVar14) && (puVar15[-1] != 0)) {
            FUN_140005a90((longlong *)&local_78,(longlong *)(puVar15[-1] + 0x10));
            pbVar17 = local_88;
            iVar19 = local_80;
          }
        }
      }
      puVar12 = (undefined8 *)((longlong)puVar12 + 1);
    } while (puVar12 < (undefined8 *)(ulonglong)*(uint *)(lVar2 + 0x50));
    puVar12 = (undefined8 *)(local_70 & 0xffffffff);
  }
  bVar3 = false;
  uVar18 = (uint)puVar12;
  puVar10 = puVar13;
  if ((int)param_1[0x11] != 0) {
    do {
      lVar2 = param_1[0x10];
      if (*(char *)((longlong)puVar13 + lVar2) == '\0') {
        if (bVar3) break;
        if ((uint)puVar10 < uVar18) {
          puVar15 = FUN_140005db0(local_60,(undefined8 *)
                                           ((longlong)puVar10 * 0x10 + (longlong)local_78),
                                  (undefined8 *)((longlong)puVar13 + lVar2 + 0x28));
          FUN_14000ac20(param_2,puVar15);
          free(local_50);
          local_50 = (void *)0x0;
          free(local_60[0]);
        }
      }
      else {
        iVar19 = *(int *)((longlong)puVar13 + lVar2 + 0x18);
        if (iVar19 == 0) {
          local_res18 = (void *)0x0;
          iVar19 = 0;
        }
        else {
          local_res18 = malloc((ulonglong)(iVar19 + 1U));
          memcpy(local_res18,*(void **)((longlong)puVar13 + lVar2 + 0x10),(ulonglong)(iVar19 + 1U));
        }
        pvVar7 = (void *)0x0;
        iVar14 = *(int *)((longlong)puVar13 + lVar2 + 0x30);
        if (iVar14 == 0) {
          iVar14 = 0;
        }
        else {
          pvVar7 = malloc((ulonglong)(iVar14 + 1U));
          memcpy(pvVar7,*(void **)((longlong)puVar13 + lVar2 + 0x28),(ulonglong)(iVar14 + 1U));
        }
        uVar9 = (int)param_2[1] + 1;
        if (*(uint *)((longlong)param_2 + 0xc) < uVar9) {
          uVar5 = (*(uint *)((longlong)param_2 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
          if (uVar5 < uVar9) {
            uVar5 = uVar9;
          }
          *(uint *)((longlong)param_2 + 0xc) = uVar5;
          pvVar8 = realloc((void *)*param_2,(ulonglong)(uVar5 << 5));
          *param_2 = (longlong)pvVar8;
        }
        puVar15 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 1) * 0x20 + *param_2);
        if (puVar15 != (undefined8 *)0x0) {
          if (iVar19 == 0) {
            *puVar15 = 0;
            puVar15[1] = 0;
          }
          else {
            *(int *)(puVar15 + 1) = iVar19;
            *(int *)((longlong)puVar15 + 0xc) = iVar19;
            pvVar8 = malloc((ulonglong)(iVar19 + 1U));
            *puVar15 = pvVar8;
            memcpy(pvVar8,local_res18,(ulonglong)(iVar19 + 1U));
          }
          if (iVar14 == 0) {
            puVar15[2] = 0;
            puVar15[3] = 0;
          }
          else {
            *(int *)(puVar15 + 3) = iVar14;
            *(int *)((longlong)puVar15 + 0x1c) = iVar14;
            pvVar8 = malloc((ulonglong)(iVar14 + 1U));
            puVar15[2] = pvVar8;
            memcpy(pvVar8,pvVar7,(ulonglong)(iVar14 + 1U));
          }
        }
        *(int *)(param_2 + 1) = (int)param_2[1] + 1;
        free(pvVar7);
        free(local_res18);
        bVar3 = true;
      }
      uVar9 = (uint)puVar10 + 1;
      puVar13 = puVar13 + 7;
      puVar10 = (undefined8 *)(ulonglong)uVar9;
    } while (uVar9 < *(uint *)(param_1 + 0x11));
  }
  pvVar7 = local_78;
  puVar13 = (undefined8 *)((ulonglong)(uVar18 - 1) * 0x10 + (longlong)local_78);
  while (uVar18 != 0) {
    free((void *)*puVar13);
    *puVar13 = 0;
    puVar13 = puVar13 + -2;
    uVar18 = (int)puVar12 - 1;
    puVar12 = (undefined8 *)(ulonglong)uVar18;
  }
  free(pvVar7);
  free(local_88);
  return;
}



undefined4 FUN_140006c40(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



undefined4 FUN_140006c50(longlong param_1,ulonglong param_2)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 8) + (param_2 & 0xffffffff) * 0x18);
}



undefined8 * FUN_140006c60(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  void *_Dst;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x10 + (param_3 & 0xffffffff) * 0x18);
  if (iVar1 != 0) {
    *(int *)(param_2 + 1) = iVar1;
    *(int *)((longlong)param_2 + 0xc) = iVar1;
    _Dst = malloc((ulonglong)(iVar1 + 1U));
    _Src = *(void **)(lVar2 + 8 + (param_3 & 0xffffffff) * 0x18);
    *param_2 = _Dst;
    memcpy(_Dst,_Src,(ulonglong)(iVar1 + 1U));
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



uint FUN_140006cf0(longlong param_1,int param_2,longlong *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (*(uint *)(param_1 + 0x88) != 0) {
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10);
    do {
      if (*(int *)(puVar6 + -1) == param_2) {
        pbVar4 = (byte *)*puVar6;
        if ((pbVar4 == (byte *)0x0) || (*param_3 == 0)) {
          iVar3 = *(int *)(puVar6 + 1) - (int)param_3[1];
        }
        else {
          lVar5 = *param_3 - (longlong)pbVar4;
          do {
            bVar1 = *pbVar4;
            if (bVar1 != pbVar4[lVar5]) {
              uVar2 = (uint)(bVar1 < pbVar4[lVar5]);
              iVar3 = (1 - uVar2) - (uint)(uVar2 != 0);
              goto LAB_140006d52;
            }
            pbVar4 = pbVar4 + 1;
          } while (bVar1 != 0);
          iVar3 = 0;
        }
LAB_140006d52:
        if (iVar3 == 0) {
          return uVar7;
        }
      }
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 7;
    } while (uVar7 < *(uint *)(param_1 + 0x88));
  }
  return 0xffffffff;
}



uint FUN_140006d80(longlong param_1,int param_2,longlong *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (*(uint *)(param_1 + 0x88) != 0) {
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x28);
    do {
      if (*(int *)(puVar6 + -1) == param_2) {
        pbVar4 = (byte *)*puVar6;
        if ((pbVar4 == (byte *)0x0) || (*param_3 == 0)) {
          iVar3 = *(int *)(puVar6 + 1) - (int)param_3[1];
        }
        else {
          lVar5 = *param_3 - (longlong)pbVar4;
          do {
            bVar1 = *pbVar4;
            if (bVar1 != pbVar4[lVar5]) {
              uVar2 = (uint)(bVar1 < pbVar4[lVar5]);
              iVar3 = (1 - uVar2) - (uint)(uVar2 != 0);
              goto LAB_140006de2;
            }
            pbVar4 = pbVar4 + 1;
          } while (bVar1 != 0);
          iVar3 = 0;
        }
LAB_140006de2:
        if (iVar3 == 0) {
          return uVar7;
        }
      }
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 7;
    } while (uVar7 < *(uint *)(param_1 + 0x88));
  }
  return 0xffffffff;
}



undefined8 * FUN_140006e10(longlong param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  undefined8 *puVar2;
  
  if (param_3 < *(uint *)(param_1 + 0x88)) {
    puVar2 = (undefined8 *)((ulonglong)param_3 * 0x38 + 0x10 + *(longlong *)(param_1 + 0x80));
  }
  else {
    puVar2 = &DAT_140013338;
  }
  iVar1 = *(int *)(puVar2 + 1);
  if (iVar1 != 0) {
    *(int *)(param_2 + 1) = iVar1;
    *(int *)((longlong)param_2 + 0xc) = iVar1;
    _Dst = malloc((ulonglong)(iVar1 + 1U));
    _Src = (void *)*puVar2;
    *param_2 = _Dst;
    memcpy(_Dst,_Src,(ulonglong)(iVar1 + 1U));
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



undefined8 * FUN_140006ea0(longlong param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  undefined8 *puVar2;
  
  if (param_3 < *(uint *)(param_1 + 0x88)) {
    puVar2 = (undefined8 *)((ulonglong)param_3 * 0x38 + 0x28 + *(longlong *)(param_1 + 0x80));
  }
  else {
    puVar2 = &DAT_140013338;
  }
  iVar1 = *(int *)(puVar2 + 1);
  if (iVar1 != 0) {
    *(int *)(param_2 + 1) = iVar1;
    *(int *)((longlong)param_2 + 0xc) = iVar1;
    _Dst = malloc((ulonglong)(iVar1 + 1U));
    _Src = (void *)*puVar2;
    *param_2 = _Dst;
    memcpy(_Dst,_Src,(ulonglong)(iVar1 + 1U));
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



longlong * FUN_140006f30(longlong *param_1,int param_2,longlong *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  byte *pbVar7;
  
  if ((int)param_1[10] == param_2) {
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x18))();
    pbVar7 = (byte *)*puVar4;
    if ((pbVar7 == (byte *)0x0) || (*param_3 == 0)) {
      iVar3 = *(int *)(puVar4 + 1) - (int)param_3[1];
    }
    else {
      lVar6 = *param_3 - (longlong)pbVar7;
      do {
        bVar1 = *pbVar7;
        if (bVar1 != pbVar7[lVar6]) {
          uVar2 = (uint)(bVar1 < pbVar7[lVar6]);
          iVar3 = (1 - uVar2) - (uint)(uVar2 != 0);
          goto LAB_140006f92;
        }
        pbVar7 = pbVar7 + 1;
      } while (bVar1 != 0);
      iVar3 = 0;
    }
LAB_140006f92:
    if (iVar3 == 0) {
      return param_1;
    }
  }
  if ((int)param_1[10] == 2) {
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1);
    lVar6 = FUN_1400056f0(param_1[0xb],plVar5);
    if ((lVar6 != 0) &&
       (plVar5 = (longlong *)
                 (**(code **)(**(longlong **)(lVar6 + 0x28) + 0x68))
                           (*(longlong **)(lVar6 + 0x28),param_2,param_3), plVar5 != (longlong *)0x0
       )) {
      return plVar5;
    }
  }
  puVar4 = (undefined8 *)param_1[5];
  if (puVar4 != puVar4 + *(uint *)(param_1 + 6)) {
    do {
      plVar5 = (longlong *)
               (**(code **)(*(longlong *)*puVar4 + 0x68))((longlong *)*puVar4,param_2,param_3);
      if (plVar5 != (longlong *)0x0) {
        return plVar5;
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != (undefined8 *)(param_1[5] + (ulonglong)*(uint *)(param_1 + 6) * 8));
  }
  return (longlong *)0x0;
}



undefined8 * FUN_140007040(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  void *pvVar5;
  undefined8 *puVar6;
  longlong lVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar11;
  
  uVar12 = 0;
  iVar2 = 0;
  if (*(uint *)(param_1 + 0x11) != 0) {
    pcVar8 = (char *)param_1[0x10];
    uVar11 = uVar12;
    do {
      if (*pcVar8 != '\0') {
        pbVar4 = *(byte **)(pcVar8 + 0x10);
        if ((pbVar4 == (byte *)0x0) || (*param_3 == 0)) {
          iVar3 = *(int *)(pcVar8 + 0x18) - (int)param_3[1];
        }
        else {
          lVar7 = *param_3 - (longlong)pbVar4;
          do {
            bVar1 = *pbVar4;
            if (bVar1 != pbVar4[lVar7]) {
              uVar9 = (uint)(bVar1 < pbVar4[lVar7]);
              iVar3 = (1 - uVar9) - (uint)(uVar9 != 0);
              break;
            }
            pbVar4 = pbVar4 + 1;
            iVar3 = iVar2;
          } while (bVar1 != 0);
        }
        if (iVar3 == 0) {
          iVar2 = *(int *)(pcVar8 + 0x30);
          if (iVar2 != 0) {
            *(int *)(param_2 + 1) = iVar2;
            *(int *)((longlong)param_2 + 0xc) = iVar2;
            pvVar5 = malloc((ulonglong)(iVar2 + 1));
            *param_2 = pvVar5;
            memcpy(pvVar5,*(void **)(pcVar8 + 0x28),(ulonglong)(iVar2 + 1));
            return param_2;
          }
          goto LAB_14000724b;
        }
      }
      uVar9 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar9;
      pcVar8 = pcVar8 + 0x38;
    } while (uVar9 < *(uint *)(param_1 + 0x11));
  }
  uVar9 = *(uint *)(param_1[0xb] + 0x30);
  if (uVar9 != 0) {
    puVar13 = *(undefined8 **)(param_1[0xb] + 0x28);
    puVar6 = puVar13;
    uVar11 = uVar12;
    do {
      pbVar4 = (byte *)*puVar6;
      if ((pbVar4 == (byte *)0x0) || (lVar7 = *(longlong *)(param_1[1] + 8), lVar7 == 0)) {
        iVar3 = *(int *)(puVar6 + 1) - *(int *)(param_1[1] + 0x10);
      }
      else {
        lVar7 = lVar7 - (longlong)pbVar4;
        do {
          bVar1 = *pbVar4;
          if (bVar1 != pbVar4[lVar7]) {
            uVar10 = (uint)(bVar1 < pbVar4[lVar7]);
            iVar3 = (1 - uVar10) - (uint)(uVar10 != 0);
            break;
          }
          pbVar4 = pbVar4 + 1;
          iVar3 = iVar2;
        } while (bVar1 != 0);
      }
      if (iVar3 == 0) {
        puVar13 = puVar13 + uVar11 * 7;
        if (puVar13 != (undefined8 *)0x0) {
          uVar9 = *(uint *)(puVar13 + 5);
          puVar13 = (undefined8 *)puVar13[4];
          puVar6 = puVar13;
          if (uVar9 == 0) goto LAB_140007215;
          goto LAB_1400071d0;
        }
        break;
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      puVar6 = puVar6 + 7;
    } while (uVar10 < uVar9);
  }
  goto LAB_14000716a;
  while( true ) {
    uVar10 = (int)uVar12 + 1;
    uVar12 = (ulonglong)uVar10;
    puVar6 = puVar6 + 2;
    if (uVar9 <= uVar10) break;
LAB_1400071d0:
    pbVar4 = (byte *)*puVar6;
    if ((pbVar4 == (byte *)0x0) || (*param_3 == 0)) {
      iVar3 = *(int *)(puVar6 + 1) - (int)param_3[1];
    }
    else {
      lVar7 = *param_3 - (longlong)pbVar4;
      do {
        bVar1 = *pbVar4;
        if (bVar1 != pbVar4[lVar7]) {
          uVar10 = (uint)(bVar1 < pbVar4[lVar7]);
          iVar3 = (1 - uVar10) - (uint)(uVar10 != 0);
          break;
        }
        pbVar4 = pbVar4 + 1;
        iVar3 = iVar2;
      } while (bVar1 != 0);
    }
    if (iVar3 == 0) goto LAB_14000721f;
  }
LAB_140007215:
  puVar6 = puVar13 + (ulonglong)uVar9 * 2;
LAB_14000721f:
  if (puVar6 != puVar13 + (ulonglong)uVar9 * 2) {
    (**(code **)(*param_1 + 0x60))
              (param_1,param_2,(longlong)puVar6 - (longlong)puVar13 >> 4 & 0xffffffff);
    return param_2;
  }
LAB_14000716a:
  if (DAT_140013340 == 0) {
LAB_14000724b:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *(int *)(param_2 + 1) = DAT_140013340;
    uVar9 = DAT_140013340 + 1;
    *(int *)((longlong)param_2 + 0xc) = DAT_140013340;
    pvVar5 = malloc((ulonglong)uVar9);
    *param_2 = pvVar5;
    memcpy(pvVar5,DAT_140013338,(ulonglong)(*(int *)(param_2 + 1) + 1));
  }
  return param_2;
}



undefined8 * FUN_140007270(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  uint uVar6;
  
  *param_1 = pxsl::PxslDocument::vftable;
  plVar2 = (longlong *)*param_2;
  puVar4 = malloc(0x80);
  uVar3 = (int)plVar2[1] + 1;
  if (*(uint *)((longlong)plVar2 + 0xc) < uVar3) {
    uVar6 = (*(uint *)((longlong)plVar2 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
    if (uVar6 < uVar3) {
      uVar6 = uVar3;
    }
    *(uint *)((longlong)plVar2 + 0xc) = uVar6;
    pvVar5 = realloc((void *)*plVar2,(ulonglong)(uVar6 << 3));
    *plVar2 = (longlong)pvVar5;
  }
  puVar1 = (undefined8 *)(*plVar2 + (ulonglong)*(uint *)(plVar2 + 1) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = puVar4;
  }
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  if (puVar4 == (undefined8 *)0x0) {
    param_1[1] = 0;
  }
  else {
    *puVar4 = param_2;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *(undefined4 *)(puVar4 + 3) = 0x39;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(undefined4 *)(puVar4 + 6) = 0x39;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    *(undefined4 *)(puVar4 + 10) = 0x39;
    puVar4[0xb] = 0;
    *(undefined4 *)(puVar4 + 0xc) = 0;
    puVar4[0xd] = 0;
    *(undefined4 *)(puVar4 + 0xe) = 0;
    *(undefined4 *)(puVar4 + 0xf) = 0x39;
    param_1[1] = puVar4;
  }
  return param_1;
}



undefined8 * FUN_140007360(undefined8 *param_1,uint param_2)

{
  FUN_140007390(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



void FUN_140007390(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  lVar1 = param_1[1];
  *param_1 = pxsl::PxslDocument::vftable;
  puVar3 = *(undefined8 **)(lVar1 + 0x68);
  while (puVar3 != (undefined8 *)0x0) {
    FUN_14000b760(lVar1 + 0x68,(undefined8 *)puVar3[2]);
    puVar2 = (undefined8 *)*puVar3;
    free((void *)puVar3[-3]);
    puVar3[-3] = 0;
    free(puVar3 + -3);
    puVar3 = puVar2;
  }
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined4 *)(lVar1 + 0x70) = 0;
  *(undefined4 *)(lVar1 + 0x48) = 0;
  free(*(void **)(lVar1 + 0x40));
  FUN_14000ad70((longlong *)(lVar1 + 0x20));
  free(*(void **)(lVar1 + 0x20));
  iVar4 = *(int *)(lVar1 + 0x10);
  if (iVar4 != 0) {
    puVar3 = (undefined8 *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(iVar4 - 1) * 0x18);
    do {
      free((void *)*puVar3);
      *puVar3 = 0;
      puVar3 = puVar3 + -3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(lVar1 + 0x10) = 0;
                    // WARNING: Could not recover jumptable at 0x000140007476. Too many branches
                    // WARNING: Treating indirect jump as call
  free(*(void **)(lVar1 + 8));
  return;
}



void FUN_140007480(longlong *param_1,longlong *param_2)

{
  long lVar1;
  int iVar2;
  FILE *_File;
  void *_Dst;
  size_t sVar3;
  int *piVar4;
  char *_Filename;
  size_t _Count;
  
  _Filename = "";
  if ((char *)*param_2 != (char *)0x0) {
    _Filename = (char *)*param_2;
  }
  _File = fopen(_Filename,"rt");
  if (_File == (FILE *)0x0) {
    FUN_140004c80(*param_1,0,0,"FILE","Could not open file \'%s\' for reading");
    return;
  }
  fseek(_File,0,2);
  lVar1 = ftell(_File);
  _Count = (size_t)lVar1;
  fseek(_File,0,0);
  _Dst = FUN_140004a40((longlong *)*param_1,_Count + 2,0x140010318);
  memset(_Dst,0,_Count + 2);
  sVar3 = fread(_Dst,1,_Count,_File);
  if ((sVar3 == _Count) || (iVar2 = ferror(_File), iVar2 == 0)) {
    *(undefined2 *)(sVar3 + (longlong)_Dst) = 0;
    FUN_140007610(param_1,(longlong)_Dst,sVar3 + 2);
  }
  else {
    piVar4 = _errno();
    strerror(*piVar4);
    FUN_140004c80(*param_1,0,0,"FILE","Error while reading file \'%s\': %s");
  }
                    // WARNING: Could not recover jumptable at 0x0001400075fd. Too many branches
                    // WARNING: Treating indirect jump as call
  fclose(_File);
  return;
}



void FUN_140007610(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_14000cf50(param_2,param_3);
  FUN_1400076d0(param_1);
  FUN_1400078b0((longlong)param_1);
  FUN_140007b90((longlong)param_1);
  FUN_140007cf0((longlong)param_1);
  uVar2 = 0;
  uVar3 = uVar2;
  if ((int)param_1[5] != 0) {
    do {
      lVar1 = param_1[4];
      if (*(int *)(uVar2 + 8 + lVar1) == 0) {
        *(undefined4 *)(uVar2 + 0x18 + lVar1) = 0xffffffff;
      }
      else if (**(int **)(uVar2 + lVar1) == 0xb) {
        *(int *)(uVar2 + 0x18 + lVar1) = (*(int **)(uVar2 + lVar1))[4];
      }
      else {
        *(undefined4 *)(uVar2 + 0x18 + lVar1) = 0;
      }
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 + 0x20;
    } while (uVar3 < *(uint *)(param_1 + 5));
  }
  FUN_140007e70(param_1);
  FUN_140008280(param_1);
  FUN_140008460((longlong)param_1);
  FUN_140008610(param_1);
  FUN_140008b30(param_1);
  FUN_14000d010();
  return;
}



// WARNING: Removing unreachable block (ram,0x000140007792)
// WARNING: Removing unreachable block (ram,0x000140007745)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400076d0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  void *pvVar5;
  void *pvVar6;
  char *pcVar7;
  char *_Src;
  uint uVar8;
  int iVar9;
  ulonglong _Size;
  void *pvVar10;
  
  DAT_1400132b8 = *param_1;
  pvVar10 = (void *)0x0;
  DAT_1400132c0 = 0;
  _DAT_1400132b0 = 0;
  do {
    uVar4 = FUN_14000bd40();
    iVar2 = (int)uVar4;
    pvVar5 = pvVar10;
    if ((iVar2 < 1) || ((3 < iVar2 && (1 < iVar2 - 9U)))) {
      pcVar7 = "";
      pvVar6 = pvVar10;
      _Src = "";
      if (DAT_140013260 != (char *)0x0) {
        pcVar7 = DAT_140013260;
        _Src = DAT_140013260;
      }
      do {
        uVar8 = (uint)pvVar6;
        if (*pcVar7 == '\0') break;
        uVar8 = uVar8 + 1;
        pcVar7 = pcVar7 + 1;
        pvVar6 = (void *)(ulonglong)uVar8;
      } while (uVar8 != 0xffffffff);
      _Size = (ulonglong)uVar8;
      if (uVar8 != 0) {
        pvVar5 = malloc((ulonglong)(uVar8 + 1));
        goto LAB_1400077a6;
      }
    }
    else {
      pcVar7 = "";
      pvVar6 = pvVar10;
      do {
        uVar8 = (uint)pvVar6;
        if (*pcVar7 == '\0') break;
        uVar8 = uVar8 + 1;
        pvVar6 = (void *)(ulonglong)uVar8;
        pcVar7 = pcVar7 + 1;
      } while (uVar8 != 0xffffffff);
      _Size = (ulonglong)uVar8;
      if (uVar8 != 0) {
        pvVar5 = malloc((ulonglong)(uVar8 + 1));
        _Src = "";
LAB_1400077a6:
        memcpy(pvVar5,_Src,_Size);
        *(undefined1 *)(_Size + (longlong)pvVar5) = 0;
      }
    }
    free((void *)0x0);
    free((void *)0x0);
    iVar9 = DAT_1400132c0;
    if (-1 < iVar2) {
      uVar8 = *(int *)(param_1 + 2) + 1;
      if (*(uint *)((longlong)param_1 + 0x14) < uVar8) {
        uVar3 = (*(uint *)((longlong)param_1 + 0x14) * 10 >> 3) + 0x10 & 0xfffffff0;
        if (uVar3 < uVar8) {
          uVar3 = uVar8;
        }
        *(uint *)((longlong)param_1 + 0x14) = uVar3;
        pvVar6 = realloc((void *)param_1[1],(ulonglong)(uVar3 * 0x18));
        param_1[1] = pvVar6;
      }
      piVar1 = (int *)(param_1[1] + (ulonglong)*(uint *)(param_1 + 2) * 0x18);
      if (piVar1 != (int *)0x0) {
        *piVar1 = iVar2;
        piVar1[1] = iVar9;
        iVar9 = (int)_Size;
        if (iVar9 == 0) {
          piVar1[2] = 0;
          piVar1[3] = 0;
          piVar1[4] = 0;
          piVar1[5] = 0;
        }
        else {
          piVar1[4] = iVar9;
          piVar1[5] = iVar9;
          pvVar6 = malloc((ulonglong)(iVar9 + 1U));
          *(void **)(piVar1 + 2) = pvVar6;
          memcpy(pvVar6,pvVar5,(ulonglong)(iVar9 + 1U));
        }
      }
      *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
    }
    free(pvVar5);
    if (iVar2 < 0) {
      DAT_1400132b8 = 0;
      _DAT_1400132b0 = 0;
      return;
    }
  } while( true );
}



void FUN_1400078b0(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong local_res8;
  void *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 local_30;
  
  uVar7 = 0;
  local_58 = 0x39;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_res8 = 0;
  uVar9 = uVar7;
  uVar11 = uVar7;
  uVar14 = uVar7;
  if (*(int *)(param_1 + 0x10) != 0) {
    do {
      lVar2 = *(longlong *)(param_1 + 8);
      iVar6 = *(int *)(uVar7 + lVar2);
      iVar10 = (int)uVar11;
      if (iVar6 == 3) {
        if (iVar10 != 0) goto LAB_140007930;
        uVar12 = *(int *)(param_1 + 0x28) + 1;
        if (*(uint *)(param_1 + 0x2c) < uVar12) {
          uVar13 = (*(uint *)(param_1 + 0x2c) * 10 >> 3) + 0x10 & 0xfffffff0;
          if (uVar13 < uVar12) {
            uVar13 = uVar12;
          }
          *(uint *)(param_1 + 0x2c) = uVar13;
          pvVar3 = realloc(*(void **)(param_1 + 0x20),(ulonglong)(uVar13 << 5));
          *(void **)(param_1 + 0x20) = pvVar3;
        }
        plVar8 = (longlong *)
                 ((ulonglong)*(uint *)(param_1 + 0x28) * 0x20 + *(longlong *)(param_1 + 0x20));
        if (plVar8 != (longlong *)0x0) {
          FUN_14000b7d0(plVar8,(longlong *)&local_68);
          *(undefined4 *)(plVar8 + 3) = local_50;
        }
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        local_48[0] = 0;
        local_48[1] = 0;
        local_38 = 0x39;
        FUN_14000b8d0((longlong *)&local_68,local_48);
        local_50 = local_30;
        free((void *)0x0);
        uVar14 = local_60 >> 0x20;
        uVar12 = (uint)local_60;
      }
      else {
        if (iVar6 == 9) {
          uVar11 = (ulonglong)(iVar10 + 1);
        }
        else if (iVar6 == 10) {
          uVar11 = (ulonglong)(iVar10 - 1);
        }
LAB_140007930:
        uVar12 = (int)uVar9 + 1;
        if ((uint)uVar14 < uVar12) {
          uVar13 = ((uint)uVar14 * 10 >> 3) + 0x10 & 0xfffffff0;
          if (uVar13 < uVar12) {
            uVar13 = uVar12;
          }
          uVar14 = (ulonglong)uVar13;
          local_60 = CONCAT44(uVar13,(uint)local_60);
          local_68 = realloc(local_68,(ulonglong)(uVar13 * 0x18));
        }
        puVar1 = (undefined4 *)((longlong)local_68 + uVar9 * 0x18);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(uVar7 + lVar2);
          puVar1[1] = *(undefined4 *)(uVar7 + 4 + lVar2);
          iVar6 = *(int *)(uVar7 + 0x10 + lVar2);
          if (iVar6 == 0) {
            *(undefined8 *)(puVar1 + 2) = 0;
            *(undefined8 *)(puVar1 + 4) = 0;
          }
          else {
            puVar1[4] = iVar6;
            puVar1[5] = iVar6;
            pvVar3 = malloc((ulonglong)(iVar6 + 1));
            *(void **)(puVar1 + 2) = pvVar3;
            memcpy(pvVar3,*(void **)(uVar7 + 8 + lVar2),(ulonglong)(iVar6 + 1));
          }
        }
        local_60 = CONCAT44(local_60._4_4_,uVar12);
      }
      uVar9 = (ulonglong)uVar12;
      local_res8 = local_res8 + 1;
      uVar7 = uVar7 + 0x18;
    } while (local_res8 < *(uint *)(param_1 + 0x10));
  }
  pvVar3 = local_68;
  uVar12 = *(int *)(param_1 + 0x28) + 1;
  if (*(uint *)(param_1 + 0x2c) < uVar12) {
    uVar13 = (*(uint *)(param_1 + 0x2c) * 10 >> 3) + 0x10 & 0xfffffff0;
    if (uVar13 < uVar12) {
      uVar13 = uVar12;
    }
    *(uint *)(param_1 + 0x2c) = uVar13;
    pvVar4 = realloc(*(void **)(param_1 + 0x20),(ulonglong)(uVar13 << 5));
    *(void **)(param_1 + 0x20) = pvVar4;
  }
  plVar8 = (longlong *)((ulonglong)*(uint *)(param_1 + 0x28) * 0x20 + *(longlong *)(param_1 + 0x20))
  ;
  if (plVar8 != (longlong *)0x0) {
    FUN_14000b7d0(plVar8,(longlong *)&local_68);
    *(undefined4 *)(plVar8 + 3) = local_50;
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar6 != 0) {
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 8) + 8 + (ulonglong)(iVar6 - 1) * 0x18);
    do {
      free((void *)*puVar5);
      *puVar5 = 0;
      puVar5 = puVar5 + -3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((int)uVar9 != 0) {
    puVar5 = (undefined8 *)((longlong)pvVar3 + (ulonglong)((int)uVar9 - 1) * 0x18 + 8);
    do {
      free((void *)*puVar5);
      *puVar5 = 0;
      puVar5 = puVar5 + -3;
      uVar12 = (int)uVar9 - 1;
      uVar9 = (ulonglong)uVar12;
    } while (uVar12 != 0);
  }
                    // WARNING: Could not recover jumptable at 0x000140007b84. Too many branches
                    // WARNING: Treating indirect jump as call
  free(pvVar3);
  return;
}



void FUN_140007b90(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar11;
  ulonglong uVar12;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  ulonglong uVar10;
  
  uVar4 = 0;
  uVar12 = uVar4;
  if (*(int *)(param_1 + 0x28) != 0) {
    do {
      uVar5 = *(uint *)(uVar12 + 8 + *(longlong *)(param_1 + 0x20));
      uVar6 = (ulonglong)uVar5;
      plVar1 = (longlong *)(uVar12 + *(longlong *)(param_1 + 0x20));
      lVar2 = local_res18;
      if (uVar5 != 0) {
        uVar11 = uVar5 - 1;
        uVar9 = (ulonglong)(int)uVar11;
        uVar8 = uVar11;
        if (-1 < (int)uVar11) {
          piVar7 = (int *)(*plVar1 + uVar9 * 0x18);
          uVar10 = uVar9;
          do {
            uVar8 = (uint)uVar10;
            if (*piVar7 != 0xb) break;
            uVar8 = uVar8 - 1;
            uVar10 = (ulonglong)uVar8;
            piVar7 = piVar7 + -6;
            uVar9 = uVar9 - 1;
          } while (-1 < (longlong)uVar9);
        }
        if (uVar8 == 0xffffffff) {
          if (uVar5 != 0) {
            puVar3 = (undefined8 *)(*plVar1 + 8 + (ulonglong)(uVar5 - 1) * 0x18);
            do {
              free((void *)*puVar3);
              *puVar3 = 0;
              puVar3 = puVar3 + -3;
              uVar5 = (int)uVar6 - 1;
              uVar6 = (ulonglong)uVar5;
            } while (uVar5 != 0);
          }
          *(undefined4 *)(plVar1 + 1) = 0;
          lVar2 = local_res18;
        }
        else if ((int)uVar8 < (int)uVar11) {
          local_res8 = *plVar1 + uVar6 * 0x18;
          local_res10 = *plVar1 + ((longlong)(int)uVar8 * 3 + 3) * 8;
          uVar5 = (uint)((local_res8 - local_res10) / 0x18);
          lVar2 = local_res10;
          if (uVar5 != 0) {
            FUN_14000ac90(plVar1,&local_res18,&local_res10,&local_res8,uVar5);
            lVar2 = local_res18;
          }
        }
      }
      local_res18 = lVar2;
      uVar4 = uVar4 + 1;
      uVar12 = uVar12 + 0x20;
    } while (uVar4 < *(uint *)(param_1 + 0x28));
  }
  return;
}



void FUN_140007cf0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *_Memory;
  void *pvVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar7;
  
  plVar7 = (longlong *)0x0;
  plVar8 = (longlong *)(param_1 + 0x20);
  _Memory = plVar7;
  if (*(int *)(param_1 + 0x28) != 0) {
    _Memory = realloc((void *)0x0,(ulonglong)(uint)(*(int *)(param_1 + 0x28) << 5));
  }
  lVar1 = *plVar8;
  if (*(int *)(param_1 + 0x28) != 0) {
    plVar10 = _Memory;
    do {
      if (plVar10 != (longlong *)0x0) {
        FUN_14000b7d0(plVar10,(longlong *)((longlong)plVar10 + (lVar1 - (longlong)_Memory)));
        *(undefined4 *)(plVar10 + 3) =
             *(undefined4 *)((longlong)plVar10 + (lVar1 - (longlong)_Memory) + 0x18);
      }
      uVar6 = (int)plVar7 + 1;
      plVar7 = (longlong *)(ulonglong)uVar6;
      plVar10 = plVar10 + 4;
    } while (uVar6 < *(uint *)(param_1 + 0x28));
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  FUN_14000ad70(plVar8);
  uVar11 = (ulonglong)uVar6;
  if (uVar6 != 0) {
    plVar7 = _Memory + 3;
    do {
      if ((int)plVar7[-2] != 0) {
        uVar4 = *(int *)(param_1 + 0x28) + 1;
        if (*(uint *)(param_1 + 0x2c) < uVar4) {
          uVar2 = (*(uint *)(param_1 + 0x2c) * 10 >> 3) + 0x10 & 0xfffffff0;
          if (uVar2 < uVar4) {
            uVar2 = uVar4;
          }
          *(uint *)(param_1 + 0x2c) = uVar2;
          pvVar3 = realloc((void *)*plVar8,(ulonglong)(uVar2 << 5));
          *plVar8 = (longlong)pvVar3;
        }
        plVar10 = (longlong *)((ulonglong)*(uint *)(param_1 + 0x28) * 0x20 + *plVar8);
        if (plVar10 != (longlong *)0x0) {
          FUN_14000b7d0(plVar10,plVar7 + -3);
          *(int *)(plVar10 + 3) = (int)*plVar7;
        }
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
      plVar7 = plVar7 + 4;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  plVar8 = _Memory + (ulonglong)(uVar6 - 1) * 4;
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    iVar9 = (int)plVar8[1];
    if (iVar9 != 0) {
      puVar5 = (undefined8 *)(*plVar8 + 8 + (ulonglong)(iVar9 - 1) * 0x18);
      do {
        free((void *)*puVar5);
        *puVar5 = 0;
        puVar5 = puVar5 + -3;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    *(undefined4 *)(plVar8 + 1) = 0;
    free((void *)*plVar8);
    plVar8 = plVar8 + -4;
  }
                    // WARNING: Could not recover jumptable at 0x000140007e5a. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}



void FUN_140007e70(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int *_Dst;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined7 extraout_var;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong local_res8;
  
  plVar2 = *(longlong **)*param_1;
  puVar7 = malloc(0xb0);
  uVar10 = (int)plVar2[1] + 1;
  if (*(uint *)((longlong)plVar2 + 0xc) < uVar10) {
    uVar6 = (*(uint *)((longlong)plVar2 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
    if (uVar6 < uVar10) {
      uVar6 = uVar10;
    }
    *(uint *)((longlong)plVar2 + 0xc) = uVar6;
    pvVar8 = realloc((void *)*plVar2,(ulonglong)(uVar6 << 3));
    *plVar2 = (longlong)pvVar8;
  }
  puVar14 = (undefined8 *)(*plVar2 + (ulonglong)*(uint *)(plVar2 + 1) * 8);
  if (puVar14 != (undefined8 *)0x0) {
    *puVar14 = puVar7;
  }
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  puVar12 = (undefined8 *)0x0;
  puVar14 = puVar12;
  if (puVar7 != (undefined8 *)0x0) {
    lVar3 = *param_1;
    *puVar7 = pxsl::PxslNode::vftable;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *(undefined4 *)(puVar7 + 3) = 0x39;
    puVar7[5] = 0;
    puVar7[6] = 0;
    *(undefined4 *)(puVar7 + 7) = 0x39;
    puVar7[0xb] = lVar3;
    puVar7[8] = 0;
    puVar7[9] = 0xffffffffffffffff;
    *(undefined4 *)(puVar7 + 10) = 6;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    *(undefined1 *)(puVar7 + 0xf) = 0;
    puVar7[0x10] = 0;
    puVar7[0x11] = 0;
    *(undefined4 *)(puVar7 + 0x12) = 0x39;
    puVar7[0x13] = 0;
    puVar7[0x14] = 0;
    *(undefined4 *)(puVar7 + 0x15) = 0x39;
    puVar14 = puVar7;
  }
  lVar3 = *param_1;
  param_1[7] = (longlong)puVar14;
  uVar10 = *(int *)(lVar3 + 0x78) + 1;
  if (*(uint *)(lVar3 + 0x7c) < uVar10) {
    uVar6 = (*(uint *)(lVar3 + 0x7c) * 10 >> 3) + 0x10 & 0xfffffff0;
    if (uVar6 < uVar10) {
      uVar6 = uVar10;
    }
    *(uint *)(lVar3 + 0x7c) = uVar6;
    pvVar8 = realloc(*(void **)(lVar3 + 0x70),(ulonglong)(uVar6 << 3));
    *(void **)(lVar3 + 0x70) = pvVar8;
  }
  puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x70) + (ulonglong)*(uint *)(lVar3 + 0x78) * 8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = puVar14;
  }
  *(int *)(lVar3 + 0x78) = *(int *)(lVar3 + 0x78) + 1;
  puVar7 = (undefined8 *)param_1[7];
  if ((int)param_1[5] != 0) {
    local_res8 = 0;
    puVar14 = puVar12;
    do {
      plVar2 = (longlong *)(local_res8 + param_1[4]);
      iVar11 = *(int *)(local_res8 + 0x18 + param_1[4]);
      if (iVar11 != -1) {
        iVar1 = *(int *)(puVar7 + 9);
        while (iVar11 <= iVar1) {
          puVar7 = (undefined8 *)puVar7[8];
          iVar1 = *(int *)(puVar7 + 9);
        }
        plVar4 = *(longlong **)*param_1;
        puVar9 = malloc(0xb0);
        uVar10 = (int)plVar4[1] + 1;
        if (*(uint *)((longlong)plVar4 + 0xc) < uVar10) {
          uVar6 = (*(uint *)((longlong)plVar4 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
          if (uVar6 < uVar10) {
            uVar6 = uVar10;
          }
          *(uint *)((longlong)plVar4 + 0xc) = uVar6;
          pvVar8 = realloc((void *)*plVar4,(ulonglong)(uVar6 << 3));
          *plVar4 = (longlong)pvVar8;
        }
        puVar13 = (undefined8 *)(*plVar4 + (ulonglong)*(uint *)(plVar4 + 1) * 8);
        if (puVar13 != (undefined8 *)0x0) {
          *puVar13 = puVar9;
        }
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        puVar13 = puVar12;
        if (puVar9 != (undefined8 *)0x0) {
          lVar3 = *param_1;
          *puVar9 = pxsl::PxslNode::vftable;
          puVar9[1] = 0;
          puVar9[2] = 0;
          *(undefined4 *)(puVar9 + 3) = 0x39;
          puVar9[5] = 0;
          puVar9[6] = 0;
          *(undefined4 *)(puVar9 + 7) = 0x39;
          puVar9[8] = 0;
          puVar9[9] = 0xffffffffffffffff;
          *(undefined4 *)(puVar9 + 10) = 6;
          puVar9[0xb] = lVar3;
          puVar9[0xd] = 0;
          puVar9[0xe] = 0;
          *(undefined1 *)(puVar9 + 0xf) = 0;
          puVar9[0x10] = 0;
          puVar9[0x11] = 0;
          *(undefined4 *)(puVar9 + 0x12) = 0x39;
          puVar9[0x13] = 0;
          puVar9[0x14] = 0;
          *(undefined4 *)(puVar9 + 0x15) = 0x39;
          puVar13 = puVar9;
        }
        lVar3 = *param_1;
        uVar10 = *(int *)(lVar3 + 0x78) + 1;
        if (*(uint *)(lVar3 + 0x7c) < uVar10) {
          uVar6 = (*(uint *)(lVar3 + 0x7c) * 10 >> 3) + 0x10 & 0xfffffff0;
          if (uVar6 < uVar10) {
            uVar6 = uVar10;
          }
          *(uint *)(lVar3 + 0x7c) = uVar6;
          pvVar8 = realloc(*(void **)(lVar3 + 0x70),(ulonglong)(uVar6 << 3));
          *(void **)(lVar3 + 0x70) = pvVar8;
        }
        puVar9 = (undefined8 *)
                 (*(longlong *)(lVar3 + 0x70) + (ulonglong)*(uint *)(lVar3 + 0x78) * 8);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = puVar13;
        }
        *(int *)(lVar3 + 0x78) = *(int *)(lVar3 + 0x78) + 1;
        FUN_14000b8d0(puVar13 + 1,plVar2);
        *(int *)(puVar13 + 4) = (int)plVar2[3];
        iVar1 = *(int *)(puVar13[1] + 4);
        puVar13[8] = puVar7;
        *(int *)(puVar13 + 9) = iVar11;
        *(int *)((longlong)puVar13 + 0x4c) = iVar1 + 1;
        uVar10 = *(int *)(puVar7 + 6) + 1;
        if (*(uint *)((longlong)puVar7 + 0x34) < uVar10) {
          uVar6 = (*(uint *)((longlong)puVar7 + 0x34) * 10 >> 3) + 0x10 & 0xfffffff0;
          if (uVar6 < uVar10) {
            uVar6 = uVar10;
          }
          *(uint *)((longlong)puVar7 + 0x34) = uVar6;
          pvVar8 = realloc((void *)puVar7[5],(ulonglong)(uVar6 << 3));
          puVar7[5] = pvVar8;
        }
        puVar9 = (undefined8 *)(puVar7[5] + (ulonglong)*(uint *)(puVar7 + 6) * 8);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = puVar13;
        }
        *(int *)(puVar7 + 6) = *(int *)(puVar7 + 6) + 1;
        _Dst = (int *)puVar13[1];
        if ((*_Dst == 0xb) && (_Dst != (int *)0x0)) {
          free(*(void **)(_Dst + 2));
          _Dst[2] = 0;
          _Dst[3] = 0;
          iVar11 = (*(int *)(puVar13 + 2) * 0x18 - (int)(_Dst + 6)) + *(int *)(puVar13 + 1);
          if (0 < iVar11) {
            memmove(_Dst,_Dst + 6,(longlong)iVar11);
          }
          *(int *)(puVar13 + 2) = *(int *)(puVar13 + 2) + -1;
        }
        cVar5 = FUN_140009e10(param_1,puVar13 + 1);
        iVar11 = (int)CONCAT71(extraout_var,cVar5);
        *(int *)(puVar13 + 10) = iVar11;
        if ((iVar11 != 4) && (iVar11 != 5)) {
          puVar7 = puVar13;
        }
      }
      puVar14 = (undefined8 *)((longlong)puVar14 + 1);
      local_res8 = local_res8 + 0x20;
    } while (puVar14 < (undefined8 *)(ulonglong)*(uint *)(param_1 + 5));
  }
  return;
}



void FUN_140008280(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *_Memory;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  longlong *local_res8;
  longlong local_res10;
  longlong *local_58;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  
  if (*(char *)(*param_1 + 0x66) != '\0') {
    uVar11 = 0x10;
    local_48 = 0x39;
    local_4c = 0x10;
    _Memory = realloc((void *)0x0,0x80);
    if (_Memory != (longlong *)0x0) {
      *_Memory = param_1[7];
    }
    uVar7 = 1;
    local_58 = _Memory;
    do {
      uVar6 = (int)uVar7 - 1;
      uVar7 = (ulonglong)uVar6;
      lVar2 = _Memory[uVar7];
      local_50 = uVar6;
      if ((((*(int *)(lVar2 + 0x30) != 0) && (*(int *)(lVar2 + 0x50) == 2)) &&
          (*(int *)(lVar2 + 0x10) != 0)) &&
         (pbVar8 = *(byte **)(*(longlong *)(lVar2 + 8) + 8), pbVar8 != (byte *)0x0)) {
        bVar12 = false;
        iVar3 = 0;
        bVar13 = true;
        lVar5 = 5;
        pbVar9 = &DAT_140010370;
        do {
          if (lVar5 == 0) break;
          lVar5 = lVar5 + -1;
          bVar12 = *pbVar8 < *pbVar9;
          bVar13 = *pbVar8 == *pbVar9;
          pbVar8 = pbVar8 + 1;
          pbVar9 = pbVar9 + 1;
        } while (bVar13);
        if (!bVar13) {
          iVar3 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        }
        if ((iVar3 == 0) && (*(char *)(*param_1 + 0x66) != '\0')) {
          FUN_140004c80(*param_1,1,*(undefined4 *)(lVar2 + 0x4c),
                        "EWarning::MacroDef_BodyWithChildren",
                        ",BODY statement has children (children will be ignored)");
        }
      }
      puVar10 = *(undefined8 **)(lVar2 + 0x28);
      iVar3 = 0;
      puVar1 = puVar10 + *(uint *)(lVar2 + 0x30);
      for (puVar4 = puVar10; puVar4 != puVar1; puVar4 = puVar4 + 1) {
        iVar3 = iVar3 + 1;
      }
      uVar6 = iVar3 + uVar6;
      if (uVar11 < uVar6) {
        local_4c = uVar6;
        _Memory = realloc(_Memory,(ulonglong)(uVar6 * 8));
        uVar11 = uVar6;
        local_58 = _Memory;
      }
      local_res8 = _Memory + ((longlong)(uVar7 * 8) >> 3);
      if (puVar10 != puVar1) {
        do {
          local_res8 = FUN_14000aec0((longlong *)&local_58,&local_res10,(longlong *)&local_res8,
                                     puVar10,1);
          puVar10 = puVar10 + 1;
          *local_res8 = *local_res8 + 8;
          local_res8 = (longlong *)*local_res8;
        } while (puVar10 != puVar1);
        uVar7 = (ulonglong)local_50;
        _Memory = local_58;
        uVar11 = local_4c;
      }
    } while ((int)uVar7 != 0);
    free(_Memory);
  }
  return;
}



void FUN_140008460(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 *_Memory;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int *piVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 *local_res10;
  longlong local_res18;
  undefined8 *local_48;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  
  uVar11 = 0x10;
  local_38 = 0x39;
  local_3c = 0x10;
  _Memory = realloc((void *)0x0,0x80);
  if (_Memory != (undefined8 *)0x0) {
    *_Memory = *(undefined8 *)(param_1 + 0x38);
  }
  uVar10 = 1;
  local_48 = _Memory;
  do {
    local_40 = (int)uVar10 - 1;
    uVar10 = (ulonglong)local_40;
    lVar2 = _Memory[uVar10];
    puVar8 = *(undefined8 **)(lVar2 + 0x28);
    puVar1 = puVar8 + *(uint *)(lVar2 + 0x30);
    iVar6 = 0;
    for (puVar4 = puVar8; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      iVar6 = iVar6 + 1;
    }
    uVar3 = local_40 + iVar6;
    if (uVar11 < uVar3) {
      local_3c = uVar3;
      _Memory = realloc(_Memory,(ulonglong)(uVar3 * 8));
      uVar11 = uVar3;
      local_48 = _Memory;
    }
    local_res10 = _Memory + ((longlong)(uVar10 * 8) >> 3);
    if (puVar8 != puVar1) {
      do {
        plVar5 = FUN_14000aec0((longlong *)&local_48,&local_res18,(longlong *)&local_res10,puVar8,1)
        ;
        puVar8 = puVar8 + 1;
        *plVar5 = *plVar5 + 8;
        local_res10 = (undefined8 *)*plVar5;
      } while (puVar8 != puVar1);
      uVar10 = (ulonglong)local_40;
      _Memory = local_48;
      uVar11 = local_3c;
    }
    iVar6 = *(int *)(lVar2 + 0x10) + -1;
    lVar7 = (longlong)iVar6;
    if (-1 < iVar6) {
      piVar9 = (int *)(*(longlong *)(lVar2 + 8) + lVar7 * 0x18);
      do {
        if ((*piVar9 != 0xb) && (*piVar9 == 0)) {
          *(undefined4 *)(lVar2 + 0x60) = 0;
          *(int *)(lVar2 + 100) = piVar9[1];
          FUN_140001690((undefined8 *)(lVar2 + 0x68),(undefined8 *)(piVar9 + 2));
          *(undefined1 *)(lVar2 + 0x78) = 1;
          break;
        }
        piVar9 = piVar9 + -6;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    if ((int)uVar10 == 0) {
                    // WARNING: Could not recover jumptable at 0x000140008602. Too many branches
                    // WARNING: Treating indirect jump as call
      free(_Memory);
      return;
    }
  } while( true );
}



void FUN_140008610(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  char cVar13;
  ulonglong uVar14;
  uint uVar15;
  uint local_res10;
  longlong *local_res18;
  longlong local_res20;
  char local_d8 [8];
  int local_d0;
  undefined4 local_cc;
  void *local_c8;
  undefined8 local_c0;
  int local_b8;
  undefined4 local_b4;
  void *local_b0;
  undefined8 local_a8;
  char local_a0;
  int local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  
  local_58 = 0x39;
  local_5c = 0x10;
  local_68 = realloc((void *)0x0,0x80);
  if (local_68 != (longlong *)0x0) {
    *local_68 = param_1[7];
  }
  uVar14 = 1;
  uVar15 = 0x10;
  do {
    local_res10 = (int)uVar14 - 1;
    uVar14 = (ulonglong)local_res10;
    iVar10 = 0;
    lVar2 = local_68[uVar14];
    puVar11 = *(undefined8 **)(lVar2 + 0x28);
    puVar1 = puVar11 + *(uint *)(lVar2 + 0x30);
    for (puVar8 = puVar11; puVar8 != puVar1; puVar8 = puVar8 + 1) {
      iVar10 = iVar10 + 1;
    }
    uVar7 = local_res10 + iVar10;
    local_60 = local_res10;
    if (uVar15 < uVar7) {
      local_5c = uVar7;
      local_68 = realloc(local_68,(ulonglong)(uVar7 * 8));
    }
    local_res18 = local_68 + ((longlong)(uVar14 * 8) >> 3);
    if (puVar11 != puVar1) {
      do {
        local_res18 = FUN_14000aec0((longlong *)&local_68,&local_res20,(longlong *)&local_res18,
                                    puVar11,1);
        puVar11 = puVar11 + 1;
        *local_res18 = *local_res18 + 8;
        local_res18 = (longlong *)*local_res18;
      } while (puVar11 != puVar1);
      uVar14 = (ulonglong)local_60;
      local_res10 = local_60;
    }
    iVar10 = *(int *)(lVar2 + 0x50);
    if ((((iVar10 != 1) && (iVar10 != 3)) && (iVar10 != 5)) && ((iVar10 != 4 && (iVar10 != 6)))) {
      if (*(int *)(lVar2 + 0x10) == 0) {
        if (*(char *)(*param_1 + 0x60) != '\0') {
          FUN_140004c80(*param_1,1,*(undefined4 *)(lVar2 + 0x4c),"EWarning::Internal",
                        "Empty statement in node");
        }
      }
      else {
        if ((**(int **)(lVar2 + 8) == 0xb) && (*(char *)(*param_1 + 0x60) != '\0')) {
          FUN_140004c80(*param_1,1,*(undefined4 *)(lVar2 + 0x4c),"EWarning::Internal",
                        "Space string in the beginning of stmt of node");
        }
        uVar14 = 1;
        cVar13 = '\0';
        local_c8 = (void *)0x0;
        local_c0 = 0;
        local_b0 = (void *)0x0;
        local_a8 = 0;
        bVar4 = false;
        bVar5 = false;
        if (1 < *(uint *)(lVar2 + 0x10)) {
          lVar12 = 0x18;
          do {
            lVar3 = *(longlong *)(lVar2 + 8);
            cVar6 = cVar13;
            if (bVar4) {
              if (bVar5) {
                if (*(int *)(lVar12 + lVar3) == 10) {
                  bVar4 = false;
                }
                else if (*(char *)(*param_1 + 0x62) != '\0') {
                  FUN_140004c80(*param_1,1,*(undefined4 *)(lVar2 + 0x4c),
                                "EWarning::IgnoringTokensInsidePxslFrag",
                                "Ignoring tokens inside pxsl fragment in named argument \'%s\'");
                }
              }
              else {
                iVar10 = *(int *)(lVar12 + lVar3);
                if (iVar10 == 4) {
                  local_b4 = *(undefined4 *)(lVar12 + 4 + lVar3);
                  bVar5 = true;
                  local_b8 = 4;
                  FUN_140001690(&local_b0,(undefined8 *)(lVar12 + 8 + lVar3));
LAB_140008a5a:
                  FUN_14000ae30((longlong *)(lVar2 + 0x80),local_d8);
                  local_90 = 0;
                  local_88 = 0;
                  local_78 = 0;
                  local_70 = 0;
                  local_d8[0] = local_a0;
                  local_d0 = local_98;
                  local_cc = local_94;
                  FUN_140001690(&local_c8,&local_90);
                  local_b8 = local_80;
                  local_b4 = local_7c;
                  FUN_140001690(&local_b0,&local_78);
                  free((void *)0x0);
                  free((void *)0x0);
                }
                else {
                  if (iVar10 == 10) {
                    pcVar9 = "Need to supply one meaningful token in pxsl fragment";
                  }
                  else {
                    if (iVar10 == 0xb) goto LAB_140008ac7;
                    pcVar9 = "Unexpected token inside pxsl fragment for named argument value";
                  }
                  FUN_140004c80(*param_1,0,*(undefined4 *)(lVar2 + 0x4c),"ARG",pcVar9);
                }
              }
            }
            else {
              iVar10 = *(int *)(lVar12 + lVar3);
              if (iVar10 == 6) {
                local_cc = *(undefined4 *)(lVar12 + 4 + lVar3);
                local_d0 = iVar10;
                FUN_140001690(&local_c8,(undefined8 *)(lVar12 + 8 + lVar3));
                local_d8[0] = '\x01';
                cVar6 = '\x01';
              }
              else if (iVar10 == 9) {
                bVar5 = false;
                bVar4 = true;
                cVar6 = '\0';
                local_d8[0] = cVar13;
              }
              else if (cVar13 == '\0') {
                if ((iVar10 == 5) || ((6 < iVar10 && ((iVar10 < 9 || (iVar10 == 0xc)))))) {
                  local_b4 = *(undefined4 *)(lVar12 + 4 + lVar3);
                  local_b8 = iVar10;
                  FUN_140001690(&local_b0,(undefined8 *)(lVar12 + 8 + lVar3));
                  local_48 = 0;
                  local_40 = 0;
                  local_d0 = local_50;
                  local_cc = local_4c;
                  local_d8[0] = '\0';
                  FUN_140001690(&local_c8,&local_48);
                  free((void *)0x0);
                  goto LAB_140008a5a;
                }
              }
              else if ((iVar10 == 5) || ((6 < iVar10 && ((iVar10 < 9 || (iVar10 == 0xc)))))) {
                local_b4 = *(undefined4 *)(lVar12 + 4 + lVar3);
                local_b8 = iVar10;
                FUN_140001690(&local_b0,(undefined8 *)(lVar12 + 8 + lVar3));
                FUN_14000ae30((longlong *)(lVar2 + 0x80),local_d8);
                local_90 = 0;
                local_88 = 0;
                local_78 = 0;
                local_70 = 0;
                local_d8[0] = local_a0;
                local_d0 = local_98;
                local_cc = local_94;
                FUN_140001690(&local_c8,&local_90);
                local_b8 = local_80;
                local_b4 = local_7c;
                FUN_140001690(&local_b0,&local_78);
                free((void *)0x0);
                free((void *)0x0);
                local_d8[0] = '\0';
                cVar6 = '\0';
              }
              else {
                FUN_140004c80(*param_1,0,*(undefined4 *)(lVar2 + 0x4c),"ARG",
                              "Invalid token %d after named argument\n");
                local_d8[0] = '\0';
                cVar6 = '\0';
              }
            }
LAB_140008ac7:
            cVar13 = cVar6;
            uVar14 = uVar14 + 1;
            lVar12 = lVar12 + 0x18;
          } while (uVar14 < *(uint *)(lVar2 + 0x10));
        }
        free(local_b0);
        free(local_c8);
        uVar14 = (ulonglong)local_res10;
      }
    }
    uVar15 = local_5c;
    if ((int)uVar14 == 0) {
                    // WARNING: Could not recover jumptable at 0x000140008b20. Too many branches
                    // WARNING: Treating indirect jump as call
      free(local_68);
      return;
    }
  } while( true );
}



void FUN_140008b30(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  void *pvVar6;
  void *pvVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint local_res10;
  longlong *local_res18;
  longlong local_res20;
  longlong *local_98;
  uint local_90;
  uint local_8c;
  undefined4 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  
  local_88 = 0x39;
  local_8c = 0x10;
  local_98 = realloc((void *)0x0,0x80);
  if (local_98 != (longlong *)0x0) {
    *local_98 = param_1[7];
  }
  uVar13 = 1;
  uVar14 = 0x10;
  do {
    local_res10 = (int)uVar13 - 1;
    uVar13 = (ulonglong)local_res10;
    iVar8 = 0;
    lVar1 = local_98[uVar13];
    puVar9 = *(undefined8 **)(lVar1 + 0x28);
    puVar11 = puVar9 + *(uint *)(lVar1 + 0x30);
    for (puVar4 = puVar9; puVar4 != puVar11; puVar4 = puVar4 + 1) {
      iVar8 = iVar8 + 1;
    }
    uVar3 = local_res10 + iVar8;
    local_90 = local_res10;
    if (uVar14 < uVar3) {
      local_8c = uVar3;
      local_98 = realloc(local_98,(ulonglong)(uVar3 * 8));
    }
    local_res18 = local_98 + ((longlong)(uVar13 * 8) >> 3);
    if (puVar9 != puVar11) {
      do {
        local_res18 = FUN_14000aec0((longlong *)&local_98,&local_res20,(longlong *)&local_res18,
                                    puVar9,1);
        puVar9 = puVar9 + 1;
        *local_res18 = *local_res18 + 8;
        local_res18 = (longlong *)*local_res18;
      } while (puVar9 != puVar11);
      uVar13 = (ulonglong)local_90;
      local_res10 = local_90;
    }
    if (*(int *)(lVar1 + 0x50) == 1) {
      if (*(int *)(lVar1 + 0x10) == 0) {
        FUN_140004c80(*param_1,0,*(undefined4 *)(lVar1 + 0x4c),"INTERNAL",
                      "Empty stmt with macro def type!");
      }
      else {
        lVar12 = *(longlong *)(lVar1 + 8);
        uVar10 = 0;
        local_80 = (void *)0x0;
        local_78 = 0;
        local_70 = (void *)0x0;
        local_68 = 0;
        local_60 = 0x39;
        uVar13 = uVar10;
        if (&local_80 != (void **)(lVar12 + 8)) {
          if (*(int *)(lVar12 + 0x10) == 0) {
            free((void *)0x0);
            local_80 = (void *)0x0;
            local_78 = 0;
          }
          else {
            free((void *)0x0);
            iVar8 = *(int *)(lVar12 + 0x10);
            local_78 = CONCAT44(iVar8,iVar8);
            local_80 = malloc((ulonglong)(iVar8 + 1U));
            memcpy(local_80,*(void **)(lVar12 + 8),(ulonglong)(iVar8 + 1U));
          }
          uVar13 = local_68 >> 0x20;
        }
        uVar5 = (ulonglong)*(uint *)(lVar1 + 0x10);
        uVar15 = 1;
        local_58 = lVar1;
        if (1 < uVar5) {
          lVar12 = 0x18;
          do {
            lVar2 = *(longlong *)(lVar1 + 8);
            iVar8 = *(int *)(lVar12 + lVar2);
            if (iVar8 == 5) {
              uVar14 = (int)uVar10 + 1;
              if ((uint)uVar13 < uVar14) {
                uVar3 = ((uint)uVar13 * 10 >> 3) + 0x10 & 0xfffffff0;
                if (uVar3 < uVar14) {
                  uVar3 = uVar14;
                }
                local_68 = CONCAT44(uVar3,(undefined4)local_68);
                local_70 = realloc(local_70,(ulonglong)(uVar3 << 4));
              }
              puVar11 = (undefined8 *)(uVar10 * 0x10 + (longlong)local_70);
              if (puVar11 != (undefined8 *)0x0) {
                iVar8 = *(int *)(lVar12 + 0x10 + lVar2);
                if (iVar8 != 0) {
                  *(int *)(puVar11 + 1) = iVar8;
                  *(int *)((longlong)puVar11 + 0xc) = iVar8;
                  pvVar6 = malloc((ulonglong)(iVar8 + 1));
                  *puVar11 = pvVar6;
                  memcpy(pvVar6,*(void **)(lVar12 + 8 + lVar2),(ulonglong)(iVar8 + 1));
                  uVar10 = (ulonglong)uVar14;
                  local_68 = CONCAT44(local_68._4_4_,uVar14);
                  goto LAB_140008e50;
                }
                *puVar11 = 0;
                puVar11[1] = 0;
              }
              uVar10 = (ulonglong)uVar14;
              local_68 = CONCAT44(local_68._4_4_,uVar14);
            }
            else if (iVar8 == 2) {
              if ((uVar15 != (int)uVar5 - 1) && (*(char *)(*param_1 + 0x60) != '\0')) {
                FUN_140004c80(*param_1,1,*(undefined4 *)(lVar1 + 0x4c),"EWarning::Internal",
                              "Assignment in macro def \',%s\' not on the end of the line!\n");
              }
            }
            else if (iVar8 != 0xb) {
              FUN_140004c80(*param_1,0,*(undefined4 *)(lVar1 + 0x4c),"MACRO",
                            "Unexpected token in macro def: %d with data \'%s\'\n");
            }
LAB_140008e50:
            uVar5 = (ulonglong)*(uint *)(lVar1 + 0x10);
            uVar13 = local_68 >> 0x20;
            uVar15 = uVar15 + 1;
            lVar12 = lVar12 + 0x18;
          } while (uVar15 < uVar5);
        }
        lVar12 = *(longlong *)(lVar1 + 0x40);
        uVar14 = *(int *)(lVar12 + 0xa0) + 1;
        if (*(uint *)(lVar12 + 0xa4) < uVar14) {
          uVar3 = (*(uint *)(lVar12 + 0xa4) * 10 >> 3) + 0x10 & 0xfffffff0;
          if (uVar3 < uVar14) {
            uVar3 = uVar14;
          }
          *(uint *)(lVar12 + 0xa4) = uVar3;
          pvVar6 = realloc(*(void **)(lVar12 + 0x98),(ulonglong)(uVar3 * 0x30));
          *(void **)(lVar12 + 0x98) = pvVar6;
        }
        puVar11 = (undefined8 *)
                  ((ulonglong)*(uint *)(lVar12 + 0xa0) * 0x30 + *(longlong *)(lVar12 + 0x98));
        pvVar6 = local_80;
        if (puVar11 != (undefined8 *)0x0) {
          if ((int)local_78 == 0) {
            *puVar11 = 0;
            puVar11[1] = 0;
          }
          else {
            *(int *)(puVar11 + 1) = (int)local_78;
            *(int *)((longlong)puVar11 + 0xc) = (int)local_78;
            uVar14 = (int)local_78 + 1;
            pvVar7 = malloc((ulonglong)uVar14);
            pvVar6 = local_80;
            *puVar11 = pvVar7;
            memcpy(pvVar7,local_80,(ulonglong)uVar14);
          }
          FUN_1400059b0(puVar11 + 2,(longlong *)&local_70);
          puVar11[5] = lVar1;
        }
        pvVar7 = local_70;
        *(int *)(lVar12 + 0xa0) = *(int *)(lVar12 + 0xa0) + 1;
        uVar14 = (uint)uVar10;
        puVar11 = (undefined8 *)((ulonglong)(uVar14 - 1) * 0x10 + (longlong)local_70);
        while (uVar14 != 0) {
          free((void *)*puVar11);
          *puVar11 = 0;
          puVar11 = puVar11 + -2;
          uVar14 = (int)uVar10 - 1;
          uVar10 = (ulonglong)uVar14;
        }
        free(pvVar7);
        free(pvVar6);
        uVar13 = (ulonglong)local_res10;
      }
    }
    uVar14 = local_8c;
    if ((int)uVar13 == 0) {
                    // WARNING: Could not recover jumptable at 0x000140008fa5. Too many branches
                    // WARNING: Treating indirect jump as call
      free(local_98);
      return;
    }
  } while( true );
}



void FUN_140008fb0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *_Memory;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 *local_res10;
  longlong local_res18;
  undefined8 *local_48;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  
  uVar9 = 0x10;
  local_38 = 0x39;
  local_3c = 0x10;
  _Memory = realloc((void *)0x0,0x80);
  if (_Memory != (undefined8 *)0x0) {
    *_Memory = param_2;
  }
  uVar8 = 1;
  local_48 = _Memory;
  do {
    uVar7 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar7;
    lVar2 = _Memory[uVar8];
    local_40 = uVar7;
    if (*(int *)(lVar2 + 0x50) != 1) {
      FUN_140009a60(param_1,lVar2);
      puVar6 = *(undefined8 **)(lVar2 + 0x28);
      puVar1 = puVar6 + *(uint *)(lVar2 + 0x30);
      iVar5 = 0;
      for (puVar3 = puVar6; puVar3 != puVar1; puVar3 = puVar3 + 1) {
        iVar5 = iVar5 + 1;
      }
      uVar7 = iVar5 + uVar7;
      if (uVar9 < uVar7) {
        local_3c = uVar7;
        _Memory = realloc(_Memory,(ulonglong)(uVar7 * 8));
        uVar9 = uVar7;
        local_48 = _Memory;
      }
      local_res10 = _Memory + ((longlong)(uVar8 * 8) >> 3);
      if (puVar6 != puVar1) {
        do {
          plVar4 = FUN_14000aec0((longlong *)&local_48,&local_res18,(longlong *)&local_res10,puVar6,
                                 1);
          puVar6 = puVar6 + 1;
          *plVar4 = *plVar4 + 8;
          local_res10 = (undefined8 *)*plVar4;
        } while (puVar6 != puVar1);
        uVar8 = (ulonglong)local_40;
        _Memory = local_48;
        uVar9 = local_3c;
      }
    }
  } while ((int)uVar8 != 0);
                    // WARNING: Could not recover jumptable at 0x000140009111. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}



// WARNING: Removing unreachable block (ram,0x000140009893)

void FUN_140009120(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  byte *pbVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  void *pvVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined7 extraout_var;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong *_Dst;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  byte *pbVar22;
  undefined8 *puVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  bool bVar27;
  bool bVar28;
  undefined8 *local_res10;
  longlong local_res18;
  longlong *local_res20;
  longlong *local_e0;
  void *local_d8;
  undefined8 *local_d0;
  uint local_c8;
  uint local_c4;
  undefined4 local_c0;
  uint local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  
  uVar20 = 0;
  local_b0 = (longlong *)0x0;
  local_a8 = 0;
  local_a0 = 0x39;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(int *)(param_2 + 0x11) != 0) {
    lVar25 = 0;
    lVar21 = 0;
    while (lVar19 = param_2[0x10], *(char *)(lVar21 + lVar19) == '\0') {
      if (*(uint *)(local_res18 + 0x18) <= uVar20) {
        if (*(char *)(*param_1 + 99) != '\0') {
          FUN_140004c80(*param_1,1,*(undefined4 *)((longlong)param_2 + 0x4c),
                        "EWarning::MacroApp_TooManyUnnamedArgs",
                        "Too many unnamed args for macro \',%s\' application");
        }
        break;
      }
      plVar9 = FUN_14000b040((longlong *)&local_b0,
                             (longlong *)(lVar25 + *(longlong *)(local_res18 + 0x10)));
      *plVar9 = lVar21 + 0x20 + lVar19;
      uVar20 = uVar20 + 1;
      lVar21 = lVar21 + 0x38;
      lVar25 = lVar25 + 0x10;
      if (*(uint *)(param_2 + 0x11) <= uVar20) break;
    }
  }
  local_e0 = (longlong *)0x0;
  lVar21 = local_res18;
  if (*(int *)(local_res18 + 0x18) != 0) {
    local_d8 = (void *)0x0;
    do {
      uVar20 = 0;
      plVar9 = (longlong *)((longlong)local_d8 + *(longlong *)(lVar21 + 0x10));
      if (*(int *)(param_2 + 0x11) != 0) {
        lVar25 = 0;
        do {
          pbVar10 = (byte *)*plVar9;
          lVar21 = param_2[0x10];
          if ((pbVar10 == (byte *)0x0) ||
             (lVar19 = *(longlong *)(lVar25 + 0x10 + lVar21), lVar19 == 0)) {
            iVar6 = (int)plVar9[1] - *(int *)(lVar25 + 0x18 + lVar21);
          }
          else {
            lVar19 = lVar19 - (longlong)pbVar10;
            do {
              bVar1 = *pbVar10;
              if (bVar1 != pbVar10[lVar19]) {
                uVar18 = (uint)(bVar1 < pbVar10[lVar19]);
                iVar6 = (1 - uVar18) - (uint)(uVar18 != 0);
                goto LAB_140009293;
              }
              pbVar10 = pbVar10 + 1;
            } while (bVar1 != 0);
            iVar6 = 0;
          }
LAB_140009293:
          if (iVar6 == 0) {
            FUN_14000b5e0((longlong *)&local_b0,&local_90,plVar9);
            if (((local_90 != local_88) && (*(char *)(lVar25 + lVar21) != '\0')) &&
               (*(char *)(*param_1 + 100) != '\0')) {
              FUN_140004c80(*param_1,1,*(undefined4 *)((longlong)param_2 + 0x4c),
                            "EWarning::MacroApp_DuplicateArg",
                            "Duplicate argument \'%s\' for macro \',%s\'");
            }
            plVar11 = FUN_14000b040((longlong *)&local_b0,plVar9);
            *plVar11 = lVar25 + 0x20 + lVar21;
          }
          uVar20 = uVar20 + 1;
          lVar25 = lVar25 + 0x38;
          lVar21 = local_res18;
        } while (uVar20 < *(uint *)(param_2 + 0x11));
      }
      local_e0 = (longlong *)((longlong)local_e0 + 1);
      local_d8 = (void *)((longlong)local_d8 + 0x10);
    } while (local_e0 < (longlong *)(ulonglong)*(uint *)(lVar21 + 0x18));
  }
  local_78 = *(longlong *)(lVar21 + 0x28);
  puVar12 = FUN_140006230(local_78);
  iVar6 = *(int *)(param_2 + 6);
  local_c0 = *(undefined4 *)(puVar12 + 7);
  plVar9 = puVar12 + 5;
  uVar18 = *(uint *)(puVar12 + 6);
  bVar4 = false;
  local_d0 = (undefined8 *)0x0;
  local_c4 = 0;
  local_98 = puVar12;
  local_80 = plVar9;
  if (uVar18 != 0) {
    local_c4 = uVar18;
    local_d0 = realloc((void *)0x0,(ulonglong)(uVar18 << 3));
  }
  lVar21 = *plVar9;
  uVar18 = 0;
  if (*(int *)(puVar12 + 6) != 0) {
    puVar17 = local_d0;
    do {
      if (puVar17 != (undefined8 *)0x0) {
        *puVar17 = *(undefined8 *)((lVar21 - (longlong)local_d0) + (longlong)puVar17);
      }
      uVar18 = uVar18 + 1;
      puVar17 = puVar17 + 1;
    } while (uVar18 < *(uint *)(puVar12 + 6));
  }
  uVar18 = *(uint *)(puVar12 + 6);
  uVar20 = (ulonglong)uVar18;
  puVar17 = local_res10;
  do {
    local_res10 = puVar17;
    if (uVar18 == 0) {
      if (*(char *)(param_2 + 0xf) != '\0') {
        puVar17 = FUN_140006230((longlong)param_2);
        *(undefined4 *)(puVar17 + 10) = 3;
        *(undefined4 *)(puVar17 + 6) = 0;
        iVar7 = *(int *)(puVar17 + 2);
        local_res10 = puVar17;
        if (iVar7 != 0) {
          puVar23 = (undefined8 *)(puVar17[1] + 8 + (ulonglong)(iVar7 - 1) * 0x18);
          do {
            free((void *)*puVar23);
            *puVar23 = 0;
            puVar23 = puVar23 + -3;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        *(undefined4 *)(puVar17 + 2) = 0;
        if (*(int *)((longlong)puVar17 + 0x14) == 0) {
          *(undefined4 *)((longlong)puVar17 + 0x14) = 0x10;
          pvVar13 = realloc((void *)puVar17[1],0x180);
          puVar17[1] = pvVar13;
        }
        puVar2 = (undefined4 *)(puVar17[1] + (ulonglong)*(uint *)(puVar17 + 2) * 0x18);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *(undefined4 *)(param_2 + 0xc);
          puVar2[1] = *(undefined4 *)((longlong)param_2 + 100);
          iVar7 = *(int *)(param_2 + 0xe);
          if (iVar7 == 0) {
            *(undefined8 *)(puVar2 + 2) = 0;
            *(undefined8 *)(puVar2 + 4) = 0;
          }
          else {
            puVar2[4] = iVar7;
            puVar2[5] = iVar7;
            pvVar13 = malloc((ulonglong)(iVar7 + 1));
            *(void **)(puVar2 + 2) = pvVar13;
            memcpy(pvVar13,(void *)param_2[0xd],(ulonglong)(iVar7 + 1));
          }
        }
        *(int *)(puVar17 + 2) = *(int *)(puVar17 + 2) + 1;
        local_98 = (undefined8 *)*plVar9;
        FUN_14000aec0(plVar9,&local_90,(longlong *)&local_98,&local_res10,1);
      }
      uVar20 = 0;
      FUN_14000bc80(local_res20,*local_res20 + (ulonglong)*(uint *)(local_res20 + 1) * 8,
                    (undefined8 *)*plVar9,(undefined8 *)*plVar9 + *(uint *)(plVar9 + 1));
      if (*(int *)(puVar12 + 6) != 0) {
        do {
          uVar20 = uVar20 + 1;
          *(undefined8 *)(*(longlong *)(*plVar9 + -8 + uVar20 * 8) + 0x40) = param_2[8];
        } while (uVar20 < *(uint *)(puVar12 + 6));
      }
      if (((!bVar4) && (iVar6 != 0)) && (*(char *)(*param_1 + 0x65) != '\0')) {
        FUN_140004c80(*param_1,1,*(undefined4 *)((longlong)param_2 + 0x4c),
                      "EWarning::MacroApp_IgnoringChildren",
                      "Application of macro \',%s\' that doesn\'t contain ,BODY statement has children statements - will be ignored."
                     );
      }
      free(local_d0);
      plVar9 = local_b0;
      while (plVar9 != (longlong *)0x0) {
        FUN_14000b760(&local_b0,(undefined8 *)plVar9[2]);
        plVar11 = (longlong *)*plVar9;
        free((void *)plVar9[-3]);
        plVar9[-3] = 0;
        free(plVar9 + -3);
        plVar9 = plVar11;
      }
      return;
    }
    uVar18 = (int)uVar20 - 1;
    uVar20 = (ulonglong)uVar18;
    lVar21 = local_d0[uVar20];
    *(undefined4 *)(lVar21 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
    local_c8 = uVar18;
    local_b8 = uVar18;
    if (*(int *)(lVar21 + 0x50) == 2) {
      puVar2 = *(undefined4 **)(lVar21 + 8);
      if (*(byte **)(puVar2 + 2) == (byte *)0x0) {
LAB_140009667:
        FUN_14000b5e0((longlong *)&local_b0,&local_60,(longlong *)(puVar2 + 2));
        param_2 = local_res10;
        if (local_60 != local_58) {
          plVar9 = FUN_14000b040((longlong *)&local_b0,(longlong *)(puVar2 + 2));
          puVar3 = (undefined4 *)*plVar9;
          *puVar2 = *puVar3;
          puVar2[1] = puVar3[1];
          FUN_140001690((undefined8 *)(puVar2 + 2),(undefined8 *)(puVar3 + 2));
          cVar5 = FUN_140009e10(param_1,(undefined8 *)(lVar21 + 8));
          *(int *)(lVar21 + 0x50) = (int)CONCAT71(extraout_var,cVar5);
          param_2 = local_res10;
        }
        goto LAB_1400096c8;
      }
      bVar27 = false;
      iVar7 = 0;
      bVar28 = true;
      lVar25 = 5;
      pbVar10 = *(byte **)(puVar2 + 2);
      pbVar22 = &DAT_140010370;
      do {
        if (lVar25 == 0) break;
        lVar25 = lVar25 + -1;
        bVar27 = *pbVar10 < *pbVar22;
        bVar28 = *pbVar10 == *pbVar22;
        pbVar10 = pbVar10 + 1;
        pbVar22 = pbVar22 + 1;
      } while (bVar28);
      if (!bVar28) {
        iVar7 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
      }
      if (iVar7 != 0) goto LAB_140009667;
      lVar25 = *(longlong *)(lVar21 + 0x40);
      bVar4 = true;
      plVar9 = (longlong *)(*(longlong *)(lVar25 + 0x28) + (ulonglong)*(uint *)(lVar25 + 0x30) * 8);
      for (plVar11 = *(longlong **)(lVar25 + 0x28);
          (local_e0 = plVar9, plVar11 != plVar9 && (local_e0 = plVar11, *plVar11 != lVar21));
          plVar11 = plVar11 + 1) {
      }
      plVar9 = local_e0;
      if (*(int *)(puVar17 + 6) != 0) {
        uVar24 = 0;
        uVar18 = *(uint *)(local_78 + 0x30);
        local_d8 = (void *)0x0;
        uVar26 = 0;
        if (uVar18 != 0) {
          local_d8 = realloc((void *)0x0,(ulonglong)(uVar18 << 3));
          uVar26 = uVar18;
        }
        uVar20 = 0;
        pvVar13 = local_d8;
        if (*(int *)(puVar17 + 6) != 0) {
          do {
            puVar12 = FUN_140006230(*(longlong *)(puVar17[5] + uVar20 * 8));
            uVar18 = uVar24 + 1;
            puVar12[8] = *(undefined8 *)(lVar21 + 0x40);
            if (uVar26 < uVar18) {
              uVar26 = (uVar26 * 10 >> 3) + 0x10 & 0xfffffff0;
              if (uVar26 < uVar18) {
                uVar26 = uVar18;
              }
              pvVar13 = realloc(pvVar13,(ulonglong)(uVar26 * 8));
            }
            puVar17 = (undefined8 *)((longlong)pvVar13 + (ulonglong)uVar24 * 8);
            if (puVar17 != (undefined8 *)0x0) {
              *puVar17 = puVar12;
            }
            uVar20 = uVar20 + 1;
            plVar9 = local_e0;
            puVar17 = local_res10;
            uVar24 = uVar18;
          } while (uVar20 < *(uint *)(local_res10 + 6));
        }
        local_d8 = pvVar13;
        pvVar13 = local_d8;
        FUN_14000bc80((longlong *)(*(longlong *)(lVar21 + 0x40) + 0x28),(longlong)plVar9,
                      (undefined8 *)puVar17[5],(undefined8 *)puVar17[5] + *(uint *)(puVar17 + 6));
        free(pvVar13);
        uVar20 = (ulonglong)local_b8;
      }
      lVar25 = *(longlong *)(lVar21 + 0x40);
      plVar14 = *(longlong **)(lVar25 + 0x28);
      plVar9 = plVar14 + *(uint *)(lVar25 + 0x30);
      plVar11 = plVar14 + *(uint *)(lVar25 + 0x30);
      _Dst = plVar14;
      for (; plVar14 != plVar11; plVar14 = plVar14 + 1) {
        if (*plVar14 != lVar21) {
          if (_Dst != plVar14) {
            lVar25 = *_Dst;
            *_Dst = *plVar14;
            *plVar14 = lVar25;
          }
          _Dst = _Dst + 1;
        }
      }
      lVar25 = *(longlong *)(lVar21 + 0x40);
      iVar7 = (int)((longlong)plVar9 - (longlong)_Dst >> 3);
      if (iVar7 != 0) {
        uVar15 = (longlong)
                 (((ulonglong)*(uint *)(lVar25 + 0x30) * 8 - (longlong)plVar9) +
                 *(longlong *)(lVar25 + 0x28)) >> 3;
        if ((int)uVar15 != 0) {
          memmove(_Dst,plVar9,(uVar15 & 0xffffffff) << 3);
        }
        *(int *)(lVar25 + 0x30) = *(int *)(lVar25 + 0x30) - iVar7;
      }
      if ((*(int *)(lVar21 + 0x30) != 0) && (*(char *)(*param_1 + 0x67) != '\0')) {
        FUN_140004c80(*param_1,1,*(undefined4 *)(lVar21 + 0x4c),
                      "EWarning::MacroDef_IgnoringChildren",
                      "Children of this macro argument will be ignored!\n");
      }
    }
    else {
LAB_1400096c8:
      puVar17 = param_2;
      puVar23 = *(undefined8 **)(lVar21 + 0x28);
      puVar12 = puVar23 + *(uint *)(lVar21 + 0x30);
      iVar7 = 0;
      for (puVar16 = puVar23; puVar16 != puVar12; puVar16 = puVar16 + 1) {
        iVar7 = iVar7 + 1;
      }
      uVar18 = iVar7 + uVar18;
      if (local_c4 < uVar18) {
        local_c4 = uVar18;
        local_d0 = realloc(local_d0,(ulonglong)(uVar18 * 8));
      }
      local_e0 = local_d0 + ((longlong)(uVar20 * 8) >> 3);
      if (puVar23 != puVar12) {
        do {
          local_e0 = FUN_14000aec0((longlong *)&local_d0,&local_90,(longlong *)&local_e0,puVar23,1);
          puVar23 = puVar23 + 1;
          *local_e0 = *local_e0 + 8;
          local_e0 = (longlong *)*local_e0;
        } while (puVar23 != puVar12);
        uVar20 = (ulonglong)local_c8;
      }
    }
    uVar15 = 0;
    if (*(int *)(lVar21 + 0x88) != 0) {
      lVar25 = 0;
      do {
        lVar19 = *(longlong *)(lVar21 + 0x80);
        if (*(int *)(lVar25 + 0x20 + lVar19) == 4) {
          plVar9 = (longlong *)(lVar25 + 0x28 + lVar19);
          FUN_14000b5e0((longlong *)&local_b0,&local_70,plVar9);
          if (local_70 == local_68) {
            puVar12 = &DAT_1400134d8;
            *(undefined4 *)(lVar25 + 0x20 + lVar19) = DAT_1400134d0;
            uVar8 = DAT_1400134d4;
          }
          else {
            plVar9 = FUN_14000b040((longlong *)&local_b0,plVar9);
            puVar2 = (undefined4 *)*plVar9;
            puVar12 = (undefined8 *)(puVar2 + 2);
            *(undefined4 *)(lVar25 + 0x20 + lVar19) = *puVar2;
            uVar8 = puVar2[1];
          }
          *(undefined4 *)(lVar25 + 0x24 + lVar19) = uVar8;
          FUN_140001690((undefined8 *)(lVar25 + 0x28 + lVar19),puVar12);
        }
        uVar15 = uVar15 + 1;
        lVar25 = lVar25 + 0x38;
      } while (uVar15 < *(uint *)(lVar21 + 0x88));
    }
    uVar18 = (uint)uVar20;
    plVar9 = local_80;
    param_2 = puVar17;
    puVar12 = local_98;
    puVar17 = local_res10;
  } while( true );
}



void FUN_140009a60(longlong *param_1,longlong param_2)

{
  void **ppvVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  ulonglong uVar5;
  void *_Memory;
  byte *pbVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  int iVar17;
  uint uVar18;
  uint local_res18;
  int local_res20;
  ulonglong local_68;
  byte *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  local_res20 = 0;
  do {
    uVar5 = FUN_140006630(param_2);
    if ((char)uVar5 == '\0') break;
    _Memory = (void *)0x0;
    uVar5 = 0;
    uVar18 = 0;
    local_40 = 0x39;
    local_50 = (void *)0x0;
    local_48 = 0;
    local_68 = 0;
    local_res18 = 0;
    if (*(int *)(param_2 + 0x30) != 0) {
      do {
        puVar9 = *(undefined8 **)(*(longlong *)(param_2 + 0x28) + local_68 * 8);
        if (*(int *)(puVar9 + 10) == 2) {
          lVar13 = puVar9[1];
          iVar17 = *(int *)(lVar13 + 0x10);
          if (iVar17 == 0) {
            iVar17 = 0;
            local_60 = (byte *)0x0;
            local_58 = 0;
          }
          else {
            local_58 = CONCAT44(iVar17,iVar17);
            local_60 = malloc((ulonglong)(iVar17 + 1U));
            memcpy(local_60,*(void **)(lVar13 + 8),(ulonglong)(iVar17 + 1U));
            iVar17 = (int)local_58;
          }
          pbVar3 = local_60;
          uVar14 = 0;
          if ((ulonglong)*(uint *)(param_2 + 0xa0) != 0) {
            puVar7 = *(undefined8 **)(param_2 + 0x98);
            do {
              pbVar6 = (byte *)*puVar7;
              if ((pbVar6 == (byte *)0x0) || (local_60 == (byte *)0x0)) {
                iVar4 = *(int *)(puVar7 + 1) - iVar17;
              }
              else {
                lVar13 = (longlong)local_60 - (longlong)pbVar6;
                do {
                  bVar2 = *pbVar6;
                  if (bVar2 != pbVar6[lVar13]) {
                    uVar18 = (uint)(bVar2 < pbVar6[lVar13]);
                    iVar4 = (1 - uVar18) - (uint)(uVar18 != 0);
                    goto LAB_140009bb5;
                  }
                  pbVar6 = pbVar6 + 1;
                } while (bVar2 != 0);
                iVar4 = 0;
              }
LAB_140009bb5:
              if (iVar4 == 0) {
                puVar7 = *(undefined8 **)(param_2 + 0x98) + uVar14 * 6;
                goto LAB_140009bdb;
              }
              uVar14 = uVar14 + 1;
              puVar7 = puVar7 + 6;
            } while (uVar14 < *(uint *)(param_2 + 0xa0));
          }
          if (*(longlong *)(param_2 + 0x40) == 0) {
LAB_140009be4:
            uVar14 = 0;
            lVar13 = *param_1;
            if ((ulonglong)*(uint *)(lVar13 + 0x50) != 0) {
              plVar16 = *(longlong **)(lVar13 + 0x48);
              do {
                puVar15 = (undefined8 *)0x0;
                puVar7 = *(undefined8 **)(*plVar16 + 0x68);
                if (*(undefined8 **)(*plVar16 + 0x68) != (undefined8 *)0x0) {
                  do {
                    pbVar6 = (byte *)puVar7[-3];
                    if ((pbVar6 == (byte *)0x0) || (pbVar3 == (byte *)0x0)) {
                      iVar4 = *(int *)(puVar7 + -2) - iVar17;
                    }
                    else {
                      lVar12 = (longlong)pbVar3 - (longlong)pbVar6;
                      do {
                        bVar2 = *pbVar6;
                        if (bVar2 != pbVar6[lVar12]) {
                          uVar18 = (uint)(bVar2 < pbVar6[lVar12]);
                          iVar4 = (1 - uVar18) - (uint)(uVar18 != 0);
                          goto LAB_140009c55;
                        }
                        pbVar6 = pbVar6 + 1;
                      } while (bVar2 != 0);
                      iVar4 = 0;
                    }
LAB_140009c55:
                    if (iVar4 < 0) {
                      puVar10 = (undefined8 *)puVar7[2];
                    }
                    else {
                      puVar10 = (undefined8 *)*puVar7;
                      puVar15 = puVar7;
                    }
                    puVar7 = puVar10;
                  } while (puVar10 != (undefined8 *)0x0);
                  if (puVar15 != (undefined8 *)0x0) {
                    if ((pbVar3 == (byte *)0x0) || (puVar15[-3] == 0)) {
                      iVar4 = iVar17 - *(int *)(puVar15 + -2);
                    }
                    else {
                      pbVar6 = pbVar3;
                      do {
                        bVar2 = *pbVar6;
                        if (bVar2 != pbVar6[puVar15[-3] - (longlong)pbVar3]) {
                          uVar18 = (uint)(bVar2 < pbVar6[puVar15[-3] - (longlong)pbVar3]);
                          iVar4 = (1 - uVar18) - (uint)(uVar18 != 0);
                          goto LAB_140009ca4;
                        }
                        pbVar6 = pbVar6 + 1;
                      } while (bVar2 != 0);
                      iVar4 = 0;
                    }
LAB_140009ca4:
                    if ((-1 < iVar4) &&
                       (puVar7 = (undefined8 *)puVar15[-1], puVar7 != (undefined8 *)0x0))
                    goto LAB_140009de7;
                  }
                }
                uVar14 = uVar14 + 1;
                plVar16 = plVar16 + 1;
              } while (uVar14 < *(uint *)(lVar13 + 0x50));
            }
            FUN_140004c80(lVar13,0,*(undefined4 *)((longlong)puVar9 + 0x4c),"MACRO",
                          "Application of undefined macro \',%s\'\n");
          }
          else {
            puVar7 = (undefined8 *)
                     FUN_140006190(*(longlong *)(param_2 + 0x40),(longlong *)&local_60);
LAB_140009bdb:
            if (puVar7 == (undefined8 *)0x0) goto LAB_140009be4;
LAB_140009de7:
            FUN_140009120(param_1,puVar9,(longlong)puVar7,(longlong *)&local_50);
            local_res18 = local_48._4_4_;
            uVar5 = local_48 & 0xffffffff;
          }
          free(local_60);
          local_60 = (byte *)0x0;
          _Memory = local_50;
          uVar18 = local_res18;
        }
        else {
          uVar11 = (int)uVar5 + 1;
          if (uVar18 < uVar11) {
            local_res18 = (uVar18 * 10 >> 3) + 0x10 & 0xfffffff0;
            if (local_res18 < uVar11) {
              local_res18 = uVar11;
            }
            local_48 = CONCAT44(local_res18,(undefined4)local_48);
            _Memory = realloc(_Memory,(ulonglong)(local_res18 * 8));
            local_50 = _Memory;
            uVar18 = local_res18;
          }
          puVar7 = (undefined8 *)((longlong)_Memory + uVar5 * 8);
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = puVar9;
          }
          uVar5 = (ulonglong)uVar11;
          local_48 = CONCAT44(local_48._4_4_,uVar11);
        }
        local_68 = local_68 + 1;
      } while (local_68 < *(uint *)(param_2 + 0x30));
    }
    ppvVar1 = (void **)(param_2 + 0x28);
    if (ppvVar1 != &local_50) {
      *(undefined4 *)(param_2 + 0x30) = 0;
      uVar18 = (uint)uVar5;
      if (*(uint *)(param_2 + 0x34) < uVar18) {
        *(uint *)(param_2 + 0x34) = uVar18;
        pvVar8 = realloc(*ppvVar1,(ulonglong)(uVar18 * 8));
        *ppvVar1 = pvVar8;
      }
      puVar9 = *ppvVar1;
      if (uVar18 != 0) {
        lVar13 = (longlong)_Memory - (longlong)puVar9;
        do {
          if (puVar9 != (undefined8 *)0x0) {
            *puVar9 = *(undefined8 *)(lVar13 + (longlong)puVar9);
          }
          puVar9 = puVar9 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      *(uint *)(param_2 + 0x30) = uVar18;
    }
    free(_Memory);
    local_res20 = local_res20 + 1;
  } while (local_res20 < 0x40);
  if (local_res20 == 0x40) {
    FUN_140004c80(*param_1,0,*(undefined4 *)(param_2 + 0x4c),"INTERNAL",
                  "Too many passes required to substitute macros in node");
  }
  return;
}



char FUN_140009e10(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_2 + 1) != 0) {
    puVar1 = (undefined4 *)*param_2;
    switch(*puVar1) {
    case 0:
      return '\x03';
    case 1:
      return '\x01';
    default:
      FUN_140004c80(*param_1,0,puVar1[1] + 1,"STMT",
                    "Invalid token on the beginning of line statement");
switchD_140009e45_caseD_b:
      return '\x06';
    case 4:
      return (puVar1[(ulonglong)(*(int *)(param_2 + 1) - 1) * 6] != 2) + '\x01';
    case 5:
      return '\0';
    case 7:
    case 8:
      return '\x04';
    case 0xb:
      goto switchD_140009e45_caseD_b;
    }
  }
  return '\x05';
}



// WARNING: Removing unreachable block (ram,0x00014000a0f8)
// WARNING: Removing unreachable block (ram,0x00014000a106)

longlong * FUN_140009ef0(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *_Memory;
  void *_Dst;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *local_48;
  ulonglong local_40;
  undefined4 local_38;
  ulonglong uVar7;
  
  uVar1 = *(uint *)(param_3 + 1);
  if (uVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *(uint *)(param_2 + 1) = uVar1;
    *(uint *)((longlong)param_2 + 0xc) = uVar1;
    _Dst = malloc((ulonglong)(uVar1 + 1));
    _Src = (void *)*param_3;
    *param_2 = (longlong)_Dst;
    memcpy(_Dst,_Src,(ulonglong)(uVar1 + 1));
    uVar12 = 0;
    if ((_Dst != (void *)0x0) && (uVar6 = uVar12, uVar1 != 0)) {
      do {
        if (*(char *)(uVar6 + (longlong)_Dst) == '\"') {
          if ((int)uVar6 != -1) {
            if (*(char *)(*param_1 + 0x68) != '\0') {
              FUN_140004c80(*param_1,1,*(undefined4 *)(param_4 + 0x4c),
                            "EWarning::ArgValueContainsQuotation",
                            "Value \'%s\' of argument \'%s\' of element \'%s\' contains quotation marks removed when sanitizing strings"
                           );
            }
            local_48 = (undefined8 *)0x0;
            puVar8 = &DAT_14000ff00;
            if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
              puVar8 = (undefined1 *)*param_2;
            }
            local_40 = 0;
            local_38 = 0x39;
            FUN_140003440((longlong *)&local_48,(longlong)puVar8,*(uint *)(param_2 + 1),'\"');
            _Memory = local_48;
            *(undefined4 *)(param_2 + 1) = 0;
            if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
              *(undefined1 *)*param_2 = 0;
            }
            iVar10 = (int)local_40;
            puVar11 = local_48 + (local_40 & 0xffffffff) * 2;
            for (puVar9 = local_48; puVar9 != puVar11; puVar9 = puVar9 + 2) {
              FUN_1400015e0(param_2,puVar9);
            }
            puVar9 = _Memory + (ulonglong)(iVar10 - 1) * 2;
            for (; iVar10 != 0; iVar10 = iVar10 + -1) {
              free((void *)*puVar9);
              *puVar9 = 0;
              puVar9 = puVar9 + -2;
            }
            free(_Memory);
          }
          break;
        }
        uVar4 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar4;
      } while (uVar4 < uVar1);
    }
    lVar2 = *param_2;
    if ((lVar2 != 0) && (uVar1 = *(uint *)(param_2 + 1), uVar6 = uVar12, uVar1 != 0)) {
      do {
        uVar4 = (uint)uVar6;
        pcVar3 = "&";
        uVar7 = uVar12;
        do {
          if (*(char *)(uVar6 + lVar2) == *pcVar3) {
joined_r0x00014000a0ed:
            if (uVar4 == 0xffffffff) {
              return param_2;
            }
            uVar4 = (uint)uVar6;
            if (uVar4 < uVar1) {
              uVar5 = uVar4 + 1;
              if (uVar5 < uVar1) {
                memmove((void *)(uVar6 + lVar2),(void *)((ulonglong)uVar5 + lVar2),
                        (ulonglong)(uVar1 - uVar5));
                *(uint *)(param_2 + 1) = (uVar1 - uVar5) + uVar4;
              }
              else {
                *(uint *)(param_2 + 1) = uVar4;
              }
              *(undefined1 *)((ulonglong)*(uint *)(param_2 + 1) + *param_2) = 0;
            }
            FUN_14000b2e0(param_2,uVar4,"&amp;");
            lVar2 = *param_2;
            if (lVar2 == 0) {
              return param_2;
            }
            uVar1 = *(uint *)(param_2 + 1);
            do {
              uVar4 = uVar4 + 1;
              if (uVar1 <= uVar4) {
                return param_2;
              }
              uVar6 = (ulonglong)uVar4;
              pcVar3 = "&";
              uVar7 = uVar12;
              do {
                if (*(char *)(uVar6 + lVar2) == *pcVar3) goto joined_r0x00014000a0ed;
                uVar5 = (int)uVar7 + 1;
                uVar7 = (ulonglong)uVar5;
                pcVar3 = pcVar3 + 1;
              } while (uVar5 == 0);
            } while( true );
          }
          uVar5 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar5;
          pcVar3 = pcVar3 + 1;
        } while (uVar5 == 0);
        uVar6 = (ulonglong)(uVar4 + 1);
      } while (uVar4 + 1 < uVar1);
    }
  }
  return param_2;
}



// WARNING: Removing unreachable block (ram,0x00014000a2a8)
// WARNING: Removing unreachable block (ram,0x00014000a2b6)

longlong * FUN_14000a1c0(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  void *_Src;
  char cVar4;
  void *_Dst;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  char *pcVar10;
  
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *(int *)(param_1 + 1) = iVar3;
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    _Dst = malloc((ulonglong)(iVar3 + 1));
    _Src = (void *)*param_2;
    *param_1 = (longlong)_Dst;
    memcpy(_Dst,_Src,(ulonglong)(iVar3 + 1));
    if ((_Dst != (void *)0x0) && (lVar9 = (longlong)(int)param_1[1], (int)param_1[1] != 0)) {
      uVar7 = 0;
      do {
        pcVar10 = "--";
        lVar6 = (ulonglong)uVar7 + (longlong)_Dst;
        cVar4 = *(char *)((ulonglong)uVar7 + (longlong)_Dst);
        if (cVar4 != '\0') {
          do {
            if (*pcVar10 == '\0') goto LAB_14000a28d;
            if ((cVar4 != *pcVar10) || (lVar9 <= lVar6 - (longlong)_Dst)) break;
            cVar4 = *(char *)(lVar6 + 1);
            lVar6 = lVar6 + 1;
            pcVar10 = pcVar10 + 1;
          } while (cVar4 != '\0');
          if (*pcVar10 == '\0') {
LAB_14000a28d:
            if (uVar7 == 0xffffffff) {
              return param_1;
            }
            goto LAB_14000a2a0;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + 1));
    }
  }
  return param_1;
LAB_14000a2a0:
  uVar1 = uVar7 + 1;
  uVar8 = (uint)lVar9;
  if (uVar1 < uVar8) {
    uVar5 = uVar7 + 2;
    if (uVar5 < uVar8) {
      memmove((void *)((ulonglong)uVar1 + *param_1),(void *)((ulonglong)uVar5 + *param_1),
              (ulonglong)(uVar8 - uVar5));
      *(uint *)(param_1 + 1) = (uVar8 - uVar5) + uVar1;
    }
    else {
      *(uint *)(param_1 + 1) = uVar1;
    }
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 1) + *param_1) = 0;
  }
  FUN_14000b2e0(param_1,uVar1,"=");
  lVar6 = *param_1;
  uVar7 = uVar7 + 2;
  if (lVar6 == 0) {
    return param_1;
  }
  lVar9 = (longlong)(int)*(uint *)(param_1 + 1);
  if (*(uint *)(param_1 + 1) <= uVar7) {
    return param_1;
  }
  do {
    cVar4 = *(char *)((ulonglong)uVar7 + lVar6);
    pcVar10 = "--";
    if (cVar4 != '\0') {
      lVar2 = ((ulonglong)uVar7 - 0x1400108d8) + lVar6;
      do {
        if (*pcVar10 == '\0') goto LAB_14000a378;
        if ((cVar4 != *pcVar10) || (lVar9 <= (longlong)(pcVar10 + (lVar2 - lVar6)))) break;
        cVar4 = pcVar10[lVar2 + 1];
        pcVar10 = pcVar10 + 1;
      } while (cVar4 != '\0');
      if (*pcVar10 == '\0') break;
    }
    uVar7 = uVar7 + 1;
    if (*(uint *)(param_1 + 1) <= uVar7) {
      return param_1;
    }
  } while( true );
LAB_14000a378:
  if (uVar7 == 0xffffffff) {
    return param_1;
  }
  goto LAB_14000a2a0;
}



void FUN_14000a3c0(longlong *param_1,longlong param_2,longlong *param_3,char *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *_Dst;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 *puVar8;
  longlong **pplVar9;
  ulonglong uVar10;
  longlong local_res8;
  longlong *local_70;
  undefined8 local_68;
  void *local_60 [4];
  
  uVar6 = (uint)param_4;
  lVar2 = FUN_140004ef0(*param_1,param_3);
  uVar10 = 0;
  if (*(int *)(param_2 + 0x88) != 0) {
    lVar4 = 0;
    local_res8 = 0;
    do {
      _Dst = (longlong *)0x0;
      pcVar7 = "Unknown argument with value \'%s\' on pos %d of element \'%s\'";
      lVar1 = *(longlong *)(param_2 + 0x80);
      local_70 = (longlong *)0x0;
      local_68 = 0;
      if (*(char *)(lVar1 + lVar4) == '\0') {
        if (((lVar2 != 0) && (uVar10 < *(uint *)(lVar2 + 0x28))) &&
           (pplVar9 = (longlong **)(local_res8 + *(longlong *)(lVar2 + 0x20)), &local_70 != pplVar9)
           ) {
          if (*(int *)(pplVar9 + 1) != 0) goto LAB_14000a610;
LAB_14000a491:
          free((void *)0x0);
          local_68 = 0;
          local_70 = (longlong *)0x0;
        }
LAB_14000a4bc:
        iVar5 = 0;
        pcVar7 = "Unknown argument with value \'%s\' on pos %d of element \'%s\'";
        if (*(int *)(lVar1 + 0x30 + lVar4) != 0) {
          if (*(char *)(*param_1 + 0x61) != '\0') {
            param_3 = (longlong *)(ulonglong)*(uint *)(param_2 + 0x4c);
            pcVar7 = "EWarning::UnknownArgumentName";
            FUN_140004c80(*param_1,1,*(uint *)(param_2 + 0x4c),"EWarning::UnknownArgumentName",
                          "Unknown argument with value \'%s\' on pos %d of element \'%s\'");
          }
          goto LAB_14000a524;
        }
      }
      else {
        pplVar9 = (longlong **)(lVar1 + 0x10 + lVar4);
        if (&local_70 == pplVar9) goto LAB_14000a4bc;
        if (*(int *)(pplVar9 + 1) == 0) goto LAB_14000a491;
LAB_14000a610:
        free((void *)0x0);
        iVar5 = *(int *)(pplVar9 + 1);
        local_68 = CONCAT44(iVar5,iVar5);
        _Dst = malloc((ulonglong)(iVar5 + 1U));
        param_3 = (longlong *)(ulonglong)(iVar5 + 1U);
        local_70 = _Dst;
        memcpy(_Dst,*pplVar9,(size_t)param_3);
        if (iVar5 == 0) goto LAB_14000a4bc;
LAB_14000a524:
        if ((*(int *)(lVar1 + 0x30 + lVar4) != 0) && (iVar5 != 0)) {
          if (*(char *)(*param_1 + 0x40) == '\0') {
            FUN_14000aa80((longlong *)param_1[0xb],"\n",param_3,pcVar7);
            FUN_14000aad0((longlong)param_1,uVar6);
          }
          plVar3 = FUN_140009ef0(param_1,(longlong *)local_60,(undefined8 *)(lVar1 + 0x28 + lVar4),
                                 param_2);
          puVar8 = &DAT_14000ff00;
          if ((undefined1 *)*plVar3 != (undefined1 *)0x0) {
            puVar8 = (undefined1 *)*plVar3;
          }
          param_3 = (longlong *)&DAT_14000ff00;
          if (_Dst != (longlong *)0x0) {
            param_3 = _Dst;
          }
          FUN_14000aa80((longlong *)param_1[0xb]," %s=\"%s\"",param_3,puVar8);
          free(local_60[0]);
          local_60[0] = (void *)0x0;
        }
      }
      free(_Dst);
      local_res8 = local_res8 + 0x10;
      uVar10 = uVar10 + 1;
      lVar4 = lVar4 + 0x38;
      local_70 = (longlong *)0x0;
      param_4 = "Unknown argument with value \'%s\' on pos %d of element \'%s\'";
    } while (uVar10 < *(uint *)(param_2 + 0x88));
  }
  if (*(char *)(*param_1 + 0x41) != '\0') {
    if (*(char *)(*param_1 + 0x40) == '\0') {
      FUN_14000aa80((longlong *)param_1[0xb],"\n",param_3,param_4);
      FUN_14000aad0((longlong)param_1,uVar6);
    }
    FUN_14000aa80((longlong *)param_1[0xb]," pxsl_line=\"%d\"",(ulonglong)*(uint *)(param_2 + 0x4c),
                  param_4);
  }
  return;
}



void FUN_14000a730(longlong *param_1,longlong *param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  char *pcVar7;
  undefined1 *local_48;
  undefined8 local_40;
  void *local_38 [2];
  void *local_28 [2];
  
  if (param_2 != (longlong *)0x0) {
    iVar1 = (int)param_2[10];
    uVar4 = 0;
    local_48 = (undefined1 *)0x0;
    local_40 = 0;
    if (iVar1 == 0) {
      puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2);
      FUN_140001690(&local_48,puVar3);
      FUN_14000aad0((longlong)param_1,param_3);
      if ((char)param_2[0xf] != '\0') {
        plVar2 = FUN_14000a1c0((longlong *)local_28,param_2 + 0xd);
        puVar5 = &DAT_14000ff00;
        if ((undefined1 *)*plVar2 != (undefined1 *)0x0) {
          puVar5 = (undefined1 *)*plVar2;
        }
        FUN_14000aa80((longlong *)param_1[0xb],"<!--%s -->\n",puVar5,param_4);
        free(local_28[0]);
        local_28[0] = (void *)0x0;
        FUN_14000aad0((longlong)param_1,param_3);
      }
      if ((int)param_2[6] == 0) {
        puVar5 = &DAT_14000ff00;
        if (local_48 != (undefined1 *)0x0) {
          puVar5 = local_48;
        }
        FUN_14000aa80((longlong *)param_1[0xb],"<%s",puVar5,param_4);
        ppuVar6 = &local_48;
        pcVar7 = (char *)(ulonglong)(param_3 + 1);
        FUN_14000a3c0(param_1,(longlong)param_2,(longlong *)ppuVar6,pcVar7);
        FUN_14000aa80((longlong *)param_1[0xb]," />\n",ppuVar6,pcVar7);
      }
      else {
        puVar5 = &DAT_14000ff00;
        if (local_48 != (undefined1 *)0x0) {
          puVar5 = local_48;
        }
        FUN_14000aa80((longlong *)param_1[0xb],"<%s",puVar5,param_4);
        pcVar7 = (char *)(ulonglong)(param_3 + 1);
        FUN_14000a3c0(param_1,(longlong)param_2,(longlong *)&local_48,pcVar7);
        FUN_140001820((longlong *)param_1[0xb],">");
        if (((int)param_2[6] != 1) || (*(int *)(*(longlong *)param_2[5] + 0x50) != 4)) {
          FUN_140001820((longlong *)param_1[0xb],"\n");
        }
        if ((int)param_2[6] != 0) {
          do {
            FUN_14000a730(param_1,*(longlong **)(param_2[5] + uVar4 * 8),param_3 + 1,pcVar7);
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(param_2 + 6));
        }
        if (((int)param_2[6] != 1) || (*(int *)(*(longlong *)param_2[5] + 0x50) != 4)) {
          FUN_14000aad0((longlong)param_1,param_3);
        }
        puVar5 = &DAT_14000ff00;
        if (local_48 != (undefined1 *)0x0) {
          puVar5 = local_48;
        }
        FUN_14000aa80((longlong *)param_1[0xb],"</%s>\n",puVar5,pcVar7);
      }
    }
    else if (iVar1 == 3) {
      FUN_14000aad0((longlong)param_1,param_3);
      plVar2 = FUN_14000a1c0((longlong *)local_38,(undefined8 *)(param_2[1] + 8));
      puVar5 = &DAT_14000ff00;
      if ((undefined1 *)*plVar2 != (undefined1 *)0x0) {
        puVar5 = (undefined1 *)*plVar2;
      }
      FUN_14000aa80((longlong *)param_1[0xb],"<!--%s -->\n",puVar5,param_4);
      free(local_38[0]);
      local_38[0] = (void *)0x0;
      if ((int)param_2[6] != 0) {
        do {
          FUN_14000a730(param_1,*(longlong **)(param_2[5] + uVar4 * 8),param_3 + 1,param_4);
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_2 + 6));
      }
    }
    else if (iVar1 == 4) {
      puVar5 = &DAT_14000ff00;
      if (*(undefined1 **)(param_2[1] + 8) != (undefined1 *)0x0) {
        puVar5 = *(undefined1 **)(param_2[1] + 8);
      }
      FUN_14000aa80((longlong *)param_1[0xb],"%s\n",puVar5,param_4);
      if (((int)param_2[6] != 0) && (*(char *)(*param_1 + 0x60) != '\0')) {
        FUN_140004c80(*param_1,1,*(undefined4 *)((longlong)param_2 + 0x4c),"EWarning::Internal",
                      "Node of this line is literal, but has children (which will be ignored!)");
      }
    }
    else if ((iVar1 == 6) && ((int)param_2[6] != 0)) {
      do {
        FUN_14000a730(param_1,*(longlong **)(param_2[5] + uVar4 * 8),0,param_4);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_2 + 6));
    }
    free(local_48);
  }
  return;
}



void FUN_14000aa80(longlong *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  _vsnprintf(&DAT_1400138f0,0x400,param_2,(va_list)&local_res18);
  FUN_140001820(param_1,&DAT_1400138f0);
  return;
}



// WARNING: Removing unreachable block (ram,0x00014000ab1d)

void FUN_14000aad0(longlong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 *_Dst;
  ulonglong uVar5;
  
  if (0 < (int)param_2) {
    uVar5 = (ulonglong)param_2;
    do {
      plVar3 = *(longlong **)(param_1 + 0x58);
      iVar1 = (int)plVar3[1];
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 4U) {
        _Dst = malloc((ulonglong)(iVar1 + 5));
        if (iVar1 == 0) {
          *_Dst = 0;
        }
        else {
          memcpy(_Dst,(void *)*plVar3,(ulonglong)(iVar1 + 1));
        }
        free((void *)*plVar3);
        *plVar3 = (longlong)_Dst;
        *(uint *)((longlong)plVar3 + 0xc) = iVar1 + 4U;
      }
      uVar2 = *(uint *)(plVar3 + 1);
      lVar4 = *plVar3;
      *(undefined4 *)((ulonglong)uVar2 + lVar4) = 0x20202020;
      *(undefined1 *)((undefined4 *)((ulonglong)uVar2 + lVar4) + 1) = 0;
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



void FUN_14000aba0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  uVar4 = 0;
  uVar5 = uVar4;
  if (*(int *)(lVar2 + 0xa0) != 0) {
    do {
      plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x98) + uVar4);
      plVar1 = FUN_14000b040((longlong *)(param_1 + 0x68),plVar3);
      uVar5 = uVar5 + 1;
      uVar4 = uVar4 + 0x30;
      *plVar1 = (longlong)plVar3;
      lVar2 = *(longlong *)(param_1 + 0x38);
    } while (uVar5 < *(uint *)(lVar2 + 0xa0));
  }
  return;
}



void FUN_14000ac20(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  uVar3 = (int)param_1[1] + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar3) {
    uVar1 = (*(uint *)((longlong)param_1 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
    if (uVar1 < uVar3) {
      uVar1 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    pvVar2 = realloc((void *)*param_1,(ulonglong)(uVar1 << 5));
    *param_1 = (longlong)pvVar2;
  }
  puVar4 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 1) * 0x20 + *param_1);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_14000b1c0(puVar4,param_2);
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



longlong *
FUN_14000ac90(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,uint param_5
             )

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  if (param_5 != 0) {
    puVar2 = (undefined8 *)(*param_3 + 8);
    uVar3 = (ulonglong)param_5;
    do {
      free((void *)*puVar2);
      *puVar2 = 0;
      puVar2 = puVar2 + 3;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  uVar3 = (longlong)(((ulonglong)*(uint *)(param_1 + 1) * 0x18 - (longlong)*param_4) + *param_1) /
          0x18;
  if ((int)uVar3 != 0) {
    memmove((void *)*param_3,(void *)*param_4,(uVar3 & 0xffffffff) * 0x18);
  }
  lVar1 = *param_3;
  *(uint *)(param_1 + 1) = (int)param_1[1] - param_5;
  *param_2 = lVar1;
  return param_2;
}



void FUN_14000ad70(longlong *param_1)

{
  void *_Memory;
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1[1];
  puVar2 = (undefined8 *)((ulonglong)(iVar4 - 1) * 0x20 + *param_1);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  do {
    iVar3 = *(int *)(puVar2 + 1);
    _Memory = (void *)*puVar2;
    if (iVar3 != 0) {
      puVar1 = (undefined8 *)((longlong)_Memory + (ulonglong)(iVar3 - 1) * 0x18 + 8);
      do {
        free((void *)*puVar1);
        *puVar1 = 0;
        puVar1 = puVar1 + -3;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(puVar2 + 1) = 0;
    free(_Memory);
    puVar2 = puVar2 + -4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



void FUN_14000ae30(longlong *param_1,undefined1 *param_2)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  uVar3 = (int)param_1[1] + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar3) {
    uVar1 = (*(uint *)((longlong)param_1 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
    if (uVar1 < uVar3) {
      uVar1 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    pvVar2 = realloc((void *)*param_1,(ulonglong)(uVar1 * 0x38));
    *param_1 = (longlong)pvVar2;
  }
  puVar4 = (undefined1 *)((ulonglong)*(uint *)(param_1 + 1) * 0x38 + *param_1);
  if (puVar4 != (undefined1 *)0x0) {
    *puVar4 = *param_2;
    FUN_14000b260((undefined4 *)(puVar4 + 8),(undefined4 *)(param_2 + 8));
    FUN_14000b260((undefined4 *)(puVar4 + 0x20),(undefined4 *)(param_2 + 0x20));
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



longlong *
FUN_14000aec0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,uint param_5
             )

{
  uint uVar1;
  void *pvVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    pvVar2 = (void *)*param_1;
    uVar7 = (ulonglong)param_5;
    uVar4 = uVar1 + param_5;
    uVar5 = *param_3 - (longlong)pvVar2 >> 3;
    uVar6 = (longlong)(((ulonglong)uVar1 * 8 - *param_3) + (longlong)pvVar2) >> 3;
    if (*(uint *)((longlong)param_1 + 0xc) < uVar4) {
      uVar1 = (*(uint *)((longlong)param_1 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
      if (uVar1 < uVar4) {
        uVar1 = uVar4;
      }
      *(uint *)((longlong)param_1 + 0xc) = uVar1;
      pvVar2 = realloc(pvVar2,(ulonglong)(uVar1 << 3));
      *param_1 = (longlong)pvVar2;
    }
    if ((int)uVar6 != 0) {
      memmove((void *)(*param_1 + (ulonglong)((int)uVar5 + param_5) * 8),
              (void *)(*param_1 + (uVar5 & 0xffffffff) * 8),(uVar6 & 0xffffffff) << 3);
    }
    if (param_5 != 0) {
      lVar3 = (longlong)(int)uVar5 << 3;
      do {
        if ((undefined8 *)(lVar3 + *param_1) != (undefined8 *)0x0) {
          *(undefined8 *)(lVar3 + *param_1) = *param_4;
        }
        lVar3 = lVar3 + 8;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    *(uint *)(param_1 + 1) = (int)param_1[1] + param_5;
    *param_2 = *param_1 + (uVar5 & 0xffffffff) * 8;
    return param_2;
  }
  uVar5 = (ulonglong)param_5;
  if (*(uint *)((longlong)param_1 + 0xc) < param_5) {
    uVar1 = (*(uint *)((longlong)param_1 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
    if (uVar1 < param_5) {
      uVar1 = param_5;
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    pvVar2 = realloc((void *)*param_1,(ulonglong)(uVar1 << 3));
    *param_1 = (longlong)pvVar2;
  }
  if (param_5 != 0) {
    lVar3 = 0;
    do {
      if ((undefined8 *)(lVar3 + *param_1) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar3 + *param_1) = *param_4;
      }
      lVar3 = lVar3 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  *(uint *)(param_1 + 1) = param_5;
  *param_2 = *param_1;
  return param_2;
}



longlong * FUN_14000b040(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  byte *pbVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  
  plVar10 = (longlong *)0x0;
  bVar12 = false;
  if ((longlong *)*param_1 != (longlong *)0x0) {
    pbVar9 = (byte *)*param_2;
    plVar5 = (longlong *)*param_1;
    do {
      plVar10 = plVar5;
      if ((pbVar9 == (byte *)0x0) || (plVar10[-3] == 0)) {
        iVar7 = (int)param_2[1] - (int)plVar10[-2];
      }
      else {
        pbVar3 = pbVar9;
        do {
          bVar1 = *pbVar3;
          if (bVar1 != pbVar3[plVar10[-3] - (longlong)pbVar9]) {
            uVar2 = (uint)(bVar1 < pbVar3[plVar10[-3] - (longlong)pbVar9]);
            iVar7 = (1 - uVar2) - (uint)(uVar2 != 0);
            goto LAB_14000b0a8;
          }
          pbVar3 = pbVar3 + 1;
        } while (bVar1 != 0);
        iVar7 = 0;
      }
LAB_14000b0a8:
      bVar12 = iVar7 < 0;
      if (bVar12) {
        plVar5 = (longlong *)*plVar10;
      }
      else {
        plVar5 = (longlong *)plVar10[2];
      }
    } while (plVar5 != (longlong *)0x0);
  }
  plVar5 = plVar10;
  if (bVar12 != false) {
    plVar5 = (longlong *)*plVar10;
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)plVar10[1];
      plVar8 = plVar10;
      if ((longlong *)plVar10[1] == (longlong *)0x0) goto LAB_14000b14d;
      do {
        plVar4 = plVar5;
        plVar5 = plVar4;
        if (plVar8 != (longlong *)*plVar4) break;
        plVar5 = (longlong *)plVar4[1];
        plVar8 = plVar4;
      } while (plVar5 != (longlong *)0x0);
    }
    else {
      for (plVar8 = (longlong *)plVar5[2]; plVar8 != (longlong *)0x0; plVar8 = (longlong *)plVar8[2]
          ) {
        plVar5 = plVar8;
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    pbVar9 = (byte *)plVar5[-3];
    if ((pbVar9 == (byte *)0x0) || (*param_2 == 0)) {
      iVar7 = (int)plVar5[-2] - (int)param_2[1];
    }
    else {
      lVar11 = *param_2 - (longlong)pbVar9;
      do {
        bVar1 = *pbVar9;
        if (bVar1 != pbVar9[lVar11]) {
          uVar2 = (uint)(bVar1 < pbVar9[lVar11]);
          iVar7 = (1 - uVar2) - (uint)(uVar2 != 0);
          goto LAB_14000b143;
        }
        pbVar9 = pbVar9 + 1;
      } while (bVar1 != 0);
      iVar7 = 0;
    }
LAB_14000b143:
    if (-1 < iVar7) {
      return plVar5 + -1;
    }
  }
LAB_14000b14d:
  puVar6 = malloc(0x38);
  if (puVar6 != (undefined8 *)0x0) {
    FUN_140001570(puVar6,param_2);
  }
  if (puVar6 + 2 != (undefined8 *)0x0) {
    puVar6[2] = 0;
  }
  FUN_140001d80(param_1,puVar6 + 3,bVar12,plVar10);
  return puVar6 + 2;
}



undefined8 * FUN_14000b1c0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *(int *)(param_1 + 1) = iVar1;
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    pvVar2 = malloc((ulonglong)(iVar1 + 1));
    *param_1 = pvVar2;
    memcpy(pvVar2,(void *)*param_2,(ulonglong)(iVar1 + 1));
  }
  iVar1 = *(int *)(param_2 + 3);
  if (iVar1 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    *(int *)(param_1 + 3) = iVar1;
    *(int *)((longlong)param_1 + 0x1c) = iVar1;
    pvVar2 = malloc((ulonglong)(iVar1 + 1));
    param_1[2] = pvVar2;
    memcpy(pvVar2,(void *)param_2[2],(ulonglong)(iVar1 + 1));
  }
  return param_1;
}



undefined4 * FUN_14000b260(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Dst;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  iVar1 = param_2[4];
  if (iVar1 != 0) {
    param_1[4] = iVar1;
    param_1[5] = iVar1;
    _Dst = malloc((ulonglong)(iVar1 + 1));
    *(void **)(param_1 + 2) = _Dst;
    memcpy(_Dst,*(void **)(param_2 + 2),(ulonglong)(iVar1 + 1));
    return param_1;
  }
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00014000b2fc)
// WARNING: Removing unreachable block (ram,0x00014000b346)

void FUN_14000b2e0(longlong *param_1,uint param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *_Dst;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  char *pcVar6;
  
  if (*(uint *)(param_1 + 1) < param_2) {
    param_2 = *(uint *)(param_1 + 1);
  }
  if (param_3 != (char *)0x0) {
    uVar4 = 0xffffffffffffffff;
    pcVar6 = param_3;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    iVar3 = (int)uVar4;
    if (iVar3 != 0) {
      iVar2 = (int)param_1[1];
      uVar5 = iVar2 + iVar3;
      if (*(uint *)((longlong)param_1 + 0xc) < uVar5) {
        _Dst = malloc((ulonglong)(uVar5 + 1));
        if (iVar2 == 0) {
          *_Dst = 0;
        }
        else {
          memcpy(_Dst,(void *)*param_1,(ulonglong)(iVar2 + 1));
        }
        free((void *)*param_1);
        *param_1 = (longlong)_Dst;
        *(uint *)((longlong)param_1 + 0xc) = uVar5;
      }
      if (param_2 < *(uint *)(param_1 + 1)) {
        memmove((void *)((uVar4 & 0xffffffff) + (ulonglong)param_2 + *param_1),
                (void *)((ulonglong)param_2 + *param_1),
                (ulonglong)(*(uint *)(param_1 + 1) - param_2));
      }
      memcpy((void *)((ulonglong)param_2 + *param_1),param_3,uVar4 & 0xffffffff);
      *(int *)(param_1 + 1) = (int)param_1[1] + iVar3;
      *(undefined1 *)((ulonglong)*(uint *)(param_1 + 1) + *param_1) = 0;
    }
  }
  return;
}



void FUN_14000b3f0(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    puVar1 = (undefined8 *)((ulonglong)(iVar2 - 1) * 0x38 + *param_1 + 0x10);
    do {
      free((void *)puVar1[3]);
      puVar1[3] = 0;
      free((void *)*puVar1);
      *puVar1 = 0;
      puVar1 = puVar1 + -7;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



undefined8 * FUN_14000b470(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)0x0;
  puVar6 = (undefined8 *)*param_1;
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    do {
      pbVar4 = (byte *)puVar6[-3];
      if ((pbVar4 == (byte *)0x0) || (*param_2 == 0)) {
        iVar3 = *(int *)(puVar6 + -2) - (int)param_2[1];
      }
      else {
        lVar5 = *param_2 - (longlong)pbVar4;
        do {
          bVar1 = *pbVar4;
          if (bVar1 != pbVar4[lVar5]) {
            uVar2 = (uint)(bVar1 < pbVar4[lVar5]);
            iVar3 = (1 - uVar2) - (uint)(uVar2 != 0);
            goto LAB_14000b4b8;
          }
          pbVar4 = pbVar4 + 1;
        } while (bVar1 != 0);
        iVar3 = 0;
      }
LAB_14000b4b8:
      if (iVar3 < 0) {
        puVar7 = (undefined8 *)puVar6[2];
      }
      else {
        puVar7 = (undefined8 *)*puVar6;
        puVar8 = puVar6;
      }
      puVar6 = puVar7;
    } while (puVar7 != (undefined8 *)0x0);
    if (puVar8 != (undefined8 *)0x0) {
      pbVar4 = (byte *)*param_2;
      if ((pbVar4 == (byte *)0x0) || (puVar8[-3] == 0)) {
        iVar3 = (int)param_2[1] - *(int *)(puVar8 + -2);
      }
      else {
        lVar5 = puVar8[-3] - (longlong)pbVar4;
        do {
          bVar1 = *pbVar4;
          if (bVar1 != pbVar4[lVar5]) {
            uVar2 = (uint)(bVar1 < pbVar4[lVar5]);
            iVar3 = (1 - uVar2) - (uint)(uVar2 != 0);
            goto LAB_14000b508;
          }
          pbVar4 = pbVar4 + 1;
        } while (bVar1 != 0);
        iVar3 = 0;
      }
LAB_14000b508:
      if (-1 < iVar3) {
        return puVar8;
      }
    }
  }
  return (undefined8 *)0x0;
}



void FUN_14000b520(longlong *param_1)

{
  void *_Memory;
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1[1];
  puVar2 = (undefined8 *)((ulonglong)(iVar4 - 1) * 0x30 + *param_1);
  if (iVar4 != 0) {
    do {
      iVar3 = *(int *)(puVar2 + 3);
      _Memory = (void *)puVar2[2];
      puVar1 = (undefined8 *)((ulonglong)(iVar3 - 1) * 0x10 + (longlong)_Memory);
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        free((void *)*puVar1);
        *puVar1 = 0;
        puVar1 = puVar1 + -2;
      }
      *(undefined4 *)(puVar2 + 3) = 0;
      free(_Memory);
      free((void *)*puVar2);
      *puVar2 = 0;
      puVar2 = puVar2 + -6;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



undefined8 * FUN_14000b5e0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar9 = (undefined8 *)*param_1;
  puVar11 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    pbVar6 = (byte *)*param_3;
    do {
      pbVar7 = (byte *)puVar9[-3];
      if ((pbVar7 == (byte *)0x0) || (pbVar6 == (byte *)0x0)) {
        iVar4 = *(int *)(puVar9 + -2) - (int)param_3[1];
      }
      else {
        pbVar5 = pbVar7;
        do {
          bVar1 = *pbVar5;
          if (bVar1 != pbVar5[(longlong)pbVar6 - (longlong)pbVar7]) {
            uVar2 = (uint)(bVar1 < pbVar5[(longlong)pbVar6 - (longlong)pbVar7]);
            iVar4 = (1 - uVar2) - (uint)(uVar2 != 0);
            goto LAB_14000b641;
          }
          pbVar5 = pbVar5 + 1;
        } while (bVar1 != 0);
        iVar4 = 0;
      }
LAB_14000b641:
      if ((pbVar6 == (byte *)0x0) || (pbVar7 == (byte *)0x0)) {
        iVar3 = (int)param_3[1] - *(int *)(puVar9 + -2);
      }
      else {
        pbVar5 = pbVar6;
        do {
          bVar1 = *pbVar5;
          if (bVar1 != pbVar5[(longlong)pbVar7 - (longlong)pbVar6]) {
            uVar2 = (uint)(bVar1 < pbVar5[(longlong)pbVar7 - (longlong)pbVar6]);
            iVar3 = (1 - uVar2) - (uint)(uVar2 != 0);
            goto LAB_14000b678;
          }
          pbVar5 = pbVar5 + 1;
        } while (bVar1 != 0);
        iVar3 = 0;
      }
LAB_14000b678:
      if (iVar4 < 0) {
        if (iVar3 < 0) break;
        puVar10 = (undefined8 *)puVar9[2];
      }
      else {
        if (iVar3 >= 0) break;
        puVar10 = (undefined8 *)*puVar9;
        puVar11 = puVar9;
      }
      puVar9 = puVar10;
    } while (puVar10 != (undefined8 *)0x0);
  }
  *param_2 = puVar11;
  param_2[1] = puVar11;
  puVar11 = puVar9;
  if (puVar9 != (undefined8 *)0x0) {
    do {
      pbVar6 = (byte *)puVar11[-3];
      if ((pbVar6 == (byte *)0x0) || (*param_3 == 0)) {
        iVar4 = *(int *)(puVar11 + -2) - (int)param_3[1];
      }
      else {
        lVar8 = *param_3 - (longlong)pbVar6;
        do {
          bVar1 = *pbVar6;
          if (bVar1 != pbVar6[lVar8]) {
            uVar2 = (uint)(bVar1 < pbVar6[lVar8]);
            iVar4 = (1 - uVar2) - (uint)(uVar2 != 0);
            goto LAB_14000b6e6;
          }
          pbVar6 = pbVar6 + 1;
        } while (bVar1 != 0);
        iVar4 = 0;
      }
LAB_14000b6e6:
      if (iVar4 < 0) {
        puVar11 = (undefined8 *)puVar11[2];
      }
      else {
        *param_2 = puVar11;
        puVar11 = (undefined8 *)*puVar11;
      }
    } while (puVar11 != (undefined8 *)0x0);
    pbVar6 = (byte *)*param_3;
    do {
      if ((pbVar6 == (byte *)0x0) || (puVar9[-3] == 0)) {
        iVar4 = (int)param_3[1] - *(int *)(puVar9 + -2);
      }
      else {
        pbVar7 = pbVar6;
        do {
          bVar1 = *pbVar7;
          if (bVar1 != pbVar7[puVar9[-3] - (longlong)pbVar6]) {
            uVar2 = (uint)(bVar1 < pbVar7[puVar9[-3] - (longlong)pbVar6]);
            iVar4 = (1 - uVar2) - (uint)(uVar2 != 0);
            goto LAB_14000b735;
          }
          pbVar7 = pbVar7 + 1;
        } while (bVar1 != 0);
        iVar4 = 0;
      }
LAB_14000b735:
      if (iVar4 < 0) {
        param_2[1] = puVar9;
        puVar9 = (undefined8 *)*puVar9;
      }
      else {
        puVar9 = (undefined8 *)puVar9[2];
      }
    } while (puVar9 != (undefined8 *)0x0);
  }
  return param_2;
}



void FUN_14000b760(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  while (param_2 != (undefined8 *)0x0) {
    FUN_14000b760(param_1,(undefined8 *)param_2[2]);
    puVar1 = (undefined8 *)*param_2;
    free((void *)param_2[-3]);
    param_2[-3] = 0;
    free(param_2 + -3);
    param_2 = puVar1;
  }
  return;
}



longlong * FUN_14000b7d0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *pvVar2;
  void *_Dst;
  longlong lVar3;
  uint uVar4;
  int *piVar5;
  
  uVar4 = 0;
  *(int *)(param_1 + 2) = (int)param_2[2];
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = (int)param_2[1];
  if (iVar1 != 0) {
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    pvVar2 = realloc((void *)0x0,(ulonglong)(uint)(iVar1 * 0x18));
    *param_1 = (longlong)pvVar2;
  }
  if ((int)param_2[1] != 0) {
    lVar3 = *param_2 - *param_1;
    piVar5 = (int *)(*param_1 + 0x14);
    do {
      if (piVar5 + -5 != (int *)0x0) {
        piVar5[-5] = *(int *)((longlong)piVar5 + lVar3 + -0x14);
        piVar5[-4] = *(int *)((longlong)piVar5 + lVar3 + -0x10);
        iVar1 = *(int *)((longlong)piVar5 + lVar3 + -4);
        if (iVar1 == 0) {
          piVar5[-3] = 0;
          piVar5[-2] = 0;
          piVar5[-1] = 0;
          piVar5[0] = 0;
        }
        else {
          piVar5[-1] = iVar1;
          *piVar5 = iVar1;
          _Dst = malloc((ulonglong)(iVar1 + 1U));
          pvVar2 = *(void **)((longlong)piVar5 + lVar3 + -0xc);
          *(void **)(piVar5 + -3) = _Dst;
          memcpy(_Dst,pvVar2,(ulonglong)(iVar1 + 1U));
        }
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 6;
    } while (uVar4 < *(uint *)(param_2 + 1));
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  return param_1;
}



longlong * FUN_14000b8d0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  void *pvVar2;
  void *_Dst;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    iVar5 = (int)param_1[1];
    uVar4 = 0;
    if (iVar5 != 0) {
      puVar3 = (undefined8 *)(*param_1 + 8 + (ulonglong)(iVar5 - 1) * 0x18);
      do {
        free((void *)*puVar3);
        *puVar3 = 0;
        puVar3 = puVar3 + -3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    uVar1 = *(uint *)(param_2 + 1);
    if (*(uint *)((longlong)param_1 + 0xc) < uVar1) {
      *(uint *)((longlong)param_1 + 0xc) = uVar1;
      pvVar2 = realloc((void *)*param_1,(ulonglong)(uVar1 * 0x18));
      *param_1 = (longlong)pvVar2;
    }
    if ((int)param_2[1] != 0) {
      piVar6 = (int *)(*param_1 + 0x14);
      lVar7 = *param_2 - *param_1;
      do {
        if (piVar6 + -5 != (int *)0x0) {
          piVar6[-5] = *(int *)(lVar7 + -0x14 + (longlong)piVar6);
          piVar6[-4] = *(int *)(lVar7 + -0x10 + (longlong)piVar6);
          iVar5 = *(int *)(lVar7 + -4 + (longlong)piVar6);
          if (iVar5 == 0) {
            piVar6[-3] = 0;
            piVar6[-2] = 0;
            piVar6[-1] = 0;
            piVar6[0] = 0;
          }
          else {
            piVar6[-1] = iVar5;
            *piVar6 = iVar5;
            _Dst = malloc((ulonglong)(iVar5 + 1U));
            pvVar2 = *(void **)(lVar7 + -0xc + (longlong)piVar6);
            *(void **)(piVar6 + -3) = _Dst;
            memcpy(_Dst,pvVar2,(ulonglong)(iVar5 + 1U));
          }
        }
        uVar4 = uVar4 + 1;
        piVar6 = piVar6 + 6;
      } while (uVar4 < *(uint *)(param_2 + 1));
    }
    *(int *)(param_1 + 1) = (int)param_2[1];
  }
  return param_1;
}



longlong * FUN_14000ba00(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  longlong lVar4;
  int *piVar5;
  uint uVar6;
  
  if (param_1 != param_2) {
    FUN_14000b3f0(param_1);
    uVar6 = *(uint *)(param_2 + 1);
    if (*(uint *)((longlong)param_1 + 0xc) < uVar6) {
      *(uint *)((longlong)param_1 + 0xc) = uVar6;
      pvVar2 = realloc((void *)*param_1,(ulonglong)(uVar6 * 0x38));
      *param_1 = (longlong)pvVar2;
    }
    uVar6 = 0;
    if ((int)param_2[1] != 0) {
      lVar4 = *param_2 - *param_1;
      piVar5 = (int *)(*param_1 + 0x1c);
      do {
        if (piVar5 + -7 != (int *)0x0) {
          *(undefined1 *)(piVar5 + -7) = *(undefined1 *)(lVar4 + -0x1c + (longlong)piVar5);
          piVar5[-5] = *(int *)(lVar4 + -0x14 + (longlong)piVar5);
          piVar5[-4] = *(int *)(lVar4 + -0x10 + (longlong)piVar5);
          iVar1 = *(int *)(lVar4 + -4 + (longlong)piVar5);
          if (iVar1 == 0) {
            piVar5[-3] = 0;
            piVar5[-2] = 0;
            piVar5[-1] = 0;
            piVar5[0] = 0;
          }
          else {
            piVar5[-1] = iVar1;
            *piVar5 = iVar1;
            pvVar3 = malloc((ulonglong)(iVar1 + 1U));
            pvVar2 = *(void **)(lVar4 + -0xc + (longlong)piVar5);
            *(void **)(piVar5 + -3) = pvVar3;
            memcpy(pvVar3,pvVar2,(ulonglong)(iVar1 + 1U));
          }
          piVar5[1] = *(int *)(lVar4 + 4 + (longlong)piVar5);
          piVar5[2] = *(int *)(lVar4 + 8 + (longlong)piVar5);
          iVar1 = *(int *)(lVar4 + 0x14 + (longlong)piVar5);
          if (iVar1 == 0) {
            piVar5[3] = 0;
            piVar5[4] = 0;
            piVar5[5] = 0;
            piVar5[6] = 0;
          }
          else {
            piVar5[5] = iVar1;
            piVar5[6] = iVar1;
            pvVar3 = malloc((ulonglong)(iVar1 + 1U));
            pvVar2 = *(void **)(lVar4 + 0xc + (longlong)piVar5);
            *(void **)(piVar5 + 3) = pvVar3;
            memcpy(pvVar3,pvVar2,(ulonglong)(iVar1 + 1U));
          }
        }
        uVar6 = uVar6 + 1;
        piVar5 = piVar5 + 0xe;
      } while (uVar6 < *(uint *)(param_2 + 1));
    }
    *(int *)(param_1 + 1) = (int)param_2[1];
  }
  return param_1;
}



longlong * FUN_14000bb60(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  void *_Dst;
  longlong lVar4;
  int *piVar5;
  uint uVar6;
  
  if (param_1 != param_2) {
    FUN_14000b520(param_1);
    uVar6 = *(uint *)(param_2 + 1);
    if (*(uint *)((longlong)param_1 + 0xc) < uVar6) {
      *(uint *)((longlong)param_1 + 0xc) = uVar6;
      pvVar3 = realloc((void *)*param_1,(ulonglong)(uVar6 * 0x30));
      *param_1 = (longlong)pvVar3;
    }
    uVar6 = 0;
    if ((int)param_2[1] != 0) {
      lVar4 = *param_2 - *param_1;
      piVar5 = (int *)(*param_1 + 0xc);
      do {
        piVar1 = piVar5 + -3;
        if (piVar1 != (int *)0x0) {
          iVar2 = *(int *)((longlong)piVar5 + lVar4 + -4);
          if (iVar2 == 0) {
            piVar1[0] = 0;
            piVar1[1] = 0;
            piVar5[-1] = 0;
            piVar5[0] = 0;
          }
          else {
            piVar5[-1] = iVar2;
            *piVar5 = iVar2;
            _Dst = malloc((ulonglong)(iVar2 + 1U));
            pvVar3 = *(void **)((longlong)piVar5 + lVar4 + -0xc);
            *(void **)piVar1 = _Dst;
            memcpy(_Dst,pvVar3,(ulonglong)(iVar2 + 1U));
          }
          FUN_1400059b0((longlong *)(piVar5 + 1),(longlong *)((longlong)piVar5 + lVar4 + 4));
          *(undefined8 *)(piVar5 + 7) = *(undefined8 *)((longlong)piVar5 + lVar4 + 0x1c);
        }
        uVar6 = uVar6 + 1;
        piVar5 = piVar5 + 0xc;
      } while (uVar6 < *(uint *)(param_2 + 1));
    }
    *(int *)(param_1 + 1) = (int)param_2[1];
  }
  return param_1;
}



void FUN_14000bc80(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  void *_Memory;
  uint uVar1;
  void *pvVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong local_res8;
  longlong local_res10;
  undefined8 *local_res18;
  undefined8 *local_res20;
  
  iVar5 = 0;
  for (puVar4 = param_3; puVar4 != param_4; puVar4 = puVar4 + 1) {
    iVar5 = iVar5 + 1;
  }
  _Memory = (void *)*param_1;
  uVar1 = (int)param_1[1] + iVar5;
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1) {
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    local_res10 = param_2;
    pvVar2 = realloc(_Memory,(ulonglong)(uVar1 * 8));
    *param_1 = (longlong)pvVar2;
  }
  local_res10 = *param_1 + (param_2 - (longlong)_Memory >> 3) * 8;
  puVar4 = local_res18;
  if (local_res18 != local_res20) {
    do {
      plVar3 = FUN_14000aec0(param_1,&local_res8,&local_res10,puVar4,1);
      puVar4 = puVar4 + 1;
      *plVar3 = *plVar3 + 8;
      local_res10 = *plVar3;
    } while (puVar4 != local_res20);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14000bd40(void)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  FILE *pFVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *_Str;
  ulonglong uVar14;
  byte *pbVar15;
  
  pbVar13 = DAT_1400132e0;
  if (DAT_1400132c4 == 0) {
    DAT_1400132c4 = 1;
    if (DAT_1400132e8 == 0) {
      DAT_1400132e8 = 1;
    }
    if (DAT_1400132f0 == (FILE *)0x0) {
      DAT_1400132f0 = __iob_func();
    }
    if (DAT_1400132f8 == (FILE *)0x0) {
      pFVar5 = __iob_func();
      DAT_1400132f8 = pFVar5 + 1;
    }
    if ((DAT_1400132d8 == 0) ||
       (plVar11 = (longlong *)(DAT_1400132d8 + DAT_1400132c8 * 8),
       *(longlong *)(DAT_1400132d8 + DAT_1400132c8 * 8) == 0)) {
      FUN_14000ce30();
      plVar11 = (longlong *)(DAT_1400132d8 + DAT_1400132c8 * 8);
      puVar6 = FUN_14000cbc0();
      *plVar11 = (longlong)puVar6;
    }
    puVar6 = (undefined8 *)*plVar11;
    DAT_140013298 = puVar6[4];
    DAT_1400132f0 = (FILE *)*puVar6;
    DAT_14001328c = *(byte *)puVar6[2];
    pbVar13 = (byte *)puVar6[2];
  }
switchD_14000bf57_caseD_12:
  uVar9 = (ulonglong)DAT_1400132e8;
  *pbVar13 = DAT_14001328c;
  pbVar12 = DAT_140013280;
  iVar3 = DAT_14001325c;
  _Str = pbVar13;
LAB_14000be50:
  do {
    uVar14 = (ulonglong)(byte)(&DAT_14000f450)[(ulonglong)*pbVar13 * 4];
    iVar8 = (int)uVar9;
    lVar10 = (longlong)iVar8 * 2;
    if (*(short *)((longlong)&PTR_14000f3d0 + lVar10) != 0) {
      pbVar12 = pbVar13;
      iVar3 = iVar8;
      DAT_14001325c = iVar8;
      DAT_140013280 = pbVar13;
    }
    if (*(short *)(&DAT_14000fac0 + ((longlong)*(short *)(&DAT_14000f8b0 + lVar10) + uVar14) * 2) !=
        iVar8) {
      do {
        sVar1 = *(short *)(&DAT_14000f940 + lVar10);
        uVar9 = (ulonglong)sVar1;
        if (0x39 < sVar1) {
          uVar14 = (ulonglong)(byte)(&DAT_14000f850)[uVar14 * 4];
        }
        lVar10 = uVar9 * 2;
      } while (*(short *)(&DAT_14000fac0 +
                         ((longlong)*(short *)(&DAT_14000f8b0 + lVar10) + uVar14) * 2) != sVar1);
    }
    iVar8 = (int)uVar9;
    pbVar13 = pbVar13 + 1;
    uVar9 = (ulonglong)
            (uint)(int)*(short *)(&DAT_14000f9d0 +
                                 (ulonglong)
                                 (uint)((int)*(short *)(&DAT_14000f8b0 + (longlong)iVar8 * 2) +
                                       (int)uVar14) * 2);
    pbVar15 = _Str;
  } while ((int)*(short *)(&DAT_14000f9d0 +
                          (ulonglong)
                          (uint)((int)*(short *)(&DAT_14000f8b0 + (longlong)iVar8 * 2) + (int)uVar14
                                ) * 2) != 0x39);
LAB_14000bf00:
  iVar8 = (int)*(short *)((longlong)&PTR_14000f3d0 + (longlong)iVar3 * 2);
  DAT_140013290 = (longlong)pbVar12 - (longlong)pbVar15;
  DAT_14001328c = *pbVar12;
  DAT_140013278 = pbVar15;
  DAT_1400132e0 = pbVar12;
  *pbVar12 = 0;
  pbVar13 = pbVar12;
  _Str = pbVar15;
LAB_14000bf40:
  lVar2 = DAT_1400132d8;
  lVar10 = DAT_1400132c8;
  iVar3 = DAT_14001325c;
  switch(iVar8) {
  case 0:
    goto switchD_14000bf57_caseD_0;
  case 1:
    FUN_14000d0d0(2,0);
    uVar7 = 0;
    _DAT_140013270 = "XmlComment";
    break;
  case 2:
    FUN_14000d0d0(1,1);
    uVar7 = 6;
    _DAT_140013270 = "NamedExpr";
    break;
  case 3:
    DAT_140013260 = 0;
    DAT_1400132e8 = 3;
    goto switchD_14000bf57_caseD_12;
  case 4:
    DAT_140013260 = 0;
    DAT_1400132e8 = 5;
    goto switchD_14000bf57_caseD_12;
  case 5:
    DAT_1400132c0 = DAT_1400132c0 + 1;
    goto switchD_14000bf57_caseD_12;
  case 6:
    _DAT_140013270 = "PxslFragmentStart";
    uVar7 = 9;
    break;
  case 7:
    _DAT_140013270 = "PxslFragmentEnd";
    uVar7 = 10;
    break;
  case 8:
    FUN_14000d0d0(0,0);
    uVar7 = 5;
    _DAT_140013270 = "XmlName";
    break;
  case 9:
    FUN_14000d0d0(1,0);
    uVar7 = 4;
    _DAT_140013270 = "MacroName";
    break;
  case 10:
    _DAT_140013270 = "Comma";
    uVar7 = 1;
    break;
  case 0xb:
    _DAT_140013270 = "Assignment";
    uVar7 = 2;
    break;
  case 0xc:
  case 0xd:
    DAT_1400132c0 = DAT_1400132c0 + 1;
    uVar7 = 3;
    _DAT_140013270 = "Newline";
    break;
  case 0xe:
    FUN_14000d0d0(0,0);
    uVar7 = 0xb;
    _DAT_140013270 = "SpaceString";
    break;
  case 0xf:
  case 0x10:
    FUN_14000d0d0(0,0);
    uVar7 = 0xc;
    _DAT_140013270 = "Number";
    break;
  case 0x11:
    FUN_140005ec0("Tabs are not allowed in pxsl document outside literals");
    pbVar13 = DAT_1400132e0;
  case 0x12:
    goto switchD_14000bf57_caseD_12;
  case 0x13:
    if (_Str == (byte *)0x0) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = (ulonglong)(uint)(int)(char)*_Str;
    }
    FUN_140006010("Unrecognized character: \'%s\' (ascii code %d)\n",_Str,uVar9,uVar14);
    pbVar13 = DAT_1400132e0;
    goto switchD_14000bf57_caseD_12;
  case 0x14:
    FUN_14000d1c0(2);
  case 0x15:
    DAT_1400132e8 = 1;
    _DAT_140013270 = "MixedLiteral";
    uVar7 = 7;
    break;
  case 0x16:
  case 0x17:
  case 0x1a:
  case 0x1b:
    goto switchD_14000bf57_caseD_16;
  case 0x18:
  case 0x1c:
    DAT_1400132c0 = DAT_1400132c0 + 1;
switchD_14000bf57_caseD_16:
    FUN_14000d1c0(0);
    pbVar13 = DAT_1400132e0;
    goto switchD_14000bf57_caseD_12;
  case 0x19:
    DAT_1400132e8 = 1;
    _DAT_140013270 = "CdataLiteral";
    uVar7 = 8;
    break;
  case 0x1d:
    fwrite(_Str,DAT_140013290,1,DAT_1400132f8);
    pbVar13 = DAT_1400132e0;
    goto switchD_14000bf57_caseD_12;
  case 0x1e:
    *pbVar12 = DAT_14001328c;
    puVar6 = *(undefined8 **)(lVar2 + lVar10 * 8);
    iVar8 = ((int)pbVar12 - (int)_Str) + -1;
    if (*(int *)(puVar6 + 8) == 0) {
      DAT_140013298 = puVar6[4];
      *puVar6 = DAT_1400132f0;
      *(undefined4 *)(*(longlong *)(lVar2 + lVar10 * 8) + 0x40) = 1;
    }
    if ((byte *)(*(longlong *)(*(longlong *)(lVar2 + lVar10 * 8) + 8) + DAT_140013298) < pbVar13) {
      uVar9 = FUN_14000c3c0();
      _Str = DAT_140013278;
      iVar3 = (int)uVar9;
      if (iVar3 == 0) {
        pbVar13 = DAT_140013278 + iVar8;
        DAT_1400132e0 = pbVar13;
        uVar9 = FUN_14000c850();
        uVar9 = uVar9 & 0xffffffff;
        pbVar12 = DAT_140013280;
        iVar3 = DAT_14001325c;
        goto LAB_14000be50;
      }
      if (iVar3 == 1) goto code_r0x00014000bfc6;
      pbVar13 = DAT_1400132e0;
      if (iVar3 != 2) goto switchD_14000bf57_caseD_12;
      pbVar12 = (byte *)(DAT_140013298 +
                        *(longlong *)(*(longlong *)(DAT_1400132d8 + DAT_1400132c8 * 8) + 8));
      DAT_1400132e0 = pbVar12;
      uVar9 = FUN_14000c850();
      pbVar15 = DAT_140013278;
      iVar3 = (int)uVar9;
      goto LAB_14000bf00;
    }
    DAT_1400132e0 = _Str + iVar8;
    uVar9 = FUN_14000c850();
    uVar4 = FUN_14000c950((int)uVar9);
    uVar9 = (ulonglong)uVar4;
    pbVar12 = DAT_140013280;
    pbVar15 = _Str;
    iVar3 = DAT_14001325c;
    if (uVar4 == 0) goto LAB_14000bf00;
    pbVar13 = _Str + iVar8 + 1;
    goto LAB_14000be50;
  case 0x1f:
  case 0x20:
  case 0x21:
    uVar7 = 0xffffffff;
    break;
  default:
    pFVar5 = __iob_func();
    fprintf(pFVar5 + 2,"%s\n","fatal flex scanner internal error--no action found");
                    // WARNING: Subroutine does not return
    exit(2);
  }
  return uVar7;
code_r0x00014000bfc6:
  DAT_1400132e0 = DAT_140013278;
  _DAT_140013288 = 0;
  iVar8 = (int)(DAT_1400132e8 - 1) / 2 + 0x1f;
  pbVar13 = DAT_140013278;
  goto LAB_14000bf40;
switchD_14000bf57_caseD_0:
  *pbVar12 = DAT_14001328c;
  pbVar12 = DAT_140013280;
  goto LAB_14000bf00;
}



ulonglong FUN_14000c3c0(void)

{
  longlong *plVar1;
  undefined1 *puVar2;
  int iVar3;
  FILE *pFVar4;
  int *piVar5;
  void *pvVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  size_t sVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  size_t sVar15;
  
  puVar2 = DAT_1400132e0;
  plVar12 = (longlong *)(DAT_1400132d8 + DAT_1400132c8 * 8);
  puVar8 = *(undefined1 **)(*(longlong *)(DAT_1400132d8 + DAT_1400132c8 * 8) + 8);
  if (puVar8 + DAT_140013298 + 1 < DAT_1400132e0) {
    pFVar4 = __iob_func();
    fprintf(pFVar4 + 2,"%s\n","fatal flex scanner internal error--end of buffer missed");
                    // WARNING: Subroutine does not return
    exit(2);
  }
  if (*(int *)(*plVar12 + 0x3c) == 0) {
    return (ulonglong)(((longlong)DAT_1400132e0 - DAT_140013278 != 1) + 1);
  }
  uVar13 = ((int)DAT_1400132e0 - (int)DAT_140013278) - 1;
  if (0 < (int)uVar13) {
    lVar11 = DAT_140013278 - (longlong)puVar8;
    uVar7 = (ulonglong)uVar13;
    do {
      uVar7 = uVar7 - 1;
      *puVar8 = puVar8[lVar11];
      puVar8 = puVar8 + 1;
    } while (uVar7 != 0);
  }
  lVar11 = *plVar12;
  sVar15 = 0;
  if (*(int *)(lVar11 + 0x40) == 2) {
    DAT_140013298 = 0;
    *(undefined8 *)(lVar11 + 0x20) = 0;
    sVar10 = sVar15;
  }
  else {
    lVar14 = (longlong)(int)uVar13;
    lVar9 = *(longlong *)(lVar11 + 0x18) - lVar14;
    while (uVar7 = lVar9 - 1, uVar7 == 0) {
      iVar3 = *(int *)(lVar11 + 8);
      if (*(int *)(lVar11 + 0x28) == 0) {
        *(undefined8 *)(lVar11 + 8) = 0;
      }
      else {
        uVar7 = *(ulonglong *)(lVar11 + 0x18);
        lVar9 = uVar7 * 2;
        if (lVar9 == 0) {
          lVar9 = (uVar7 >> 3) + uVar7;
        }
        *(longlong *)(lVar11 + 0x18) = lVar9;
        pvVar6 = realloc(*(void **)(lVar11 + 8),lVar9 + 2);
        *(void **)(lVar11 + 8) = pvVar6;
      }
      plVar1 = (longlong *)(lVar11 + 8);
      if (*plVar1 == 0) {
        pFVar4 = __iob_func();
        fprintf(pFVar4 + 2,"%s\n","fatal error - scanner input buffer overflow");
                    // WARNING: Subroutine does not return
        exit(2);
      }
      lVar11 = *plVar12;
      DAT_1400132e0 = (undefined1 *)((longlong)((int)puVar2 - iVar3) + *plVar1);
      puVar2 = DAT_1400132e0;
      lVar9 = *(longlong *)(lVar11 + 0x18) - lVar14;
    }
    if (0x2000 < uVar7) {
      uVar7 = 0x2000;
    }
    if (*(int *)(*plVar12 + 0x2c) == 0) {
      piVar5 = _errno();
      pFVar4 = DAT_1400132f0;
      lVar11 = DAT_1400132d8;
      *piVar5 = 0;
      DAT_140013298 =
           fread((void *)(lVar14 + *(longlong *)(*(longlong *)(lVar11 + DAT_1400132c8 * 8) + 8)),1,
                 uVar7,pFVar4);
      while ((sVar10 = DAT_140013298, DAT_140013298 == 0 &&
             (iVar3 = ferror(DAT_1400132f0), sVar10 = DAT_140013298, iVar3 != 0))) {
        piVar5 = _errno();
        if (*piVar5 != 4) {
          pFVar4 = __iob_func();
          fprintf(pFVar4 + 2,"%s\n","input in flex scanner failed");
                    // WARNING: Subroutine does not return
          exit(2);
        }
        piVar5 = _errno();
        pFVar4 = DAT_1400132f0;
        *piVar5 = 0;
        clearerr(pFVar4);
        DAT_140013298 =
             fread((void *)(lVar14 + *(longlong *)
                                      (*(longlong *)(DAT_1400132d8 + DAT_1400132c8 * 8) + 8)),1,
                   uVar7,DAT_1400132f0);
      }
    }
    else {
      sVar10 = sVar15;
      if (uVar7 != 0) {
        do {
          iVar3 = getc(DAT_1400132f0);
          if (iVar3 == -1) break;
          if (iVar3 == 10) goto LAB_14000c5a5;
          sVar10 = sVar10 + 1;
          *(char *)(lVar14 + *(longlong *)(*(longlong *)(DAT_1400132d8 + DAT_1400132c8 * 8) + 8) +
                    -1 + sVar10) = (char)iVar3;
        } while (sVar10 < uVar7);
        if (iVar3 == 10) {
LAB_14000c5a5:
          sVar10 = sVar10 + 1;
          *(char *)(lVar14 + *(longlong *)(*(longlong *)(DAT_1400132d8 + DAT_1400132c8 * 8) + 8) +
                    -1 + sVar10) = (char)iVar3;
        }
        if ((iVar3 == -1) && (iVar3 = ferror(DAT_1400132f0), iVar3 != 0)) {
          pFVar4 = __iob_func();
          fprintf(pFVar4 + 2,"%s\n","input in flex scanner failed");
                    // WARNING: Subroutine does not return
          exit(2);
        }
      }
    }
    DAT_140013298 = sVar10;
    sVar10 = DAT_140013298;
    plVar12 = (longlong *)(DAT_1400132d8 + DAT_1400132c8 * 8);
    *(size_t *)(*(longlong *)(DAT_1400132d8 + DAT_1400132c8 * 8) + 0x20) = DAT_140013298;
    if (sVar10 != 0) goto LAB_14000c779;
  }
  if (uVar13 == 0) {
    FUN_14000ca00();
    sVar10 = DAT_140013298;
    sVar15 = 1;
  }
  else {
    sVar15 = 2;
    *(undefined4 *)(*plVar12 + 0x40) = 2;
  }
LAB_14000c779:
  lVar14 = DAT_1400132d8;
  lVar9 = DAT_1400132c8;
  lVar11 = *(longlong *)(DAT_1400132d8 + DAT_1400132c8 * 8);
  uVar7 = (longlong)(int)uVar13 + sVar10;
  if (*(ulonglong *)(lVar11 + 0x18) < uVar7) {
    pvVar6 = realloc(*(void **)(lVar11 + 8),(sVar10 >> 1) + (longlong)(int)uVar13 + sVar10);
    *(void **)(*(longlong *)(lVar14 + lVar9 * 8) + 8) = pvVar6;
    if (*(longlong *)(*(longlong *)(lVar14 + lVar9 * 8) + 8) == 0) {
      pFVar4 = __iob_func();
      fprintf(pFVar4 + 2,"%s\n","out of dynamic memory in yy_get_next_buffer()");
                    // WARNING: Subroutine does not return
      exit(2);
    }
  }
  DAT_140013298 = uVar7;
  *(undefined1 *)(*(longlong *)(*(longlong *)(lVar14 + lVar9 * 8) + 8) + uVar7) = 0;
  *(undefined1 *)(*(longlong *)(*(longlong *)(lVar14 + lVar9 * 8) + 8) + 1 + uVar7) = 0;
  DAT_140013278 = *(longlong *)(*(longlong *)(lVar14 + lVar9 * 8) + 8);
  return sVar15;
}



ulonglong FUN_14000c850(void)

{
  short sVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  byte *pbVar7;
  
  uVar2 = DAT_1400132e8;
  for (pbVar7 = DAT_140013278; uVar3 = (ulonglong)uVar2, pbVar7 < DAT_1400132e0; pbVar7 = pbVar7 + 1
      ) {
    if (*pbVar7 == 0) {
      bVar5 = 1;
    }
    else {
      bVar5 = (&DAT_14000f450)[(ulonglong)*pbVar7 * 4];
    }
    lVar4 = (longlong)(int)uVar2 * 2;
    if (*(short *)((longlong)&PTR_14000f3d0 + lVar4) != 0) {
      DAT_14001325c = uVar2;
      DAT_140013280 = pbVar7;
    }
    uVar6 = (ulonglong)bVar5;
    if ((int)*(short *)(&DAT_14000fac0 + ((longlong)*(short *)(&DAT_14000f8b0 + lVar4) + uVar6) * 2)
        != uVar2) {
      do {
        sVar1 = *(short *)(&DAT_14000f940 + lVar4);
        uVar3 = (ulonglong)sVar1;
        if (0x39 < sVar1) {
          bVar5 = (&DAT_14000f850)[uVar6 * 4];
        }
        lVar4 = uVar3 * 2;
        uVar6 = (ulonglong)bVar5;
      } while (*(short *)(&DAT_14000fac0 +
                         ((longlong)*(short *)(&DAT_14000f8b0 + lVar4) + uVar6) * 2) != sVar1);
    }
    uVar2 = (uint)*(short *)(&DAT_14000f9d0 +
                            (ulonglong)
                            ((int)*(short *)(&DAT_14000f8b0 + (longlong)(int)uVar3 * 2) +
                            (uint)bVar5) * 2);
  }
  return uVar3;
}



int FUN_14000c950(int param_1)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar3 = (longlong)param_1;
  uVar5 = 1;
  iVar2 = 1;
  lVar4 = lVar3 * 2;
  if (*(short *)((longlong)&PTR_14000f3d0 + lVar4) != 0) {
    DAT_140013280 = DAT_1400132e0;
    DAT_14001325c = param_1;
  }
  if (*(short *)(&DAT_14000fac2 + (longlong)*(short *)(&DAT_14000f8b0 + lVar4) * 2) != param_1) {
    do {
      sVar1 = *(short *)(&DAT_14000f940 + lVar4);
      lVar3 = (longlong)sVar1;
      if (0x39 < sVar1) {
        uVar5 = (ulonglong)(byte)(&DAT_14000f850)[uVar5 * 4];
      }
      iVar2 = (int)uVar5;
      lVar4 = lVar3 * 2;
    } while (*(short *)(&DAT_14000fac0 + ((longlong)*(short *)(&DAT_14000f8b0 + lVar4) + uVar5) * 2)
             != sVar1);
  }
  iVar2 = (int)*(short *)(&DAT_14000f9d0 +
                         (ulonglong)
                         (uint)(*(short *)(&DAT_14000f8b0 + (longlong)(int)lVar3 * 2) + iVar2) * 2);
  if (iVar2 == 0x39) {
    iVar2 = 0;
  }
  return iVar2;
}



void FUN_14000ca00(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  uVar2 = DAT_1400132f0;
  if ((DAT_1400132d8 == 0) ||
     (puVar6 = (undefined8 *)(DAT_1400132d8 + DAT_1400132c8 * 8), lVar5 = DAT_1400132d8,
     *(longlong *)(DAT_1400132d8 + DAT_1400132c8 * 8) == 0)) {
    FUN_14000ce30();
    puVar6 = (undefined8 *)(DAT_1400132d8 + DAT_1400132c8 * 8);
    puVar3 = FUN_14000cbc0();
    lVar5 = DAT_1400132d8;
    *puVar6 = puVar3;
  }
  if (lVar5 == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)*puVar6;
  }
  piVar4 = _errno();
  iVar1 = *piVar4;
  FUN_14000ccf0((longlong)puVar6);
  lVar5 = DAT_1400132d8;
  *puVar6 = uVar2;
  *(undefined4 *)((longlong)puVar6 + 0x3c) = 1;
  puVar3 = (undefined8 *)0x0;
  if (lVar5 != 0) {
    puVar3 = *(undefined8 **)(lVar5 + DAT_1400132c8 * 8);
  }
  if (puVar6 != puVar3) {
    *(undefined8 *)((longlong)puVar6 + 0x34) = 1;
  }
  *(undefined4 *)((longlong)puVar6 + 0x2c) = 0;
  piVar4 = _errno();
  lVar5 = DAT_1400132d8;
  *piVar4 = iVar1;
  puVar6 = *(undefined8 **)(lVar5 + DAT_1400132c8 * 8);
  DAT_1400132e0 = (undefined1 *)puVar6[2];
  DAT_140013298 = puVar6[4];
  DAT_1400132f0 = *puVar6;
  DAT_140013278 = DAT_1400132e0;
  DAT_14001328c = *DAT_1400132e0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000cb10(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  FUN_14000ce30();
  lVar2 = DAT_1400132d8;
  lVar1 = DAT_1400132c8;
  if (DAT_1400132d8 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = *(undefined8 **)(DAT_1400132d8 + DAT_1400132c8 * 8);
  }
  if (puVar3 != param_1) {
    if ((DAT_1400132d8 != 0) && (*(longlong *)(DAT_1400132d8 + DAT_1400132c8 * 8) != 0)) {
      *DAT_1400132e0 = DAT_14001328c;
      *(undefined1 **)(*(longlong *)(lVar2 + lVar1 * 8) + 0x10) = DAT_1400132e0;
      *(undefined8 *)(*(longlong *)(lVar2 + lVar1 * 8) + 0x20) = DAT_140013298;
    }
    *(undefined8 **)(lVar2 + lVar1 * 8) = param_1;
    DAT_140013278 = (undefined1 *)param_1[2];
    DAT_140013298 = param_1[4];
    DAT_1400132f0 = *param_1;
    DAT_14001328c = *DAT_140013278;
    _DAT_140013288 = 1;
    DAT_1400132e0 = DAT_140013278;
  }
  return;
}



undefined8 * FUN_14000cbc0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FILE *pFVar3;
  void *pvVar4;
  
  puVar2 = malloc(0x48);
  if (puVar2 == (undefined8 *)0x0) {
    pFVar3 = __iob_func();
    fprintf(pFVar3 + 2,"%s\n","out of dynamic memory in yy_create_buffer()");
                    // WARNING: Subroutine does not return
    exit(2);
  }
  puVar2[3] = 0x4000;
  pvVar4 = malloc(0x4002);
  puVar2[1] = pvVar4;
  uVar1 = DAT_1400132f0;
  if (pvVar4 == (void *)0x0) {
    pFVar3 = __iob_func();
    fprintf(pFVar3 + 2,"%s\n","out of dynamic memory in yy_create_buffer()");
                    // WARNING: Subroutine does not return
    exit(2);
  }
  *(undefined4 *)(puVar2 + 5) = 1;
  FUN_14000cc70(puVar2,uVar1);
  return puVar2;
}



void FUN_14000cc70(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 *puVar4;
  
  piVar3 = _errno();
  iVar1 = *piVar3;
  FUN_14000ccf0((longlong)param_1);
  lVar2 = DAT_1400132d8;
  puVar4 = (undefined8 *)0x0;
  *param_1 = param_2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 1;
  if (lVar2 != 0) {
    puVar4 = *(undefined8 **)(lVar2 + DAT_1400132c8 * 8);
  }
  if (param_1 != puVar4) {
    *(undefined8 *)((longlong)param_1 + 0x34) = 1;
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  piVar3 = _errno();
  *piVar3 = iVar1;
  return;
}



void FUN_14000ccf0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = DAT_1400132c8;
  if (param_1 != 0) {
    lVar4 = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    **(undefined1 **)(param_1 + 8) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 1) = 0;
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
    lVar3 = DAT_1400132d8;
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar3 + lVar2 * 8);
    }
    if (param_1 == lVar4) {
      puVar1 = *(undefined8 **)(lVar3 + lVar2 * 8);
      DAT_140013278 = (undefined1 *)puVar1[2];
      DAT_140013298 = puVar1[4];
      DAT_1400132f0 = *puVar1;
      DAT_14001328c = *DAT_140013278;
      DAT_1400132e0 = DAT_140013278;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000cd70(void)

{
  void *_Memory;
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = DAT_1400132d8;
  lVar3 = DAT_1400132c8;
  if ((DAT_1400132d8 != 0) &&
     (_Memory = *(void **)(DAT_1400132d8 + DAT_1400132c8 * 8), _Memory != (void *)0x0)) {
    *(undefined8 *)(DAT_1400132d8 + DAT_1400132c8 * 8) = 0;
    if (*(int *)((longlong)_Memory + 0x28) != 0) {
      free(*(void **)((longlong)_Memory + 8));
    }
    free(_Memory);
    *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
    if (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      DAT_1400132c8 = lVar3;
    }
    if (*(longlong *)(lVar2 + lVar3 * 8) != 0) {
      puVar1 = *(undefined8 **)(lVar2 + lVar3 * 8);
      _DAT_140013288 = 1;
      DAT_140013278 = (undefined1 *)puVar1[2];
      DAT_140013298 = puVar1[4];
      DAT_1400132f0 = *puVar1;
      DAT_14001328c = *DAT_140013278;
      DAT_1400132e0 = DAT_140013278;
    }
  }
  return;
}



void FUN_14000ce30(void)

{
  longlong lVar1;
  longlong lVar2;
  FILE *pFVar3;
  undefined8 *puVar4;
  
  lVar2 = DAT_1400132d0;
  if (DAT_1400132d8 != (undefined8 *)0x0) {
    if (DAT_1400132d0 - 1U <= DAT_1400132c8) {
      lVar1 = DAT_1400132d0 + 8;
      puVar4 = realloc(DAT_1400132d8,lVar1 * 8);
      DAT_1400132d8 = puVar4;
      if (puVar4 == (undefined8 *)0x0) {
        pFVar3 = __iob_func();
        fprintf(pFVar3 + 2,"%s\n","out of dynamic memory in yyensure_buffer_stack()");
                    // WARNING: Subroutine does not return
        exit(2);
      }
      DAT_1400132d0 = lVar1;
      puVar4[lVar2] = 0;
      puVar4[lVar2 + 1] = 0;
      puVar4[lVar2 + 2] = 0;
      puVar4[lVar2 + 3] = 0;
      puVar4[lVar2 + 4] = 0;
      puVar4[lVar2 + 5] = 0;
      puVar4[lVar2 + 6] = 0;
      puVar4[lVar2 + 7] = 0;
    }
    return;
  }
  DAT_1400132d8 = malloc(8);
  if (DAT_1400132d8 == (undefined8 *)0x0) {
    pFVar3 = __iob_func();
    fprintf(pFVar3 + 2,"%s\n","out of dynamic memory in yyensure_buffer_stack()");
                    // WARNING: Subroutine does not return
    exit(2);
  }
  DAT_1400132d0 = 1;
  *DAT_1400132d8 = 0;
  DAT_1400132c8 = 0;
  return;
}



undefined8 * FUN_14000cf50(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  FILE *pFVar2;
  
  if (((1 < param_2) && (*(char *)(param_1 + -2 + param_2) == '\0')) &&
     (*(char *)(param_1 + -1 + param_2) == '\0')) {
    puVar1 = malloc(0x48);
    if (puVar1 == (undefined8 *)0x0) {
      pFVar2 = __iob_func();
      fprintf(pFVar2 + 2,"%s\n","out of dynamic memory in yy_scan_buffer()");
                    // WARNING: Subroutine does not return
      exit(2);
    }
    puVar1[1] = param_1;
    *puVar1 = 0;
    puVar1[5] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    puVar1[3] = param_2 - 2;
    puVar1[2] = param_1;
    puVar1[4] = param_2 - 2;
    *(undefined4 *)(puVar1 + 6) = 1;
    FUN_14000cb10(puVar1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



undefined8 FUN_14000d010(void)

{
  void *_Memory;
  longlong lVar1;
  void *pvVar2;
  
  while (pvVar2 = DAT_1400132d8, lVar1 = DAT_1400132c8, DAT_1400132d8 != (void *)0x0) {
    _Memory = *(void **)((longlong)DAT_1400132d8 + DAT_1400132c8 * 8);
    if (_Memory == (void *)0x0) break;
    *(undefined8 *)((longlong)DAT_1400132d8 + DAT_1400132c8 * 8) = 0;
    if (*(int *)((longlong)_Memory + 0x28) != 0) {
      free(*(void **)((longlong)_Memory + 8));
    }
    free(_Memory);
    *(undefined8 *)((longlong)pvVar2 + lVar1 * 8) = 0;
    FUN_14000cd70();
  }
  free(DAT_1400132d8);
  DAT_1400132d8 = (void *)0x0;
  DAT_1400132c8 = 0;
  DAT_1400132d0 = 0;
  DAT_1400132e0 = 0;
  DAT_1400132c4 = 0;
  DAT_1400132e8 = 0;
  DAT_1400132f0 = 0;
  DAT_1400132f8 = 0;
  return 0;
}



void FUN_14000d0d0(longlong param_1,longlong param_2)

{
  char cVar1;
  void *pvVar2;
  ulonglong uVar3;
  char *pcVar4;
  longlong lVar5;
  char *pcVar6;
  
  uVar3 = 0xffffffffffffffff;
  pcVar6 = DAT_140013278;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  lVar5 = ((~uVar3 - 1) - param_1) - param_2;
  if (lVar5 != 0) {
    if (DAT_1400132b8 == (longlong *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = FUN_140004a40(DAT_1400132b8,~uVar3,0x140010314);
    }
    pcVar6 = DAT_140013278 + param_1;
    pcVar4 = pcVar6;
    DAT_140013260 = pvVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar4[(longlong)pvVar2 + (-1 - (longlong)pcVar6)] = cVar1;
    } while (cVar1 != '\0');
    *(undefined1 *)((longlong)pvVar2 + lVar5) = 0;
    return;
  }
  if (DAT_1400132b8 == (longlong *)0x0) {
    DAT_140013260 = (undefined1 *)0x0;
    uRam0000000000000000 = 0;
    return;
  }
  DAT_140013260 = FUN_140004a40(DAT_1400132b8,1,0x140010314);
  *DAT_140013260 = 0;
  return;
}



void FUN_14000d1c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  
  uVar5 = 0xffffffffffffffff;
  pcVar4 = DAT_140013278;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5;
  if (DAT_140013260 == (char *)0x0) {
    if (DAT_1400132b8 == (longlong *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = FUN_140004a40(DAT_1400132b8,uVar5,0x140010314);
    }
    pcVar4 = DAT_140013278;
    pcVar9 = DAT_140013278;
    DAT_140013260 = pvVar3;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar9[(longlong)pvVar3 + (-1 - (longlong)pcVar4)] = cVar2;
    } while (cVar2 != '\0');
    *(undefined1 *)((longlong)pvVar3 + ((uVar5 - 1) - param_1)) = 0;
    return;
  }
  uVar6 = 0xffffffffffffffff;
  pcVar4 = DAT_140013260;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  lVar1 = (uVar5 - 2) + ~uVar6;
  if (DAT_1400132b8 == (longlong *)0x0) {
    pcVar4 = (char *)0x0;
  }
  else {
    pcVar4 = FUN_140004a40(DAT_1400132b8,lVar1 + 1,0x140010314);
  }
  pcVar9 = DAT_140013278;
  pcVar10 = DAT_140013260;
  do {
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar10[(longlong)(pcVar4 + (-1 - (longlong)DAT_140013260))] = cVar2;
  } while (cVar2 != '\0');
  lVar7 = -1;
  pcVar10 = pcVar4;
  do {
    pcVar8 = pcVar10;
    if (lVar7 == 0) break;
    lVar7 = lVar7 + -1;
    pcVar8 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar8;
  } while (cVar2 != '\0');
  lVar7 = 0;
  do {
    cVar2 = pcVar9[lVar7];
    pcVar8[lVar7 + -1] = cVar2;
    lVar7 = lVar7 + 1;
  } while (cVar2 != '\0');
  DAT_140013260 = pcVar4;
  pcVar4[lVar1 - param_1] = '\0';
  return;
}



void __cdecl operator_delete(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00014000d306. Too many branches
                    // WARNING: Treating indirect jump as call
  operator_delete(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000d30c(void)

{
  atexit(FUN_14000d7ac);
  _DAT_14001321c = DAT_14001322c;
  _DAT_140013218 =
       __getmainargs(&DAT_140013200,&DAT_140013210,&DAT_140013208,DAT_140013228,&DAT_14001321c);
  if (_DAT_140013218 < 0) {
    _amsg_exit(8);
  }
  return;
}



// Library Function - Single Match
//  __tmainCRTStartup
// 
// Library: Visual Studio 2010 Release

ulonglong __tmainCRTStartup(void)

{
  void *pvVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  BOOL BVar5;
  void *pvVar6;
  ulonglong uVar7;
  bool bVar8;
  
  pvVar1 = StackBase;
  bVar2 = false;
  while( true ) {
    pvVar6 = (void *)0x0;
    LOCK();
    bVar8 = DAT_1400140f8 == (void *)0x0;
    pvVar3 = pvVar1;
    if (!bVar8) {
      pvVar6 = DAT_1400140f8;
      pvVar3 = DAT_1400140f8;
    }
    DAT_1400140f8 = pvVar3;
    UNLOCK();
    if (bVar8) goto LAB_14000d3ba;
    if (pvVar6 == pvVar1) break;
    Sleep(1000);
  }
  bVar2 = true;
LAB_14000d3ba:
  if (DAT_1400140f0 == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_1400140f0 == 0) {
    DAT_1400140f0 = 1;
    iVar4 = _initterm_e(&DAT_14000f380,&DAT_14000f398);
    if (iVar4 != 0) {
      return 0xff;
    }
  }
  else {
    DAT_140013224 = 1;
  }
  if (DAT_1400140f0 == 1) {
    _initterm(&DAT_14000f260,&DAT_14000f378);
    DAT_1400140f0 = 2;
  }
  if (!bVar2) {
    LOCK();
    DAT_1400140f8 = (void *)0x0;
    UNLOCK();
  }
  if ((DAT_140014110 != (code *)0x0) &&
     (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_140014110), BVar5 != 0)) {
    (*DAT_140014110)(0,2);
  }
  *(undefined8 *)__initenv_exref = DAT_140013208;
  uVar7 = FUN_140001000(DAT_140013200,DAT_140013210);
  DAT_140013220 = (uint)uVar7;
  if (DAT_140013204 != 0) {
    if (DAT_140013224 == 0) {
      _cexit();
      uVar7 = (ulonglong)DAT_140013220;
    }
    return uVar7;
  }
                    // WARNING: Subroutine does not return
  exit(DAT_140013220);
}



// WARNING: Removing unreachable block (ram,0x00014000d506)

undefined8 FUN_14000d4f4(void)

{
  DAT_140013204 = 0;
  __set_app_type(1);
  DAT_140014100 = EncodePointer((PVOID)0xffffffffffffffff);
  DAT_140014108 = DAT_140014100;
  *(undefined4 *)_fmode_exref = DAT_140013234;
  *(undefined4 *)_commode_exref = DAT_140013230;
  FUN_14000d774();
  FUN_14000d8c0();
  if (DAT_14001302c == 0) {
    __setusermatherr(FUN_14000d8c0);
  }
  if (DAT_140013028 == -1) {
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
  
  local_res10 = DecodePointer(DAT_140014108);
  if (local_res10 == (PVOID)0xffffffffffffffff) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = DecodePointer(DAT_140014108);
    local_res18[0] = DecodePointer(DAT_140014100);
    pvVar2 = EncodePointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(pvVar2,&local_res10,local_res18);
    DAT_140014108 = EncodePointer(local_res10);
    DAT_140014100 = EncodePointer(local_res18[0]);
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



// Library Function - Single Match
//  public: virtual void * __ptr64 __cdecl type_info::`vector deleting destructor'(unsigned int)
// __ptr64
// 
// Library: Visual Studio 2010 Release

void * __thiscall type_info::_vector_deleting_destructor_(type_info *this,uint param_1)

{
  if ((param_1 & 2) == 0) {
    type_info::_type_info_dtor_internal_method(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
  }
  else {
    _eh_vector_destructor_iterator_
              (this,0x18,*(int *)(this + -8),type_info::_type_info_dtor_internal_method);
    if ((param_1 & 1) != 0) {
      operator_delete(this + -8);
    }
    this = this + -8;
  }
  return this;
}



void _purecall(void)

{
                    // WARNING: Could not recover jumptable at 0x00014000d70a. Too many branches
                    // WARNING: Treating indirect jump as call
  _purecall();
  return;
}



undefined8 FUN_14000d710(undefined8 *param_1)

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



undefined8 FUN_14000d754(void)

{
  SetUnhandledExceptionFilter(FUN_14000d710);
  return 0;
}



void __cdecl _amsg_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00014000d76c. Too many branches
                    // WARNING: Treating indirect jump as call
  _amsg_exit(param_1);
  return;
}



void FUN_14000d774(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140011200; puVar1 < &DAT_140011200; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



void FUN_14000d7ac(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140011210; puVar1 < &DAT_140011210; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014000d7ea. Too many branches
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
                    // WARNING: Could not recover jumptable at 0x00014000d8b2. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x00014000d8b8. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



undefined8 FUN_14000d8c0(void)

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
  if (DAT_140013030 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_140013030 =
         (local_res10.QuadPart ^
         (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff
    ;
    if (DAT_140013030 == 0x2b992ddfa232) {
      DAT_140013030 = 0x2b992ddfa233;
    }
  }
  _DAT_140013038 = ~DAT_140013030;
  return;
}



void __cdecl _unlock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x00014000d978. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock(_File);
  return;
}



void __dllonexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00014000d97e. Too many branches
                    // WARNING: Treating indirect jump as call
  __dllonexit();
  return;
}



void __cdecl _lock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x00014000d984. Too many branches
                    // WARNING: Treating indirect jump as call
  _lock(_File);
  return;
}



// Library Function - Single Match
//  void __cdecl __ArrayUnwind(void * __ptr64,unsigned __int64,int,void (__cdecl*)(void * __ptr64))
// 
// Library: Visual Studio 2010 Release

void __cdecl __ArrayUnwind(void *param_1,__uint64 param_2,int param_3,_func_void_void_ptr *param_4)

{
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    param_1 = (void *)((longlong)param_1 - param_2);
    (*param_4)(param_1);
  }
  return;
}



// Library Function - Single Match
//  void __cdecl `eh vector destructor iterator'(void * __ptr64,unsigned __int64,int,void
// (__cdecl*)(void * __ptr64))
// 
// Library: Visual Studio 2010 Release

void __cdecl
_eh_vector_destructor_iterator_
          (void *param_1,__uint64 param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *pvVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_3;
  pvVar1 = (void *)(uVar3 * param_2 + (longlong)param_1);
  while( true ) {
    uVar2 = (int)uVar3 - 1;
    uVar3 = (ulonglong)uVar2;
    if ((int)uVar2 < 0) break;
    pvVar1 = (void *)((longlong)pvVar1 - param_2);
    (*param_4)(pvVar1);
  }
  return;
}



void __cdecl terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x00014000da36. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



void __thiscall type_info::_type_info_dtor_internal_method(type_info *this)

{
                    // WARNING: Could not recover jumptable at 0x00014000da3c. Too many branches
                    // WARNING: Treating indirect jump as call
  _type_info_dtor_internal_method(this);
  return;
}



void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014000da42. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014000da48. Too many branches
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



void FUN_14000dab0(_EXCEPTION_POINTERS *param_1)

{
  _XcptFilter(param_1->ExceptionRecord->ExceptionCode,param_1);
  return;
}



void FUN_14000dace(void)

{
  _unlock(8);
  return;
}



bool FUN_14000daf0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



// Library Function - Single Match
//  int `void __cdecl __ArrayUnwind(void * __ptr64,unsigned __int64,int,void (__cdecl*)(void *
// __ptr64))'::`1'::filt$0
// 
// Library: Visual Studio 2005 Release

undefined4
`void___cdecl___ArrayUnwind(void*___ptr64,unsigned___int64,int,void_(__cdecl*)(void*___ptr64))'::
__l1::filt_0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  *(undefined8 *)(param_2 + 0x28) = param_1;
  *(undefined8 *)(param_2 + 0x30) = **(undefined8 **)(param_2 + 0x28);
  if (**(int **)(param_2 + 0x30) != -0x1f928c9d) {
    *(undefined4 *)(param_2 + 0x20) = 0;
    return *(undefined4 *)(param_2 + 0x20);
  }
                    // WARNING: Subroutine does not return
  terminate();
}



// Library Function - Single Match
//  int `void __cdecl `eh vector destructor iterator'(void * __ptr64,unsigned __int64,int,void
// (__cdecl*)(void * __ptr64))'::`1'::fin$0
// 
// Library: Visual Studio 2005 Release

void `void___cdecl_`eh_vector_destructor_iterator'(void*___ptr64,unsigned___int64,int,void_(__cdecl*)(void*___ptr64))'
     ::__l1::fin_0(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x20) == 0) {
    __ArrayUnwind(*(void **)(param_2 + 0x60),*(__uint64 *)(param_2 + 0x68),*(int *)(param_2 + 0x70),
                  *(_func_void_void_ptr **)(param_2 + 0x78));
  }
  return;
}



void FUN_14000db80(void)

{
  FUN_140001ac0((LPCRITICAL_SECTION)&DAT_140013300);
  atexit(FUN_14000e160);
  return;
}



// WARNING: Removing unreachable block (ram,0x00014000dd82)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000dd60(void)

{
  char *pcVar1;
  uint uVar2;
  
  uVar2 = 0;
  pcVar1 = "quest-shortcuts.edf";
  do {
    if (*pcVar1 == '\0') break;
    uVar2 = uVar2 + 1;
    pcVar1 = pcVar1 + 1;
  } while (uVar2 != 0xffffffff);
  DAT_140013488 = uVar2;
  _DAT_14001348c = uVar2;
  if (uVar2 == 0) {
    DAT_140013480 = (void *)0x0;
    atexit(FUN_14000e300);
    return;
  }
  DAT_140013480 = malloc((ulonglong)(uVar2 + 1));
  memcpy(DAT_140013480,"quest-shortcuts.edf",(ulonglong)uVar2);
  *(undefined1 *)((ulonglong)DAT_140013488 + (longlong)DAT_140013480) = 0;
  atexit(FUN_14000e300);
  return;
}



// WARNING: Removing unreachable block (ram,0x00014000de22)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000de00(void)

{
  char *pcVar1;
  uint uVar2;
  
  uVar2 = 0;
  pcVar1 = "quest-macros-public.edf";
  do {
    if (*pcVar1 == '\0') break;
    uVar2 = uVar2 + 1;
    pcVar1 = pcVar1 + 1;
  } while (uVar2 != 0xffffffff);
  DAT_140013498 = uVar2;
  _DAT_14001349c = uVar2;
  if (uVar2 == 0) {
    DAT_140013490 = (void *)0x0;
    atexit(FUN_14000e330);
    return;
  }
  DAT_140013490 = malloc((ulonglong)(uVar2 + 1));
  memcpy(DAT_140013490,"quest-macros-public.edf",(ulonglong)uVar2);
  *(undefined1 *)((ulonglong)DAT_140013498 + (longlong)DAT_140013490) = 0;
  atexit(FUN_14000e330);
  return;
}



// WARNING: Removing unreachable block (ram,0x00014000dec2)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000dea0(void)

{
  char *pcVar1;
  uint uVar2;
  
  uVar2 = 0;
  pcVar1 = "quest-macros-private.edf";
  do {
    if (*pcVar1 == '\0') break;
    uVar2 = uVar2 + 1;
    pcVar1 = pcVar1 + 1;
  } while (uVar2 != 0xffffffff);
  DAT_1400134a8 = uVar2;
  _DAT_1400134ac = uVar2;
  if (uVar2 == 0) {
    DAT_1400134a0 = (void *)0x0;
    atexit(FUN_14000e360);
    return;
  }
  DAT_1400134a0 = malloc((ulonglong)(uVar2 + 1));
  memcpy(DAT_1400134a0,"quest-macros-private.edf",(ulonglong)uVar2);
  *(undefined1 *)((ulonglong)DAT_1400134a8 + (longlong)DAT_1400134a0) = 0;
  atexit(FUN_14000e360);
  return;
}



// WARNING: Removing unreachable block (ram,0x00014000df62)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000df40(void)

{
  char *pcVar1;
  uint uVar2;
  
  uVar2 = 0;
  pcVar1 = "data/quests";
  do {
    if (*pcVar1 == '\0') break;
    uVar2 = uVar2 + 1;
    pcVar1 = pcVar1 + 1;
  } while (uVar2 != 0xffffffff);
  DAT_1400134b8 = uVar2;
  _DAT_1400134bc = uVar2;
  if (uVar2 == 0) {
    DAT_1400134b0 = (void *)0x0;
    atexit(FUN_14000e390);
    return;
  }
  DAT_1400134b0 = malloc((ulonglong)(uVar2 + 1));
  memcpy(DAT_1400134b0,"data/quests",(ulonglong)uVar2);
  *(undefined1 *)((ulonglong)DAT_1400134b8 + (longlong)DAT_1400134b0) = 0;
  atexit(FUN_14000e390);
  return;
}



// WARNING: Removing unreachable block (ram,0x00014000e002)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000dfe0(void)

{
  char *pcVar1;
  uint uVar2;
  
  uVar2 = 0;
  pcVar1 = "quests";
  do {
    if (*pcVar1 == '\0') break;
    uVar2 = uVar2 + 1;
    pcVar1 = pcVar1 + 1;
  } while (uVar2 != 0xffffffff);
  DAT_1400134c8 = uVar2;
  _DAT_1400134cc = uVar2;
  if (uVar2 == 0) {
    DAT_1400134c0 = (void *)0x0;
    atexit(FUN_14000e3c0);
    return;
  }
  DAT_1400134c0 = malloc((ulonglong)(uVar2 + 1));
  memcpy(DAT_1400134c0,"quests",(ulonglong)uVar2);
  *(undefined1 *)((ulonglong)DAT_1400134c8 + (longlong)DAT_1400134c0) = 0;
  atexit(FUN_14000e3c0);
  return;
}



// WARNING: Removing unreachable block (ram,0x00014000e0ac)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000e080(void)

{
  char *pcVar1;
  void *_Dst;
  uint uVar2;
  int iVar3;
  size_t _Size;
  
  _Size = 0;
  pcVar1 = "";
  do {
    if (*pcVar1 == '\0') break;
    uVar2 = (int)_Size + 1;
    _Size = (size_t)uVar2;
    pcVar1 = pcVar1 + 1;
  } while (uVar2 != 0xffffffff);
  iVar3 = (int)_Size;
  if (iVar3 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = malloc((ulonglong)(iVar3 + 1));
    memcpy(_Dst,&DAT_14000ff00,_Size);
    *(undefined1 *)(_Size + (longlong)_Dst) = 0;
  }
  DAT_1400134d0 = 7;
  DAT_1400134d4 = 0xffffffff;
  if (iVar3 == 0) {
    DAT_1400134d8 = (void *)0x0;
    _DAT_1400134e0 = 0;
  }
  else {
    _DAT_1400134e0 = CONCAT44(iVar3,iVar3);
    DAT_1400134d8 = malloc((ulonglong)(iVar3 + 1U));
    memcpy(DAT_1400134d8,_Dst,(ulonglong)(iVar3 + 1U));
  }
  free(_Dst);
  atexit(FUN_14000e3f0);
  return;
}



void FUN_14000e160(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_140013300);
  return;
}



void FUN_14000e180(void)

{
  free(DAT_140013338);
  DAT_140013338 = (void *)0x0;
  return;
}



void FUN_14000e1b0(void)

{
  free(DAT_140013348);
  DAT_140013348 = (void *)0x0;
  return;
}



void thunk_FUN_140001c60(void)

{
  FUN_140001c60();
  return;
}



void FUN_14000e1f0(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)((ulonglong)(DAT_140013198 - 1) * 0x10 + (longlong)DAT_140013190);
  for (iVar2 = DAT_140013198; iVar2 != 0; iVar2 = iVar2 + -1) {
    free((void *)*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + -2;
  }
  DAT_140013198 = 0;
                    // WARNING: Could not recover jumptable at 0x00014000e250. Too many branches
                    // WARNING: Treating indirect jump as call
  free(DAT_140013190);
  return;
}



void thunk_FUN_140001cf0(void)

{
  FUN_140001cf0();
  return;
}



void FUN_14000e270(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)((ulonglong)(DAT_1400131d0 - 1) * 0x10 + (longlong)DAT_1400131c8);
  for (iVar2 = DAT_1400131d0; iVar2 != 0; iVar2 = iVar2 + -1) {
    free((void *)*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + -2;
  }
  DAT_1400131d0 = 0;
                    // WARNING: Could not recover jumptable at 0x00014000e2d0. Too many branches
                    // WARNING: Treating indirect jump as call
  free(DAT_1400131c8);
  return;
}



void FUN_14000e2e0(void)

{
  DAT_1400131e8 = 0;
                    // WARNING: Could not recover jumptable at 0x00014000e2f1. Too many branches
                    // WARNING: Treating indirect jump as call
  free(DAT_1400131e0);
  return;
}



void FUN_14000e300(void)

{
  free(DAT_140013480);
  DAT_140013480 = (void *)0x0;
  return;
}



void FUN_14000e330(void)

{
  free(DAT_140013490);
  DAT_140013490 = (void *)0x0;
  return;
}



void FUN_14000e360(void)

{
  free(DAT_1400134a0);
  DAT_1400134a0 = (void *)0x0;
  return;
}



void FUN_14000e390(void)

{
  free(DAT_1400134b0);
  DAT_1400134b0 = (void *)0x0;
  return;
}



void FUN_14000e3c0(void)

{
  free(DAT_1400134c0);
  DAT_1400134c0 = (void *)0x0;
  return;
}



void FUN_14000e3f0(void)

{
  free(DAT_1400134d8);
  DAT_1400134d8 = (void *)0x0;
  return;
}


