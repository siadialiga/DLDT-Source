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
typedef short    wchar_t;
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


// WARNING! conflicting data type names: /guiddef.h/GUID - /GUID

typedef struct _GUID _GUID, *P_GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
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

typedef struct tagACTCTXW tagACTCTXW, *PtagACTCTXW;

typedef struct tagACTCTXW ACTCTXW;

typedef ulong ULONG;

typedef wchar_t WCHAR;

typedef WCHAR *LPCWSTR;

typedef ushort USHORT;

typedef WORD LANGID;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

typedef HINSTANCE HMODULE;

struct HINSTANCE__ {
    int unused;
};

struct tagACTCTXW {
    ULONG cbSize;
    DWORD dwFlags;
    LPCWSTR lpSource;
    USHORT wProcessorArchitecture;
    LANGID wLangId;
    LPCWSTR lpAssemblyDirectory;
    LPCWSTR lpResourceName;
    LPCWSTR lpApplicationName;
    HMODULE hModule;
};

typedef ACTCTXW *PCACTCTXW;

typedef struct tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA, *PtagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA;

typedef void *PVOID;

struct tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA {
    PVOID lpInformation;
    PVOID lpSectionBase;
    ULONG ulSectionLength;
    PVOID lpSectionGlobalDataBase;
    ULONG ulSectionGlobalDataLength;
};

typedef struct tagACTCTX_SECTION_KEYED_DATA tagACTCTX_SECTION_KEYED_DATA, *PtagACTCTX_SECTION_KEYED_DATA;

typedef struct tagACTCTX_SECTION_KEYED_DATA *PACTCTX_SECTION_KEYED_DATA;

typedef struct tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA ACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA;

struct tagACTCTX_SECTION_KEYED_DATA {
    ULONG cbSize;
    ULONG ulDataFormatVersion;
    PVOID lpData;
    ULONG ulLength;
    PVOID lpSectionGlobalData;
    ULONG ulSectionGlobalDataLength;
    PVOID lpSectionBase;
    ULONG ulSectionTotalLength;
    HANDLE hActCtx;
    ULONG ulAssemblyRosterIndex;
    ULONG ulFlags;
    ACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA AssemblyMetadata;
};

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

typedef char CHAR;

typedef CHAR *LPCSTR;

typedef struct _M128A _M128A, *P_M128A;

typedef ulonglong ULONGLONG;

typedef longlong LONGLONG;

struct _M128A {
    ULONGLONG Low;
    LONGLONG High;
};

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

typedef struct _XSAVE_FORMAT _XSAVE_FORMAT, *P_XSAVE_FORMAT;

typedef struct _XSAVE_FORMAT XSAVE_FORMAT;

typedef uchar BYTE;

typedef struct _M128A M128A;

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

typedef union _union_54 _union_54, *P_union_54;

typedef XSAVE_FORMAT XMM_SAVE_AREA32;

typedef struct _struct_55 _struct_55, *P_struct_55;

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

typedef WCHAR *LPWSTR;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT *PCONTEXT;

typedef ulonglong DWORD64;

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

typedef longlong INT_PTR;

typedef ULONG_PTR DWORD_PTR;

typedef ULONG_PTR SIZE_T;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[111];
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef INT_PTR (*FARPROC)(void);

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

typedef struct IMAGE_DIRECTORY_ENTRY_EXPORT IMAGE_DIRECTORY_ENTRY_EXPORT, *PIMAGE_DIRECTORY_ENTRY_EXPORT;

struct IMAGE_DIRECTORY_ENTRY_EXPORT {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    ImageBaseOffset32 Name;
    dword Base;
    dword NumberOfFunctions;
    dword NumberOfNames;
    ImageBaseOffset32 AddressOfFunctions;
    ImageBaseOffset32 AddressOfNames;
    ImageBaseOffset32 AddressOfNameOrdinals;
};

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

struct TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
};

typedef char *va_list;

typedef enum ENUM {
} ENUM;

typedef struct string_base<char> string_base<char>, *Pstring_base<char>;

struct string_base<char> { // PlaceHolder Structure
};

typedef enum TYPE {
} TYPE;

typedef int (*_onexit_t)(void);

typedef ulonglong size_t;

typedef int errno_t;

typedef size_t rsize_t;



pointer[8] vftable;
undefined1 DAT_18000abcc;
undefined1 DAT_18000a648;
undefined DAT_18000a6f0;
undefined DAT_18000a758;
undefined DAT_18000a75c;
undefined DAT_18000a760;
undefined DAT_18000a764;
undefined DAT_18000a768;
undefined DAT_18000a7b8;
undefined *PTR_D3DCompile_18000a018;
undefined *PTR_D3DPreprocess_18000a010;
undefined *PTR_D3DStripShader_18000a008;
pointer[2] vftable;
undefined DAT_18000a8c0;
pointer[1] vftable;
undefined DAT_18000a650;
undefined8 DAT_180015970;
undefined DAT_180015998;
int DAT_18001599c;
HANDLE DAT_180015970;
undefined8 DAT_180015a38;
undefined DAT_180015a40;
uint DAT_1800157e4;
uint DAT_1800157e0;
void *DAT_1800157d8;
undefined LAB_180005ba0;
undefined8 *DAT_1800157d8;
int DAT_180015778;
longlong DAT_180015770;
longlong DAT_180015768;
int DAT_1800157b0;
longlong DAT_1800157a8;
longlong DAT_1800157a0;
undefined DAT_180010180;
undefined DAT_180010580;
undefined DAT_180010980;
undefined DAT_180010d80;
undefined _type_info_dtor_internal_method;
PVOID DAT_180015c68;
PVOID DAT_180015c60;
undefined LAB_180008ff4;
undefined FUN_180009038;
int DAT_180015980;
void *DAT_180015c58;
int DAT_180015c50;
undefined8 DAT_180015c70;
void *StackBase;
undefined DAT_18000a258;
undefined DAT_18000a548;
undefined DAT_18000a550;
undefined DAT_18000a560;
undefined DAT_180015020;
undefined8 DAT_180012d60;
undefined8 DAT_180012d70;
IMAGE_DOS_HEADER IMAGE_DOS_HEADER_180000000;
ulonglong DAT_180015028;
undefined DAT_180015030;
void *StackLimit;
undefined FUN_180009720;
undefined DAT_180015a10;
undefined LAB_180009920;
undefined DAT_180015b90;
undefined LAB_180009930;
undefined DAT_180015bb8;
char DAT_180015c18;
undefined DAT_180015c20;
undefined FUN_180009970;
char DAT_180015be0;
undefined DAT_180015be8;
undefined FUN_180009940;
void *DAT_180015a48;
void *DAT_180015a58;
int DAT_180015790;
void *DAT_180015788;
int DAT_1800157c8;
void *DAT_1800157c0;
undefined4 DAT_1800157e0;
void *DAT_1800157f0;
undefined DAT_1800157f8;
undefined DAT_180015800;
undefined8 DAT_180015820;
undefined DAT_180015828;

void FUN_180001000(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = CDX11ShaderCompiler::vftable;
    FreeLibrary((HMODULE)param_1[2]);
    *param_1 = IShaderCompiler::vftable;
    operator_delete(param_1);
  }
  return;
}



undefined4 FUN_180001040(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



undefined8 FUN_180001050(char *param_1)

{
  int iVar1;
  
  iVar1 = _stricmp(param_1,"SV_POSITION");
  if (iVar1 != 0) {
    iVar1 = _stricmp(param_1,"POSITION");
    if (iVar1 != 0) {
      iVar1 = _stricmp(param_1,"BLENDWEIGHT");
      if (iVar1 == 0) {
        return 1;
      }
      iVar1 = _stricmp(param_1,"BLENDINDICES");
      if (iVar1 == 0) {
        return 2;
      }
      iVar1 = _stricmp(param_1,"NORMAL");
      if (iVar1 == 0) {
        return 3;
      }
      iVar1 = _stricmp(param_1,"TEXCOORD");
      if (iVar1 == 0) {
        return 5;
      }
      iVar1 = _stricmp(param_1,"TANGENT");
      if (iVar1 == 0) {
        return 6;
      }
      iVar1 = _stricmp(param_1,"BINORMAL");
      if (iVar1 == 0) {
        return 7;
      }
      iVar1 = _stricmp(param_1,"COLOR");
      if (iVar1 == 0) {
        return 10;
      }
      _stricmp(param_1,"SV_ISFRONTFACE");
      return 0xe;
    }
  }
  return 0;
}



undefined8 FUN_180001180(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  char *pcVar10;
  void *pvVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  byte bVar22;
  uint uVar23;
  uint local_res8;
  undefined8 local_res18;
  uint local_res20;
  uint local_208;
  char *local_200;
  uint local_1f8;
  uint local_1f4;
  char local_1e8;
  char local_1e7;
  uint local_1d8;
  int local_1d4;
  longlong *local_1d0 [3];
  char *local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  undefined4 local_1a8;
  int local_1a4;
  uint local_1a0;
  longlong local_198 [2];
  undefined4 local_188;
  byte local_180;
  char *local_178;
  char *local_170;
  undefined4 local_168;
  uint local_164;
  uint local_160;
  undefined1 local_140 [12];
  int local_134;
  undefined1 local_118 [4];
  int local_114;
  undefined1 local_e8 [20];
  uint local_d4;
  uint local_d0;
  uint local_cc;
  
  (**(code **)(*(longlong *)*param_3 + 0x18))((longlong *)*param_3,local_e8);
  local_res8 = 0;
  if (local_d4 != 0) {
    do {
      uVar23 = 0;
      plVar8 = (longlong *)(**(code **)(*(longlong *)*param_3 + 0x20))();
      local_1d0[0] = plVar8;
      iVar4 = (**(code **)*plVar8)(plVar8,&local_200);
      if ((((-1 < iVar4) &&
           ((**(code **)(*(longlong *)*param_3 + 0x58))((longlong *)*param_3,local_200,local_140),
           local_1f8 == 0)) && (local_134 != 2)) && ((local_134 != 3 && (local_1f4 != 0)))) {
        do {
          pcVar13 = (char *)0x0;
          plVar8 = (longlong *)(**(code **)(*plVar8 + 8))(plVar8,uVar23);
          (**(code **)*plVar8)(plVar8,&local_170);
          if ((local_160 & 2) != 0) {
            puVar9 = (undefined8 *)(**(code **)(*plVar8 + 8))(plVar8);
            (**(code **)*puVar9)(puVar9,local_118);
            pcVar12 = local_170;
            local_1b8 = (char *)0x0;
            local_198[0] = 0;
            local_198[1] = 0;
            local_188 = 0x28;
            pcVar10 = local_1b8;
            if ((local_170 != (char *)0x0) &&
               (operator_delete__((void *)0x0), pcVar10 = pcVar13, *pcVar12 != '\0')) {
              uVar16 = 0xffffffffffffffff;
              pcVar10 = pcVar12;
              do {
                if (uVar16 == 0) break;
                uVar16 = uVar16 - 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar10 + 1;
              } while (cVar1 != '\0');
              pcVar10 = malloc(~uVar16);
              strcpy_s(pcVar10,~uVar16,pcVar12);
            }
            local_1b8 = pcVar10;
            uVar7 = local_164;
            uVar3 = local_168;
            pcVar12 = local_1b8;
            bVar22 = (byte)(local_160 >> 1) & 1;
            local_1b0 = local_168;
            local_1ac = local_164;
            local_1d4 = local_134;
            local_1a4 = local_134;
            if (local_114 != 1) {
              if (local_114 == 2) {
LAB_18000132e:
                pcVar13 = (char *)0x1;
              }
              else if (local_114 == 3) {
                pcVar13 = (char *)0x2;
              }
              else {
                if (local_114 == 0x13) goto LAB_18000132e;
                pcVar13 = (char *)0xffffffff;
              }
            }
            uVar20 = SUB84(pcVar13,0);
            local_1d8 = local_164 >> 2;
            uVar15 = *(int *)(param_1 + 0x30) + 1;
            local_1a8 = uVar20;
            local_1a0 = local_1d8;
            local_180 = bVar22;
            if (*(uint *)(param_1 + 0x34) < uVar15) {
              uVar5 = (*(uint *)(param_1 + 0x34) * 10 >> 3) + 0x10 & 0xfffffff0;
              if (uVar5 < uVar15) {
                uVar5 = uVar15;
              }
              *(uint *)(param_1 + 0x34) = uVar5;
              pvVar11 = realloc(*(void **)(param_1 + 0x28),(ulonglong)(uVar5 << 6));
              *(void **)(param_1 + 0x28) = pvVar11;
            }
            puVar9 = (undefined8 *)
                     ((ulonglong)*(uint *)(param_1 + 0x30) * 0x40 + *(longlong *)(param_1 + 0x28));
            if (puVar9 != (undefined8 *)0x0) {
              if ((pcVar12 == (char *)0x0) || (*pcVar12 == '\0')) {
                pcVar13 = (char *)0x0;
              }
              else {
                uVar16 = 0xffffffffffffffff;
                pcVar13 = pcVar12;
                do {
                  if (uVar16 == 0) break;
                  uVar16 = uVar16 - 1;
                  cVar1 = *pcVar13;
                  pcVar13 = pcVar13 + 1;
                } while (cVar1 != '\0');
                local_178 = malloc(~uVar16);
                strcpy_s(local_178,~uVar16,pcVar12);
                pcVar13 = local_178;
              }
              *puVar9 = pcVar13;
              *(undefined4 *)(puVar9 + 1) = uVar3;
              *(uint *)((longlong)puVar9 + 0xc) = uVar7;
              *(undefined4 *)(puVar9 + 2) = uVar20;
              *(int *)((longlong)puVar9 + 0x14) = local_1d4;
              *(uint *)(puVar9 + 3) = local_1d8;
              FUN_180004270(puVar9 + 4,local_198);
              *(byte *)(puVar9 + 7) = bVar22;
            }
            *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
            free((void *)0x0);
            operator_delete__(pcVar12);
          }
          uVar23 = uVar23 + 1;
          plVar8 = local_1d0[0];
        } while (uVar23 < local_1f4);
      }
      local_res8 = local_res8 + 1;
    } while (local_res8 < local_d4);
  }
  uVar15 = 0;
  uVar7 = 0;
  uVar23 = 0;
  local_208 = 0;
  if (local_d0 != 0) {
    do {
      (**(code **)(*(longlong *)*param_3 + 0x30))((longlong *)*param_3,local_208,&local_200);
      if ((*local_200 != '\0') &&
         ((((local_1f8 == 2 || (local_1f8 == 3)) || (local_1f8 == 7)) || (local_1f8 == 5)))) {
        puVar9 = *(undefined8 **)(param_1 + 0x70);
        if (puVar9 != puVar9 + (ulonglong)*(uint *)(param_1 + 0x78) * 3) {
          do {
            puVar17 = &DAT_18000abcc;
            if ((undefined1 *)*puVar9 != (undefined1 *)0x0) {
              puVar17 = (undefined1 *)*puVar9;
            }
            iVar4 = _stricmp(puVar17 + 1,local_200 + 1);
            if (iVar4 == 0) {
              if (local_1f8 == 2) {
                *(uint *)((longlong)puVar9 + 0xc) = local_1f4;
                if (uVar15 < local_1f4 + 1) {
                  uVar15 = local_1f4 + 1;
                }
              }
              else if (local_1f8 == 3) {
                *(uint *)(puVar9 + 1) = local_1f4;
                uVar5 = local_1f4 + 1;
                bVar2 = uVar23 < uVar5;
                uVar23 = uVar7;
                if (bVar2) {
                  uVar23 = uVar5;
                  uVar7 = uVar5;
                }
              }
              goto LAB_18000167b;
            }
            puVar9 = puVar9 + 3;
          } while (puVar9 != (undefined8 *)
                             (*(longlong *)(param_1 + 0x70) +
                             (ulonglong)*(uint *)(param_1 + 0x78) * 0x18));
        }
        pcVar13 = local_200;
        pcVar12 = (char *)0x0;
        local_res20 = 0xffffffff;
        local_res8 = 0xffffffff;
        if ((local_200 != (char *)0x0) && (operator_delete__((void *)0x0), *pcVar13 != '\0')) {
          uVar16 = 0xffffffffffffffff;
          pcVar12 = pcVar13;
          do {
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar1 != '\0');
          pcVar12 = malloc(~uVar16);
          strcpy_s(pcVar12,~uVar16,pcVar13);
        }
        *pcVar12 = 's';
        uVar5 = uVar23;
        if (local_1f8 == 2) {
          local_res20 = local_1f4;
          if (uVar15 < local_1f4 + 1) {
            uVar15 = local_1f4 + 1;
          }
        }
        else if (local_1f8 == 3) {
          local_res8 = local_1f4;
          uVar6 = local_1f4 + 1;
          uVar5 = uVar7;
          if (uVar23 < uVar6) {
            uVar5 = uVar6;
            uVar7 = uVar6;
          }
        }
        uVar23 = *(int *)(param_1 + 0x78) + 1;
        if (*(uint *)(param_1 + 0x7c) < uVar23) {
          uVar6 = (*(uint *)(param_1 + 0x7c) * 10 >> 3) + 0x10 & 0xfffffff0;
          if (uVar6 < uVar23) {
            uVar6 = uVar23;
          }
          *(uint *)(param_1 + 0x7c) = uVar6;
          pvVar11 = realloc(*(void **)(param_1 + 0x70),(ulonglong)(uVar6 * 0x18));
          *(void **)(param_1 + 0x70) = pvVar11;
        }
        puVar9 = (undefined8 *)
                 (*(longlong *)(param_1 + 0x70) + (ulonglong)*(uint *)(param_1 + 0x78) * 0x18);
        if (puVar9 != (undefined8 *)0x0) {
          if (*pcVar12 == '\0') {
            pcVar13 = (char *)0x0;
          }
          else {
            uVar16 = 0xffffffffffffffff;
            pcVar13 = pcVar12;
            do {
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              cVar1 = *pcVar13;
              pcVar13 = pcVar13 + 1;
            } while (cVar1 != '\0');
            pcVar13 = malloc(~uVar16);
            strcpy_s(pcVar13,~uVar16,pcVar12);
          }
          *puVar9 = pcVar13;
          *(uint *)((longlong)puVar9 + 0xc) = local_res20;
          *(uint *)(puVar9 + 1) = local_res8;
          *(undefined1 *)(puVar9 + 2) = 1;
        }
        *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
        operator_delete__(pcVar12);
        uVar23 = uVar5;
      }
LAB_18000167b:
      local_208 = local_208 + 1;
    } while (local_208 < local_d0);
  }
  lVar18 = *(longlong *)(param_1 + 0x70);
  if (lVar18 != lVar18 + (ulonglong)*(uint *)(param_1 + 0x78) * 0x18) {
    do {
      if (*(int *)(lVar18 + 8) < 0) {
        *(uint *)(lVar18 + 8) = uVar23;
        uVar23 = uVar23 + 1;
      }
      if (*(int *)(lVar18 + 0xc) < 0) {
        *(uint *)(lVar18 + 0xc) = uVar15;
        uVar15 = uVar15 + 1;
      }
      lVar18 = lVar18 + 0x18;
    } while (lVar18 != *(longlong *)(param_1 + 0x70) + (ulonglong)*(uint *)(param_1 + 0x78) * 0x18);
  }
  uVar23 = 0;
  uVar21 = 0;
  if (local_cc != 0) {
    do {
      (**(code **)(*(longlong *)*param_3 + 0x38))((longlong *)*param_3,uVar23,&local_200);
      uVar14 = FUN_180001050(local_200);
      local_res18 = CONCAT44(local_1f8,(int)uVar14);
      if ((((int)uVar14 != 0) && ((local_1e8 == '\0' || (local_1e7 == '\0')))) &&
         (uVar21 = 1, param_2 != (longlong *)0x0)) {
        puVar9 = FUN_180005740(local_1d0,"%s%d",local_200,(ulonglong)local_1f8);
        uVar7 = (int)param_2[1] + 1;
        if (*(uint *)((longlong)param_2 + 0xc) < uVar7) {
          uVar15 = (*(uint *)((longlong)param_2 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
          if (uVar15 < uVar7) {
            uVar15 = uVar7;
          }
          *(uint *)((longlong)param_2 + 0xc) = uVar15;
          pvVar11 = realloc((void *)*param_2,(ulonglong)(uVar15 << 4));
          *param_2 = (longlong)pvVar11;
        }
        puVar19 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 1) * 0x10 + *param_2);
        if (puVar19 != (undefined8 *)0x0) {
          *puVar19 = *puVar9;
          *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(puVar9 + 1);
          *(undefined4 *)((longlong)puVar19 + 0xc) = *(undefined4 *)((longlong)puVar9 + 0xc);
          *puVar9 = 0;
          puVar9[1] = 0;
        }
        *(int *)(param_2 + 1) = (int)param_2[1] + 1;
        free(local_1d0[0]);
        local_1d0[0] = (longlong *)0x0;
      }
      uVar7 = *(int *)(param_1 + 0x60) + 1;
      if (*(uint *)(param_1 + 100) < uVar7) {
        uVar15 = (*(uint *)(param_1 + 100) * 10 >> 3) + 0x10 & 0xfffffff0;
        if (uVar15 < uVar7) {
          uVar15 = uVar7;
        }
        *(uint *)(param_1 + 100) = uVar15;
        pvVar11 = realloc(*(void **)(param_1 + 0x58),(ulonglong)(uVar15 << 3));
        *(void **)(param_1 + 0x58) = pvVar11;
      }
      puVar9 = (undefined8 *)
               (*(longlong *)(param_1 + 0x58) + (ulonglong)*(uint *)(param_1 + 0x60) * 8);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = local_res18;
      }
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
      uVar23 = uVar23 + 1;
    } while (uVar23 < local_cc);
  }
  (**(code **)(*(longlong *)*param_3 + 0x10))();
  return uVar21;
}



char * FUN_180001870(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "PixelShader";
  case 1:
    return "VertexShader";
  case 2:
    return "GeometryShader";
  case 3:
    return "HullShader";
  case 4:
    return "DomainShader";
  case 5:
    return "ComputeShader";
  default:
    return "?";
  }
}



undefined1 * FUN_1800018e0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return &DAT_18000a758;
  case 1:
    return &DAT_18000a6f0;
  case 2:
    return &DAT_18000a75c;
  case 3:
    return &DAT_18000a760;
  case 4:
    return &DAT_18000a764;
  case 5:
    return &DAT_18000a768;
  default:
    return &DAT_18000a648;
  }
}



char * FUN_180001950(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = strstr(param_1,param_2);
  if (pcVar2 != (char *)0x0) {
    while (((((param_1 < pcVar2 && (cVar1 = pcVar2[-1], cVar1 != ' ')) && (cVar1 != '\r')) &&
            ((cVar1 != '\n' && (cVar1 != '\t')))) ||
           ((((cVar1 = pcVar2[param_3], cVar1 != '\0' && ((cVar1 != ' ' && (cVar1 != '\r')))) &&
             (cVar1 != '\n')) && (cVar1 != '\t'))))) {
      param_1 = pcVar2 + param_3;
      pcVar2 = strstr(param_1,param_2);
      if (pcVar2 == (char *)0x0) {
        return (char *)0x0;
      }
    }
  }
  return pcVar2;
}



void FUN_1800019f0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *_Memory;
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *_Dst;
  int iVar9;
  longlong *local_48;
  ulonglong local_40;
  undefined4 local_38;
  
  if (*(uint *)(param_3 + 1) != 0) {
    puVar2 = FUN_180005740(&local_48,"Found unused constants: %d: ",
                           (ulonglong)*(uint *)(param_3 + 1),param_4);
    FUN_180003d50(param_2,puVar2);
    free(local_48);
    puVar6 = &DAT_18000abcc;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)*param_1;
    }
    local_38 = 0x3d;
    local_48 = (longlong *)0x0;
    local_40 = 0;
    FUN_1800049a0((longlong *)&local_48,(longlong)puVar6,*(uint *)(param_1 + 1));
    _Memory = local_48;
    iVar9 = (int)local_40;
    plVar8 = local_48 + (local_40 & 0xffffffff) * 2;
    for (plVar7 = local_48; plVar7 != plVar8; plVar7 = plVar7 + 2) {
      if ((int)plVar7[1] != 0) {
        pcVar3 = (char *)*plVar7;
        if ((*pcVar3 != '\n') && (*pcVar3 != '\r')) {
          pcVar4 = "";
          if (pcVar3 != (char *)0x0) {
            pcVar4 = pcVar3;
          }
          pcVar3 = FUN_180001950(pcVar4,"struct",6);
          if (pcVar3 == (char *)0x0) {
            _Dst = (longlong *)*param_3;
            if (_Dst != _Dst + (ulonglong)*(uint *)(param_3 + 1) * 2) {
              do {
                pcVar3 = "";
                if ((char *)*_Dst != (char *)0x0) {
                  pcVar3 = (char *)*_Dst;
                }
                pcVar4 = "";
                if ((char *)*plVar7 != (char *)0x0) {
                  pcVar4 = (char *)*plVar7;
                }
                pcVar3 = FUN_180001950(pcVar4,pcVar3,*(uint *)(_Dst + 1));
                if (pcVar3 != (char *)0x0) {
                  pcVar4 = "";
                  if ((char *)*plVar7 != (char *)0x0) {
                    pcVar4 = (char *)*plVar7;
                  }
                  pcVar4 = FUN_180001950(pcVar4,"uniform",7);
                  if ((pcVar4 == (char *)0x0) || (pcVar3 <= pcVar4)) {
                    plVar5 = FUN_180003ed0((longlong *)&local_48,"static ",plVar7);
                    if (plVar7 != plVar5) {
                      free((void *)*plVar7);
                      plVar7[1] = 0;
                      *plVar7 = 0;
                      *plVar7 = *plVar5;
                      *(int *)(plVar7 + 1) = (int)plVar5[1];
                      *(undefined4 *)((longlong)plVar7 + 0xc) =
                           *(undefined4 *)((longlong)plVar5 + 0xc);
                      *plVar5 = 0;
                      plVar5[1] = 0;
                    }
                    free(local_48);
                    local_48 = (longlong *)0x0;
                  }
                  else {
                    builtin_strncpy(pcVar4,"static ",7);
                  }
                  FUN_180003d50(param_2,_Dst);
                  FUN_180003e00(param_2,", ");
                  free((void *)*_Dst);
                  *_Dst = 0;
                  iVar1 = ((int)param_3[1] * 0x10 - (int)(_Dst + 2)) + (int)*param_3;
                  if (0 < iVar1) {
                    memmove(_Dst,_Dst + 2,(longlong)iVar1);
                  }
                  *(int *)(param_3 + 1) = (int)param_3[1] + -1;
                  break;
                }
                _Dst = _Dst + 2;
              } while (_Dst != (longlong *)((ulonglong)*(uint *)(param_3 + 1) * 0x10 + *param_3));
            }
          }
          else {
            while( true ) {
              pcVar3 = "";
              if ((char *)*plVar7 != (char *)0x0) {
                pcVar3 = (char *)*plVar7;
              }
              pcVar3 = strchr(pcVar3,0x7d);
              if (pcVar3 != (char *)0x0) break;
              plVar7 = plVar7 + 2;
            }
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 1) = 0;
    plVar7 = _Memory;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    for (; plVar7 != plVar8; plVar7 = plVar7 + 2) {
      FUN_180003d50(param_1,plVar7);
      FUN_180003e00(param_1,"\n");
    }
    plVar8 = _Memory + (ulonglong)(iVar9 - 1) * 2;
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      free((void *)*plVar8);
      *plVar8 = 0;
      plVar8 = plVar8 + -2;
    }
    free(_Memory);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180001d4c)

void FUN_180001d20(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *_Memory;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  char *_Str1;
  longlong *plVar7;
  longlong *local_48;
  ulonglong local_40;
  undefined4 local_38;
  
  uVar4 = *(uint *)(param_2 + 1);
  if (*(uint *)((longlong)param_1 + 0xc) < uVar4) {
    puVar3 = malloc((ulonglong)(uVar4 + 1));
    if ((int)param_1[1] == 0) {
      *puVar3 = 0;
    }
    else {
      memcpy(puVar3,(void *)*param_1,(ulonglong)((int)param_1[1] + 1));
    }
    free((void *)*param_1);
    *param_1 = (longlong)puVar3;
    *(uint *)((longlong)param_1 + 0xc) = uVar4;
  }
  puVar3 = &DAT_18000abcc;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)*param_2;
  }
  local_48 = (longlong *)0x0;
  local_40 = 0;
  local_38 = 0x28;
  FUN_1800049a0((longlong *)&local_48,(longlong)puVar3,*(uint *)(param_2 + 1));
  _Memory = local_48;
  iVar6 = (int)local_40;
  plVar7 = local_48 + (local_40 & 0xffffffff) * 2;
  plVar5 = local_48;
  do {
    if (plVar5 == plVar7) {
      plVar5 = _Memory + (ulonglong)(iVar6 - 1) * 2;
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        free((void *)*plVar5);
        *plVar5 = 0;
        plVar5 = plVar5 + -2;
      }
                    // WARNING: Could not recover jumptable at 0x000180001e9b. Too many branches
                    // WARNING: Treating indirect jump as call
      free(_Memory);
      return;
    }
    _Str1 = "";
    if ((char *)*plVar5 != (char *)0x0) {
      _Str1 = (char *)*plVar5;
    }
    iVar2 = _strnicmp(_Str1,"#line",5);
    if ((iVar2 != 0) && (uVar4 = 0, *(uint *)(plVar5 + 1) != 0)) {
      do {
        cVar1 = *_Str1;
        if ((cVar1 != ' ') && (((cVar1 != '\t' && (cVar1 != '\r')) && (cVar1 != '\n')))) {
          FUN_180003d50(param_1,plVar5);
          FUN_180003e00(param_1,"\n");
          break;
        }
        uVar4 = uVar4 + 1;
        _Str1 = _Str1 + 1;
      } while (uVar4 < *(uint *)(plVar5 + 1));
    }
    plVar5 = plVar5 + 2;
  } while( true );
}



void FUN_180001eb0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if ((*(uint *)((longlong)param_1 + 0x10) & 0x40000000) != 0) {
      free(*(void **)((longlong)param_1 + 8));
    }
    *(uint *)((longlong)param_1 + 0x10) = *(uint *)((longlong)param_1 + 0x10) & 0x80000000;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    operator_delete(param_1);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180001fc4)
// WARNING: Removing unreachable block (ram,0x000180002078)

ulonglong FUN_180001ef0(longlong param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  void *pvVar9;
  ulonglong extraout_RAX;
  ulonglong uVar10;
  undefined8 extraout_RAX_00;
  undefined8 uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  char *pcVar14;
  uint uVar15;
  longlong *local_res8;
  longlong *local_res10;
  undefined8 local_28 [2];
  
  FUN_1800025f0(param_1);
  local_res10 = (longlong *)0x0;
  local_res8 = (longlong *)0x0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
  pcVar14 = *(char **)(lVar2 + 0x18);
  if (pcVar14 == (char *)0x0) {
    iVar6 = 0;
  }
  else {
    lVar12 = -1;
    do {
      if (lVar12 == 0) break;
      lVar12 = lVar12 + -1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar1 != '\0');
    iVar6 = ~(uint)lVar12 - 1;
  }
  puVar3 = *(undefined1 **)(lVar2 + 0x18);
  puVar13 = &DAT_18000abcc;
  if (puVar3 != (undefined1 *)0x0) {
    puVar13 = puVar3;
  }
  iVar6 = (*(code *)param_2)(puVar13,iVar6,&DAT_18000abcc,*(undefined8 *)(param_1 + 8),param_1,
                             &local_res8,&local_res10);
  plVar5 = local_res10;
  plVar4 = local_res8;
  if (-1 < iVar6) {
    uVar7 = (**(code **)(*local_res8 + 0x20))(local_res8);
    pcVar8 = (char *)(**(code **)(*plVar4 + 0x18))(plVar4);
    uVar10 = 0;
    pcVar14 = pcVar8;
    if (uVar7 != 0) {
      do {
        if (*pcVar14 == '\0') break;
        uVar15 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar15;
        pcVar14 = pcVar14 + 1;
      } while (uVar15 < uVar7);
      if ((int)uVar10 != 0) {
        pvVar9 = malloc((ulonglong)((int)uVar10 + 1));
        memcpy(pvVar9,pcVar8,uVar10);
        *(undefined1 *)(uVar10 + (longlong)pvVar9) = 0;
        goto LAB_1800020a3;
      }
    }
    pvVar9 = (void *)0x0;
LAB_1800020a3:
    if (param_3 != local_28) {
      free((void *)*param_3);
      *param_3 = pvVar9;
      pvVar9 = (void *)0x0;
      *(int *)(param_3 + 1) = (int)uVar10;
      *(int *)((longlong)param_3 + 0xc) = (int)uVar10;
    }
    free(pvVar9);
    uVar11 = extraout_RAX_00;
    if (local_res8 != (longlong *)0x0) {
      uVar11 = (**(code **)(*local_res8 + 0x10))();
    }
    if (local_res10 != (longlong *)0x0) {
      uVar11 = (**(code **)(*local_res10 + 0x10))();
    }
    return CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
  }
  uVar7 = (**(code **)(*local_res10 + 0x20))(local_res10);
  pcVar8 = (char *)(**(code **)(*plVar5 + 0x18))(plVar5);
  uVar10 = 0;
  pcVar14 = pcVar8;
  if (uVar7 != 0) {
    do {
      if (*pcVar14 == '\0') break;
      uVar15 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar15;
      pcVar14 = pcVar14 + 1;
    } while (uVar15 < uVar7);
    if ((int)uVar10 != 0) {
      pvVar9 = malloc((ulonglong)((int)uVar10 + 1));
      memcpy(pvVar9,pcVar8,uVar10);
      *(undefined1 *)(uVar10 + (longlong)pvVar9) = 0;
      goto LAB_180001fef;
    }
  }
  pvVar9 = (void *)0x0;
LAB_180001fef:
  if (param_4 != local_28) {
    free((void *)*param_4);
    *param_4 = pvVar9;
    pvVar9 = (void *)0x0;
    *(int *)(param_4 + 1) = (int)uVar10;
    *(int *)((longlong)param_4 + 0xc) = (int)uVar10;
  }
  free(pvVar9);
  uVar10 = extraout_RAX;
  if (local_res8 != (longlong *)0x0) {
    uVar10 = (**(code **)(*local_res8 + 0x10))();
  }
  if (local_res10 != (longlong *)0x0) {
    uVar10 = (**(code **)(*local_res10 + 0x10))();
  }
  return uVar10 & 0xffffffffffffff00;
}



// WARNING: Removing unreachable block (ram,0x0001800024a3)
// WARNING: Removing unreachable block (ram,0x0001800021a0)
// WARNING: Removing unreachable block (ram,0x000180002573)

undefined8
FUN_180002110(longlong param_1,undefined *param_2,undefined8 param_3,char param_4,longlong *param_5,
             void **param_6,char param_7,undefined *param_8,undefined *param_9)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined1 *_Dst;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  void *pvVar10;
  undefined8 extraout_RAX;
  ulonglong extraout_RAX_00;
  uint uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  void **ppvVar17;
  int iVar18;
  longlong *local_a0;
  undefined1 *local_98;
  uint local_90;
  uint local_8c;
  void *local_88;
  undefined8 local_80;
  void *local_78 [2];
  void *local_68;
  ulonglong local_60;
  undefined4 local_58;
  
  uVar4 = 0x1000;
  if (param_4 != '\0') {
    uVar4 = 0x1004;
  }
  FUN_1800025f0(param_1);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
  pcVar6 = *(char **)(lVar2 + 0x18);
  if (pcVar6 == (char *)0x0) {
    uVar11 = 0;
  }
  else {
    lVar12 = -1;
    do {
      if (lVar12 == 0) break;
      lVar12 = lVar12 + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar11 = ~(uint)lVar12 - 1;
  }
  pcVar6 = *(char **)(lVar2 + 0x18);
  pcVar9 = "";
  if (pcVar6 != (char *)0x0) {
    pcVar9 = pcVar6;
  }
  uVar15 = 0;
  pcVar6 = pcVar9;
  if (uVar11 != 0) {
    do {
      uVar14 = (uint)uVar15;
      if (*pcVar6 == '\0') break;
      uVar14 = uVar14 + 1;
      uVar15 = (ulonglong)uVar14;
      pcVar6 = pcVar6 + 1;
    } while (uVar14 < uVar11);
    uVar15 = (ulonglong)uVar14;
  }
  local_90 = (uint)uVar15;
  local_8c = local_90;
  if (local_90 == 0) {
    _Dst = (undefined1 *)0x0;
    local_98 = (undefined1 *)0x0;
  }
  else {
    _Dst = malloc((ulonglong)(local_90 + 1));
    local_98 = _Dst;
    memcpy(_Dst,pcVar9,uVar15);
    _Dst[uVar15] = 0;
  }
  iVar18 = 0;
  local_a0 = (longlong *)0x0;
  if ((param_7 != '\0') == 0xffffffff) {
LAB_180002505:
    free(_Dst);
    return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
  }
LAB_180002225:
  uVar7 = *(undefined8 *)(param_1 + 8);
  puVar13 = &DAT_18000abcc;
  if (_Dst != (undefined1 *)0x0) {
    puVar13 = _Dst;
  }
  iVar5 = (*(code *)param_2)(puVar13,uVar15,&DAT_18000abcc,uVar7,param_1,&DAT_18000a7b8,param_3,
                             uVar4,0,param_5,&local_a0);
  plVar3 = local_a0;
  if (iVar5 < 0) {
    uVar11 = (**(code **)(*local_a0 + 0x20))(local_a0);
    pcVar9 = (char *)(**(code **)(*plVar3 + 0x18))(plVar3);
    uVar15 = 0;
    pcVar6 = pcVar9;
    if (uVar11 == 0) goto LAB_18000259c;
    goto LAB_180002560;
  }
  if (((param_7 != '\0') && (param_8 != (undefined *)0x0)) && (param_9 != (undefined *)0x0)) {
    if (iVar18 == 0) {
      ppvVar17 = param_6;
      FUN_180001ef0(param_1,param_9,&local_98,param_6);
      local_88 = (void *)0x0;
      local_80 = 0;
      local_68 = (void *)0x0;
      local_60 = 0;
      local_58 = 0x3d;
      uVar7 = FUN_180004680(param_8,(longlong *)*param_5,(longlong *)&local_68);
      pvVar10 = local_68;
      if ((char)uVar7 == '\0') {
        puVar16 = (undefined8 *)((ulonglong)((int)local_60 - 1) * 0x10 + (longlong)local_68);
        for (iVar18 = (int)local_60; iVar18 != 0; iVar18 = iVar18 + -1) {
          free((void *)*puVar16);
          *puVar16 = 0;
          puVar16 = puVar16 + -2;
        }
        free(pvVar10);
        free((void *)0x0);
        _Dst = local_98;
LAB_18000245f:
        plVar3 = local_a0;
        if (local_a0 == (longlong *)0x0) goto LAB_180002505;
        uVar11 = (**(code **)(*local_a0 + 0x20))(local_a0);
        pcVar9 = (char *)(**(code **)(*plVar3 + 0x18))(plVar3);
        uVar15 = 0;
        pcVar6 = pcVar9;
        if (uVar11 == 0) {
LAB_1800024cc:
          pvVar10 = (void *)0x0;
        }
        else {
          do {
            if (*pcVar6 == '\0') break;
            uVar14 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar14;
            pcVar6 = pcVar6 + 1;
          } while (uVar14 < uVar11);
          if ((int)uVar15 == 0) goto LAB_1800024cc;
          pvVar10 = malloc((ulonglong)((int)uVar15 + 1));
          memcpy(pvVar10,pcVar9,uVar15);
          *(undefined1 *)((longlong)pvVar10 + uVar15) = 0;
        }
        if (param_6 != local_78) {
          free(*param_6);
          *param_6 = pvVar10;
          pvVar10 = (void *)0x0;
          *(int *)(param_6 + 1) = (int)uVar15;
          *(int *)((longlong)param_6 + 0xc) = (int)uVar15;
        }
        free(pvVar10);
        if (local_a0 != (longlong *)0x0) {
          (**(code **)(*local_a0 + 0x10))();
        }
        goto LAB_180002505;
      }
      FUN_1800019f0((longlong *)&local_98,(longlong *)&local_88,(longlong *)&local_68,ppvVar17);
      pvVar10 = local_68;
      puVar16 = (undefined8 *)((ulonglong)((int)local_60 - 1) * 0x10 + (longlong)local_68);
      for (iVar5 = (int)local_60; iVar5 != 0; iVar5 = iVar5 + -1) {
        free((void *)*puVar16);
        *puVar16 = 0;
        puVar16 = puVar16 + -2;
      }
      free(pvVar10);
      if ((int)local_80 != 0) {
        FUN_180003d50((longlong *)param_6,&local_88);
      }
      if ((longlong *)*param_5 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*param_5 + 0x10))();
        *param_5 = 0;
      }
      free(local_88);
      uVar15 = (ulonglong)local_90;
      local_88 = (void *)0x0;
      _Dst = local_98;
    }
    else {
      local_68 = (void *)0x0;
      local_60 = 0;
      local_58 = 0x28;
      uVar8 = FUN_180004680(param_8,(longlong *)*param_5,(longlong *)&local_68);
      iVar5 = (int)local_60;
      if (((char)uVar8 != '\0') && ((int)local_60 != 0)) {
        puVar16 = FUN_180005740(local_78,
                                "First pass of unused constants removal was not entirely successful as there are still %d unused constants reported!\n"
                                ,local_60 & 0xffffffff,uVar7);
        FUN_180003d50((longlong *)param_6,puVar16);
        free(local_78[0]);
        local_78[0] = (void *)0x0;
      }
      pvVar10 = local_68;
      puVar16 = (undefined8 *)((ulonglong)(iVar5 - 1) * 0x10 + (longlong)local_68);
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        free((void *)*puVar16);
        *puVar16 = 0;
        puVar16 = puVar16 + -2;
      }
      free(pvVar10);
    }
  }
  iVar18 = iVar18 + 1;
  if ((int)((param_7 != '\0') + 1) <= iVar18) goto LAB_18000245f;
  goto LAB_180002225;
  while( true ) {
    uVar14 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar14;
    pcVar6 = pcVar6 + 1;
    if (uVar11 <= uVar14) break;
LAB_180002560:
    if (*pcVar6 == '\0') break;
  }
  if ((int)uVar15 == 0) {
LAB_18000259c:
    pvVar10 = (void *)0x0;
  }
  else {
    pvVar10 = malloc((ulonglong)((int)uVar15 + 1));
    memcpy(pvVar10,pcVar9,uVar15);
    *(undefined1 *)((longlong)pvVar10 + uVar15) = 0;
  }
  if (param_6 != local_78) {
    free(*param_6);
    *param_6 = pvVar10;
    pvVar10 = (void *)0x0;
    *(int *)(param_6 + 1) = (int)uVar15;
    *(int *)((longlong)param_6 + 0xc) = (int)uVar15;
  }
  free(pvVar10);
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 0x10))();
  }
  free(_Dst);
  return extraout_RAX_00 & 0xffffffffffffff00;
}



void FUN_1800025f0(longlong param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)(*(int *)(param_1 + 0x10) - 1) * 0x10)
      != 0)) {
    uVar4 = *(int *)(param_1 + 0x10) + 1;
    if (*(uint *)(param_1 + 0x14) < uVar4) {
      uVar1 = (*(uint *)(param_1 + 0x14) * 10 >> 3) + 0x10 & 0xfffffff0;
      if (uVar1 < uVar4) {
        uVar1 = uVar4;
      }
      *(uint *)(param_1 + 0x14) = uVar1;
      pvVar2 = realloc(*(void **)(param_1 + 8),(ulonglong)(uVar1 << 4));
      *(void **)(param_1 + 8) = pvVar2;
    }
    puVar3 = (undefined8 *)
             ((ulonglong)*(uint *)(param_1 + 0x10) * 0x10 + *(longlong *)(param_1 + 8));
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800026af)

undefined8
FUN_180002670(longlong param_1,undefined8 param_2,char *param_3,undefined8 param_4,
             undefined8 *param_5,int *param_6)

{
  char cVar1;
  char *pcVar2;
  void *_Dst;
  undefined8 uVar3;
  char *pcVar4;
  void *pvVar5;
  ulonglong uVar6;
  void *local_28;
  uint local_20;
  uint local_1c;
  char *local_18;
  int local_10;
  
  _Dst = (void *)0x0;
  pcVar2 = param_3;
  pvVar5 = _Dst;
  do {
    local_20 = (uint)pvVar5;
    if (*pcVar2 == '\0') break;
    local_20 = local_20 + 1;
    pvVar5 = (void *)(ulonglong)local_20;
    pcVar2 = pcVar2 + 1;
  } while (local_20 != 0xffffffff);
  uVar6 = (ulonglong)local_20;
  local_1c = local_20;
  if (local_20 == 0) {
    local_28 = (void *)0x0;
  }
  else {
    _Dst = malloc((ulonglong)(local_20 + 1));
    local_28 = _Dst;
    memcpy(_Dst,param_3,uVar6);
    *(undefined1 *)(uVar6 + (longlong)_Dst) = 0;
  }
  FUN_180006790(*(longlong **)(param_1 + 0x28),&local_18,(longlong *)&local_28);
  free(_Dst);
  if (local_10 == 0) {
    free(local_18);
    uVar3 = 0x80004005;
  }
  else {
    pcVar2 = "";
    if (local_18 != (char *)0x0) {
      pcVar2 = local_18;
    }
    uVar6 = 0xffffffffffffffff;
    pcVar4 = pcVar2;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar4 = malloc(~uVar6);
    strcpy_s(pcVar4,~uVar6,pcVar2);
    *param_5 = pcVar4;
    *param_6 = local_10;
    free(local_18);
    uVar3 = 0;
  }
  return uVar3;
}



undefined8 FUN_1800027a0(undefined8 param_1,void *param_2)

{
  if (param_2 == (void *)0x0) {
    return 0x80004005;
  }
  operator_delete__(param_2);
  return 0;
}



void FUN_1800027d0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  code *pcVar5;
  uint uVar6;
  char local_res8 [8];
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    pcVar3 = strchr("d3dcompiler_43.dll",0x5f);
    uVar6 = 0;
    pcVar3 = pcVar3 + 1;
    local_res8[0] = '\0';
    local_res8[1] = '\0';
    local_res8[2] = '\0';
    local_res8[3] = '\0';
    local_res8[4] = '\0';
    local_res8[5] = '\0';
    local_res8[6] = '\0';
    local_res8[7] = 0;
    lVar1 = -(longlong)pcVar3;
    do {
      if (*pcVar3 == '.') break;
      uVar6 = uVar6 + 1;
      pcVar3[(longlong)(local_res8 + lVar1)] = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (uVar6 < 7);
    iVar2 = atoi(local_res8);
    if ((iVar2 < 0x2e) && (hModule = FUN_1800055e0(), hModule != (HMODULE)0x0)) {
      pFVar4 = GetProcAddress(hModule,"D3DCompile");
      *(FARPROC *)(param_1 + 0x18) = pFVar4;
      pFVar4 = GetProcAddress(hModule,"D3DPreprocess");
      *(FARPROC *)(param_1 + 0x20) = pFVar4;
      pFVar4 = GetProcAddress(hModule,"D3DStripShader");
      *(FARPROC *)(param_1 + 0x28) = pFVar4;
    }
    pcVar5 = *(code **)(param_1 + 0x18);
    if (*(code **)(param_1 + 0x18) == (code *)0x0) {
      pcVar5 = D3DCompile_exref;
    }
    *(code **)(param_1 + 0x18) = pcVar5;
    pcVar5 = *(code **)(param_1 + 0x20);
    if (*(code **)(param_1 + 0x20) == (code *)0x0) {
      pcVar5 = D3DPreprocess_exref;
    }
    *(code **)(param_1 + 0x20) = pcVar5;
    pcVar5 = *(code **)(param_1 + 0x28);
    if (*(code **)(param_1 + 0x28) == (code *)0x0) {
      pcVar5 = D3DStripShader_exref;
    }
    *(code **)(param_1 + 0x28) = pcVar5;
  }
  return;
}



undefined1 FUN_1800028d0(longlong param_1,int param_2,int param_3)

{
  if (*(int *)(param_1 + 0xc) == 2) {
    if (((param_2 != 1) && (param_2 != 0)) && (param_2 != 2)) {
      return 0;
    }
    if ((param_3 != 0x30000) && (param_3 != 0x40000)) {
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0xc) != 3) {
    return 0;
  }
  return 1;
}



ulonglong FUN_180002910(longlong param_1,longlong param_2,int param_3,undefined8 *param_4,
                       longlong param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong extraout_RAX;
  ulonglong uVar5;
  ushort *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 extraout_RAX_00;
  undefined8 *puVar9;
  undefined1 *puVar10;
  ushort local_res18 [4];
  undefined1 *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  void *local_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined8 local_70;
  void *local_68 [2];
  undefined **local_58;
  undefined8 *local_50;
  ulonglong local_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 local_30;
  
  lVar2 = *(longlong *)(param_2 + (longlong)param_3 * 8);
  uVar4 = *(undefined8 *)(param_5 + 0x38);
  local_58 = ShaderSourcePreProcessAndCompile::ShaderSource::vftable;
  local_40 = 0x28;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  uVar3 = *(int *)(lVar2 + 0x20) + 3;
  if (uVar3 != 0) {
    local_48 = (ulonglong)uVar3 << 0x20;
    local_50 = realloc((void *)0x0,(ulonglong)(uVar3 * 0x10));
  }
  FUN_1800044b0((longlong *)(lVar2 + 0x18),(longlong)&local_58);
  FUN_1800045b0((longlong *)&local_50);
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_38 = lVar2;
  local_30 = uVar4;
  uVar4 = FUN_180001ef0((longlong)&local_58,*(undefined **)(param_1 + 0x20),param_4,&local_78);
  puVar7 = local_78;
  if ((char)uVar4 == '\0') {
    puVar10 = &DAT_18000abcc;
    if (local_78 != (undefined1 *)0x0) {
      puVar10 = local_78;
    }
    (**(code **)(**(longlong **)(param_5 + 0x28) + 8))
              (*(longlong **)(param_5 + 0x28),0xc000002d,"Cannot preprocess shader: %s",puVar10);
    free(puVar7);
    local_48 = local_48 & 0xffffffff00000000;
    free(local_50);
    uVar5 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    if (*(char *)(param_5 + 0x60) != '\0') {
      local_88 = (void *)0x0;
      local_80 = 0;
      FUN_180001d20((longlong *)&local_88,param_4);
      lVar2 = *(longlong *)(param_2 + (longlong)param_3 * 8);
      local_res18[0] = 0x5352;
      puVar6 = FUN_180004150((longlong *)(lVar2 + 0x90),local_res18);
      FUN_180005370((undefined8 *)puVar6,&local_88);
      local_90 = 0;
      puVar7 = malloc(0x10001);
      *puVar7 = 0;
      free((void *)0x0);
      local_8c = 0x10000;
      puVar1 = local_50 + (local_48 & 0xffffffff) * 2 + -2;
      for (puVar9 = local_50; local_98 = puVar7, puVar9 != puVar1; puVar9 = puVar9 + 2) {
        puVar8 = FUN_180005740(local_68,"%s=%s\n",*puVar9,puVar9[1]);
        FUN_180003d50((longlong *)&local_98,puVar8);
        free(local_68[0]);
        local_68[0] = (void *)0x0;
        puVar7 = local_98;
      }
      local_res18[0] = 0x4d41;
      puVar6 = FUN_180004150((longlong *)(lVar2 + 0x90),local_res18);
      FUN_180005370((undefined8 *)puVar6,&local_98);
      free(puVar7);
      free(local_88);
    }
    free(local_78);
    local_48 = local_48 & 0xffffffff00000000;
    free(local_50);
    uVar5 = CONCAT71((int7)((ulonglong)extraout_RAX_00 >> 8),1);
  }
  return uVar5;
}


/*
Unable to decompile 'FUN_180002b50'
Cause: 
Low-level Error: Overlapping input varnodes
*/


ulonglong FUN_180002dd0(longlong param_1,longlong param_2,int param_3,longlong param_4,
                       undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  longlong *plVar7;
  ushort *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *local_res10;
  ushort local_res18 [8];
  void *local_48 [2];
  
  piVar1 = *(int **)(param_2 + (longlong)param_3 * 8);
  uVar4 = FUN_180003110(piVar1,param_5,param_4);
  if (((char)uVar4 != '\0') &&
     ((*piVar1 != 1 || (uVar4 = FUN_180003030((longlong)piVar1,param_5), (char)uVar4 != '\0')))) {
    puVar5 = malloc(0x18);
    puVar9 = (undefined8 *)0x0;
    puVar10 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = 0;
      *(undefined4 *)(puVar5 + 2) = 0x80000000;
      *puVar5 = ShaderBinaryWrapper::vftable;
      puVar10 = puVar5;
    }
    if (*(char *)(param_4 + 0x60) != '\0') {
      local_res10 = (longlong *)0x0;
      iVar2 = D3DDisassemble(*param_5,*(uint *)(param_5 + 1) & 0x3fffffff,0,&DAT_18000a8c0,
                             &local_res10);
      plVar7 = local_res10;
      if (-1 < iVar2) {
        local_res18[0] = 0x4441;
        uVar3 = (**(code **)(*local_res10 + 0x20))(local_res10);
        pcVar6 = (char *)(**(code **)(*plVar7 + 0x18))(plVar7);
        plVar7 = FUN_1800056a0((longlong *)local_48,pcVar6,uVar3);
        puVar8 = FUN_180004150((longlong *)(piVar1 + 0x24),local_res18);
        FUN_180003d00((undefined8 *)puVar8,plVar7);
        free(local_48[0]);
      }
      if (local_res10 != (longlong *)0x0) {
        (**(code **)(*local_res10 + 0x10))();
      }
    }
    if (*(char *)(param_4 + 0x61) == '\0') {
      if (puVar10 != (undefined8 *)0x0) {
        puVar9 = puVar10 + 1;
      }
      uVar4 = FUN_180002fa0(param_1,param_5,puVar9);
    }
    else {
      *(uint *)(puVar10 + 2) = *(uint *)(puVar10 + 2) & 0xbfffffff;
      puVar10[1] = *param_5;
      uVar3 = (*(uint *)(param_5 + 1) ^ *(uint *)(puVar10 + 2)) & 0x3fffffff ^
              *(uint *)(puVar10 + 2);
      uVar4 = (ulonglong)uVar3;
      *(uint *)(puVar10 + 2) = uVar3;
    }
    *(undefined8 **)(piVar1 + 0x22) = puVar10;
    return CONCAT71((int7)(uVar4 >> 8),1);
  }
  return uVar4 & 0xffffffffffffff00;
}



void FUN_180002fa0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  longlong *local_res8;
  
  local_res8 = (longlong *)0x0;
  iVar2 = (**(code **)(param_1 + 0x28))(*param_2,*(uint *)(param_2 + 1) & 0x3fffffff,7,&local_res8);
  plVar1 = local_res8;
  if (-1 < iVar2) {
    if (local_res8 == (longlong *)0x0) {
      return;
    }
    uVar3 = (**(code **)(*local_res8 + 0x20))(local_res8);
    pvVar4 = (void *)(**(code **)(*plVar1 + 0x18))(plVar1);
    FUN_180005e40(param_3,pvVar4,uVar3);
  }
  if (local_res8 != (longlong *)0x0) {
    (**(code **)(*local_res8 + 0x10))();
  }
  return;
}



undefined8 FUN_180003030(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 extraout_var;
  uint uVar4;
  longlong *local_res10 [3];
  char *local_c8;
  uint local_c0;
  undefined1 local_a8 [28];
  uint local_8c;
  
  uVar4 = 0;
  local_res10[0] = (longlong *)0x0;
  uVar2 = D3DReflect(*param_2,*(uint *)(param_2 + 1) & 0x3fffffff,&DAT_18000a650,local_res10);
  if ((int)uVar2 < 0) {
    if (local_res10[0] != (longlong *)0x0) {
      uVar2 = (**(code **)(*local_res10[0] + 0x10))();
    }
  }
  else if (local_res10[0] != (longlong *)0x0) {
    uVar3 = (**(code **)(*local_res10[0] + 0x18))(local_res10[0],local_a8);
    if (local_8c != 0) {
      do {
        (**(code **)(*local_res10[0] + 0x38))(local_res10[0],uVar4,&local_c8);
        uVar3 = FUN_180001050(local_c8);
        if ((uint)uVar3 != 0xe) {
          uVar1 = FUN_180006c50((longlong *)(param_1 + 0x58),(uint)uVar3,local_c0);
          uVar3 = CONCAT44(extraout_var,uVar1);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < local_8c);
    }
    if (local_res10[0] != (longlong *)0x0) {
      uVar3 = (**(code **)(*local_res10[0] + 0x10))();
    }
    return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  return uVar2 & 0xffffffffffffff00;
}



// WARNING: Removing unreachable block (ram,0x0001800032c2)
// WARNING: Removing unreachable block (ram,0x000180003326)

ulonglong FUN_180003110(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  int *piVar17;
  int *_Memory;
  uint local_res10;
  undefined1 *local_res20;
  undefined1 *local_148 [2];
  longlong *local_138 [2];
  int *local_128;
  ulonglong local_120;
  undefined4 local_118;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_80;
  void *local_78 [2];
  void *local_68 [2];
  void *local_58 [3];
  
  plVar12 = (longlong *)(param_1 + 0xe);
  local_138[0] = plVar12;
  FUN_1800040c0(plVar12);
  piVar10 = (int *)0x0;
  local_f8 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_90 = 0;
  local_80 = 0;
  local_100 = 0;
  local_128 = (int *)0x0;
  local_res10 = 0;
  local_120 = 0;
  local_res20 = (undefined1 *)0x0;
  local_e8 = 0x28;
  local_d0 = 0x28;
  local_b8 = 0x28;
  local_a0 = 0x28;
  local_88 = 0x28;
  local_118 = 0x3d;
  D3DReflect(*param_2,*(uint *)(param_2 + 1) & 0x3fffffff,&DAT_18000a650,&local_res20);
  if (local_res20 == (undefined1 *)0x0) {
    iVar5 = 2;
    _Memory = piVar10;
  }
  else {
    uVar8 = FUN_180001180((longlong)local_108,(longlong *)&local_128,&local_res20);
    iVar5 = (int)uVar8;
    piVar10 = (int *)(local_120 & 0xffffffff);
    local_res10 = (uint)local_120;
    _Memory = local_128;
  }
  uVar14 = (uint)piVar10;
  if (iVar5 == 1) {
    puVar16 = (undefined1 *)0x0;
    uVar14 = 0;
    if (_Memory != _Memory + (longlong)piVar10 * 4) {
      uVar15 = 0;
      piVar17 = _Memory + 2;
      do {
        if (uVar14 != 0) {
          uVar1 = uVar14 + 1;
          local_res20 = (undefined1 *)CONCAT44(local_res20._4_4_,uVar1);
          if (uVar15 < uVar1) {
            local_148[0] = malloc((ulonglong)(uVar14 + 2));
            if (uVar14 == 0) {
              *local_148[0] = 0;
            }
            else {
              memcpy(local_148[0],puVar16,(ulonglong)local_res20 & 0xffffffff);
            }
            free(puVar16);
            puVar16 = local_148[0];
            uVar15 = uVar1;
          }
          *(undefined2 *)(puVar16 + uVar14) = 0x7c;
          uVar14 = (uint)local_res20;
        }
        if (*piVar17 != 0) {
          uVar1 = *piVar17 + uVar14;
          if (uVar15 < uVar1) {
            local_res20 = malloc((ulonglong)(uVar1 + 1));
            if (uVar14 == 0) {
              *local_res20 = 0;
            }
            else {
              memcpy(local_res20,puVar16,(ulonglong)(uVar14 + 1));
            }
            free(puVar16);
            puVar16 = local_res20;
            uVar15 = uVar1;
          }
          memcpy(puVar16 + uVar14,*(void **)(piVar17 + -2),(ulonglong)(*piVar17 + 1));
          uVar14 = uVar14 + *piVar17;
        }
        piVar2 = piVar17 + 2;
        piVar17 = piVar17 + 4;
      } while (piVar2 != _Memory + (longlong)piVar10 * 4);
      piVar10 = (int *)(ulonglong)local_res10;
      _Memory = local_128;
    }
    puVar9 = *(undefined8 **)(param_3 + 0x28);
    puVar3 = (undefined8 *)*puVar9;
    puVar11 = &DAT_18000abcc;
    if (puVar16 != (undefined1 *)0x0) {
      puVar11 = puVar16;
    }
    pcVar7 = FUN_180001870(*param_1);
    (*(code *)*puVar3)(puVar9,0x84000013,"unused %s inputs detected: %s",pcVar7,puVar11);
    free(puVar16);
    plVar12 = local_138[0];
  }
  else if (iVar5 == 2) {
    (**(code **)(**(longlong **)(param_3 + 0x28) + 0x18))
              (*(longlong **)(param_3 + 0x28),0xc400002f,"unable get constants!");
    piVar17 = _Memory + (ulonglong)(uVar14 - 1) * 4;
    while (uVar14 != 0) {
      free(*(void **)piVar17);
      piVar17[0] = 0;
      piVar17[1] = 0;
      piVar17 = piVar17 + -4;
      uVar14 = (int)piVar10 - 1;
      piVar10 = (int *)(ulonglong)uVar14;
    }
    free(_Memory);
    uVar6 = FUN_1800036b0((longlong)local_108);
    return uVar6 & 0xffffffffffffff00;
  }
  if ((longlong *)(param_1 + 0x1c) != &local_98) {
    FUN_180004370((longlong *)(param_1 + 0x1c),&local_98);
  }
  uVar8 = FUN_180007920(plVar12,(longlong)local_108,*(undefined8 **)(param_3 + 0x28),
                        *(longlong **)(param_3 + 0x20));
  if ((char)uVar8 == '\0') {
    (**(code **)(**(longlong **)(param_3 + 0x28) + 0x18))
              (*(longlong **)(param_3 + 0x28),0xc0000030,"error parsing shader constants!");
    uVar14 = (uint)piVar10;
    piVar17 = _Memory + (ulonglong)(uVar14 - 1) * 4;
    while (uVar14 != 0) {
      free(*(void **)piVar17);
      piVar17[0] = 0;
      piVar17[1] = 0;
      piVar17 = piVar17 + -4;
      uVar14 = (int)piVar10 - 1;
      piVar10 = (int *)(ulonglong)uVar14;
    }
    free(_Memory);
    uVar6 = FUN_1800036b0((longlong)local_108);
    uVar6 = uVar6 & 0xffffffffffffff00;
  }
  else {
    if ((*(char *)(param_3 + 99) != '\0') && (param_1[0x10] != 0)) {
      (**(code **)**(undefined8 **)(param_3 + 0x28))
                (*(undefined8 **)(param_3 + 0x28),0x40000005,"\tconstants used by shader[%d]:");
      plVar12 = local_138[0];
      uVar14 = 0;
      if (param_1[0x10] != 0) {
        lVar13 = 0;
        do {
          lVar4 = *plVar12;
          uVar6 = (ulonglong)*(uint *)(lVar13 + 0x28 + lVar4);
          FUN_180005740(local_148,"\t\tat %04x %2d ",(ulonglong)*(uint *)(lVar13 + 0x24 + lVar4),
                        uVar6);
          if (*(longlong *)(lVar13 + lVar4) == 0) {
            pcVar7 = *(char **)(lVar13 + 8 + lVar4);
            if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
              pcVar7 = *(char **)(lVar13 + 0x10 + lVar4);
              if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
                pcVar7 = *(char **)(lVar13 + 0x18 + lVar4);
                if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) {
                  puVar9 = FUN_180005740(local_58,"f: %s",pcVar7,uVar6);
                  FUN_180003d50((longlong *)local_148,puVar9);
                  free(local_58[0]);
                  local_58[0] = (void *)0x0;
                }
              }
              else {
                puVar9 = FUN_180005740(local_78,"v3: %s",pcVar7,uVar6);
                FUN_180003d50((longlong *)local_148,puVar9);
                free(local_78[0]);
                local_78[0] = (void *)0x0;
              }
            }
            else {
              puVar9 = FUN_180005740(local_68,"v4: %s",pcVar7,uVar6);
              FUN_180003d50((longlong *)local_148,puVar9);
              free(local_68[0]);
              local_68[0] = (void *)0x0;
            }
          }
          else {
            puVar9 = FUN_180005740(local_138,"def: %s %d",
                                   *(undefined8 *)(*(longlong *)(lVar13 + lVar4) + 8),
                                   (ulonglong)*(uint *)(lVar13 + 0x2c + lVar4));
            FUN_180003d50((longlong *)local_148,puVar9);
            free(local_138[0]);
            local_138[0] = (longlong *)0x0;
          }
          puVar16 = local_148[0];
          puVar11 = &DAT_18000abcc;
          if (local_148[0] != (undefined1 *)0x0) {
            puVar11 = local_148[0];
          }
          (**(code **)(**(longlong **)(param_3 + 0x28) + 0x18))
                    (*(longlong **)(param_3 + 0x28),0x40000005,puVar11);
          free(puVar16);
          uVar14 = uVar14 + 1;
          lVar13 = lVar13 + 0x30;
          local_148[0] = (undefined1 *)0x0;
        } while (uVar14 < (uint)param_1[0x10]);
        piVar10 = (int *)(ulonglong)local_res10;
        _Memory = local_128;
      }
    }
    uVar14 = (uint)piVar10;
    piVar17 = _Memory + (ulonglong)(uVar14 - 1) * 4;
    while (uVar14 != 0) {
      free(*(void **)piVar17);
      piVar17[0] = 0;
      piVar17[1] = 0;
      piVar17 = piVar17 + -4;
      uVar14 = (int)piVar10 - 1;
      piVar10 = (int *)(ulonglong)uVar14;
    }
    free(_Memory);
    uVar8 = FUN_1800036b0((longlong)local_108);
    uVar6 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
  }
  return uVar6;
}



void FUN_1800036b0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x78);
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(iVar2 - 1) * 0x18);
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    operator_delete__((void *)*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + -3;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  free(*(void **)(param_1 + 0x70));
  *(undefined4 *)(param_1 + 0x60) = 0;
  free(*(void **)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x48) = 0;
  free(*(void **)(param_1 + 0x40));
  FUN_180004040((longlong *)(param_1 + 0x28));
  iVar2 = *(int *)(param_1 + 0x18);
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(iVar2 - 1) * 8);
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    operator_delete__((void *)*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + -1;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
                    // WARNING: Could not recover jumptable at 0x000180003765. Too many branches
                    // WARNING: Treating indirect jump as call
  free(*(void **)(param_1 + 0x10));
  return;
}



ulonglong FUN_180003770(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined1 *_Memory;
  undefined1 *puVar5;
  uint uVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  longlong *local_1e8;
  longlong *local_1e0;
  char *local_1d8;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  byte local_1bf;
  char *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  void *local_198 [2];
  undefined8 local_188 [2];
  undefined1 local_178 [32];
  uint local_158;
  uint local_bc;
  
  lVar1 = *(longlong *)(param_3 + 0x88);
  puVar11 = (undefined1 *)0x0;
  local_1e8 = (longlong *)0x0;
  local_1e0 = (longlong *)0x0;
  iVar2 = D3DReflect(*(undefined8 *)(*(longlong *)(param_2 + 0x88) + 8),
                     *(uint *)(*(longlong *)(param_2 + 0x88) + 0x10) & 0x3fffffff,&DAT_18000a650,
                     &local_1e8);
  if ((iVar2 < 0) || (local_1e8 == (longlong *)0x0)) {
    uVar3 = 0;
    if (local_1e0 != (longlong *)0x0) {
      uVar3 = (**(code **)(*local_1e0 + 0x10))(local_1e0);
    }
  }
  else {
    uVar3 = D3DReflect(*(undefined8 *)(lVar1 + 8),*(uint *)(lVar1 + 0x10) & 0x3fffffff,
                       &DAT_18000a650,&local_1e0);
    if ((int)uVar3 < 0) {
      if (local_1e0 != (longlong *)0x0) {
        uVar3 = (**(code **)(*local_1e0 + 0x10))();
      }
    }
    else if (local_1e0 != (longlong *)0x0) {
      (**(code **)(*local_1e8 + 0x18))(local_1e8,local_178);
      (**(code **)(*local_1e0 + 0x18))();
      uVar3 = 1;
      puVar10 = puVar11;
      if (local_bc != 0) {
        do {
          local_1b8 = (char *)0x0;
          local_1b0 = 0;
          local_1a8 = 0;
          local_1a0 = 0;
          (**(code **)(*local_1e0 + 0x38))(local_1e0,puVar10,&local_1d8);
          if ((local_1c8 == 0) && (local_1bf != 0)) {
            _Memory = puVar11;
            puVar5 = puVar11;
            if (local_158 == 0) {
LAB_1800039f0:
              _Memory = &DAT_18000abcc;
            }
            else {
              do {
                (**(code **)(*local_1e8 + 0x40))(local_1e8,puVar5,&local_1b8);
                if (local_1b0._4_4_ == local_1cc) {
                  bVar7 = ~local_1a0._1_1_;
                  if ((local_1bf & 0xf & bVar7 & 0xf) == (local_1bf & 0xf)) {
                    iVar2 = _stricmp(local_1b8,local_1d8);
                    if ((iVar2 == 0) && ((int)local_1b0 == local_1d0)) goto LAB_180003a22;
                    (**(code **)*param_4)
                              (param_4,0xc0000032,
                               "input register %i should be %s_%i but in output it is %s_%i",
                               local_1cc,local_1d8,local_1d0,local_1b8,(int)local_1b0);
                    goto LAB_180003a1f;
                  }
                  uVar9 = 0x2e;
                  if ((bVar7 & 2) != 0) {
                    uVar9 = 0x59;
                  }
                  uVar8 = 0x2e;
                  if ((bVar7 & 1) != 0) {
                    uVar8 = 0x58;
                  }
                  puVar4 = FUN_180005740(local_198,"out writes: %c%c%c%c, in requires: %c%c%c%c",
                                         uVar8,uVar9);
                  if (local_188 != puVar4) {
                    free(_Memory);
                    _Memory = (undefined1 *)*puVar4;
                    *puVar4 = 0;
                    puVar4[1] = 0;
                  }
                  free(local_198[0]);
                  local_198[0] = (void *)0x0;
                }
                uVar6 = (int)puVar5 + 1;
                puVar5 = (undefined1 *)(ulonglong)uVar6;
              } while (uVar6 < local_158);
              puVar5 = _Memory;
              if (_Memory == (undefined1 *)0x0) goto LAB_1800039f0;
            }
            (**(code **)*param_4)
                      (param_4,0xc0000031,"%s_%i required as input but not found as output (%s)",
                       local_1d8,local_1d0,_Memory);
            _Memory = puVar5;
LAB_180003a1f:
            uVar3 = 0;
LAB_180003a22:
            free(_Memory);
          }
          uVar6 = (int)puVar10 + 1;
          puVar10 = (undefined1 *)(ulonglong)uVar6;
        } while (uVar6 < local_bc);
      }
      if (local_1e0 != (longlong *)0x0) {
        (**(code **)(*local_1e0 + 0x10))();
      }
      if (local_1e8 != (longlong *)0x0) {
        (**(code **)(*local_1e8 + 0x10))();
      }
      return uVar3;
    }
  }
  if (local_1e8 != (longlong *)0x0) {
    uVar3 = (**(code **)(*local_1e8 + 0x10))();
  }
  return uVar3 & 0xffffffffffffff00;
}



void FUN_180003b30(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  
  plVar6 = malloc(0x38);
  uVar5 = 0;
  plVar7 = plVar6 + 5;
  plVar6[6] = param_3[1];
  *plVar7 = 0;
  if ((undefined8 *)param_3[1] == (undefined8 *)0x0) {
    *param_3 = plVar7;
  }
  else {
    *(undefined8 *)param_3[1] = plVar7;
  }
  *(int *)(param_3 + 2) = *(int *)(param_3 + 2) + 1;
  param_3[1] = plVar7;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = 0;
    plVar6[1] = 0;
    *(undefined4 *)(plVar6 + 2) = 0x3d;
  }
  *(undefined4 *)((longlong)plVar6 + 0x1c) = 1;
  *(undefined4 *)(plVar6 + 3) = 1;
  lVar1 = *(longlong *)(param_2 + 0x88);
  uVar9 = (int)plVar6[1] + 4;
  uVar10 = *(uint *)(lVar1 + 0x10) & 0x3fffffff;
  if (*(uint *)((longlong)plVar6 + 0xc) < uVar9) {
    uVar4 = (*(uint *)((longlong)plVar6 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
    if (uVar4 < uVar9) {
      uVar4 = uVar9;
    }
    *(uint *)((longlong)plVar6 + 0xc) = uVar4;
    pvVar8 = realloc((void *)*plVar6,(ulonglong)uVar4);
    *plVar6 = (longlong)pvVar8;
  }
  *(uint *)((ulonglong)*(uint *)(plVar6 + 1) + *plVar6) = uVar10;
  *(int *)(plVar6 + 1) = (int)plVar6[1] + 4;
  FUN_180003fc0(plVar6,*(void **)(lVar1 + 8),uVar10);
  puVar2 = (undefined8 *)*param_3;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    if (puVar2 + -5 == plVar6) break;
    puVar2 = (undefined8 *)*puVar2;
  }
  if ((*(uint *)(puVar2 + -4) != 0) && (puVar3 = (uint *)puVar2[-5], puVar3 != (uint *)0x0)) {
    uVar5 = FUN_180008620(0x811c9dc5,puVar3,*(uint *)(puVar2 + -4));
  }
  *(uint *)(puVar2 + -1) = uVar5;
  return;
}



undefined8 * CreateShaderCompiler(int param_1)

{
  undefined8 *puVar1;
  
                    // 0x3c60  1  CreateShaderCompiler
  if ((1 < param_1) && (param_1 < 4)) {
    puVar1 = malloc(0x30);
    if (puVar1 != (undefined8 *)0x0) {
      *(int *)((longlong)puVar1 + 0xc) = param_1;
      *puVar1 = CDX11ShaderCompiler::vftable;
      if (param_1 == 2) {
        *(undefined4 *)(puVar1 + 1) = 0x40000;
      }
      else if (param_1 == 3) {
        *(undefined4 *)(puVar1 + 1) = 0x50000;
      }
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      FUN_1800027d0((longlong)puVar1);
      return puVar1;
    }
    return (undefined8 *)0x0;
  }
  return (undefined8 *)0x0;
}



undefined1 IsShaderCompilerMultithreaded(void)

{
                    // 0x3cf0  2  IsShaderCompilerMultithreaded
  return 1;
}



undefined8 * FUN_180003d00(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    free((void *)*param_1);
    param_1[1] = 0;
    *param_1 = 0;
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000180003d82)

void FUN_180003d50(longlong *param_1,undefined8 *param_2)

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



// WARNING: Removing unreachable block (ram,0x000180003e35)
// WARNING: Removing unreachable block (ram,0x000180003e52)

void FUN_180003e00(longlong *param_1,char *param_2)

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



// WARNING: Removing unreachable block (ram,0x000180003f24)
// WARNING: Removing unreachable block (ram,0x000180003f31)

longlong * FUN_180003ed0(longlong *param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  char *pcVar7;
  
  uVar5 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != (char *)0x0) {
    uVar5 = 0xffffffffffffffff;
    pcVar7 = param_2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
  }
  iVar2 = (int)uVar5;
  iVar6 = *(int *)(param_3 + 1) + iVar2;
  if (iVar6 != 0) {
    puVar3 = malloc((ulonglong)(iVar6 + 1));
    *puVar3 = 0;
    free((void *)0x0);
    *param_1 = (longlong)puVar3;
    *(int *)((longlong)param_1 + 0xc) = iVar6;
  }
  if (iVar2 != 0) {
    memcpy((void *)*param_1,param_2,uVar5 & 0xffffffff);
  }
  if (*(uint *)(param_3 + 1) != 0) {
    memcpy((void *)((uVar5 & 0xffffffff) + *param_1),(void *)*param_3,
           (ulonglong)*(uint *)(param_3 + 1));
  }
  uVar4 = *(int *)(param_3 + 1) + iVar2;
  *(uint *)(param_1 + 1) = uVar4;
  if (uVar4 != 0) {
    *(undefined1 *)((ulonglong)uVar4 + *param_1) = 0;
  }
  return param_1;
}



uint FUN_180003fc0(longlong *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  
  uVar3 = param_3 + (int)param_1[1];
  if (*(uint *)((longlong)param_1 + 0xc) < uVar3) {
    uVar1 = (*(uint *)((longlong)param_1 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
    if (uVar1 < uVar3) {
      uVar1 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    pvVar2 = realloc((void *)*param_1,(ulonglong)uVar1);
    *param_1 = (longlong)pvVar2;
  }
  uVar3 = *(uint *)(param_1 + 1);
  memcpy((void *)((ulonglong)uVar3 + *param_1),param_2,(ulonglong)param_3);
  *(uint *)(param_1 + 1) = (int)param_1[1] + param_3;
  return uVar3;
}



void FUN_180004040(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  puVar1 = (undefined8 *)((ulonglong)(iVar2 - 1) * 0x40 + *param_1);
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)(puVar1 + 5) = 0;
    free((void *)puVar1[4]);
    operator_delete__((void *)*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + -8;
  }
  *(undefined4 *)(param_1 + 1) = 0;
                    // WARNING: Could not recover jumptable at 0x0001800040ab. Too many branches
                    // WARNING: Treating indirect jump as call
  free((void *)*param_1);
  return;
}



void FUN_1800040c0(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    puVar2 = (undefined8 *)((ulonglong)(iVar1 - 1) * 0x30 + *param_1 + 0x10);
    do {
      operator_delete__((void *)puVar2[1]);
      puVar2[1] = 0;
      operator_delete__((void *)*puVar2);
      *puVar2 = 0;
      operator_delete__((void *)puVar2[-1]);
      puVar2[-1] = 0;
      puVar2 = puVar2 + -6;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



ushort * FUN_180004150(longlong *param_1,ushort *param_2)

{
  ushort *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  ushort *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar6 = (longlong *)0x0;
  bVar7 = false;
  if ((longlong *)*param_1 != (longlong *)0x0) {
    plVar2 = (longlong *)*param_1;
    do {
      plVar6 = plVar2;
      bVar7 = *param_2 < *(ushort *)(plVar6 + -3);
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
      if ((longlong *)plVar6[1] == (longlong *)0x0) goto LAB_1800041fc;
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
  if ((plVar2 != (longlong *)0x0) && (*param_2 <= *(ushort *)(plVar2 + -3))) {
    return (ushort *)(plVar2 + -2);
  }
LAB_1800041fc:
  puVar4 = malloc(0x38);
  if (puVar4 != (ushort *)0x0) {
    *puVar4 = *param_2;
  }
  puVar1 = puVar4 + 4;
  if (puVar1 != (ushort *)0x0) {
    puVar1[0] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
  }
  FUN_180005840(param_1,(longlong *)(puVar4 + 0xc),bVar7,plVar6);
  return puVar4 + 4;
}



undefined8 * FUN_180004270(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar5 = 0;
  *(int *)(param_1 + 2) = (int)param_2[2];
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = (int)param_2[1];
  if (iVar1 != 0) {
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    pvVar2 = realloc((void *)0x0,(ulonglong)(uint)(iVar1 << 2));
    *param_1 = pvVar2;
  }
  puVar3 = (undefined4 *)*param_1;
  if ((int)param_2[1] != 0) {
    lVar4 = *param_2 - (longlong)puVar3;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)(lVar4 + (longlong)puVar3);
      }
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 < *(uint *)(param_2 + 1));
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  return param_1;
}



undefined8 * FUN_1800042f0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  char *_Src;
  char *pcVar2;
  ulonglong uVar3;
  
  _Src = (char *)*param_2;
  if ((_Src == (char *)0x0) || (*_Src == '\0')) {
    *param_1 = 0;
    return param_1;
  }
  uVar3 = 0xffffffffffffffff;
  pcVar2 = _Src;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = malloc(~uVar3);
  strcpy_s(pcVar2,~uVar3,_Src);
  *param_1 = pcVar2;
  return param_1;
}



longlong * FUN_180004370(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *_Src;
  void *pvVar3;
  char *pcVar4;
  ulonglong uVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  
  iVar6 = (int)param_1[1];
  puVar9 = (undefined8 *)(*param_1 + (ulonglong)(iVar6 - 1) * 0x18);
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    operator_delete__((void *)*puVar9);
    *puVar9 = 0;
    puVar9 = puVar9 + -3;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  uVar10 = *(uint *)(param_2 + 1);
  if (*(uint *)((longlong)param_1 + 0xc) < uVar10) {
    *(uint *)((longlong)param_1 + 0xc) = uVar10;
    pvVar3 = realloc((void *)*param_1,(ulonglong)(uVar10 * 0x18));
    *param_1 = (longlong)pvVar3;
  }
  uVar10 = 0;
  if ((int)param_2[1] != 0) {
    puVar7 = (undefined4 *)(*param_1 + 8);
    lVar8 = *param_2 - *param_1;
    do {
      if ((undefined8 *)(puVar7 + -2) != (undefined8 *)0x0) {
        _Src = *(char **)(lVar8 + -8 + (longlong)puVar7);
        if ((_Src == (char *)0x0) || (*_Src == '\0')) {
          pcVar4 = (char *)0x0;
        }
        else {
          uVar5 = 0xffffffffffffffff;
          pcVar4 = _Src;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          pcVar4 = malloc(~uVar5);
          strcpy_s(pcVar4,~uVar5,_Src);
        }
        uVar2 = *(undefined4 *)(lVar8 + (longlong)puVar7);
        *(char **)(puVar7 + -2) = pcVar4;
        *puVar7 = uVar2;
        puVar7[1] = *(undefined4 *)(lVar8 + 4 + (longlong)puVar7);
        *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(lVar8 + 8 + (longlong)puVar7);
      }
      uVar10 = uVar10 + 1;
      puVar7 = puVar7 + 6;
    } while (uVar10 < *(uint *)(param_2 + 1));
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  return param_1;
}



void FUN_1800044b0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    for (puVar7 = (undefined8 *)*puVar1; puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7
        ) {
      puVar1 = puVar7;
    }
  }
  do {
    while( true ) {
      if (puVar1 == (undefined8 *)0x0) {
        return;
      }
      uVar2 = puVar1[-1];
      uVar3 = puVar1[-2];
      uVar6 = *(int *)(param_2 + 0x10) + 1;
      if (*(uint *)(param_2 + 0x14) < uVar6) {
        uVar4 = (*(uint *)(param_2 + 0x14) * 10 >> 3) + 0x10 & 0xfffffff0;
        if (uVar4 < uVar6) {
          uVar4 = uVar6;
        }
        *(uint *)(param_2 + 0x14) = uVar4;
        pvVar5 = realloc(*(void **)(param_2 + 8),(ulonglong)(uVar4 << 4));
        *(void **)(param_2 + 8) = pvVar5;
      }
      puVar7 = (undefined8 *)
               ((ulonglong)*(uint *)(param_2 + 0x10) * 0x10 + *(longlong *)(param_2 + 8));
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) + 1;
      *puVar7 = uVar3;
      puVar7[1] = uVar2;
      puVar7 = (undefined8 *)puVar1[2];
      if (puVar7 == (undefined8 *)0x0) break;
      for (puVar8 = (undefined8 *)*puVar7; puVar1 = puVar7, puVar8 != (undefined8 *)0x0;
          puVar8 = (undefined8 *)*puVar8) {
        puVar7 = puVar8;
      }
    }
    puVar7 = puVar1;
    puVar8 = (undefined8 *)puVar1[1];
    if ((undefined8 *)puVar1[1] == (undefined8 *)0x0) {
      return;
    }
    do {
      puVar1 = puVar8;
      if (puVar7 != (undefined8 *)puVar8[2]) break;
      puVar1 = (undefined8 *)puVar8[1];
      puVar7 = puVar8;
      puVar8 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  } while( true );
}



void FUN_1800045b0(longlong *param_1)

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
    pvVar2 = realloc((void *)*param_1,(ulonglong)(uVar1 << 4));
    *param_1 = (longlong)pvVar2;
  }
  puVar4 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 1) * 0x10 + *param_1);
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
  *puVar4 = "DX11POS";
  puVar4[1] = "in float4 __dx11pos:SV_POSITION, ";
  uVar3 = (int)param_1[1] + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar3) {
    uVar1 = (*(uint *)((longlong)param_1 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
    if (uVar1 < uVar3) {
      uVar1 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    pvVar2 = realloc((void *)*param_1,(ulonglong)(uVar1 << 4));
    *param_1 = (longlong)pvVar2;
  }
  puVar4 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 1) * 0x10 + *param_1);
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
  *puVar4 = "DX11POS_STRUCT";
  puVar4[1] = "float4 __dx11pos:SV_POSITION;";
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800047b7)

undefined8 FUN_180004680(undefined *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  char *pcVar7;
  void *_Dst;
  void *pvVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  undefined1 uVar15;
  undefined1 local_res8 [8];
  longlong *local_res10;
  char *local_128;
  uint local_11c;
  char *local_110 [2];
  byte local_100;
  undefined1 local_d8 [20];
  uint local_c4;
  
  local_res10 = (longlong *)0x0;
  uVar2 = (**(code **)(*param_2 + 0x20))(param_2);
  uVar3 = (**(code **)(*param_2 + 0x18))(param_2);
  uVar4 = (*(code *)param_1)(uVar3,uVar2,&DAT_18000a650,&local_res10);
  if ((int)uVar4 < 0) {
    if (local_res10 != (longlong *)0x0) {
      uVar4 = (**(code **)(*local_res10 + 0x10))();
    }
  }
  else if (local_res10 != (longlong *)0x0) {
    (**(code **)(*local_res10 + 0x18))(local_res10,local_d8);
    uVar14 = 0;
    if (local_c4 != 0) {
      do {
        plVar5 = (longlong *)(**(code **)(*local_res10 + 0x20))(local_res10,uVar14);
        uVar15 = plVar5 == (longlong *)0x0;
        if (!(bool)uVar15) {
          (**(code **)*plVar5)(plVar5,&local_128);
          lVar9 = 9;
          pcVar12 = local_128;
          pcVar7 = "$Globals";
          do {
            if (lVar9 == 0) break;
            lVar9 = lVar9 + -1;
            uVar15 = *pcVar12 == *pcVar7;
            pcVar12 = pcVar12 + 1;
            pcVar7 = pcVar7 + 1;
          } while ((bool)uVar15);
          if (((bool)uVar15) && (uVar13 = 0, local_11c != 0)) {
            do {
              puVar6 = (undefined8 *)(**(code **)(*plVar5 + 8))(plVar5,uVar13);
              (**(code **)*puVar6)(puVar6,local_110);
              pcVar12 = local_110[0];
              if ((local_100 & 2) == 0) {
                _Dst = (void *)0x0;
                pcVar7 = local_110[0];
                pvVar8 = _Dst;
                do {
                  if (*pcVar7 == '\0') break;
                  uVar10 = (int)pvVar8 + 1;
                  pvVar8 = (void *)(ulonglong)uVar10;
                  pcVar7 = pcVar7 + 1;
                } while (uVar10 != 0xffffffff);
                iVar11 = (int)pvVar8;
                if (iVar11 != 0) {
                  _Dst = malloc((ulonglong)(iVar11 + 1));
                  memcpy(_Dst,pcVar12,(size_t)pvVar8);
                  *(undefined1 *)((longlong)pvVar8 + (longlong)_Dst) = 0;
                }
                uVar10 = (int)param_3[1] + 1;
                if (*(uint *)((longlong)param_3 + 0xc) < uVar10) {
                  uVar1 = (*(uint *)((longlong)param_3 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
                  if (uVar1 < uVar10) {
                    uVar1 = uVar10;
                  }
                  *(uint *)((longlong)param_3 + 0xc) = uVar1;
                  pvVar8 = realloc((void *)*param_3,(ulonglong)(uVar1 << 4));
                  *param_3 = (longlong)pvVar8;
                }
                puVar6 = (undefined8 *)((ulonglong)*(uint *)(param_3 + 1) * 0x10 + *param_3);
                if (puVar6 != (undefined8 *)0x0) {
                  if (iVar11 == 0) {
                    *puVar6 = 0;
                    puVar6[1] = 0;
                  }
                  else {
                    *(int *)(puVar6 + 1) = iVar11;
                    *(int *)((longlong)puVar6 + 0xc) = iVar11;
                    pvVar8 = malloc((ulonglong)(iVar11 + 1U));
                    *puVar6 = pvVar8;
                    memcpy(pvVar8,_Dst,(ulonglong)(iVar11 + 1U));
                  }
                }
                *(int *)(param_3 + 1) = (int)param_3[1] + 1;
                free(_Dst);
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < local_11c);
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < local_c4);
    }
    uVar14 = *(uint *)(param_3 + 1);
    uVar4 = (ulonglong)uVar14;
    if (uVar14 != 0) {
      local_res8[0] = 0;
      uVar4 = FUN_180004b80((longlong *)*param_3,(longlong *)*param_3 + (ulonglong)uVar14 * 2,
                            local_res8);
    }
    if (local_res10 != (longlong *)0x0) {
      uVar4 = (**(code **)(*local_res10 + 0x10))();
    }
    return CONCAT71((int7)(uVar4 >> 8),1);
  }
  return uVar4 & 0xffffffffffffff00;
}



char * FUN_180004910(undefined8 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  ulonglong uVar3;
  
  operator_delete__((void *)*param_1);
  *param_1 = 0;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    *param_1 = 0;
    return (char *)0x0;
  }
  uVar3 = 0xffffffffffffffff;
  pcVar2 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = malloc(~uVar3);
  strcpy_s(pcVar2,~uVar3,param_2);
  *param_1 = pcVar2;
  return pcVar2;
}



// WARNING: Removing unreachable block (ram,0x000180004a18)
// WARNING: Removing unreachable block (ram,0x000180004aec)

void FUN_1800049a0(longlong *param_1,longlong param_2,uint param_3)

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
      if (*(char *)(param_2 + -1 + lVar10) == '\n') {
        if (uVar5 != uVar9) {
          uVar8 = 0;
          pcVar1 = (char *)(lVar6 + param_2);
          if (uVar9 == uVar5) {
LAB_180004a41:
            pvVar2 = (void *)0x0;
          }
          else {
            do {
              if (*pcVar1 == '\0') break;
              uVar7 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar7;
              pcVar1 = pcVar1 + 1;
            } while (uVar7 < uVar9 - uVar5);
            if ((int)uVar8 == 0) goto LAB_180004a41;
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
      goto LAB_180004b17;
    }
  }
  pvVar2 = (void *)0x0;
LAB_180004b17:
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



void FUN_180004b80(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  byte *pbVar10;
  longlong *local_res8;
  longlong *local_res10;
  longlong *local_18;
  longlong *local_10;
  
  lVar6 = (longlong)param_2 - (longlong)param_1;
  local_res8 = param_1;
  local_res10 = param_2;
  while (0x20 < (ulonglong)(lVar6 >> 4)) {
    FUN_180004ce0(&local_18,local_res8,local_res10);
    plVar4 = local_10;
    plVar5 = local_18;
    if ((ulonglong)((longlong)local_18 - (longlong)local_res8 >> 4) <
        (ulonglong)((longlong)local_res10 - (longlong)local_10 >> 4)) {
      FUN_180004b80(local_res8,local_18,param_3);
      local_res8 = plVar4;
    }
    else {
      FUN_180004b80(local_10,local_res10,param_3);
      local_res10 = plVar5;
    }
    lVar6 = (longlong)local_res10 - (longlong)local_res8;
  }
  plVar5 = local_res8;
  if (1 < (ulonglong)(lVar6 >> 4)) {
    while (plVar4 = plVar5 + 2, plVar4 != local_res10) {
      pbVar2 = (byte *)*plVar4;
      lVar6 = plVar5[3];
      plVar5 = plVar4;
      for (plVar8 = plVar4; plVar8 != local_res8; plVar8 = plVar8 + -2) {
        plVar7 = plVar5 + -2;
        if ((pbVar2 == (byte *)0x0) || (*plVar7 == 0)) {
          iVar9 = (int)lVar6 - (int)plVar5[-1];
        }
        else {
          pbVar10 = pbVar2;
          do {
            bVar1 = *pbVar10;
            if (bVar1 != pbVar10[*plVar7 - (longlong)pbVar2]) {
              uVar3 = (uint)(bVar1 < pbVar10[*plVar7 - (longlong)pbVar2]);
              iVar9 = (1 - uVar3) - (uint)(uVar3 != 0);
              goto LAB_180004c9d;
            }
            pbVar10 = pbVar10 + 1;
          } while (bVar1 != 0);
          iVar9 = 0;
        }
LAB_180004c9d:
        if (iVar9 < 1) break;
        *plVar8 = *plVar7;
        plVar8[1] = plVar5[-1];
        plVar5 = plVar7;
      }
      *plVar8 = (longlong)pbVar2;
      plVar8[1] = lVar6;
      plVar5 = plVar4;
    }
  }
  return;
}



undefined8 * FUN_180004ce0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  
  plVar10 = param_2 + ((longlong)param_3 - (longlong)param_2 >> 4 & 0xfffffffffffffffe);
  FUN_180005110(param_2,plVar10,param_3 + -2);
  plVar9 = plVar10 + 2;
  for (lVar14 = (longlong)param_2 - (longlong)plVar10; lVar14 < 0; lVar14 = lVar14 + 0x10) {
    pbVar2 = (byte *)plVar10[-2];
    if ((pbVar2 == (byte *)0x0) || (*plVar10 == 0)) {
      iVar6 = (int)plVar10[-1] - (int)plVar10[1];
    }
    else {
      pbVar7 = pbVar2;
      do {
        bVar1 = *pbVar7;
        if (bVar1 != pbVar7[*plVar10 - (longlong)pbVar2]) {
          uVar4 = (uint)(bVar1 < pbVar7[*plVar10 - (longlong)pbVar2]);
          iVar6 = (1 - uVar4) - (uint)(uVar4 != 0);
          goto LAB_180004d71;
        }
        pbVar7 = pbVar7 + 1;
      } while (bVar1 != 0);
      iVar6 = 0;
    }
LAB_180004d71:
    if (0 < iVar6) break;
    pbVar7 = (byte *)*plVar10;
    if ((pbVar7 == (byte *)0x0) || (pbVar2 == (byte *)0x0)) {
      iVar6 = (int)plVar10[1] - (int)plVar10[-1];
    }
    else {
      lVar8 = (longlong)pbVar2 - (longlong)pbVar7;
      do {
        bVar1 = *pbVar7;
        if (bVar1 != pbVar7[lVar8]) {
          uVar4 = (uint)(bVar1 < pbVar7[lVar8]);
          iVar6 = (1 - uVar4) - (uint)(uVar4 != 0);
          goto LAB_180004da5;
        }
        pbVar7 = pbVar7 + 1;
      } while (bVar1 != 0);
      iVar6 = 0;
    }
LAB_180004da5:
    if (0 < iVar6) break;
    plVar10 = plVar10 + -2;
  }
  plVar12 = plVar10;
  plVar13 = plVar9;
  if ((longlong)plVar9 - (longlong)param_3 < 0) {
    do {
      pbVar2 = (byte *)*plVar9;
      if ((pbVar2 == (byte *)0x0) || (*plVar10 == 0)) {
        iVar6 = (int)plVar9[1] - (int)plVar10[1];
      }
      else {
        pbVar7 = pbVar2;
        do {
          bVar1 = *pbVar7;
          if (bVar1 != pbVar7[*plVar10 - (longlong)pbVar2]) {
            uVar4 = (uint)(bVar1 < pbVar7[*plVar10 - (longlong)pbVar2]);
            iVar6 = (1 - uVar4) - (uint)(uVar4 != 0);
            goto LAB_180004e18;
          }
          pbVar7 = pbVar7 + 1;
        } while (bVar1 != 0);
        iVar6 = 0;
      }
LAB_180004e18:
      plVar13 = plVar9;
      if (0 < iVar6) break;
      pbVar7 = (byte *)*plVar10;
      if ((pbVar7 == (byte *)0x0) || (pbVar2 == (byte *)0x0)) {
        iVar6 = (int)plVar10[1] - (int)plVar9[1];
      }
      else {
        lVar14 = (longlong)pbVar2 - (longlong)pbVar7;
        do {
          bVar1 = *pbVar7;
          if (bVar1 != pbVar7[lVar14]) {
            uVar4 = (uint)(bVar1 < pbVar7[lVar14]);
            iVar6 = (1 - uVar4) - (uint)(uVar4 != 0);
            goto LAB_180004e51;
          }
          pbVar7 = pbVar7 + 1;
        } while (bVar1 != 0);
        iVar6 = 0;
      }
LAB_180004e51:
      if ((0 < iVar6) ||
         (plVar9 = plVar9 + 2, plVar13 = plVar9, -1 < (longlong)plVar9 - (longlong)param_3)) break;
    } while( true );
  }
  do {
    lVar14 = (longlong)plVar9 - (longlong)param_3;
    while (lVar14 < 0) {
      pbVar2 = (byte *)*plVar10;
      if ((pbVar2 == (byte *)0x0) || (*plVar9 == 0)) {
        iVar6 = (int)plVar10[1] - (int)plVar9[1];
      }
      else {
        pbVar7 = pbVar2;
        do {
          bVar1 = *pbVar7;
          if (bVar1 != pbVar7[*plVar9 - (longlong)pbVar2]) {
            uVar4 = (uint)(bVar1 < pbVar7[*plVar9 - (longlong)pbVar2]);
            iVar6 = (1 - uVar4) - (uint)(uVar4 != 0);
            goto LAB_180004ed1;
          }
          pbVar7 = pbVar7 + 1;
        } while (bVar1 != 0);
        iVar6 = 0;
      }
LAB_180004ed1:
      if (iVar6 < 1) {
        pbVar7 = (byte *)*plVar9;
        if ((pbVar7 == (byte *)0x0) || (pbVar2 == (byte *)0x0)) {
          iVar6 = (int)plVar9[1] - (int)plVar10[1];
        }
        else {
          lVar14 = (longlong)pbVar2 - (longlong)pbVar7;
          do {
            bVar1 = *pbVar7;
            if (bVar1 != pbVar7[lVar14]) {
              uVar4 = (uint)(bVar1 < pbVar7[lVar14]);
              iVar6 = (1 - uVar4) - (uint)(uVar4 != 0);
              goto LAB_180004f06;
            }
            pbVar7 = pbVar7 + 1;
          } while (bVar1 != 0);
          iVar6 = 0;
        }
LAB_180004f06:
        if (0 < iVar6) break;
        lVar14 = plVar9[1];
        lVar8 = *plVar13;
        lVar3 = plVar13[1];
        *plVar13 = *plVar9;
        plVar13[1] = lVar14;
        plVar13 = plVar13 + 2;
        *plVar9 = lVar8;
        plVar9[1] = lVar3;
      }
      plVar9 = plVar9 + 2;
      lVar14 = (longlong)plVar9 - (longlong)param_3;
    }
joined_r0x000180004f53:
    plVar5 = plVar12;
    if ((longlong)param_2 - (longlong)plVar5 < 0) {
      pbVar2 = (byte *)plVar5[-2];
      plVar12 = plVar5 + -2;
      if ((pbVar2 == (byte *)0x0) || (*plVar10 == 0)) {
        iVar6 = (int)plVar5[-1] - (int)plVar10[1];
      }
      else {
        pbVar7 = pbVar2;
        do {
          bVar1 = *pbVar7;
          if (bVar1 != pbVar7[*plVar10 - (longlong)pbVar2]) {
            uVar4 = (uint)(bVar1 < pbVar7[*plVar10 - (longlong)pbVar2]);
            iVar6 = (1 - uVar4) - (uint)(uVar4 != 0);
            goto LAB_180004fa2;
          }
          pbVar7 = pbVar7 + 1;
        } while (bVar1 != 0);
        iVar6 = 0;
      }
LAB_180004fa2:
      if (iVar6 < 1) {
        pbVar7 = (byte *)*plVar10;
        if ((pbVar7 == (byte *)0x0) || (pbVar2 == (byte *)0x0)) {
          iVar6 = (int)plVar10[1] - (int)plVar5[-1];
        }
        else {
          lVar14 = (longlong)pbVar2 - (longlong)pbVar7;
          do {
            bVar1 = *pbVar7;
            if (bVar1 != pbVar7[lVar14]) {
              uVar4 = (uint)(bVar1 < pbVar7[lVar14]);
              iVar6 = (1 - uVar4) - (uint)(uVar4 != 0);
              goto LAB_180004fd8;
            }
            pbVar7 = pbVar7 + 1;
          } while (bVar1 != 0);
          iVar6 = 0;
        }
LAB_180004fd8:
        if (0 < iVar6) goto LAB_180005014;
        lVar14 = plVar5[-1];
        lVar8 = plVar10[-2];
        lVar3 = plVar10[-1];
        plVar10[-2] = *plVar12;
        plVar10[-1] = lVar14;
        *plVar12 = lVar8;
        plVar5[-1] = lVar3;
        plVar10 = plVar10 + -2;
      }
      goto joined_r0x000180004f53;
    }
LAB_180005014:
    if (plVar5 == param_2) {
      if (plVar9 == param_3) {
        *param_1 = plVar10;
        param_1[1] = plVar13;
        return param_1;
      }
      if (plVar13 != plVar9) {
        lVar14 = plVar13[1];
        lVar8 = *plVar10;
        lVar3 = plVar10[1];
        *plVar10 = *plVar13;
        plVar10[1] = lVar14;
        *plVar13 = lVar8;
        plVar13[1] = lVar3;
      }
      lVar14 = plVar9[1];
      lVar8 = *plVar10;
      lVar3 = plVar10[1];
      *plVar10 = *plVar9;
      plVar10[1] = lVar14;
      *plVar9 = lVar8;
      plVar9[1] = lVar3;
      plVar9 = plVar9 + 2;
      plVar10 = plVar10 + 2;
      plVar12 = plVar5;
      plVar13 = plVar13 + 2;
    }
    else {
      plVar12 = plVar5 + -2;
      if (plVar9 == param_3) {
        plVar11 = plVar10 + -2;
        if (plVar12 != plVar11) {
          lVar14 = plVar10[-1];
          lVar8 = *plVar12;
          lVar3 = plVar5[-1];
          *plVar12 = *plVar11;
          plVar5[-1] = lVar14;
          *plVar11 = lVar8;
          plVar10[-1] = lVar3;
        }
        lVar14 = plVar13[-1];
        lVar8 = *plVar11;
        lVar3 = plVar10[-1];
        *plVar11 = plVar13[-2];
        plVar10[-1] = lVar14;
        plVar13[-2] = lVar8;
        plVar13[-1] = lVar3;
        plVar10 = plVar11;
        plVar13 = plVar13 + -2;
      }
      else {
        lVar14 = plVar5[-1];
        lVar8 = *plVar9;
        lVar3 = plVar9[1];
        *plVar9 = *plVar12;
        plVar9[1] = lVar14;
        plVar9 = plVar9 + 2;
        *plVar12 = lVar8;
        plVar5[-1] = lVar3;
      }
    }
  } while( true );
}



void FUN_180005110(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  
  uVar1 = (longlong)param_3 - (longlong)param_1 >> 4;
  if (0x28 < uVar1) {
    uVar1 = uVar1 + 1 >> 3;
    FUN_1800051c0(param_1,param_1 + uVar1 * 2,param_1 + uVar1 * 4);
    FUN_1800051c0(param_2 + uVar1 * -2,param_2,param_2 + uVar1 * 2);
    FUN_1800051c0(param_3 + uVar1 * -4,param_3 + uVar1 * -2,param_3);
    FUN_1800051c0(param_1 + uVar1 * 2,param_2,param_3 + uVar1 * -2);
    return;
  }
  FUN_1800051c0(param_1,param_2,param_3);
  return;
}



void FUN_1800051c0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  longlong lVar7;
  int iVar8;
  
  pbVar6 = (byte *)*param_2;
  iVar8 = 0;
  if ((pbVar6 == (byte *)0x0) || (*param_1 == 0)) {
    iVar5 = (int)param_2[1] - (int)param_1[1];
  }
  else {
    lVar7 = *param_1 - (longlong)pbVar6;
    do {
      bVar1 = *pbVar6;
      if (bVar1 != pbVar6[lVar7]) {
        uVar4 = (uint)(bVar1 < pbVar6[lVar7]);
        iVar5 = (1 - uVar4) - (uint)(uVar4 != 0);
        goto LAB_180005212;
      }
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
    iVar5 = 0;
  }
LAB_180005212:
  if (0 < iVar5) {
    lVar7 = *param_2;
    lVar2 = param_1[1];
    lVar3 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = lVar2;
    *param_1 = lVar7;
    param_1[1] = lVar3;
  }
  pbVar6 = (byte *)*param_3;
  if ((pbVar6 == (byte *)0x0) || (*param_2 == 0)) {
    iVar5 = (int)param_3[1] - (int)param_2[1];
  }
  else {
    lVar7 = *param_2 - (longlong)pbVar6;
    do {
      bVar1 = *pbVar6;
      if (bVar1 != pbVar6[lVar7]) {
        uVar4 = (uint)(bVar1 < pbVar6[lVar7]);
        iVar5 = (1 - uVar4) - (uint)(uVar4 != 0);
        goto LAB_180005277;
      }
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
    iVar5 = 0;
  }
LAB_180005277:
  if (0 < iVar5) {
    lVar7 = param_2[1];
    lVar2 = *param_3;
    lVar3 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = lVar7;
    *param_2 = lVar2;
    param_2[1] = lVar3;
  }
  pbVar6 = (byte *)*param_2;
  if ((pbVar6 == (byte *)0x0) || (*param_1 == 0)) {
    iVar8 = (int)param_2[1] - (int)param_1[1];
  }
  else {
    lVar7 = *param_1 - (longlong)pbVar6;
    do {
      bVar1 = *pbVar6;
      if (bVar1 != pbVar6[lVar7]) {
        uVar4 = (uint)(bVar1 < pbVar6[lVar7]);
        iVar8 = (1 - uVar4) - (uint)(uVar4 != 0);
        break;
      }
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
  }
  if (0 < iVar8) {
    lVar7 = param_1[1];
    lVar2 = *param_2;
    lVar3 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = lVar7;
    *param_1 = lVar2;
    param_1[1] = lVar3;
  }
  return;
}



undefined8 * FUN_180005300(undefined8 *param_1,undefined8 *param_2)

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



undefined8 * FUN_180005370(undefined8 *param_1,undefined8 *param_2)

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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180005420(void)

{
  BOOL BVar1;
  DWORD DVar2;
  ULONG_PTR local_res8;
  HMODULE local_res10 [3];
  HANDLE local_298 [2];
  undefined1 local_288 [48];
  HMODULE local_258;
  WCHAR local_218 [260];
  undefined4 local_10;
  
  local_res8 = 0;
  if (DAT_180015970 == (HANDLE)0xffffffffffffffff) {
    BVar1 = QueryActCtxW(0x80000010,&DAT_180015970,(PVOID)0x0,1,local_298,0x10,(SIZE_T *)0x0);
    if (BVar1 == 0) {
      return 0;
    }
    if (local_298[0] == (HANDLE)0x0) {
      BVar1 = GetModuleHandleExW(6,(LPCWSTR)&DAT_180015970,local_res10);
      if (BVar1 == 0) {
        return 0;
      }
      local_10 = 0;
      DVar2 = GetModuleFileNameW(local_res10[0],local_218,0x105);
      if (DVar2 == 0) {
        return 0;
      }
      if ((short)local_10 != 0) {
        SetLastError(0x6f);
        return 0;
      }
      local_288._0_4_ = 0x38;
      local_288._4_4_ = 0x88;
      local_288._8_8_ = local_218;
      local_288._32_8_ = (LPCWSTR)0x3;
      local_258 = local_res10[0];
      local_298[0] = CreateActCtxW((PCACTCTXW)local_288);
      if (local_298[0] == (HANDLE)0xffffffffffffffff) {
        DVar2 = GetLastError();
        if ((((DVar2 != 0x714) && (DVar2 != 0x715)) && (DVar2 != 0x717)) && (DVar2 != 0x716)) {
          return 0;
        }
        local_298[0] = (HANDLE)0x0;
      }
      _DAT_180015998 = 1;
    }
    DAT_180015970 = local_298[0];
    BVar1 = ActivateActCtx(local_298[0],&local_res8);
    if (BVar1 != 0) {
      local_288._0_4_ = 0x70;
      BVar1 = FindActCtxSectionStringW
                        (0,(GUID *)0x0,2,L"Comctl32.dll",(PACTCTX_SECTION_KEYED_DATA)local_288);
      if (BVar1 != 0) {
        LoadLibraryW(L"Comctl32.dll");
      }
      DeactivateActCtx(0,local_res8);
    }
  }
  return 1;
}



HMODULE FUN_1800055e0(void)

{
  BOOL BVar1;
  DWORD dwErrCode;
  undefined8 uVar2;
  HMODULE pHVar3;
  ULONG_PTR local_res8;
  
  dwErrCode = 0;
  local_res8 = 0;
  if ((((DAT_18001599c == 0) ||
       (OutputDebugStringA("IsolationAware function called after IsolationAwareCleanup\n"),
       DAT_18001599c == 0)) && (uVar2 = FUN_180005420(), (int)uVar2 == 0)) ||
     (BVar1 = ActivateActCtx(DAT_180015970,&local_res8), BVar1 == 0)) {
    pHVar3 = (HMODULE)0x0;
  }
  else {
    pHVar3 = LoadLibraryA("x64/d3dcompiler_46.dll");
    if (pHVar3 == (HMODULE)0x0) {
      dwErrCode = GetLastError();
    }
    DeactivateActCtx(0,local_res8);
    if (pHVar3 == (HMODULE)0x0) {
      SetLastError(dwErrCode);
    }
  }
  return pHVar3;
}



// WARNING: Removing unreachable block (ram,0x0001800056d4)

longlong * FUN_1800056a0(longlong *param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  void *_Dst;
  uint uVar2;
  
  uVar2 = 0;
  pcVar1 = param_2;
  if (param_3 != 0) {
    do {
      if (*pcVar1 == '\0') break;
      uVar2 = uVar2 + 1;
      pcVar1 = pcVar1 + 1;
    } while (uVar2 < param_3);
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar2;
  *(uint *)(param_1 + 1) = uVar2;
  if (uVar2 != 0) {
    _Dst = malloc((ulonglong)(uVar2 + 1));
    *param_1 = (longlong)_Dst;
    memcpy(_Dst,param_2,(ulonglong)uVar2);
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 1) + *param_1) = 0;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



undefined8 * FUN_180005740(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_180005770(param_1,param_2,(va_list)&local_res18);
  return param_1;
}



undefined8 * FUN_180005770(undefined8 *param_1,char *param_2,va_list param_3)

{
  char cVar1;
  int iVar2;
  char *_Dest;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = 0x800;
  _Dest = malloc(0x800);
  iVar2 = _vsnprintf(_Dest,0x800,param_2,param_3);
  while (iVar2 < 0) {
    free(_Dest);
    uVar4 = uVar4 + 0x800;
    _Dest = malloc((ulonglong)uVar4);
    iVar2 = _vsnprintf(_Dest,(longlong)(int)uVar4,param_2,param_3);
  }
  *param_1 = _Dest;
  _Dest[(longlong)(int)uVar4 + -1] = '\0';
  if (_Dest == (char *)0x0) {
    iVar2 = 0;
  }
  else {
    lVar3 = -1;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      cVar1 = *_Dest;
      _Dest = _Dest + 1;
    } while (cVar1 != '\0');
    iVar2 = ~(uint)lVar3 - 1;
  }
  *(int *)(param_1 + 1) = iVar2;
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  return param_1;
}



longlong * FUN_180005840(longlong *param_1,longlong *param_2,char param_3,undefined8 *param_4)

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
LAB_18000598c:
        *(undefined4 *)(plVar1 + 3) = 1;
        *(undefined4 *)(lVar4 + 0x18) = 1;
        *(undefined4 *)(*(longlong *)(plVar3[1] + 8) + 0x18) = 0;
        plVar3 = *(longlong **)(plVar3[1] + 8);
      }
    }
    lVar4 = *plVar2;
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x18) == 0)) goto LAB_18000598c;
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



// WARNING: Removing unreachable block (ram,0x000180005ae4)

undefined8 * FUN_180005a90(undefined8 *param_1,char *param_2)

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



void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x000180005b70. Too many branches
                    // WARNING: Treating indirect jump as call
  DeleteCriticalSection(lpCriticalSection);
  return;
}



LPCRITICAL_SECTION FUN_180005b80(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180005bb0(void)

{
  uint uVar1;
  undefined8 *puVar2;
  HANDLE hSourceHandle;
  
  DAT_180015a38 = 0;
  _DAT_180015a40 = 0;
  hSourceHandle = GetCurrentThread();
  DuplicateHandle((HANDLE)0x0,hSourceHandle,(HANDLE)0x0,(LPHANDLE)&DAT_180015a38,0,0,0);
  _DAT_180015a40 = GetCurrentThreadId();
  uVar1 = DAT_1800157e0 + 1;
  if (DAT_1800157e4 < uVar1) {
    DAT_1800157e4 = (DAT_1800157e4 * 10 >> 3) + 0x10 & 0xfffffff0;
    if (DAT_1800157e4 < uVar1) {
      DAT_1800157e4 = uVar1;
    }
    DAT_1800157d8 = realloc(DAT_1800157d8,(ulonglong)(DAT_1800157e4 << 3));
  }
  puVar2 = (undefined8 *)((longlong)DAT_1800157d8 + (ulonglong)DAT_1800157e0 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &DAT_180015a38;
  }
  DAT_1800157e0 = DAT_1800157e0 + 1;
  atexit((_func_5014 *)&LAB_180005ba0);
  return &DAT_180015a38;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180005c90(void)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar3 = (ulonglong)(int)DAT_1800157e0;
  uVar4 = 0;
  uVar2 = 0;
  if (DAT_1800157e0 != 0) {
    uVar6 = DAT_1800157e0 - 1;
    lVar7 = uVar3 * 8 + -8;
    puVar1 = DAT_1800157d8;
    puVar5 = DAT_1800157d8;
    do {
      if ((HANDLE *)*puVar5 == &DAT_180015a38) {
        if (uVar4 < uVar6) {
          *puVar5 = *(undefined8 *)(lVar7 + (longlong)puVar1);
          puVar1 = DAT_1800157d8;
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
  DAT_1800157e0 = uVar2;
  CloseHandle(DAT_180015a38);
  DAT_180015a38 = (HANDLE)0x0;
  _DAT_180015a40 = 0;
  return;
}



void FUN_180005d20(void)

{
  longlong lVar1;
  
  lVar1 = DAT_180015770;
  while (DAT_180015778 != 0) {
    DAT_180015770 = lVar1;
    free(*(void **)(lVar1 + -0x10));
    *(undefined8 *)(lVar1 + -0x10) = 0;
    if (DAT_180015768 == DAT_180015770) {
      DAT_180015768 = 0;
      DAT_180015770 = 0;
    }
    else {
      **(undefined8 **)(DAT_180015770 + 8) = 0;
      DAT_180015770 = *(longlong *)(DAT_180015770 + 8);
    }
    DAT_180015778 = DAT_180015778 + -1;
    free((void *)(lVar1 + -0x10));
    lVar1 = DAT_180015770;
  }
  DAT_180015770 = lVar1;
  return;
}



void FUN_180005db0(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1800157a8;
  while (DAT_1800157b0 != 0) {
    DAT_1800157a8 = lVar1;
    free(*(void **)(lVar1 + -0x10));
    *(undefined8 *)(lVar1 + -0x10) = 0;
    if (DAT_1800157a0 == DAT_1800157a8) {
      DAT_1800157a0 = 0;
      DAT_1800157a8 = 0;
    }
    else {
      **(undefined8 **)(DAT_1800157a8 + 8) = 0;
      DAT_1800157a8 = *(longlong *)(DAT_1800157a8 + 8);
    }
    DAT_1800157b0 = DAT_1800157b0 + -1;
    free((void *)(lVar1 + -0x10));
    lVar1 = DAT_1800157a8;
  }
  DAT_1800157a8 = lVar1;
  return;
}



void FUN_180005e40(undefined8 *param_1,void *param_2,uint param_3)

{
  void *_Dst;
  
  *(uint *)(param_1 + 1) = param_3 & 0x3fffffff | *(uint *)(param_1 + 1) & 0xc0000000 | 0x40000000;
  _Dst = malloc((ulonglong)param_3);
  *param_1 = _Dst;
  memcpy(_Dst,param_2,(ulonglong)param_3);
  return;
}



undefined8 * FUN_180005ea0(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  char *_Str;
  uint uVar5;
  ulonglong uVar6;
  void *local_18 [2];
  
  uVar6 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (*param_2 == 0) {
    return param_1;
  }
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    do {
      uVar5 = (uint)uVar6;
      if (*(char *)(uVar6 + *param_2) == '(') {
        if (uVar5 == 0xffffffff) {
          return (undefined8 *)(ulonglong)uVar1;
        }
        puVar3 = FUN_180006480(param_2,local_18,uVar5);
        if (param_1 != puVar3) {
          free((void *)*param_1);
          param_1[1] = 0;
          *param_1 = 0;
          *param_1 = *puVar3;
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar3 + 1);
          *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)puVar3 + 0xc);
          *puVar3 = 0;
          puVar3[1] = 0;
        }
        free(local_18[0]);
        puVar4 = &DAT_18000abcc;
        if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
          puVar4 = (undefined1 *)*param_2;
        }
        _Str = puVar4 + uVar6 + 1;
        iVar2 = atoi(_Str);
        *(int *)(param_1 + 2) = iVar2;
        return (undefined8 *)_Str;
      }
      uVar6 = (ulonglong)(uVar5 + 1);
    } while (uVar5 + 1 < uVar1);
    return (undefined8 *)(ulonglong)uVar1;
  }
  return (undefined8 *)0x0;
}



// WARNING: Removing unreachable block (ram,0x000180006000)
// WARNING: Removing unreachable block (ram,0x000180006110)

longlong * FUN_180005fc0(longlong *param_1,char *param_2,longlong *param_3,longlong *param_4)

{
  char *pcVar1;
  void *pvVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar7;
  undefined8 *puVar8;
  undefined1 *_Memory;
  undefined1 *local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 *puVar6;
  
  puVar6 = (undefined1 *)0x0;
  uVar5 = 0;
  if ((int)param_4[2] < 1) {
    pcVar1 = "?";
    do {
      uVar5 = (uint)puVar6;
      if (*pcVar1 == '\0') break;
      uVar5 = uVar5 + 1;
      puVar6 = (undefined1 *)(ulonglong)uVar5;
      pcVar1 = pcVar1 + 1;
    } while (uVar5 != 0xffffffff);
    *(uint *)((longlong)param_1 + 0xc) = uVar5;
    *(uint *)(param_1 + 1) = uVar5;
    if (uVar5 == 0) {
      *param_1 = 0;
    }
    else {
      pvVar2 = malloc((ulonglong)(uVar5 + 1));
      *param_1 = (longlong)pvVar2;
      memcpy(pvVar2,&DAT_18000a648,(ulonglong)uVar5);
      *(undefined1 *)((ulonglong)*(uint *)(param_1 + 1) + *param_1) = 0;
    }
  }
  else {
    local_48 = (undefined1 *)0x0;
    local_40 = 0;
    if ((int)param_4[1] == 0) {
      FUN_180005a90(&local_48,param_2);
      _Memory = local_48;
      uVar5 = (uint)local_40;
    }
    else {
      ppuVar3 = (undefined1 **)FUN_180006790(param_3,&local_38,param_4);
      _Memory = puVar6;
      if (&local_48 != ppuVar3) {
        free((void *)0x0);
        _Memory = *ppuVar3;
        uVar5 = *(uint *)(ppuVar3 + 1);
        *ppuVar3 = (undefined1 *)0x0;
        ppuVar3[1] = (undefined1 *)0x0;
      }
      free(local_38);
    }
    puVar4 = &DAT_18000abcc;
    if (_Memory != (undefined1 *)0x0) {
      puVar4 = _Memory;
    }
    local_38 = (void *)0x0;
    local_30 = 0;
    local_28 = 0x28;
    FUN_1800049a0((longlong *)&local_38,(longlong)puVar4,uVar5);
    pvVar2 = local_38;
    uVar5 = (uint)local_30;
    if ((uint)local_30 < *(uint *)(param_4 + 2)) {
      pcVar1 = "?";
      do {
        uVar7 = (uint)puVar6;
        if (*pcVar1 == '\0') break;
        uVar7 = uVar7 + 1;
        puVar6 = (undefined1 *)(ulonglong)uVar7;
        pcVar1 = pcVar1 + 1;
      } while (uVar7 != 0xffffffff);
      *(uint *)((longlong)param_1 + 0xc) = uVar7;
      *(uint *)(param_1 + 1) = uVar7;
      if (uVar7 == 0) {
        *param_1 = 0;
      }
      else {
        pvVar2 = malloc((ulonglong)(uVar7 + 1));
        *param_1 = (longlong)pvVar2;
        memcpy(pvVar2,&DAT_18000a648,(ulonglong)uVar7);
        *(undefined1 *)((ulonglong)*(uint *)(param_1 + 1) + *param_1) = 0;
      }
      pvVar2 = local_38;
      puVar8 = (undefined8 *)((ulonglong)(uVar5 - 1) * 0x10 + (longlong)local_38);
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        free((void *)*puVar8);
        *puVar8 = 0;
        puVar8 = puVar8 + -2;
      }
    }
    else {
      FUN_180005300(param_1,(undefined8 *)
                            ((longlong)(int)(*(uint *)(param_4 + 2) - 1) * 0x10 + (longlong)local_38
                            ));
      puVar8 = (undefined8 *)((ulonglong)(uVar5 - 1) * 0x10 + (longlong)pvVar2);
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        free((void *)*puVar8);
        *puVar8 = 0;
        puVar8 = puVar8 + -2;
      }
    }
    free(pvVar2);
    free(_Memory);
  }
  return param_1;
}



void FUN_180006200(undefined4 param_1,undefined8 param_2,char *param_3,longlong *param_4,
                  char *param_5,longlong *param_6,char param_7)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined8 *extraout_RAX;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  char *pcVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  longlong local_a8;
  char local_a0;
  undefined1 *local_98 [2];
  longlong *local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 local_60;
  void *local_58 [4];
  
  if (*param_5 != '\0') {
    puVar2 = (undefined8 *)*param_6;
    pcVar9 = "failed";
    uVar4 = 0xc0000002;
    if (param_7 != '\0') {
      pcVar9 = "succeeded with warnings";
      uVar4 = 0x80000002;
    }
    pcVar5 = FUN_180001870(param_1);
    uVar7 = 0xc0000001;
    if (param_7 != '\0') {
      uVar7 = 0x80000001;
    }
    (*(code *)*puVar2)(param_6,uVar7,"Shader compilation [%s, %s] %s:",pcVar5,param_2,pcVar9);
    lVar6 = -1;
    pcVar9 = param_5;
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    local_88 = (longlong *)0x0;
    local_80 = 0;
    local_78 = 0x28;
    FUN_1800049a0((longlong *)&local_88,(longlong)param_5,~(uint)lVar6 - 1);
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
    local_60 = 0x28;
    plVar8 = local_88 + (local_80 & 0xffffffff) * 2;
    plVar10 = local_88;
    puVar2 = local_70;
    iVar13 = (int)local_80;
    if (local_88 != plVar8) {
      do {
        puVar11 = &DAT_18000abcc;
        if ((undefined1 *)*plVar10 != (undefined1 *)0x0) {
          puVar11 = (undefined1 *)*plVar10;
        }
        (**(code **)(*param_6 + 0x18))(param_6,uVar4,puVar11);
        FUN_180005ea0(local_58,plVar10);
        FUN_180006530((longlong *)&local_70,&local_a8,extraout_RAX);
        free(local_58[0]);
        local_58[0] = (void *)0x0;
        if (local_a0 != '\0') {
          FUN_180005fc0((longlong *)local_98,param_3,param_4,(longlong *)(local_a8 + -0x18));
          puVar11 = local_98[0];
          puVar12 = &DAT_18000abcc;
          if (local_98[0] != (undefined1 *)0x0) {
            puVar12 = local_98[0];
          }
          (**(code **)*param_6)(param_6,uVar4," --> %s",puVar12);
          free(puVar11);
          local_98[0] = (undefined1 *)0x0;
        }
        plVar10 = plVar10 + 2;
      } while (plVar10 != plVar8);
      plVar10 = local_88;
      puVar2 = local_70;
      iVar13 = (int)local_80;
    }
    while (local_88 = plVar10, puVar2 != (undefined8 *)0x0) {
      FUN_180006720(&local_70,(undefined8 *)puVar2[2]);
      puVar3 = (undefined8 *)*puVar2;
      free((void *)puVar2[-3]);
      puVar2[-3] = 0;
      free(puVar2 + -3);
      plVar10 = local_88;
      puVar2 = puVar3;
    }
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
    plVar8 = plVar10 + (ulonglong)(iVar13 - 1) * 2;
    for (; iVar13 != 0; iVar13 = iVar13 + -1) {
      free((void *)*plVar8);
      *plVar8 = 0;
      plVar8 = plVar8 + -2;
    }
    free(plVar10);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800064c2)
// WARNING: Removing unreachable block (ram,0x0001800064d2)

undefined8 * FUN_180006480(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined1 *_Dst;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 1);
  _Dst = (undefined1 *)0x0;
  if (uVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    if (param_3 == 0xffffffff) {
      param_3 = uVar1;
    }
    if (uVar1 < param_3) {
      param_3 = uVar1;
    }
    uVar1 = 0;
    if (param_3 != 0) {
      _Dst = malloc((ulonglong)(param_3 + 1));
      *_Dst = 0;
      free((void *)0x0);
      memcpy(_Dst,(void *)*param_1,(ulonglong)param_3);
      _Dst[param_3] = 0;
      uVar1 = param_3;
    }
    *param_2 = _Dst;
    *(uint *)(param_2 + 1) = uVar1;
    *(uint *)((longlong)param_2 + 0xc) = uVar1;
  }
  free((void *)0x0);
  return param_2;
}



undefined8 * FUN_180006530(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  bVar6 = false;
  plVar4 = (longlong *)*param_1;
  plVar1 = (longlong *)0x0;
  while (plVar4 != (longlong *)0x0) {
    if (((char *)*param_3 == (char *)0x0) || ((char *)plVar4[-3] == (char *)0x0)) {
      iVar2 = *(int *)(param_3 + 1) - (int)plVar4[-2];
    }
    else {
      iVar2 = _stricmp((char *)*param_3,(char *)plVar4[-3]);
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_3 + 2) - (int)plVar4[-1];
    }
    bVar6 = iVar2 < 0;
    plVar1 = plVar4;
    if (bVar6) {
      plVar4 = (longlong *)*plVar4;
    }
    else {
      plVar4 = (longlong *)plVar4[2];
    }
  }
  plVar4 = plVar1;
  if (bVar6 != false) {
    plVar4 = (longlong *)*plVar1;
    if (plVar4 == (longlong *)0x0) {
      plVar3 = plVar1;
      plVar5 = (longlong *)plVar1[1];
      if ((longlong *)plVar1[1] == (longlong *)0x0) goto LAB_180006628;
      do {
        plVar4 = plVar5;
        if (plVar3 != (longlong *)*plVar5) break;
        plVar4 = (longlong *)plVar5[1];
        plVar3 = plVar5;
        plVar5 = plVar4;
      } while (plVar4 != (longlong *)0x0);
    }
    else {
      for (plVar3 = (longlong *)plVar4[2]; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[2]
          ) {
        plVar4 = plVar3;
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    if (((char *)plVar4[-3] == (char *)0x0) || ((char *)*param_3 == (char *)0x0)) {
      iVar2 = (int)plVar4[-2] - *(int *)(param_3 + 1);
    }
    else {
      iVar2 = _stricmp((char *)plVar4[-3],(char *)*param_3);
    }
    if (iVar2 == 0) {
      iVar2 = (int)plVar4[-1] - *(int *)(param_3 + 2);
    }
    if (-1 < iVar2) {
      *param_2 = plVar4;
      *(undefined1 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
LAB_180006628:
  plVar4 = FUN_180006670(param_3);
  plVar4 = FUN_180005840(param_1,plVar4,bVar6,plVar1);
  *(undefined1 *)(param_2 + 1) = 1;
  *param_2 = plVar4;
  return param_2;
}



undefined8 * FUN_180006670(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Dst;
  
  puVar2 = malloc(0x38);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x18;
  }
  iVar1 = *(int *)(param_1 + 1);
  if (iVar1 != 0) {
    *(int *)(puVar2 + 1) = iVar1;
    *(int *)((longlong)puVar2 + 0xc) = iVar1;
    _Dst = malloc((ulonglong)(iVar1 + 1));
    *puVar2 = _Dst;
    memcpy(_Dst,(void *)*param_1,(ulonglong)(iVar1 + 1));
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 2);
    return puVar2 + 3;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 2);
  return puVar2 + 3;
}



void FUN_180006720(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  while (param_2 != (undefined8 *)0x0) {
    FUN_180006720(param_1,(undefined8 *)param_2[2]);
    puVar1 = (undefined8 *)*param_2;
    free((void *)param_2[-3]);
    param_2[-3] = 0;
    free(param_2 + -3);
    param_2 = puVar1;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800067f6)
// WARNING: Removing unreachable block (ram,0x00018000694f)

undefined8 * FUN_180006790(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  void *_Dst;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  char *pcVar7;
  undefined8 *puVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint local_res8 [2];
  void *local_68;
  undefined8 local_60;
  LARGE_INTEGER local_58;
  LARGE_INTEGER local_50;
  undefined1 local_48;
  char *local_40;
  
  puVar9 = (uint *)&DAT_18000abcc;
  if ((uint *)*param_3 != (uint *)0x0) {
    puVar9 = (uint *)*param_3;
  }
  uVar3 = FUN_180008620(0x811c9dc5,puVar9,*(uint *)(param_3 + 1));
  _Dst = (void *)0x0;
  pcVar7 = "";
  pvVar6 = _Dst;
  do {
    if (*pcVar7 == '\0') break;
    uVar10 = (int)pvVar6 + 1;
    pvVar6 = (void *)(ulonglong)uVar10;
    pcVar7 = pcVar7 + 1;
  } while (uVar10 != 0xffffffff);
  iVar11 = (int)pvVar6;
  local_res8[0] = uVar3;
  if (iVar11 != 0) {
    _Dst = malloc((ulonglong)(iVar11 + 1));
    memcpy(_Dst,&DAT_18000abcc,(size_t)pvVar6);
    *(undefined1 *)((longlong)pvVar6 + (longlong)_Dst) = 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 3);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
  }
  puVar8 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)*param_1;
  if ((undefined8 *)*param_1 == (undefined8 *)0x0) {
LAB_18000689b:
    if (iVar11 == 0) {
LAB_1800068c6:
      local_68 = (void *)0x0;
      local_60 = 0;
    }
    else {
      local_60 = CONCAT44(iVar11,iVar11);
      local_68 = malloc((ulonglong)(iVar11 + 1U));
      memcpy(local_68,_Dst,(ulonglong)(iVar11 + 1U));
    }
  }
  else {
    do {
      if (*(uint *)(puVar4 + -3) < uVar3) {
        puVar5 = (undefined8 *)puVar4[2];
      }
      else {
        puVar5 = (undefined8 *)*puVar4;
        puVar8 = puVar4;
      }
      puVar4 = puVar5;
    } while (puVar5 != (undefined8 *)0x0);
    if ((puVar8 == (undefined8 *)0x0) || (uVar3 < *(uint *)(puVar8 + -3))) goto LAB_18000689b;
    iVar11 = *(int *)(puVar8 + -1);
    if (iVar11 == 0) goto LAB_1800068c6;
    local_60 = CONCAT44(iVar11,iVar11);
    local_68 = malloc((ulonglong)(iVar11 + 1U));
    memcpy(local_68,(void *)puVar8[-2],(ulonglong)(iVar11 + 1U));
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  free(_Dst);
  if ((int)local_60 == 0) {
    local_48 = 1;
    local_40 = "CPreProcessedShaderSources::Include_FetchIncludeFile";
    QueryPerformanceCounter(&local_58);
    pcVar7 = "";
    if ((char *)*param_3 != (char *)0x0) {
      pcVar7 = (char *)*param_3;
    }
    bVar2 = fs::load_text_file((string_base<char> *)&local_68,pcVar7);
    if (!bVar2) {
      uVar3 = 0;
      pcVar7 = "";
      do {
        if (*pcVar7 == '\0') break;
        uVar3 = uVar3 + 1;
        pcVar7 = pcVar7 + 1;
      } while (uVar3 != 0xffffffff);
      *(uint *)((longlong)param_2 + 0xc) = uVar3;
      *(uint *)(param_2 + 1) = uVar3;
      if (uVar3 == 0) {
        *param_2 = 0;
      }
      else {
        pvVar6 = malloc((ulonglong)(uVar3 + 1));
        *param_2 = pvVar6;
        memcpy(pvVar6,&DAT_18000abcc,(ulonglong)uVar3);
        *(undefined1 *)((ulonglong)uVar3 + (longlong)pvVar6) = 0;
      }
      local_48 = 0;
      QueryPerformanceCounter(&local_50);
      goto LAB_1800069d9;
    }
    local_48 = 0;
    QueryPerformanceCounter(&local_50);
    FUN_180006a00(param_1,local_res8,&local_68);
  }
  *(int *)(param_2 + 1) = (int)local_60;
  *param_2 = local_68;
  uVar1 = local_60._4_4_;
  local_68 = (void *)0x0;
  local_60 = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar1;
LAB_1800069d9:
  free(local_68);
  return param_2;
}



undefined8 FUN_180006a00(longlong *param_1,uint *param_2,undefined8 *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint *puVar5;
  void *_Dst;
  longlong *plVar6;
  uint uVar7;
  undefined8 uVar8;
  bool bVar9;
  void *local_res10;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 3);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar7 = *(uint *)(param_3 + 1);
  uVar1 = *param_2;
  if (uVar7 == 0) {
    local_res10 = (void *)0x0;
    uVar7 = 0;
  }
  else {
    local_res10 = malloc((ulonglong)(uVar7 + 1));
    memcpy(local_res10,(void *)*param_3,(ulonglong)(uVar7 + 1));
  }
  bVar9 = false;
  plVar4 = (longlong *)*param_1;
  plVar2 = (longlong *)0x0;
  while (plVar4 != (longlong *)0x0) {
    bVar9 = uVar1 < *(uint *)(plVar4 + -3);
    plVar2 = plVar4;
    if (bVar9) {
      plVar4 = (longlong *)*plVar4;
    }
    else {
      plVar4 = (longlong *)plVar4[2];
    }
  }
  plVar4 = plVar2;
  if (bVar9 == false) {
LAB_180006af9:
    if ((plVar4 != (longlong *)0x0) && (uVar1 <= *(uint *)(plVar4 + -3))) {
      uVar8 = 0;
      goto LAB_180006b84;
    }
  }
  else {
    plVar4 = (longlong *)*plVar2;
    if (plVar4 != (longlong *)0x0) {
      for (plVar6 = (longlong *)plVar4[2]; plVar6 != (longlong *)0x0; plVar6 = (longlong *)plVar6[2]
          ) {
        plVar4 = plVar6;
      }
      goto LAB_180006af9;
    }
    plVar4 = (longlong *)plVar2[1];
    plVar6 = plVar2;
    if ((longlong *)plVar2[1] != (longlong *)0x0) {
      do {
        plVar3 = plVar4;
        plVar4 = plVar3;
        if (plVar6 != (longlong *)*plVar3) break;
        plVar4 = (longlong *)plVar3[1];
        plVar6 = plVar3;
      } while (plVar4 != (longlong *)0x0);
      goto LAB_180006af9;
    }
  }
  puVar5 = malloc(0x38);
  if (puVar5 != (uint *)0x0) {
    *puVar5 = uVar1;
    if (uVar7 == 0) {
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
    }
    else {
      puVar5[4] = uVar7;
      puVar5[5] = uVar7;
      _Dst = malloc((ulonglong)(uVar7 + 1));
      *(void **)(puVar5 + 2) = _Dst;
      memcpy(_Dst,local_res10,(ulonglong)(uVar7 + 1));
    }
  }
  FUN_180005840(param_1,(longlong *)(puVar5 + 6),bVar9,plVar2);
  uVar8 = 1;
LAB_180006b84:
  free(local_res10);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return uVar8;
}



undefined8 FUN_180006bd0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 3:
  case 6:
  case 7:
    return 2;
  case 1:
    return 7;
  case 2:
  case 10:
    return 4;
  default:
    return 0x20;
  case 5:
    return 1;
  }
}



uint FUN_180006c50(longlong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  void *pvVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = 0;
  if (uVar1 != 0) {
    puVar5 = (uint *)*param_1;
    do {
      if (((int)(*puVar5 << 0x1b) >> 0x1b == param_2) && ((*puVar5 >> 5 & 0xf) == param_3)) {
        if (-1 < (int)uVar4) {
          return uVar4;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar4 < uVar1);
  }
  uVar2 = FUN_180006bd0(param_2);
  uVar1 = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1) {
    uVar4 = (*(uint *)((longlong)param_1 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
    if (uVar4 < uVar1) {
      uVar4 = uVar1;
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar4;
    pvVar3 = realloc((void *)*param_1,(ulonglong)(uVar4 << 2));
    *param_1 = (longlong)pvVar3;
  }
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 + 1;
  *(uint *)(*param_1 + (ulonglong)uVar1 * 4) =
       (param_3 & 0xf) << 5 | ((uint)uVar2 & 0x7f) << 9 | param_2 & 0x1f;
  return (int)param_1[1] - 1;
}



void FUN_180006d50(undefined8 *param_1)

{
  uint uVar1;
  ulonglong *puVar2;
  void *pvVar3;
  uint uVar4;
  longlong *plVar5;
  undefined1 local_res8 [32];
  
  if (*(uint *)(param_1 + 1) != 0) {
    puVar2 = (ulonglong *)*param_1;
    if (puVar2 != puVar2 + (ulonglong)*(uint *)(param_1 + 1) * 6) {
      local_res8[0] = 0;
      FUN_180007bf0(puVar2,puVar2 + (ulonglong)*(uint *)(param_1 + 1) * 6,local_res8);
    }
    uVar1 = *(uint *)(param_1 + 1);
    uVar4 = 0;
    *(undefined4 *)(param_1 + 3) = 0x10000000;
    if (uVar1 != 0) {
      plVar5 = (longlong *)*param_1;
      do {
        if (*plVar5 != 0) {
          *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | *(uint *)(*plVar5 + 0x2c);
        }
        uVar4 = uVar4 + 1;
        plVar5 = plVar5 + 6;
      } while (uVar4 < uVar1);
    }
    if (((*(uint *)((longlong)param_1 + 0xc) != 0) && ((void *)*param_1 != (void *)0x0)) &&
       (uVar1 != *(uint *)((longlong)param_1 + 0xc))) {
      pvVar3 = realloc((void *)*param_1,(ulonglong)(uVar1 * 0x30));
      *param_1 = pvVar3;
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
    }
  }
  return;
}



undefined8
FUN_180006df0(longlong *param_1,int param_2,undefined4 param_3,int param_4,char *param_5,
             uint param_6,longlong *param_7,undefined8 *param_8,longlong *param_9)

{
  char *_Str2;
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 extraout_var;
  longlong *plVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong extraout_RAX;
  longlong lVar10;
  undefined8 extraout_RAX_00;
  ulonglong uVar11;
  char *_Str1;
  void *pvVar12;
  void **ppvVar13;
  ulonglong uVar14;
  char *pcVar15;
  uint uVar16;
  size_t _MaxCount;
  undefined8 in_stack_ffffffffffffff50;
  undefined4 uVar17;
  longlong local_78;
  void *local_70;
  void *local_68;
  void *local_60;
  undefined4 local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  
  iVar4 = strncmp(param_5,"INSTANCE_DATA",0xd);
  if (iVar4 == 0) {
    return CONCAT71((int7)(CONCAT44(extraout_var,iVar4) >> 8),1);
  }
  plVar7 = (longlong *)(**(code **)(*param_9 + 0xe0))(param_9);
  uVar14 = 0;
  iVar4 = 0;
  uVar5 = (**(code **)(*param_9 + 0xe8))();
  uVar9 = uVar14;
  local_58 = param_3;
  local_54 = param_2;
  if (uVar5 != 0) {
    do {
      lVar10 = *plVar7;
      uVar11 = 0xffffffffffffffff;
      pcVar8 = *(char **)(lVar10 + 8);
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar11 = ~uVar11;
      iVar6 = _strnicmp(*(char **)(lVar10 + 8),param_5,uVar11 - 1);
      if (iVar6 == 0) {
        pcVar8 = strchr(param_5 + (uVar11 - 1),0x5b);
        uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
        cVar1 = param_5[uVar11 - 1];
        if (cVar1 == '_') {
          _Str2 = param_5 + uVar11;
          if (('/' < param_5[uVar11]) && (param_5[uVar11] < ':')) {
            iVar6 = atoi(_Str2);
            uVar11 = (ulonglong)(uint)(iVar6 * *(int *)(lVar10 + 0x20));
            goto LAB_180007046;
          }
          uVar11 = 0;
          if ((int)param_7[1] == 0) goto LAB_180007046;
          if (pcVar8 != (char *)0x0) {
            _MaxCount = (longlong)pcVar8 - (longlong)_Str2;
            goto LAB_180006fbb;
          }
          uVar9 = 0xffffffffffffffff;
          pcVar15 = _Str2;
          goto code_r0x000180006fb2;
        }
        uVar11 = uVar14;
        if ((cVar1 == '\0') || (uVar11 = 0, cVar1 == '[')) goto LAB_180007046;
      }
      uVar16 = (int)uVar9 + 1;
      plVar7 = plVar7 + 1;
      uVar9 = (ulonglong)uVar16;
    } while (uVar16 < uVar5);
  }
  if (param_4 == 1) {
    lVar10 = (**(code **)(*param_9 + 0x110))(param_9,param_5);
    if (lVar10 == 0) {
      (**(code **)*param_8)
                (param_8,0xc0000009,"float variable \'%s\' not found on varlist!",param_5);
    }
    local_78 = 0;
    local_70 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = (void *)0x0;
    local_50 = param_6;
    local_4c = 0;
    if (param_5 == (char *)0x0) goto LAB_18000728e;
    ppvVar13 = &local_60;
  }
  else if (param_4 == 3) {
    lVar10 = (**(code **)(*param_9 + 0x120))(param_9,param_5);
    if (lVar10 == 0) {
      (**(code **)*param_8)(param_8,0xc0000008,"vec3 variable \'%s\' not found on varlist!",param_5)
      ;
    }
    local_78 = 0;
    local_70 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = (void *)0x0;
    local_50 = param_6;
    local_4c = 0;
    if (param_5 == (char *)0x0) goto LAB_18000728e;
    ppvVar13 = &local_68;
  }
  else {
    if (param_4 != 4) {
      uVar9 = (**(code **)*param_8)
                        (param_8,0xc000000a,
                         "unrecognized components count that cannot be converted to CVar: %d",
                         param_4);
      return uVar9 & 0xffffffffffffff00;
    }
    lVar10 = (**(code **)(*param_9 + 0x128))(param_9,param_5);
    if (lVar10 == 0) {
      (**(code **)*param_8)(param_8,0xc0000007,"vec4 variable \'%s\' not found on varlist!",param_5)
      ;
    }
    local_78 = 0;
    local_70 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = (void *)0x0;
    local_50 = param_6;
    local_4c = 0;
    if (param_5 == (char *)0x0) goto LAB_18000728e;
    ppvVar13 = &local_70;
  }
  local_4c = 0;
  local_50 = param_6;
  local_60 = (void *)0x0;
  local_68 = (void *)0x0;
  local_70 = (void *)0x0;
  local_78 = 0;
  FUN_180004910(ppvVar13,param_5);
LAB_18000728e:
  pvVar3 = local_60;
  pvVar2 = local_68;
  pvVar12 = local_70;
  FUN_180007b30(param_1,&local_78);
  operator_delete__(pvVar3);
  operator_delete__(pvVar2);
LAB_1800072b0:
  operator_delete__(pvVar12);
  return CONCAT71((int7)((ulonglong)extraout_RAX_00 >> 8),1);
  while( true ) {
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    if (cVar1 == '\0') break;
code_r0x000180006fb2:
    if (uVar9 == 0) break;
  }
  _MaxCount = ~uVar9 - 1;
LAB_180006fbb:
  uVar9 = uVar14;
  if ((int)param_7[1] != 0) {
    do {
      pcVar15 = *(char **)(uVar9 + *param_7);
      if ((pcVar15 != (char *)0x0) && (*pcVar15 != '\0')) {
        _Str1 = "";
        if (pcVar15 != (char *)0x0) {
          _Str1 = pcVar15;
        }
        iVar6 = strncmp(_Str1,_Str2,_MaxCount);
        uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
        if (iVar6 == 0) {
          uVar11 = (ulonglong)*(uint *)(*param_7 + 0xc + uVar14 * 0x18);
LAB_180007046:
          if (pcVar8 != (char *)0x0) {
            iVar4 = atoi(pcVar8 + 1);
          }
          uVar5 = *(uint *)(lVar10 + 0x28) << 4;
          if (uVar5 < param_6) {
            uVar9 = (**(code **)*param_8)
                              (param_8,0xc0000005,
                               "size is larger than ShConstDef regs: %d vs %d, constant \'%s\'!",
                               param_6,uVar5,param_5);
            return uVar9 & 0xffffffffffffff00;
          }
          local_70 = (void *)0x0;
          local_68 = (void *)0x0;
          local_60 = (void *)0x0;
          local_4c = 0;
          if (param_6 == 0) {
            param_6 = *(int *)(lVar10 + 0x1c) << 4;
          }
          uVar5 = iVar4 + (int)uVar11;
          local_78 = lVar10;
          local_50 = param_6;
          if (*(uint *)(lVar10 + 0x28) <= uVar5) {
            (**(code **)*param_8)
                      (param_8,0xc0000006,
                       "user count calculated from \'index\'(%d) and \'subelement\'(%d) are out-of-range (%d) for constant \'%s\'!"
                       ,uVar11,iVar4,CONCAT44(uVar17,0x100),param_5);
            operator_delete__((void *)0x0);
            operator_delete__((void *)0x0);
            operator_delete__((void *)0x0);
            return extraout_RAX & 0xffffffffffffff00;
          }
          if ((param_2 == -1) && (1 < *(uint *)(lVar10 + 0x1c))) {
            local_50 = (*(uint *)(lVar10 + 0x1c) - iVar4) * 0x10;
          }
          local_4c = uVar5;
          FUN_180007b30(param_1,&local_78);
          operator_delete__((void *)0x0);
          operator_delete__((void *)0x0);
          pvVar12 = (void *)0x0;
          goto LAB_1800072b0;
        }
      }
      uVar5 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar5;
      uVar9 = uVar9 + 0x18;
    } while (uVar5 < *(uint *)(param_7 + 1));
  }
  uVar9 = (**(code **)*param_8)
                    (param_8,0xc0000004,
                     "sampler \'%s\' not found on samplers list declared by shader, when trying to evaluate \'%s\'!"
                     ,_Str2,param_5);
  return uVar9 & 0xffffffffffffff00;
}



ulonglong FUN_1800072f0(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  ENUM EVar4;
  TYPE TVar5;
  undefined4 extraout_var;
  longlong *plVar6;
  ulonglong extraout_RAX;
  ulonglong uVar7;
  void *pvVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  uint *puVar14;
  longlong lVar15;
  uint *_Src;
  uint *puVar16;
  uint uVar17;
  uint *_Src_00;
  uint *puVar18;
  void *local_48 [2];
  
  if (*(uint *)(param_1 + 1) == *(uint *)(param_2 + 0x30)) {
    puVar18 = (uint *)*param_1;
    puVar9 = puVar18 + (ulonglong)*(uint *)(param_1 + 1) * 0xc;
    if (puVar18 != puVar9) {
      puVar16 = (uint *)(*(longlong *)(param_2 + 0x28) + 0x2c);
      puVar18 = puVar18 + 9;
      do {
        if (*(longlong *)(puVar18 + -9) != 0) {
          puVar9 = puVar18 + 3;
          puVar14 = puVar16 + 5;
          if (puVar9 != (uint *)((ulonglong)*(uint *)(param_1 + 1) * 0x30 + *param_1)) {
            _Src = puVar16 + 0x15;
            _Src_00 = puVar18 + 0xf;
            do {
              if (((*(longlong *)(puVar18 + -9) == *(longlong *)puVar9) &&
                  (puVar18[-1] == puVar9[8])) &&
                 ((uVar10 = puVar9[9], uVar10 == 0xffffffff ||
                  ((*puVar18 == 0xffffffff ||
                   ((uVar10 - *puVar18) + 0xf >> 4 == puVar9[0xb] - puVar18[2])))))) {
                uVar17 = puVar18[2];
                uVar12 = puVar9[0xb];
                if ((uVar12 <= (puVar18[1] + 0xf >> 4) + uVar17) &&
                   (uVar17 <= (puVar9[10] + 0xf >> 4) + uVar12)) {
                  uVar3 = uVar12;
                  if (uVar17 < uVar12) {
                    uVar3 = uVar17;
                  }
                  uVar12 = uVar12 * 0x10 + puVar9[10];
                  uVar17 = uVar17 * 0x10 + puVar18[1];
                  if (*puVar18 < uVar10) {
                    uVar10 = *puVar18;
                  }
                  if (uVar12 < uVar17) {
                    uVar12 = uVar17;
                  }
                  uVar17 = 0;
                  *puVar18 = uVar10;
                  puVar18[2] = uVar3;
                  puVar18[1] = uVar12 + uVar3 * -0x10;
                  if (puVar14[10] != 0) {
                    lVar15 = 0;
                    do {
                      lVar2 = *(longlong *)(puVar14 + 8);
                      uVar10 = puVar16[-1] + 1;
                      if (*puVar16 < uVar10) {
                        uVar12 = (*puVar16 * 10 >> 3) + 0x10 & 0xfffffff0;
                        if (uVar12 < uVar10) {
                          uVar12 = uVar10;
                        }
                        *puVar16 = uVar12;
                        pvVar8 = realloc(*(void **)(puVar16 + -3),(ulonglong)(uVar12 << 2));
                        *(void **)(puVar16 + -3) = pvVar8;
                      }
                      puVar1 = (undefined4 *)
                               (*(longlong *)(puVar16 + -3) + (ulonglong)puVar16[-1] * 4);
                      if (puVar1 != (undefined4 *)0x0) {
                        *puVar1 = *(undefined4 *)(lVar2 + lVar15);
                      }
                      puVar16[-1] = puVar16[-1] + 1;
                      uVar17 = uVar17 + 1;
                      lVar15 = lVar15 + 4;
                    } while (uVar17 < puVar14[10]);
                  }
                  operator_delete__(*(void **)(puVar9 + 6));
                  puVar9[6] = 0;
                  puVar9[7] = 0;
                  operator_delete__(*(void **)(puVar9 + 4));
                  puVar9[4] = 0;
                  puVar9[5] = 0;
                  operator_delete__(*(void **)(puVar9 + 2));
                  puVar9[2] = 0;
                  puVar9[3] = 0;
                  iVar11 = ((int)param_1[1] * 0x30 - (int)_Src_00) + (int)*param_1;
                  if (0 < iVar11) {
                    memmove(puVar9,_Src_00,(longlong)iVar11);
                  }
                  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
                  puVar9 = puVar9 + -0xc;
                  _Src_00 = _Src_00 + -0xc;
                  puVar14[10] = 0;
                  free(*(void **)(puVar14 + 8));
                  operator_delete__(*(void **)puVar14);
                  puVar14[0] = 0;
                  puVar14[1] = 0;
                  iVar11 = (*(int *)(param_2 + 0x30) * 0x40 - (int)_Src) + *(int *)(param_2 + 0x28);
                  if (0 < iVar11) {
                    memmove(puVar14,_Src,(longlong)iVar11);
                  }
                  *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + -1;
                  puVar14 = puVar14 + -0x10;
                  _Src = _Src + -0x10;
                }
              }
              _Src_00 = _Src_00 + 0xc;
              _Src = _Src + 0x10;
              puVar9 = puVar9 + 0xc;
              puVar14 = puVar14 + 0x10;
            } while (puVar9 != (uint *)((ulonglong)*(uint *)(param_1 + 1) * 0x30 + *param_1));
          }
        }
        puVar16 = puVar16 + 0x10;
        puVar14 = puVar18 + 3;
        puVar9 = (uint *)((ulonglong)*(uint *)(param_1 + 1) * 0x30 + *param_1);
        puVar18 = puVar18 + 0xc;
      } while (puVar14 != puVar9);
    }
    return CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
  }
  EVar4 = _CLFilter(0x45525252);
  uVar7 = CONCAT44(extraout_var,EVar4);
  if (EVar4 != 0) {
    plVar6 = (longlong *)_CLogCategoryFromLabel((uint)local_48);
    pcVar13 = "";
    if ((char *)*plVar6 != (char *)0x0) {
      pcVar13 = (char *)*plVar6;
    }
    TVar5 = _CLogLevelFromId(0x45525252);
    _CLog(TVar5,pcVar13,
          "F:\\PERFORCE\\dkoziol_ce6_dw_modding_2015\\src\\engine\\ShaderCompiler_Base\\MaterialLoader.cpp"
          ,0x215,EVar4,1,"[%s] cannot merge constants, constants arrays do not match\n",
          "MPShaderConstTab::MergeShConsts");
    free(local_48[0]);
    uVar7 = extraout_RAX;
  }
  return uVar7 & 0xffffffffffffff00;
}



ulonglong FUN_180007690(longlong *param_1,longlong param_2)

{
  short *psVar1;
  longlong lVar2;
  ENUM EVar3;
  TYPE TVar4;
  undefined4 extraout_var;
  longlong *plVar5;
  ulonglong extraout_RAX;
  ulonglong uVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  void *local_18 [2];
  
  if (*(uint *)(param_1 + 1) == *(uint *)(param_2 + 0x30)) {
    piVar7 = (int *)*param_1;
    uVar6 = 0;
    if (piVar7 != piVar7 + (ulonglong)*(uint *)(param_1 + 1) * 0xc) {
      puVar11 = (uint *)(*(longlong *)(param_2 + 0x28) + 0x28);
      piVar8 = piVar7 + 10;
      uVar14 = uVar6;
      do {
        lVar2 = *(longlong *)(piVar8 + -10);
        piVar8[-1] = (int)uVar14;
        if (lVar2 == 0) {
          piVar8[0] = 0x10;
          piVar8[1] = 0;
        }
        else if (*(uint *)(lVar2 + 0x24) < (uint)piVar8[1]) {
          piVar8[1] = *(uint *)(lVar2 + 0x24);
          *piVar8 = *(int *)(lVar2 + 0x1c) << 4;
        }
        uVar14 = (ulonglong)(uint)((int)uVar14 + *piVar8);
        uVar10 = uVar6;
        uVar13 = uVar6;
        if (*puVar11 != 0) {
          do {
            uVar12 = (int)uVar13 + 1;
            psVar1 = (short *)(uVar10 + 2 + *(longlong *)(puVar11 + -2));
            *psVar1 = *psVar1 + ((short)(piVar8[-1] + 0xfU >> 4) - (short)piVar8[1]);
            uVar10 = uVar10 + 4;
            uVar13 = (ulonglong)uVar12;
          } while (uVar12 < *puVar11);
        }
        puVar11 = puVar11 + 0x10;
        piVar7 = piVar8 + 2;
        piVar8 = piVar8 + 0xc;
      } while (piVar7 != (int *)((ulonglong)*(uint *)(param_1 + 1) * 0x30 + *param_1));
    }
    return CONCAT71((int7)((ulonglong)piVar7 >> 8),1);
  }
  EVar3 = _CLFilter(0x45525252);
  uVar6 = CONCAT44(extraout_var,EVar3);
  if (EVar3 != 0) {
    plVar5 = (longlong *)_CLogCategoryFromLabel((uint)local_18);
    pcVar9 = "";
    if ((char *)*plVar5 != (char *)0x0) {
      pcVar9 = (char *)*plVar5;
    }
    TVar4 = _CLogLevelFromId(0x45525252);
    _CLog(TVar4,pcVar9,
          "F:\\PERFORCE\\dkoziol_ce6_dw_modding_2015\\src\\engine\\ShaderCompiler_Base\\MaterialLoader.cpp"
          ,0x271,EVar3,1,"[%s] cannot assign registers, constants arrays do not match\n",
          "MPShaderConstTab::AssignShRegisters");
    free(local_18[0]);
    uVar6 = extraout_RAX;
  }
  return uVar6 & 0xffffffffffffff00;
}



undefined8 FUN_180007810(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong in_RAX;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    uVar9 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar3 = uVar1;
    if (uVar1 != 0) {
      piVar4 = (int *)(*param_1 + 0x20);
      do {
        uVar3 = uVar6;
        if (*piVar4 == 0) break;
        uVar6 = uVar6 + 1;
        piVar4 = piVar4 + 0xc;
        uVar3 = uVar1;
      } while (uVar6 < uVar1);
    }
    uVar6 = uVar3 + 1;
    in_RAX = (ulonglong)(int)uVar6;
    if (uVar6 < uVar1) {
      lVar2 = *param_1;
      in_RAX = in_RAX * 0x30;
      lVar8 = (longlong)(int)uVar3 * 0x30;
      puVar7 = (uint *)(in_RAX + 0x24 + lVar2);
      do {
        if (puVar7[-1] == 0) {
          uVar3 = *puVar7;
          in_RAX = (ulonglong)uVar3;
          uVar10 = *(int *)(lVar8 + 0x28 + lVar2) + *(int *)(lVar8 + 0x24 + lVar2);
          if (uVar10 < uVar3) {
            uVar3 = uVar3 - uVar10;
            in_RAX = (ulonglong)uVar3;
            if (uVar9 < uVar3) {
              uVar5 = uVar6;
              uVar9 = uVar3;
            }
          }
          lVar8 = (longlong)puVar7 + (-0x24 - lVar2);
        }
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 0xc;
      } while (uVar6 < uVar1);
      if ((uVar9 != 0) && (in_RAX = (ulonglong)(int)uVar5, uVar5 < uVar1)) {
        in_RAX = in_RAX * 0x30;
        do {
          if (*(int *)(in_RAX + 0x20 + *param_1) == 0) {
            *(undefined4 *)(in_RAX + 0x20 + *param_1) = 3;
          }
          uVar5 = uVar5 + 1;
          in_RAX = in_RAX + 0x30;
        } while (uVar5 < *(uint *)(param_1 + 1));
      }
    }
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}



undefined8 FUN_180007920(longlong *param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 *_Dst;
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  
  uVar10 = 0;
  if (*(int *)(param_2 + 0x30) != 0) {
    lVar9 = 0;
    uVar13 = 1;
    do {
      lVar1 = *(longlong *)(param_2 + 0x28);
      pcVar7 = "";
      if (*(char **)(lVar9 + lVar1) != (char *)0x0) {
        pcVar7 = *(char **)(lVar9 + lVar1);
      }
      iVar4 = strncmp(pcVar7,"INSTANCE_DATA",0xd);
      if (iVar4 == 0) {
        if (uVar10 < *(uint *)(param_2 + 0x30)) {
          lVar1 = *(longlong *)(param_2 + 0x28);
          *(undefined4 *)(lVar9 + 0x28 + lVar1) = 0;
          _Dst = (undefined8 *)(lVar9 + lVar1);
          free(*(void **)(lVar9 + 0x20 + lVar1));
          operator_delete__((void *)*_Dst);
          *_Dst = 0;
          if (uVar10 < *(int *)(param_2 + 0x30) - 1U) {
            memmove(_Dst,(void *)((ulonglong)uVar13 * 0x40 + *(longlong *)(param_2 + 0x28)),
                    (ulonglong)((*(int *)(param_2 + 0x30) - uVar10) - 1) << 6);
          }
          *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + -1;
        }
        uVar10 = uVar10 - 1;
        uVar13 = uVar13 - 1;
        lVar9 = lVar9 + -0x40;
      }
      else {
        iVar4 = *(int *)(lVar9 + 0x10 + lVar1);
        pcVar7 = "";
        if (*(char **)(lVar9 + lVar1) != (char *)0x0) {
          pcVar7 = *(char **)(lVar9 + lVar1);
        }
        if (iVar4 == 0) {
          uVar11 = 2;
        }
        else if (iVar4 == 1) {
          uVar11 = 1;
        }
        else {
          uVar11 = 0;
        }
        uVar5 = FUN_180006df0(param_1,*(int *)(lVar9 + 8 + lVar1),uVar11,
                              *(int *)(lVar9 + 0x18 + lVar1),pcVar7,*(uint *)(lVar9 + 0xc + lVar1),
                              (longlong *)(param_2 + 0x70),param_3,param_4);
        if ((char)uVar5 == '\0') {
          puVar14 = &DAT_18000abcc;
          if (*(undefined1 **)(lVar9 + lVar1) != (undefined1 *)0x0) {
            puVar14 = *(undefined1 **)(lVar9 + lVar1);
          }
          uVar6 = (**(code **)*param_3)
                            (param_3,0xc000000b,"invalid constant binding for \'%s\'!",puVar14);
          return uVar6 & 0xffffffffffffff00;
        }
        lVar3 = param_1[1];
        uVar12 = 0;
        lVar2 = *param_1;
        if (*(int *)(lVar9 + 0x28 + lVar1) != 0) {
          lVar8 = 0;
          do {
            uVar12 = uVar12 + 1;
            *(undefined2 *)(*(longlong *)(lVar9 + 0x20 + lVar1) + 2 + lVar8) =
                 *(undefined2 *)((ulonglong)((int)lVar3 - 1) * 0x30 + lVar2 + 0x2c);
            lVar8 = lVar8 + 4;
          } while (uVar12 < *(uint *)(lVar9 + 0x28 + lVar1));
        }
      }
      uVar10 = uVar10 + 1;
      uVar13 = uVar13 + 1;
      lVar9 = lVar9 + 0x40;
    } while (uVar10 < *(uint *)(param_2 + 0x30));
  }
  FUN_1800072f0(param_1,param_2);
  if (*(char *)(param_2 + 0x88) != '\0') {
    FUN_180007690(param_1,param_2);
  }
  FUN_180006d50(param_1);
  uVar5 = FUN_180007810(param_1);
  return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
}



void FUN_180007b30(longlong *param_1,undefined8 *param_2)

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
    pvVar2 = realloc((void *)*param_1,(ulonglong)(uVar1 * 0x30));
    *param_1 = (longlong)pvVar2;
  }
  puVar4 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 1) * 0x30 + *param_1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = *param_2;
    FUN_1800042f0(puVar4 + 1,param_2 + 1);
    FUN_1800042f0(puVar4 + 2,param_2 + 2);
    FUN_1800042f0(puVar4 + 3,param_2 + 3);
    *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)puVar4 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    *(undefined4 *)(puVar4 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)puVar4 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



void FUN_180007bf0(ulonglong *param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong *local_res8;
  ulonglong *local_res10;
  ulonglong *local_28;
  ulonglong *local_20;
  
  lVar3 = (longlong)param_2 - (longlong)param_1;
  local_res8 = param_1;
  local_res10 = param_2;
  while (0x20 < (ulonglong)(lVar3 / 0x30)) {
    FUN_180007d10(&local_28,local_res8,local_res10);
    puVar2 = local_20;
    puVar1 = local_28;
    lVar3 = ((longlong)local_res10 - (longlong)local_20) / 6 +
            ((longlong)local_res10 - (longlong)local_20 >> 0x3f);
    if ((ulonglong)(((longlong)local_28 - (longlong)local_res8) / 0x30) <
        (ulonglong)((lVar3 >> 3) - (lVar3 >> 0x3f))) {
      FUN_180007bf0(local_res8,local_28,param_3);
      local_res8 = puVar2;
    }
    else {
      FUN_180007bf0(local_20,local_res10,param_3);
      local_res10 = puVar1;
    }
    lVar3 = (longlong)local_res10 - (longlong)local_res8;
  }
  if (1 < (ulonglong)(lVar3 / 0x30)) {
    FUN_180008280(local_res8,local_res10);
  }
  return;
}



undefined8 * FUN_180007d10(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  longlong lVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  bool bVar18;
  
  puVar10 = param_2 + ((ulonglong)(((longlong)param_3 - (longlong)param_2) / 0x30) >> 1) * 6;
  FUN_1800083a0(param_2,puVar10,param_3 + -6);
  lVar14 = (longlong)param_2 - (longlong)puVar10;
  puVar12 = puVar10 + 6;
  if (lVar14 / 0x30 < 0) {
    puVar9 = (uint *)((longlong)puVar10 + -0xc);
    do {
      uVar1 = *puVar9;
      uVar2 = puVar9[0xc];
      bVar18 = uVar1 < uVar2;
      if (uVar1 == uVar2) {
        bVar18 = *(ulonglong *)(puVar9 + -9) < *puVar10;
      }
      if (bVar18) break;
      bVar18 = uVar2 < uVar1;
      if (uVar2 == uVar1) {
        bVar18 = *puVar10 < *(ulonglong *)(puVar9 + -9);
      }
      if (bVar18) break;
      lVar14 = lVar14 + 0x30;
      puVar10 = puVar10 + -6;
      puVar9 = puVar9 + -0xc;
    } while (lVar14 / 0x30 < 0);
  }
  puVar15 = puVar10;
  puVar16 = puVar12;
  if (((longlong)puVar12 - (longlong)param_3) / 0x30 < 0) {
    uVar1 = *(uint *)((longlong)puVar10 + 0x24);
    while( true ) {
      uVar2 = *(uint *)((longlong)puVar12 + 0x24);
      bVar18 = uVar2 < uVar1;
      if (uVar2 == uVar1) {
        bVar18 = *puVar12 < *puVar10;
      }
      puVar16 = puVar12;
      if (bVar18) break;
      bVar18 = uVar1 < uVar2;
      if (uVar1 == uVar2) {
        bVar18 = *puVar10 < *puVar12;
      }
      if ((bVar18) ||
         (puVar12 = puVar12 + 6, puVar16 = puVar12,
         -1 < ((longlong)puVar12 - (longlong)param_3) / 0x30)) break;
    }
  }
LAB_180007e70:
  lVar14 = (longlong)puVar12 - (longlong)param_3;
  puVar13 = puVar12;
  while (puVar12 = puVar15, lVar14 / 0x30 < 0) {
    uVar1 = *(uint *)((longlong)puVar10 + 0x24);
    uVar2 = *(uint *)((longlong)puVar13 + 0x24);
    bVar18 = uVar1 < uVar2;
    if (uVar1 == uVar2) {
      bVar18 = *puVar10 < *puVar13;
    }
    puVar17 = puVar16;
    if (!bVar18) {
      bVar18 = uVar2 < uVar1;
      if (uVar2 == uVar1) {
        bVar18 = *puVar13 < *puVar10;
      }
      if (bVar18) break;
      puVar17 = puVar16 + 6;
      uVar3 = *puVar16;
      uVar4 = puVar16[1];
      uVar5 = puVar16[2];
      uVar6 = puVar16[3];
      uVar7 = puVar16[4];
      uVar8 = puVar16[5];
      *puVar16 = *puVar13;
      puVar16[1] = puVar13[1];
      puVar16[2] = puVar13[2];
      puVar16[3] = puVar13[3];
      puVar16[4] = puVar13[4];
      puVar16[5] = puVar13[5];
      *puVar13 = uVar3;
      puVar13[1] = uVar4;
      puVar13[2] = uVar5;
      puVar13[3] = uVar6;
      puVar13[4] = uVar7;
      puVar13[5] = uVar8;
    }
    puVar13 = puVar13 + 6;
    puVar16 = puVar17;
    lVar14 = (longlong)puVar13 - (longlong)param_3;
  }
  do {
    if (-1 < ((longlong)param_2 - (longlong)puVar15) / 0x30) break;
    puVar17 = puVar12 + -6;
    uVar1 = *(uint *)((longlong)puVar12 + -0xc);
    uVar2 = *(uint *)((longlong)puVar10 + 0x24);
    bVar18 = uVar1 < uVar2;
    if (uVar1 == uVar2) {
      bVar18 = *puVar17 < *puVar10;
    }
    puVar11 = puVar10;
    if (!bVar18) {
      bVar18 = uVar2 < uVar1;
      if (uVar2 == uVar1) {
        bVar18 = *puVar10 < *puVar17;
      }
      if (bVar18) break;
      uVar3 = puVar10[-6];
      uVar4 = puVar10[-5];
      uVar5 = puVar10[-4];
      uVar6 = puVar10[-3];
      uVar7 = puVar10[-2];
      uVar8 = puVar10[-1];
      puVar10[-6] = *puVar17;
      puVar10[-5] = puVar12[-5];
      puVar11 = puVar10 + -6;
      puVar10[-4] = puVar12[-4];
      puVar10[-3] = puVar12[-3];
      puVar10[-2] = puVar12[-2];
      puVar10[-1] = puVar12[-1];
      *puVar17 = uVar3;
      puVar12[-5] = uVar4;
      puVar12[-4] = uVar5;
      puVar12[-3] = uVar6;
      puVar12[-2] = uVar7;
      puVar12[-1] = uVar8;
    }
    puVar15 = puVar15 + -6;
    puVar10 = puVar11;
    puVar12 = puVar17;
  } while( true );
  if (puVar15 == param_2) {
    if (puVar13 == param_3) {
      *param_1 = puVar10;
      param_1[1] = puVar16;
      return param_1;
    }
    if (puVar16 != puVar13) {
      uVar3 = *puVar10;
      uVar4 = puVar10[1];
      uVar5 = puVar10[2];
      uVar6 = puVar10[3];
      uVar7 = puVar10[4];
      uVar8 = puVar10[5];
      *puVar10 = *puVar16;
      puVar10[1] = puVar16[1];
      puVar10[2] = puVar16[2];
      puVar10[3] = puVar16[3];
      puVar10[4] = puVar16[4];
      puVar10[5] = puVar16[5];
      *puVar16 = uVar3;
      puVar16[1] = uVar4;
      puVar16[2] = uVar5;
      puVar16[3] = uVar6;
      puVar16[4] = uVar7;
      puVar16[5] = uVar8;
    }
    uVar3 = puVar10[5];
    uVar4 = *puVar10;
    uVar5 = puVar10[1];
    uVar6 = puVar10[2];
    uVar7 = puVar10[3];
    uVar8 = puVar10[4];
    *puVar10 = *puVar13;
    puVar10[1] = puVar13[1];
    puVar10[2] = puVar13[2];
    puVar10[3] = puVar13[3];
    puVar10[4] = puVar13[4];
    puVar10[5] = puVar13[5];
    *puVar13 = uVar4;
    puVar13[1] = uVar5;
    puVar13[2] = uVar6;
    puVar13[3] = uVar7;
    puVar13[4] = uVar8;
    puVar13[5] = uVar3;
    puVar10 = puVar10 + 6;
    puVar12 = puVar13 + 6;
    puVar16 = puVar16 + 6;
  }
  else {
    puVar17 = puVar15 + -6;
    if (puVar13 == param_3) {
      puVar12 = puVar10 + -6;
      if (puVar17 != puVar12) {
        uVar3 = *puVar17;
        uVar4 = puVar15[-5];
        uVar5 = puVar15[-4];
        uVar6 = puVar15[-3];
        uVar7 = puVar15[-2];
        uVar8 = puVar15[-1];
        *puVar17 = *puVar12;
        puVar15[-5] = puVar10[-5];
        puVar15[-4] = puVar10[-4];
        puVar15[-3] = puVar10[-3];
        puVar15[-2] = puVar10[-2];
        puVar15[-1] = puVar10[-1];
        *puVar12 = uVar3;
        puVar10[-5] = uVar4;
        puVar10[-4] = uVar5;
        puVar10[-3] = uVar6;
        puVar10[-2] = uVar7;
        puVar10[-1] = uVar8;
      }
      uVar3 = *puVar12;
      uVar4 = puVar10[-5];
      uVar5 = puVar10[-4];
      uVar6 = puVar10[-3];
      uVar7 = puVar10[-2];
      uVar8 = puVar10[-1];
      *puVar12 = puVar16[-6];
      puVar10[-5] = puVar16[-5];
      puVar10[-4] = puVar16[-4];
      puVar10[-3] = puVar16[-3];
      puVar10[-2] = puVar16[-2];
      puVar10[-1] = puVar16[-1];
      puVar16[-6] = uVar3;
      puVar16[-5] = uVar4;
      puVar16[-4] = uVar5;
      puVar16[-3] = uVar6;
      puVar16[-2] = uVar7;
      puVar16[-1] = uVar8;
      puVar10 = puVar12;
      puVar12 = puVar13;
      puVar15 = puVar17;
      puVar16 = puVar16 + -6;
    }
    else {
      puVar12 = puVar13 + 6;
      uVar3 = *puVar13;
      uVar4 = puVar13[1];
      uVar5 = puVar13[2];
      uVar6 = puVar13[3];
      uVar7 = puVar13[4];
      uVar8 = puVar13[5];
      *puVar13 = *puVar17;
      puVar13[1] = puVar15[-5];
      puVar13[2] = puVar15[-4];
      puVar13[3] = puVar15[-3];
      puVar13[4] = puVar15[-2];
      puVar13[5] = puVar15[-1];
      *puVar17 = uVar3;
      puVar15[-5] = uVar4;
      puVar15[-4] = uVar5;
      puVar15[-3] = uVar6;
      puVar15[-2] = uVar7;
      puVar15[-1] = uVar8;
      puVar15 = puVar17;
    }
  }
  goto LAB_180007e70;
}



void FUN_180008280(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  longlong lVar10;
  ulonglong *puVar11;
  uint *puVar12;
  bool bVar13;
  uint uStack_34;
  
  puVar11 = param_1;
  puVar7 = param_1;
  do {
    puVar7 = puVar7 + 6;
    if (puVar7 == param_2) {
      return;
    }
    uVar1 = puVar7[4];
    uVar2 = *puVar7;
    uVar3 = puVar7[1];
    uVar4 = puVar7[2];
    uVar5 = puVar7[3];
    uVar6 = puVar7[5];
    puVar9 = puVar7;
    if (puVar7 != param_1) {
      uStack_34 = (uint)(uVar1 >> 0x20);
      puVar12 = (uint *)((longlong)puVar11 + 0x24);
      lVar10 = (longlong)puVar11 - (longlong)puVar7;
      puVar8 = puVar7;
      do {
        bVar13 = uStack_34 < *puVar12;
        if (uStack_34 == *puVar12) {
          bVar13 = uVar2 < *(ulonglong *)(lVar10 + (longlong)puVar8);
        }
        puVar9 = puVar8;
        if (!bVar13) break;
        puVar9 = puVar8 + -6;
        puVar12 = puVar12 + -0xc;
        *puVar8 = *(ulonglong *)(lVar10 + (longlong)puVar8);
        puVar8[1] = *(ulonglong *)(lVar10 + 0x38 + (longlong)puVar9);
        puVar8[2] = *(ulonglong *)(lVar10 + 0x40 + (longlong)puVar9);
        puVar8[3] = *(ulonglong *)(lVar10 + 0x48 + (longlong)puVar9);
        puVar8[4] = *(ulonglong *)(lVar10 + 0x50 + (longlong)puVar9);
        puVar8[5] = *(ulonglong *)(lVar10 + 0x58 + (longlong)puVar9);
        puVar8 = puVar9;
      } while (puVar9 != param_1);
    }
    *puVar9 = uVar2;
    puVar9[1] = uVar3;
    puVar9[2] = uVar4;
    puVar9[3] = uVar5;
    puVar9[4] = uVar1;
    puVar9[5] = uVar6;
    puVar11 = puVar11 + 6;
  } while( true );
}



void FUN_1800083a0(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  
  uVar1 = ((longlong)param_3 - (longlong)param_1) / 0x30;
  if (0x28 < uVar1) {
    uVar1 = uVar1 + 1 >> 3;
    FUN_180008480(param_1,param_1 + uVar1 * 6,param_1 + uVar1 * 0xc);
    FUN_180008480(param_2 + uVar1 * -6,param_2,param_2 + uVar1 * 6);
    FUN_180008480(param_3 + uVar1 * -0xc,param_3 + uVar1 * -6,param_3);
    FUN_180008480(param_1 + uVar1 * 6,param_2,param_3 + uVar1 * -6);
    return;
  }
  FUN_180008480(param_1,param_2,param_3);
  return;
}



void FUN_180008480(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  bVar7 = *(uint *)((longlong)param_2 + 0x24) < *(uint *)((longlong)param_1 + 0x24);
  if (*(uint *)((longlong)param_2 + 0x24) == *(uint *)((longlong)param_1 + 0x24)) {
    bVar7 = *param_2 < *param_1;
  }
  if (bVar7) {
    uVar1 = *param_2;
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    uVar4 = param_2[4];
    uVar5 = param_2[5];
    uVar6 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    param_2[5] = param_1[5];
    *param_1 = uVar1;
    param_1[1] = uVar6;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_1[4] = uVar4;
    param_1[5] = uVar5;
  }
  bVar7 = *(uint *)((longlong)param_3 + 0x24) < *(uint *)((longlong)param_2 + 0x24);
  if (*(uint *)((longlong)param_3 + 0x24) == *(uint *)((longlong)param_2 + 0x24)) {
    bVar7 = *param_3 < *param_2;
  }
  if (bVar7) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    uVar5 = param_3[4];
    uVar6 = param_3[5];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    param_3[3] = param_2[3];
    param_3[4] = param_2[4];
    param_3[5] = param_2[5];
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    param_2[4] = uVar5;
    param_2[5] = uVar6;
  }
  bVar7 = *(uint *)((longlong)param_2 + 0x24) < *(uint *)((longlong)param_1 + 0x24);
  if (*(uint *)((longlong)param_2 + 0x24) == *(uint *)((longlong)param_1 + 0x24)) {
    bVar7 = *param_2 < *param_1;
  }
  if (bVar7) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[4];
    uVar6 = param_2[5];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    param_2[5] = param_1[5];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = uVar5;
    param_1[5] = uVar6;
  }
  return;
}



uint FUN_180008620(uint param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar4 = ~param_1;
  for (; (uVar2 = (ulonglong)param_3, param_3 != 0 && (((ulonglong)param_2 & 3) != 0));
      param_2 = (uint *)((longlong)param_2 + 1)) {
    uVar4 = *(uint *)(&DAT_180010180 + (ulonglong)(byte)((byte)*param_2 ^ (byte)uVar4) * 4) ^
            uVar4 >> 8;
    param_3 = param_3 - 1;
  }
  if (0x1f < param_3) {
    uVar3 = (ulonglong)(param_3 >> 5);
    puVar5 = param_2;
    do {
      uVar4 = uVar4 ^ *puVar5;
      uVar4 = *(uint *)(&DAT_180010580 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
              *(uint *)(&DAT_180010980 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
              *(uint *)(&DAT_180010180 + (ulonglong)(uVar4 >> 0x18) * 4) ^
              *(uint *)(&DAT_180010d80 + (ulonglong)(uVar4 & 0xff) * 4) ^ puVar5[1];
      uVar4 = *(uint *)(&DAT_180010580 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
              *(uint *)(&DAT_180010980 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
              *(uint *)(&DAT_180010180 + (ulonglong)(uVar4 >> 0x18) * 4) ^
              *(uint *)(&DAT_180010d80 + (ulonglong)(uVar4 & 0xff) * 4) ^ puVar5[2];
      uVar4 = *(uint *)(&DAT_180010580 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
              *(uint *)(&DAT_180010980 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
              *(uint *)(&DAT_180010180 + (ulonglong)(uVar4 >> 0x18) * 4) ^
              *(uint *)(&DAT_180010d80 + (ulonglong)(uVar4 & 0xff) * 4) ^ puVar5[3];
      uVar4 = *(uint *)(&DAT_180010580 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
              *(uint *)(&DAT_180010980 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
              *(uint *)(&DAT_180010180 + (ulonglong)(uVar4 >> 0x18) * 4) ^
              *(uint *)(&DAT_180010d80 + (ulonglong)(uVar4 & 0xff) * 4) ^ puVar5[4];
      uVar4 = *(uint *)(&DAT_180010580 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
              *(uint *)(&DAT_180010980 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
              *(uint *)(&DAT_180010180 + (ulonglong)(uVar4 >> 0x18) * 4) ^
              *(uint *)(&DAT_180010d80 + (ulonglong)(uVar4 & 0xff) * 4) ^ puVar5[5];
      param_2 = puVar5 + 8;
      uVar2 = (ulonglong)((int)uVar2 - 0x20);
      uVar4 = *(uint *)(&DAT_180010580 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
              *(uint *)(&DAT_180010980 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
              *(uint *)(&DAT_180010180 + (ulonglong)(uVar4 >> 0x18) * 4) ^
              *(uint *)(&DAT_180010d80 + (ulonglong)(uVar4 & 0xff) * 4) ^ puVar5[6];
      uVar4 = *(uint *)(&DAT_180010580 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
              *(uint *)(&DAT_180010980 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
              *(uint *)(&DAT_180010180 + (ulonglong)(uVar4 >> 0x18) * 4) ^
              *(uint *)(&DAT_180010d80 + (ulonglong)(uVar4 & 0xff) * 4) ^ puVar5[7];
      uVar4 = *(uint *)(&DAT_180010580 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
              *(uint *)(&DAT_180010980 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
              *(uint *)(&DAT_180010180 + (ulonglong)(uVar4 >> 0x18) * 4) ^
              *(uint *)(&DAT_180010d80 + (ulonglong)(uVar4 & 0xff) * 4);
      uVar3 = uVar3 - 1;
      puVar5 = param_2;
    } while (uVar3 != 0);
  }
  if (3 < (uint)uVar2) {
    uVar3 = uVar2 >> 2;
    do {
      uVar4 = uVar4 ^ *param_2;
      param_2 = param_2 + 1;
      uVar2 = (ulonglong)((int)uVar2 - 4);
      uVar4 = *(uint *)(&DAT_180010580 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
              *(uint *)(&DAT_180010980 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
              *(uint *)(&DAT_180010180 + (ulonglong)(uVar4 >> 0x18) * 4) ^
              *(uint *)(&DAT_180010d80 + (ulonglong)(uVar4 & 0xff) * 4);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  uVar1 = (uint)uVar2;
  while (uVar1 != 0) {
    uVar1 = *param_2;
    param_2 = (uint *)((longlong)param_2 + 1);
    uVar4 = *(uint *)(&DAT_180010180 + (ulonglong)(byte)((byte)uVar1 ^ (byte)uVar4) * 4) ^
            uVar4 >> 8;
    uVar1 = (int)uVar2 - 1;
    uVar2 = (ulonglong)uVar1;
  }
  return ~uVar4;
}



void * FUN_180008940(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20000) != (void *)0x0) {
    FUN_180008940(*(void **)((longlong)param_1 + 0x20000));
  }
  *(undefined8 *)((longlong)param_1 + 0x20000) = 0;
  operator_delete(param_1);
  return param_1;
}



void FUN_180008980(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  while (param_2 != (undefined8 *)0x0) {
    FUN_180008980(param_1,(undefined8 *)param_2[2]);
    puVar1 = (undefined8 *)*param_2;
    free(param_2 + -4);
    param_2 = puVar1;
  }
  return;
}



void __cdecl operator_delete(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001800089d2. Too many branches
                    // WARNING: Treating indirect jump as call
  operator_delete(param_1);
  return;
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
                    // WARNING: Could not recover jumptable at 0x000180008a42. Too many branches
                    // WARNING: Treating indirect jump as call
  _purecall();
  return;
}



bool FUN_180008a48(void)

{
  undefined8 *Ptr;
  
  Ptr = _malloc_crt(0x100);
  DAT_180015c60 = EncodePointer(Ptr);
  DAT_180015c68 = DAT_180015c60;
  if (Ptr != (undefined8 *)0x0) {
    *Ptr = 0;
    FUN_180009000();
    atexit(FUN_180009038);
    atexit((_func_5014 *)&LAB_180008ff4);
  }
  return Ptr == (undefined8 *)0x0;
}



// Library Function - Single Match
//  _CRT_INIT
// 
// Library: Visual Studio 2010 Release

undefined8 _CRT_INIT(undefined8 param_1,int param_2,undefined8 param_3)

{
  void *pvVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  BOOL BVar5;
  void *pvVar6;
  longlong *_Memory;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  code *pcVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  
  pvVar1 = StackBase;
  bVar2 = false;
  if (param_2 == 0) {
    if (DAT_180015980 < 1) {
      return 0;
    }
    DAT_180015980 = DAT_180015980 + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_180015c58 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_180015c58;
        pvVar3 = DAT_180015c58;
      }
      DAT_180015c58 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_180008b22;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_180008b22:
    if (DAT_180015c50 == 2) {
      _Memory = DecodePointer(DAT_180015c68);
      if (_Memory != (longlong *)0x0) {
        plVar7 = DecodePointer(DAT_180015c60);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = DecodePointer((PVOID)*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = DecodePointer(DAT_180015c68);
            plVar12 = DecodePointer(DAT_180015c60);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_180015c60 = (PVOID)_encoded_null();
        DAT_180015c68 = DAT_180015c60;
      }
      DAT_180015c50 = 0;
      if (!bVar2) {
        LOCK();
        DAT_180015c58 = (void *)0x0;
        UNLOCK();
      }
    }
    else {
      _amsg_exit(0x1f);
    }
  }
  else if (param_2 == 1) {
    bVar2 = false;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_180015c58 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_180015c58;
        pvVar3 = DAT_180015c58;
      }
      DAT_180015c58 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_180008c4b;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_180008c4b:
    if (DAT_180015c50 == 0) {
      DAT_180015c50 = 1;
      iVar4 = _initterm_e(&DAT_18000a550,&DAT_18000a560);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_18000a258,&DAT_18000a548);
      DAT_180015c50 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_180015c58 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_180015c70 != (code *)0x0) &&
       (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_180015c70), BVar5 != 0)) {
      (*DAT_180015c70)(param_1,2,param_3);
    }
    DAT_180015980 = DAT_180015980 + 1;
  }
  return 1;
}



// WARNING: Removing unreachable block (ram,0x000180008dc8)
// WARNING: Removing unreachable block (ram,0x000180008d5b)
// WARNING: Removing unreachable block (ram,0x000180008e03)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __DllMainCRTStartup
// 
// Library: Visual Studio 2010 Release

uint __DllMainCRTStartup(HMODULE param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_180015980 == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_180015020 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) &&
       (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_180015020 = 0xffffffff;
      return 0;
    }
    uVar1 = DllMain(param_1,param_2);
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      DllMain(param_1,0);
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_180015020 = 0xffffffff;
  return uVar2;
}



void entry(HMODULE param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == 1) {
    __security_init_cookie();
  }
  __DllMainCRTStartup(param_1,param_2,param_3,param_4);
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
  
  local_res10 = DecodePointer(DAT_180015c68);
  if (local_res10 == (PVOID)0xffffffffffffffff) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = DecodePointer(DAT_180015c68);
    local_res18[0] = DecodePointer(DAT_180015c60);
    pvVar2 = EncodePointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(pvVar2,&local_res10,local_res18);
    DAT_180015c68 = EncodePointer(local_res10);
    DAT_180015c60 = EncodePointer(local_res18[0]);
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



void FUN_180009000(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180012d60; puVar1 < &DAT_180012d60; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



void FUN_180009038(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180012d70; puVar1 < &DAT_180012d70; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
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
  
  pImageBase = &IMAGE_DOS_HEADER_180000000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_180000000);
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
                    // WARNING: Could not recover jumptable at 0x000180009132. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x000180009138. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



void __cdecl _amsg_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00018000913e. Too many branches
                    // WARNING: Treating indirect jump as call
  _amsg_exit(param_1);
  return;
}



int __cdecl __CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018000914a. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = __CppXcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



// Library Function - Single Match
//  DllMain
// 
// Library: Visual Studio 2010 Release

undefined8 DllMain(HMODULE param_1,int param_2)

{
  if (param_2 == 1) {
    DisableThreadLibraryCalls(param_1);
  }
  return 1;
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
  if (DAT_180015028 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_180015028 =
         (local_res10.QuadPart ^
         (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff
    ;
    if (DAT_180015028 == 0x2b992ddfa232) {
      DAT_180015028 = 0x2b992ddfa233;
    }
  }
  _DAT_180015030 = ~DAT_180015028;
  return;
}



void __cdecl _unlock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x000180009228. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock(_File);
  return;
}



void __dllonexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00018000922e. Too many branches
                    // WARNING: Treating indirect jump as call
  __dllonexit();
  return;
}



void __cdecl _lock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x000180009234. Too many branches
                    // WARNING: Treating indirect jump as call
  _lock(_File);
  return;
}



void __cdecl terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x00018000923a. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



void __thiscall type_info::_type_info_dtor_internal_method(type_info *this)

{
                    // WARNING: Could not recover jumptable at 0x000180009240. Too many branches
                    // WARNING: Treating indirect jump as call
  _type_info_dtor_internal_method(this);
  return;
}



void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018000924c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memcpy(_Dst,_Src,_Size);
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



void FUN_1800092c0(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1800092f0(void)

{
  _DAT_180015020 = 0xffffffff;
  return;
}



void FUN_18000930a(void)

{
  _unlock(8);
  return;
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



bool FUN_1800093a0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



void FUN_1800093d0(undefined8 param_1,longlong param_2)

{
  DeactivateActCtx(0,*(ULONG_PTR *)(param_2 + 0x2e0));
  return;
}



void FUN_1800093f0(undefined8 param_1,longlong param_2)

{
  DWORD dwErrCode;
  bool bVar1;
  
  bVar1 = *(longlong *)(param_2 + 0x20) != 0;
  if (bVar1) {
    dwErrCode = 0;
  }
  else {
    dwErrCode = GetLastError();
  }
  DeactivateActCtx(0,*(ULONG_PTR *)(param_2 + 0x40));
  if (!bVar1) {
    SetLastError(dwErrCode);
  }
  return;
}



void FUN_180009440(void)

{
  FUN_180005b80((LPCRITICAL_SECTION)&DAT_180015a10);
  atexit(FUN_180009720);
  return;
}



void FUN_180009630(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_180015b90);
  atexit((_func_5014 *)&LAB_180009920);
  return;
}



void FUN_180009660(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_180015bb8);
  atexit((_func_5014 *)&LAB_180009930);
  return;
}



void FUN_180009690(void)

{
  if (DAT_180015c18 == '\0') {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_180015c20);
    DAT_180015c18 = '\x01';
  }
  atexit(FUN_180009970);
  return;
}



void FUN_1800096d0(void)

{
  if (DAT_180015be0 == '\0') {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_180015be8);
    DAT_180015be0 = '\x01';
  }
  atexit(FUN_180009940);
  return;
}



void FUN_180009720(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_180015a10);
  return;
}



void FUN_180009740(void)

{
  free(DAT_180015a48);
  DAT_180015a48 = (void *)0x0;
  return;
}



void FUN_180009770(void)

{
  free(DAT_180015a58);
  DAT_180015a58 = (void *)0x0;
  return;
}



void thunk_FUN_180005d20(void)

{
  FUN_180005d20();
  return;
}



void FUN_1800097b0(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)((ulonglong)(DAT_180015790 - 1) * 0x10 + (longlong)DAT_180015788);
  for (iVar2 = DAT_180015790; iVar2 != 0; iVar2 = iVar2 + -1) {
    free((void *)*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + -2;
  }
  DAT_180015790 = 0;
                    // WARNING: Could not recover jumptable at 0x000180009810. Too many branches
                    // WARNING: Treating indirect jump as call
  free(DAT_180015788);
  return;
}



void thunk_FUN_180005db0(void)

{
  FUN_180005db0();
  return;
}



void FUN_180009830(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)((ulonglong)(DAT_1800157c8 - 1) * 0x10 + (longlong)DAT_1800157c0);
  for (iVar2 = DAT_1800157c8; iVar2 != 0; iVar2 = iVar2 + -1) {
    free((void *)*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + -2;
  }
  DAT_1800157c8 = 0;
                    // WARNING: Could not recover jumptable at 0x000180009890. Too many branches
                    // WARNING: Treating indirect jump as call
  free(DAT_1800157c0);
  return;
}



void FUN_1800098a0(void)

{
  DAT_1800157e0 = 0;
                    // WARNING: Could not recover jumptable at 0x0001800098b1. Too many branches
                    // WARNING: Treating indirect jump as call
  free(DAT_1800157d8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1800098c0(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_1800157f0;
  if (DAT_1800157f0 != (void *)0x0) {
    if (*(void **)((longlong)DAT_1800157f0 + 0x20000) != (void *)0x0) {
      FUN_180008940(*(void **)((longlong)DAT_1800157f0 + 0x20000));
    }
    *(undefined8 *)((longlong)pvVar1 + 0x20000) = 0;
    operator_delete(pvVar1);
  }
  DAT_1800157f0 = (void *)0x0;
  _DAT_1800157f8 = 0;
  _DAT_180015800 = 0;
  return;
}



void FUN_180009940(void)

{
  if (DAT_180015be0 != '\0') {
    DAT_180015be0 = '\0';
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_180015be8);
  }
  return;
}



void FUN_180009970(void)

{
  if (DAT_180015c18 != '\0') {
    DAT_180015c18 = '\0';
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_180015c20);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1800099a0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_180015820;
  while (puVar2 != (undefined8 *)0x0) {
    FUN_180008980(&DAT_180015820,(undefined8 *)puVar2[2]);
    puVar1 = (undefined8 *)*puVar2;
    free(puVar2 + -4);
    puVar2 = puVar1;
  }
  _DAT_180015828 = 0;
  DAT_180015820 = (undefined8 *)0x0;
  return;
}


