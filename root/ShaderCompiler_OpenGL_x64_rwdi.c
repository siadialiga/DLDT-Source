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

typedef longlong LONG_PTR;

typedef LONG_PTR LRESULT;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

typedef uint UINT;

typedef ulonglong UINT_PTR;

typedef UINT_PTR WPARAM;

typedef LONG_PTR LPARAM;

typedef LRESULT (*WNDPROC)(HWND, UINT, WPARAM, LPARAM);

struct HWND__ {
    int unused;
};

typedef struct tagWNDCLASSA tagWNDCLASSA, *PtagWNDCLASSA;

typedef struct tagWNDCLASSA WNDCLASSA;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ *HICON;

typedef HICON HCURSOR;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

typedef struct HBRUSH__ *HBRUSH;

typedef char CHAR;

typedef CHAR *LPCSTR;

struct HBRUSH__ {
    int unused;
};

struct tagWNDCLASSA {
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCSTR lpszMenuName;
    LPCSTR lpszClassName;
};

struct HICON__ {
    int unused;
};

struct HINSTANCE__ {
    int unused;
};

typedef struct tagPIXELFORMATDESCRIPTOR tagPIXELFORMATDESCRIPTOR, *PtagPIXELFORMATDESCRIPTOR;

typedef ushort WORD;

typedef ulong DWORD;

typedef uchar BYTE;

struct tagPIXELFORMATDESCRIPTOR {
    WORD nSize;
    WORD nVersion;
    DWORD dwFlags;
    BYTE iPixelType;
    BYTE cColorBits;
    BYTE cRedBits;
    BYTE cRedShift;
    BYTE cGreenBits;
    BYTE cGreenShift;
    BYTE cBlueBits;
    BYTE cBlueShift;
    BYTE cAlphaBits;
    BYTE cAlphaShift;
    BYTE cAccumBits;
    BYTE cAccumRedBits;
    BYTE cAccumGreenBits;
    BYTE cAccumBlueBits;
    BYTE cAccumAlphaBits;
    BYTE cDepthBits;
    BYTE cStencilBits;
    BYTE cAuxBuffers;
    BYTE iLayerType;
    BYTE bReserved;
    DWORD dwLayerMask;
    DWORD dwVisibleMask;
    DWORD dwDamageMask;
};

typedef struct tagPIXELFORMATDESCRIPTOR PIXELFORMATDESCRIPTOR;


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

typedef struct tagACTCTXW tagACTCTXW, *PtagACTCTXW;

typedef struct tagACTCTXW ACTCTXW;

typedef ulong ULONG;

typedef wchar_t WCHAR;

typedef WCHAR *LPCWSTR;

typedef ushort USHORT;

typedef WORD LANGID;

typedef HINSTANCE HMODULE;

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
    char pdbpath[114];
};

typedef struct HGLRC__ HGLRC__, *PHGLRC__;

struct HGLRC__ {
    int unused;
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef struct HGLRC__ *HGLRC;

typedef struct HDC__ HDC__, *PHDC__;

typedef struct HDC__ *HDC;

struct HDC__ {
    int unused;
};

typedef HANDLE *LPHANDLE;

typedef WORD ATOM;

typedef struct HMENU__ HMENU__, *PHMENU__;

struct HMENU__ {
    int unused;
};

typedef BYTE *PBYTE;

typedef void *LPVOID;

typedef int BOOL;

typedef struct HMENU__ *HMENU;

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

typedef enum ENUM {
} ENUM;

typedef enum TYPE {
} TYPE;

typedef struct string_base<char> string_base<char>, *Pstring_base<char>;

struct string_base<char> { // PlaceHolder Structure
};

typedef int (*_onexit_t)(void);

typedef ulonglong size_t;

typedef int errno_t;

typedef size_t rsize_t;



pointer[8] vftable;
undefined *PTR_glewExperimental_18000a2d8;
undefined DAT_1800014a0;
undefined DAT_18000ab88;
undefined DAT_18000ab8c;
undefined DAT_18000abe4;
undefined DAT_18000abe8;
undefined1 DAT_18000abf8;
undefined *PTR___glewGetUniformBlockIndex_18000a2e8;
undefined *PTR___glewGetProgramiv_18000a2f0;
undefined *PTR___glewGetActiveUniformsiv_18000a360;
undefined *PTR___glewGetActiveUniform_18000a300;
undefined1 DAT_18000b7b4;
undefined4 DAT_1800168d0;
undefined *PTR___glewGetActiveAttrib_18000a318;
undefined *PTR___glewGetAttribLocation_18000a320;
undefined *PTR___glewGetUniformLocation_18000a308;
undefined *PTR___glewGetUniformiv_18000a310;
undefined1 DAT_18000b324;
undefined1 DAT_18000a830;
undefined *PTR___glewCreateShader_18000a328;
undefined *PTR___glewShaderSource_18000a330;
undefined *PTR___glewCompileShader_18000a338;
undefined *PTR___glewGetShaderiv_18000a340;
undefined *PTR___glewGetShaderInfoLog_18000a348;
undefined *PTR___glewDeleteShader_18000a350;
undefined *PTR___glewCreateProgram_18000a358;
undefined *PTR___glewAttachShader_18000a2f8;
undefined *PTR___glewLinkProgram_18000a2d0;
undefined *PTR___glewDetachShader_18000a2c8;
undefined *PTR___glewGetProgramInfoLog_18000a2c0;
undefined *PTR___glewDeleteProgram_18000a2b8;
undefined1 DAT_18000b584;
pointer[1] vftable;
int DAT_180016968;
int DAT_180016970;
HANDLE DAT_180016940;
undefined8 DAT_180016940;
undefined DAT_18001696c;
undefined DAT_180010fb0;
undefined DAT_1800113b0;
undefined DAT_1800117b0;
undefined DAT_180011bb0;
undefined8 DAT_1800169f0;
undefined DAT_1800169f8;
uint DAT_180016744;
uint DAT_180016740;
void *DAT_180016738;
undefined LAB_180006bd0;
undefined8 *DAT_180016738;
int DAT_1800166d8;
longlong DAT_1800166d0;
longlong DAT_1800166c8;
int DAT_180016710;
longlong DAT_180016708;
longlong DAT_180016700;
undefined _type_info_dtor_internal_method;
PVOID DAT_180016c40;
PVOID DAT_180016c38;
undefined LAB_180009334;
undefined FUN_180009378;
int DAT_180016950;
void *DAT_180016c30;
int DAT_180016c28;
undefined8 DAT_180016c48;
undefined DAT_18000a370;
undefined DAT_18000a660;
undefined DAT_18000a668;
void *StackBase;
undefined DAT_18000a678;
undefined DAT_180016020;
undefined8 DAT_180013788;
undefined8 DAT_180013798;
IMAGE_DOS_HEADER IMAGE_DOS_HEADER_180000000;
ulonglong DAT_180016028;
undefined DAT_180016030;
void *StackLimit;
undefined DAT_180016b40;
undefined FUN_180009c30;
undefined LAB_180009cb0;
undefined DAT_180016b68;
undefined LAB_180009cc0;
undefined DAT_180016b90;
char DAT_180016bf0;
undefined DAT_180016bf8;
undefined FUN_180009d00;
char DAT_180016bb8;
undefined DAT_180016bc0;
undefined FUN_180009cd0;
void *DAT_180016a00;
void *DAT_180016a10;
int DAT_1800166f0;
void *DAT_1800166e8;
int DAT_180016728;
void *DAT_180016720;
undefined4 DAT_180016740;
void *DAT_180016750;
undefined DAT_180016758;
undefined DAT_180016760;
undefined8 DAT_180016780;
undefined DAT_180016788;

void FUN_180001000(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = COpenGLShaderCompiler::vftable;
    FUN_1800014b0((longlong)param_1);
    FUN_1800061d0(param_1 + 0xb,(undefined8 *)param_1[0xb]);
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    free((void *)param_1[3]);
    *param_1 = IShaderCompiler::vftable;
    operator_delete(param_1);
  }
  return;
}



undefined8 FUN_180001070(void)

{
  return 9;
}



char * FUN_180001080(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "Float1";
  case 1:
    return "Float2";
  case 2:
    return "Float3";
  case 3:
    return "Float4";
  case 4:
    return "Color";
  case 5:
    return "UByte4";
  case 6:
    return "Short2";
  case 7:
    return "Short4";
  case 8:
    return "UByte4N";
  case 9:
    return "Short2N";
  case 10:
    return "Short4N";
  case 0xb:
    return "UShort2N";
  case 0xc:
    return "UShort4N";
  case 0xd:
    return "UDec3";
  case 0xe:
    return "Dec3N";
  case 0xf:
    return "Float16_2";
  case 0x10:
    return "Float16_4";
  case 0x11:
    return "UDec4";
  case 0x12:
    return "Dec4";
  case 0x13:
    return "UDec4N";
  case 0x14:
    return "Dec4N";
  case 0x15:
    return "UHend3";
  case 0x16:
    return "Hend3";
  case 0x17:
    return "UHend3N";
  case 0x18:
    return "Hend3N";
  case 0x19:
    return "UDHen3";
  case 0x1a:
    return "DHen3";
  case 0x1b:
    return "UDHen3N";
  case 0x1c:
    return "DHen3N";
  case 0x1d:
    return "Short3Software";
  case 0x1e:
    return "CMP111110";
  case 0x1f:
    return "DX11_SByte4N";
  case 0x20:
    return "Unknown";
  default:
    return "?";
  }
}



char * FUN_180001240(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "Position";
  case 1:
    return "BlendWeight";
  case 2:
    return "BlendIndices";
  case 3:
    return "Normal";
  case 4:
    return "PSize";
  case 5:
    return "TexCoord";
  case 6:
    return "Tangent";
  case 7:
    return "Binormal";
  case 8:
    return "TessFactor";
  case 9:
    return "PositionT";
  case 10:
    return "Color";
  case 0xb:
    return "Fog";
  case 0xc:
    return "Depth";
  case 0xd:
    return "Sample";
  case 0xe:
    return "Unknown";
  default:
    return "?";
  }
}



HGLRC FUN_180001320(HDC param_1)

{
  int iVar1;
  BOOL BVar2;
  HGLRC pHVar3;
  PIXELFORMATDESCRIPTOR local_38;
  
  memset(&local_38,0,0x28);
  local_38.nSize = 0x28;
  local_38.nVersion = 1;
  local_38.dwFlags = 0x25;
  local_38.iPixelType = '\0';
  local_38.cColorBits = ' ';
  local_38.cDepthBits = ' ';
  local_38.iLayerType = '\0';
  iVar1 = ChoosePixelFormat(param_1,&local_38);
  if (iVar1 != 0) {
    BVar2 = SetPixelFormat(param_1,iVar1,&local_38);
    if (BVar2 != 0) {
      pHVar3 = wglCreateContext(param_1);
      if (pHVar3 != (HGLRC)0x0) {
        BVar2 = wglMakeCurrent(param_1,pHVar3);
        if (BVar2 != 0) {
          *glewExperimental_exref = (code)0x1;
          iVar1 = glewInit();
          if (iVar1 != 0) {
            pHVar3 = (HGLRC)0x0;
          }
          return pHVar3;
        }
      }
    }
  }
  return (HGLRC)0x0;
}



undefined8 FUN_1800013e0(longlong param_1)

{
  HMODULE pHVar1;
  HWND pHVar2;
  HDC pHVar3;
  undefined8 extraout_RAX;
  WNDCLASSA local_58;
  
  local_58.style = 0x23;
  local_58.lpfnWndProc = (WNDPROC)&DAT_1800014a0;
  local_58.cbClsExtra = 0;
  local_58.cbWndExtra = 0;
  local_58.hInstance = GetModuleHandleA((LPCSTR)0x0);
  local_58.hIcon = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_58.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_58.hbrBackground = (HBRUSH)0x0;
  local_58.lpszClassName = "OpenGL_Context";
  local_58.lpszMenuName = (LPCSTR)0x0;
  FUN_180006750(&local_58);
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  pHVar2 = FUN_180006490(pHVar1);
  *(HWND *)(param_1 + 0x10) = pHVar2;
  if (pHVar2 == (HWND)0x0) {
    GetLastError();
  }
  pHVar3 = GetDC(*(HWND *)(param_1 + 0x10));
  *(HDC *)(param_1 + 8) = pHVar3;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
}



// WARNING: Removing unreachable block (ram,0x000180001706)
// WARNING: Removing unreachable block (ram,0x000180001611)
// WARNING: Removing unreachable block (ram,0x0001800015a3)
// WARNING: Removing unreachable block (ram,0x0001800015b0)
// WARNING: Removing unreachable block (ram,0x000180001691)
// WARNING: Removing unreachable block (ram,0x0001800016f3)
// WARNING: Removing unreachable block (ram,0x000180001770)

undefined8 FUN_1800014b0(longlong param_1)

{
  uint uVar1;
  undefined1 *_Dst;
  undefined1 *puVar2;
  undefined1 *_Dst_00;
  char *pcVar3;
  undefined8 extraout_RAX;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  uint local_res8;
  uint local_res10;
  char *local_res18;
  char local_b8 [128];
  
  wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
  uVar9 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar4) != 0) {
        wglDeleteContext(*(HGLRC *)(*(longlong *)(param_1 + 0x18) + lVar4));
      }
      uVar9 = uVar9 + 1;
      lVar4 = lVar4 + 8;
    } while (uVar9 < *(uint *)(param_1 + 0x20));
  }
  DestroyWindow(*(HWND *)(param_1 + 0x10));
  local_res8 = 0;
  local_res18 = malloc(0x1000001);
  *local_res18 = '\0';
  free((void *)0x0);
  puVar5 = *(undefined8 **)(param_1 + 0x58);
  local_res10 = 0x1000000;
  if (puVar5 != (undefined8 *)0x0) {
    for (puVar7 = (undefined8 *)*puVar5; puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7
        ) {
      puVar5 = puVar7;
    }
  }
  if (puVar5 != (undefined8 *)0x0) {
    do {
      _Dst = (undefined1 *)0x0;
      if (*(int *)(puVar5 + -3) != -2) {
        _Dst = malloc((ulonglong)(*(int *)(puVar5 + -3) + 3));
        *_Dst = 0;
        free((void *)0x0);
      }
      memcpy(_Dst,(void *)puVar5[-4],(ulonglong)*(uint *)(puVar5 + -3));
      memcpy(_Dst + *(uint *)(puVar5 + -3),&DAT_18000ab88,3);
      iVar11 = *(int *)(puVar5 + -3);
      uVar10 = iVar11 + 2;
      free((void *)0x0);
      puVar2 = (undefined1 *)0x0;
      uVar9 = uVar10 + *(int *)(puVar5 + -1);
      uVar1 = 0;
      if (uVar9 != 0) {
        puVar2 = malloc((ulonglong)(uVar9 + 1));
        *puVar2 = 0;
        free((void *)0x0);
        uVar1 = uVar9;
      }
      if (uVar10 == 0) {
        free(puVar2);
        puVar2 = (undefined1 *)0x0;
        uVar8 = 0;
        uVar10 = 0;
      }
      else if (uVar1 < uVar10) {
        free(puVar2);
        uVar8 = (ulonglong)uVar10;
        puVar2 = malloc((ulonglong)(iVar11 + 3U));
        memcpy(puVar2,_Dst,(ulonglong)(iVar11 + 3U));
      }
      else {
        uVar8 = (ulonglong)uVar10;
        memcpy(puVar2,_Dst,(ulonglong)(iVar11 + 3));
        uVar10 = uVar1;
      }
      uVar9 = (uint)uVar8;
      _Dst_00 = puVar2;
      if (*(int *)(puVar5 + -1) != 0) {
        uVar1 = *(int *)(puVar5 + -1) + uVar9;
        if (uVar10 < uVar1) {
          _Dst_00 = malloc((ulonglong)(uVar1 + 1));
          if (uVar9 == 0) {
            *_Dst_00 = 0;
          }
          else {
            memcpy(_Dst_00,puVar2,(ulonglong)(uVar9 + 1));
          }
          free(puVar2);
        }
        memcpy(_Dst_00 + uVar8,(void *)puVar5[-2],(ulonglong)(*(int *)(puVar5 + -1) + 1));
        uVar9 = uVar9 + *(int *)(puVar5 + -1);
      }
      puVar2 = (undefined1 *)0x0;
      iVar11 = uVar9 + 1;
      if (iVar11 != 0) {
        puVar2 = malloc((ulonglong)(uVar9 + 2));
        *puVar2 = 0;
        free((void *)0x0);
      }
      memcpy(puVar2,_Dst_00,(ulonglong)uVar9);
      memcpy(puVar2 + uVar9,&DAT_18000ab8c,2);
      free((void *)0x0);
      if (iVar11 != 0) {
        uVar10 = iVar11 + local_res8;
        if (local_res10 < uVar10) {
          pcVar3 = malloc((ulonglong)(uVar10 + 1));
          if (local_res8 == 0) {
            *pcVar3 = '\0';
          }
          else {
            memcpy(pcVar3,local_res18,(ulonglong)(local_res8 + 1));
          }
          free(local_res18);
          local_res10 = uVar10;
          local_res18 = pcVar3;
        }
        memcpy(local_res18 + local_res8,puVar2,(ulonglong)(uVar9 + 2));
        local_res8 = uVar10;
      }
      free(puVar2);
      free(_Dst_00);
      free(_Dst);
      puVar7 = (undefined8 *)puVar5[2];
      if (puVar7 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)puVar5[1];
        bVar12 = puVar7 == (undefined8 *)0x0;
        if (!bVar12) {
          do {
            puVar6 = puVar7;
            puVar7 = puVar6;
            if (puVar5 != (undefined8 *)puVar6[2]) break;
            puVar7 = (undefined8 *)puVar6[1];
            puVar5 = puVar6;
          } while (puVar7 != (undefined8 *)0x0);
          goto LAB_180001858;
        }
      }
      else {
        for (puVar5 = (undefined8 *)*puVar7; puVar5 != (undefined8 *)0x0;
            puVar5 = (undefined8 *)*puVar5) {
          puVar7 = puVar5;
        }
LAB_180001858:
        bVar12 = puVar7 == (undefined8 *)0x0;
      }
      puVar5 = puVar7;
    } while (!bVar12);
  }
  rand();
  sprintf(local_b8,"__dictionary_%d");
  pcVar3 = "";
  if (local_res18 != (char *)0x0) {
    pcVar3 = local_res18;
  }
  FUN_1800018f0(local_b8,0x18000aba0,pcVar3);
  free(local_res18);
  return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
}



// WARNING: Removing unreachable block (ram,0x000180001964)
// WARNING: Removing unreachable block (ram,0x000180001a12)

void FUN_1800018f0(char *param_1,longlong param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  void *local_438;
  uint local_430;
  uint local_42c;
  char local_428 [1024];
  
  if ((((param_1 != (char *)0x0) && (*param_1 != '\0')) && (param_2 != 0)) &&
     (param_3 != (char *)0x0)) {
    uVar5 = 0;
    pcVar2 = param_1;
    do {
      if (*pcVar2 == '\0') break;
      uVar5 = uVar5 + 1;
      pcVar2 = pcVar2 + 1;
    } while (uVar5 != 0xffffffff);
    if (uVar5 == 0) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = malloc((ulonglong)(uVar5 + 1));
      memcpy(pcVar2,param_1,(ulonglong)uVar5);
      pcVar2[uVar5] = '\0';
      uVar4 = (ulonglong)uVar5;
      pcVar3 = pcVar2;
      do {
        cVar1 = *pcVar3;
        if (((cVar1 == '/') || (cVar1 == '\\')) || (cVar1 == '.')) {
          *pcVar3 = '_';
        }
        pcVar3 = pcVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    sprintf(local_428,"%s%s_%d%s");
    uVar5 = 0;
    pcVar3 = param_3;
    do {
      if (*pcVar3 == '\0') break;
      uVar5 = uVar5 + 1;
      pcVar3 = pcVar3 + 1;
    } while (uVar5 != 0xffffffff);
    local_430 = uVar5;
    local_42c = uVar5;
    if (uVar5 == 0) {
      local_438 = (void *)0x0;
    }
    else {
      local_438 = malloc((ulonglong)(uVar5 + 1));
      memcpy(local_438,param_3,(ulonglong)uVar5);
      *(undefined1 *)((ulonglong)local_430 + (longlong)local_438) = 0;
    }
    fs::save_text_file((string_base<char> *)&local_438,local_428);
    free(local_438);
    free(pcVar2);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180001af3)

ulonglong FUN_180001ab0(char *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  char *pcVar1;
  char *pcVar2;
  ulonglong extraout_RAX;
  undefined8 extraout_RAX_00;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong _Size;
  
  uVar5 = 0;
  pcVar1 = param_1;
  _Size = uVar5;
  do {
    if (*pcVar1 == '\0') break;
    uVar3 = (int)_Size + 1;
    _Size = (ulonglong)uVar3;
    pcVar1 = pcVar1 + 1;
  } while (uVar3 != 0xffffffff);
  if ((int)_Size == 0) {
    pcVar1 = (char *)0x0;
  }
  else {
    uVar3 = (int)_Size + 1;
    pcVar1 = malloc((ulonglong)uVar3);
    memcpy(pcVar1,param_1,_Size);
    pcVar1[_Size] = '\0';
    if (pcVar1 != (char *)0x0) {
      _strupr_s(pcVar1,(ulonglong)uVar3);
    }
  }
  pbVar4 = &DAT_18000abf8;
  do {
    if (*(int *)(pbVar4 + -0x18) == param_2) {
      if ((*pbVar4 & 1) == 0) {
LAB_180001bb9:
        *param_3 = *(undefined4 *)(&DAT_18000abe4 + uVar5 * 0x20);
        *param_4 = *(undefined4 *)(&DAT_18000abe8 + uVar5 * 0x20);
        free(pcVar1);
        return CONCAT71((int7)((ulonglong)extraout_RAX_00 >> 8),1);
      }
      pcVar2 = "";
      if (pcVar1 != (char *)0x0) {
        pcVar2 = pcVar1;
      }
      pcVar2 = strstr(pcVar2,"MORPH");
      if (pcVar2 != (char *)0x0) goto LAB_180001bb9;
      pcVar2 = "";
      if (pcVar1 != (char *)0x0) {
        pcVar2 = pcVar1;
      }
      pcVar2 = strstr(pcVar2,"MPH");
      if (pcVar2 != (char *)0x0) goto LAB_180001bb9;
    }
    uVar3 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar3;
    pbVar4 = pbVar4 + 0x20;
    if (0x13 < uVar3) {
      free(pcVar1);
      return extraout_RAX & 0xffffffffffffff00;
    }
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0001800025e4)
// WARNING: Removing unreachable block (ram,0x000180002ac7)
// WARNING: Type propagation algorithm not settling

undefined1 * FUN_180001c00(longlong param_1,int param_2,char *param_3,int *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  longlong *plVar10;
  char *pcVar11;
  char *pcVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  byte *pbVar17;
  uint *puVar18;
  undefined8 *puVar19;
  size_t sVar20;
  byte *pbVar21;
  int iVar22;
  bool bVar23;
  bool bVar24;
  uint local_198;
  uint local_194;
  uint local_190 [2];
  char *local_188;
  undefined8 local_180;
  undefined8 local_178;
  char *local_170;
  char *local_168;
  char *local_160;
  char *local_158;
  char *local_150;
  uint local_148;
  int local_144;
  int local_140;
  uint local_13c;
  uint local_138;
  int local_134;
  uint local_130 [2];
  undefined8 local_128;
  uint local_120;
  int iStack_11c;
  byte *local_118;
  undefined8 local_110;
  undefined8 local_108;
  int local_100;
  char *local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  int local_d8 [2];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  void *local_b0;
  uint local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  void *local_80;
  undefined8 local_78;
  undefined4 local_70;
  void *local_68;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined1 local_50;
  
  if ((param_2 == 0) || (param_4 == (int *)0x0)) {
    return &stack0x00000000;
  }
  plVar10 = (longlong *)(param_4 + 0xe);
  local_e8 = plVar10;
  FUN_1800060c0(plVar10);
  uVar15 = 0;
  local_d0 = 0;
  local_128 = (char *)((ulonglong)local_128._4_4_ << 0x20);
  local_a4 = 0;
  local_190[0] = 0;
  local_5c = 0;
  local_d8[0] = *param_4;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0x28;
  local_b0 = (void *)0x0;
  local_a8 = 0;
  local_a0 = 0x28;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0x28;
  local_80 = (void *)0x0;
  local_78 = 0;
  local_70 = 0x28;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0x28;
  local_50 = 0;
  pcVar8 = strstr(param_3,"#version");
  local_f8 = (char *)0x0;
  local_f0 = 0;
  FUN_180005b80((longlong *)&local_f8,param_3,(int)pcVar8 - (int)param_3);
  pcVar8 = "UnknownConstantBufferType";
  switch(*param_4) {
  case 0:
    pcVar8 = "PS_Constants";
    break;
  case 1:
    pcVar8 = "VS_Constants";
    break;
  case 2:
    pcVar8 = "GS_Constants";
    break;
  case 3:
    pcVar8 = "HS_Constants";
    break;
  case 4:
    pcVar8 = "DS_Constants";
    break;
  case 5:
    pcVar8 = "CS_Constants";
  }
  (**(code **)__glewGetUniformBlockIndex_exref)(param_2,pcVar8);
  (**(code **)__glewGetUniformBlockIndex_exref)(param_2,"perConstPaletteData");
  uVar4 = (**(code **)__glewGetUniformBlockIndex_exref)(param_2,"perFrameRTViewData");
  local_138 = uVar4;
  uVar5 = (**(code **)__glewGetUniformBlockIndex_exref)(param_2,"perModelMtxData");
  local_194 = uVar5;
  (**(code **)__glewGetUniformBlockIndex_exref)(param_2,"InstancingData");
  local_148 = 0;
  (**(code **)__glewGetProgramiv_exref)(param_2,0x8b86,&local_148);
  if (local_148 != 0) {
    local_134 = 0;
    local_130[1] = 0;
    (**(code **)__glewGetProgramiv_exref)(param_2,0x8b87,&local_134);
    pcVar8 = malloc((longlong)local_134);
    local_198 = 0;
    if (local_148 != 0) {
LAB_180001e21:
      local_13c = 0;
      (**(code **)__glewGetActiveUniformsiv_exref)(param_2,1,&local_198,0x8a3a,&local_13c);
      local_120 = 0;
      local_130[0] = 0;
      (**(code **)__glewGetActiveUniform_exref)
                (param_2,local_198,local_134,local_130 + 1,&local_120,local_130,pcVar8);
      puVar18 = &DAT_1800168d0;
      do {
        if (*puVar18 == local_130[0]) {
          if ((local_130[0] == 0x904d) || (local_130[0] == 0x9063)) goto LAB_180002790;
          lVar16 = 0xd;
          bVar23 = false;
          pcVar9 = pcVar8;
          pcVar11 = "MorphTargets";
          goto code_r0x0001800025be;
        }
        puVar18 = puVar18 + 1;
      } while ((longlong)puVar18 < 0x180016940);
      if ((local_13c != uVar5) && (local_13c != uVar4)) {
        pcVar9 = "";
        if (local_f8 != (char *)0x0) {
          pcVar9 = local_f8;
        }
        pcVar9 = strstr(pcVar9,pcVar8);
        if ((((pcVar9 == (char *)0x0) && (pcVar9 = strstr(pcVar8,"PATCH_"), pcVar9 == (char *)0x0))
            || (pcVar9 = strstr(pcVar8,"GL_BaseVertex"), pcVar9 != (char *)0x0)) ||
           (pcVar9 = strstr(pcVar8,"MorphTargetsSize"), pcVar9 != (char *)0x0)) goto LAB_180002790;
        local_188 = pcVar9;
        local_180 = pcVar9;
        local_178 = pcVar9;
        local_170 = pcVar9;
        local_168 = pcVar9;
        local_160 = pcVar9;
        local_158 = pcVar9;
        local_150 = pcVar9;
        pcVar9 = strchr(pcVar8,0x5b);
        if (pcVar9 == (char *)0x0) {
          if (local_188 != pcVar8) {
            operator_delete__(local_188);
            local_188 = (char *)0x0;
            if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
              local_188 = (char *)0x0;
            }
            else {
              uVar14 = 0xffffffffffffffff;
              pcVar9 = pcVar8;
              do {
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar9 + 1;
              } while (cVar1 != '\0');
              pcVar9 = malloc(~uVar14);
              strcpy_s(pcVar9,~uVar14,pcVar8);
              local_188 = pcVar9;
            }
          }
        }
        else {
          plVar10 = FUN_180006810((longlong *)&local_118,pcVar8,(int)pcVar9 - (int)pcVar8);
          pcVar9 = (char *)*plVar10;
          pcVar11 = "";
          if (pcVar9 != (char *)0x0) {
            pcVar11 = pcVar9;
          }
          if (local_188 != pcVar11) {
            pcVar11 = "";
            if (pcVar9 != (char *)0x0) {
              pcVar11 = pcVar9;
            }
            operator_delete__(local_188);
            local_188 = (char *)0x0;
            if ((pcVar11 == (char *)0x0) || (*pcVar11 == '\0')) {
              local_188 = (char *)0x0;
            }
            else {
              uVar14 = 0xffffffffffffffff;
              pcVar9 = pcVar11;
              do {
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar9 + 1;
              } while (cVar1 != '\0');
              pcVar9 = malloc(~uVar14);
              strcpy_s(pcVar9,~uVar14,pcVar11);
              local_188 = pcVar9;
            }
          }
          free(local_118);
          local_118 = (byte *)0x0;
        }
        (**(code **)__glewGetActiveUniformsiv_exref)
                  (param_2,1,&local_198,0x8a38,(longlong)&local_180 + 4);
        (**(code **)__glewGetActiveUniformsiv_exref)(param_2,1,&local_198,0x8a3b,&local_180);
        if (local_130[0] < 0x8b51) {
          if (local_130[0] == 0x8b50) {
switchD_18000210d_caseD_8b51:
            local_178 = (char *)CONCAT44(local_178._4_4_,2);
            local_170 = (char *)CONCAT44(local_170._4_4_,3);
          }
          else {
            if ((local_130[0] == 0x1404) || (local_130[0] == 0x1405)) {
              local_170 = (char *)CONCAT44(local_170._4_4_,1);
              goto LAB_180002175;
            }
            if (local_130[0] == 0x1406) {
              local_178 = (char *)CONCAT44(local_178._4_4_,2);
              local_170 = (char *)CONCAT44(local_170._4_4_,1);
            }
          }
        }
        else {
          if (local_130[0] < 0x8dc7) {
            if (local_130[0] != 0x8dc6) {
              switch(local_130[0]) {
              case 0x8b51:
                goto switchD_18000210d_caseD_8b51;
              case 0x8b52:
                local_178 = (char *)CONCAT44(local_178._4_4_,2);
                local_170 = (char *)CONCAT44(local_170._4_4_,4);
                break;
              case 0x8b53:
              case 0x8b54:
                goto switchD_18000210d_caseD_8b53;
              case 0x8b55:
                local_170 = (char *)CONCAT44(local_170._4_4_,4);
                goto LAB_180002175;
              case 0x8b56:
                local_178 = (char *)((ulonglong)local_178._4_4_ << 0x20);
                local_170 = (char *)CONCAT44(local_170._4_4_,1);
              }
              goto switchD_18000210d_default;
            }
          }
          else if (local_130[0] != 0x8dc7) {
            if (local_130[0] == 0x8dc8) {
              local_178 = (char *)CONCAT44(local_178._4_4_,1);
              local_170 = (char *)CONCAT44(local_170._4_4_,4);
            }
            goto switchD_18000210d_default;
          }
switchD_18000210d_caseD_8b53:
          local_170 = (char *)CONCAT44(local_170._4_4_,3);
LAB_180002175:
          local_178 = (char *)CONCAT44(local_178._4_4_,1);
        }
switchD_18000210d_default:
        pcVar9 = "";
        if (local_188 != (char *)0x0) {
          pcVar9 = local_188;
        }
        pcVar11 = strstr(pcVar9,"PATCH_1");
        pcVar9 = local_188;
        if (pcVar11 == (char *)0x0) {
          pcVar9 = "";
          if (local_188 != (char *)0x0) {
            pcVar9 = local_188;
          }
          pcVar11 = strstr(pcVar9,"PATCH_2");
          pcVar9 = local_188;
          if (pcVar11 != (char *)0x0) {
            if ((local_188 == (char *)0x0) || (*local_188 == '\0')) {
              pcVar9 = (char *)0x0;
LAB_1800022d8:
              pcVar11 = "";
            }
            else {
              uVar14 = 0xffffffffffffffff;
              pcVar11 = local_188;
              do {
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                cVar1 = *pcVar11;
                pcVar11 = pcVar11 + 1;
              } while (cVar1 != '\0');
              pcVar11 = malloc(~uVar14);
              strcpy_s(pcVar11,~uVar14,pcVar9);
              pcVar9 = pcVar11;
              if (pcVar11 == (char *)0x0) goto LAB_1800022d8;
            }
            pcVar11 = pcVar11 + 7;
            if (local_188 != pcVar11) {
              operator_delete__(local_188);
              local_188 = (char *)0x0;
              if ((pcVar11 != (char *)0x0) && (*pcVar11 != '\0')) {
                uVar14 = 0xffffffffffffffff;
                pcVar12 = pcVar11;
                do {
                  if (uVar14 == 0) break;
                  uVar14 = uVar14 - 1;
                  cVar1 = *pcVar12;
                  pcVar12 = pcVar12 + 1;
                } while (cVar1 != '\0');
                pcVar12 = malloc(~uVar14);
                strcpy_s(pcVar12,~uVar14,pcVar11);
                local_170 = (char *)CONCAT44(local_170._4_4_,2);
                local_188 = pcVar12;
                goto LAB_180002426;
              }
              local_188 = (char *)0x0;
            }
            local_170 = (char *)CONCAT44(local_170._4_4_,2);
            goto LAB_180002426;
          }
          pcVar9 = "";
          if (local_188 != (char *)0x0) {
            pcVar9 = local_188;
          }
          pcVar11 = strstr(pcVar9,"PATCH_3");
          pcVar9 = local_188;
          if (pcVar11 != (char *)0x0) {
            if ((local_188 == (char *)0x0) || (*local_188 == '\0')) {
              pcVar9 = (char *)0x0;
LAB_1800023c2:
              pcVar11 = "";
            }
            else {
              uVar14 = 0xffffffffffffffff;
              pcVar11 = local_188;
              do {
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                cVar1 = *pcVar11;
                pcVar11 = pcVar11 + 1;
              } while (cVar1 != '\0');
              pcVar11 = malloc(~uVar14);
              strcpy_s(pcVar11,~uVar14,pcVar9);
              pcVar9 = pcVar11;
              if (pcVar11 == (char *)0x0) goto LAB_1800023c2;
            }
            pcVar11 = pcVar11 + 7;
            if (local_188 != pcVar11) {
              operator_delete__(local_188);
              local_188 = (char *)0x0;
              if ((pcVar11 == (char *)0x0) || (*pcVar11 == '\0')) {
                local_188 = (char *)0x0;
              }
              else {
                uVar14 = 0xffffffffffffffff;
                pcVar12 = pcVar11;
                do {
                  if (uVar14 == 0) break;
                  uVar14 = uVar14 - 1;
                  cVar1 = *pcVar12;
                  pcVar12 = pcVar12 + 1;
                } while (cVar1 != '\0');
                pcVar12 = malloc(~uVar14);
                strcpy_s(pcVar12,~uVar14,pcVar11);
                local_188 = pcVar12;
              }
            }
            local_170 = (char *)CONCAT44(local_170._4_4_,3);
            goto LAB_180002426;
          }
        }
        else {
          if ((local_188 == (char *)0x0) || (*local_188 == '\0')) {
            pcVar9 = (char *)0x0;
LAB_1800021ee:
            pcVar11 = "";
          }
          else {
            uVar14 = 0xffffffffffffffff;
            pcVar11 = local_188;
            do {
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              cVar1 = *pcVar11;
              pcVar11 = pcVar11 + 1;
            } while (cVar1 != '\0');
            pcVar11 = malloc(~uVar14);
            strcpy_s(pcVar11,~uVar14,pcVar9);
            pcVar9 = pcVar11;
            if (pcVar11 == (char *)0x0) goto LAB_1800021ee;
          }
          pcVar11 = pcVar11 + 7;
          if (local_188 != pcVar11) {
            operator_delete__(local_188);
            local_188 = (char *)0x0;
            if ((pcVar11 != (char *)0x0) && (*pcVar11 != '\0')) {
              uVar14 = 0xffffffffffffffff;
              pcVar12 = pcVar11;
              do {
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                cVar1 = *pcVar12;
                pcVar12 = pcVar12 + 1;
              } while (cVar1 != '\0');
              pcVar12 = malloc(~uVar14);
              strcpy_s(pcVar12,~uVar14,pcVar11);
              local_170 = (char *)CONCAT44(local_170._4_4_,1);
              local_188 = pcVar12;
              goto LAB_180002426;
            }
            local_188 = (char *)0x0;
          }
          local_170 = (char *)CONCAT44(local_170._4_4_,1);
LAB_180002426:
          operator_delete__(pcVar9);
        }
        pcVar9 = local_180;
        iVar22 = (int)local_170 * local_180._4_4_;
        local_180 = (char *)CONCAT44(iVar22 * 4,(undefined4)local_180);
        local_170 = (char *)CONCAT44(local_170._4_4_,iVar22);
        local_150 = (char *)CONCAT71(local_150._1_7_,1);
        local_178 = (char *)CONCAT44(local_13c,(undefined4)local_178);
        pcVar11 = "";
        if (local_188 != (char *)0x0) {
          pcVar11 = local_188;
        }
        (**(code **)**(undefined8 **)(param_1 + 0x28))
                  (*(undefined8 **)(param_1 + 0x28),0x40000005,
                   "Uniform: name=%s bufid=%d offset=%d size=%d numcomp=%d fullname=%s",pcVar11,
                   local_13c,(ulonglong)pcVar9 & 0xffffffff,iVar22 * 4,iVar22,pcVar8);
        uVar4 = (int)uVar15 + 1;
        if ((uint)local_128 < uVar4) {
          local_a4 = ((uint)local_128 * 10 >> 3) + 0x10 & 0xfffffff0;
          if (local_a4 < uVar4) {
            local_a4 = uVar4;
          }
          local_128 = (char *)CONCAT44(local_128._4_4_,local_a4);
          local_b0 = realloc(local_b0,(ulonglong)(local_a4 << 6));
        }
        pcVar9 = local_188;
        puVar19 = (undefined8 *)(uVar15 * 0x40 + (longlong)local_b0);
        if (puVar19 != (undefined8 *)0x0) {
          if ((local_188 == (char *)0x0) || (*local_188 == '\0')) {
            pcVar11 = (char *)0x0;
          }
          else {
            uVar15 = 0xffffffffffffffff;
            pcVar11 = local_188;
            do {
              if (uVar15 == 0) break;
              uVar15 = uVar15 - 1;
              cVar1 = *pcVar11;
              pcVar11 = pcVar11 + 1;
            } while (cVar1 != '\0');
            pcVar11 = malloc(~uVar15);
            strcpy_s(pcVar11,~uVar15,pcVar9);
          }
          *puVar19 = pcVar11;
          *(undefined4 *)(puVar19 + 1) = (undefined4)local_180;
          *(int *)((longlong)puVar19 + 0xc) = local_180._4_4_;
          *(undefined4 *)(puVar19 + 2) = (undefined4)local_178;
          *(uint *)((longlong)puVar19 + 0x14) = local_178._4_4_;
          *(int *)(puVar19 + 3) = (int)local_170;
          FUN_180006150(puVar19 + 4,(longlong *)&local_168);
          *(undefined1 *)(puVar19 + 7) = local_150._0_1_;
        }
        local_160 = (char *)((ulonglong)local_160 & 0xffffffff00000000);
        local_a8 = uVar4;
        free(local_168);
        operator_delete__(local_188);
        local_188 = (char *)0x0;
        goto LAB_18000277b;
      }
      goto LAB_180002790;
    }
LAB_1800027a3:
    free(pcVar8);
    plVar10 = local_e8;
  }
  uVar13 = FUN_180007e40(plVar10,(longlong)local_d8,*(undefined8 **)(param_1 + 0x28),
                         *(longlong **)(param_1 + 0x20));
  if ((char)uVar13 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))
              (*(longlong **)(param_1 + 0x28),0xc0000030,"error during parsing shader constants!");
    free(local_f8);
    uVar15 = FUN_180002c90((longlong)local_d8);
    return (undefined1 *)(uVar15 & 0xffffffffffffff00);
  }
  iVar22 = 0;
  local_144 = 0;
  (**(code **)__glewGetProgramiv_exref)(param_2,0x8b89,&local_144);
  if (local_144 != 0) {
    local_194 = 0;
    local_130[1] = 0;
    (**(code **)__glewGetProgramiv_exref)(param_2,0x8b8a,&local_194);
    uVar15 = (ulonglong)(int)local_194;
    pcVar8 = malloc(uVar15);
    local_128 = pcVar8;
    if (0 < local_144) {
      uVar4 = local_78._4_4_;
      do {
        local_118 = (byte *)0x0;
        local_110 = 0;
        local_108 = 0;
        local_100 = 0xffffffff;
        (**(code **)__glewGetActiveAttrib_exref)
                  (param_2,iVar22,uVar15 & 0xffffffff,local_130 + 1,&local_108,
                   (longlong)&local_108 + 4,pcVar8);
        local_100 = (**(code **)__glewGetAttribLocation_exref)(param_2,pcVar8);
        FUN_1800057d0(&local_118,pcVar8);
        if (local_118 == (byte *)0x0) {
LAB_180002917:
          uVar6 = 0;
          if (local_108._4_4_ != 0x1406) {
            if (local_108._4_4_ == 0x8b50) {
              uVar6 = 1;
            }
            else if (local_108._4_4_ == 0x8b51) {
              uVar6 = 2;
            }
            else if (local_108._4_4_ == 0x8b52) {
              uVar6 = 3;
            }
            else {
              uVar6 = 0x20;
            }
          }
          pbVar17 = &DAT_18000b7b4;
          if (local_118 != (byte *)0x0) {
            pbVar17 = local_118;
          }
          local_198 = 0;
          local_190[0] = 0;
          uVar13 = FUN_180001ab0((char *)pbVar17,local_100,&local_198,local_190);
          if ((char)uVar13 != '\0') {
            uVar15 = local_78 & 0xffffffff;
            uVar5 = (int)local_78 + 1;
            local_120 = local_198;
            iStack_11c = iVar22;
            if (uVar4 < uVar5) {
              uVar4 = (uVar4 * 10 >> 3) + 0x10 & 0xfffffff0;
              if (uVar4 < uVar5) {
                uVar4 = uVar5;
              }
              local_78 = CONCAT44(uVar4,(int)local_78);
              local_80 = realloc(local_80,(ulonglong)(uVar4 * 8));
            }
            uVar3 = local_190[0];
            puVar19 = (undefined8 *)((longlong)local_80 + uVar15 * 8);
            if (puVar19 != (undefined8 *)0x0) {
              *puVar19 = CONCAT44(iStack_11c,local_120);
            }
            local_78 = CONCAT44(local_78._4_4_,uVar5);
            FUN_180007170((longlong *)(param_4 + 0x16),local_198,local_190[0]);
            pbVar17 = &DAT_18000b7b4;
            if (local_118 != (byte *)0x0) {
              pbVar17 = local_118;
            }
            puVar19 = *(undefined8 **)(param_1 + 0x28);
            puVar2 = (undefined8 *)*puVar19;
            pcVar8 = FUN_180001080(uVar6);
            pcVar9 = FUN_180001240(local_198);
            (*(code *)*puVar2)(puVar19,0x40000005,"Attribute [%s @ %d] recognized as %s%d, %s",
                               pbVar17,local_100,pcVar9,uVar3,pcVar8);
            pcVar8 = local_128;
          }
        }
        else {
          bVar23 = false;
          iVar7 = 0;
          bVar24 = true;
          lVar16 = 0xc;
          pbVar17 = local_118;
          pbVar21 = (byte *)"gl_VertexID";
          do {
            if (lVar16 == 0) break;
            lVar16 = lVar16 + -1;
            bVar23 = *pbVar17 < *pbVar21;
            bVar24 = *pbVar17 == *pbVar21;
            pbVar17 = pbVar17 + 1;
            pbVar21 = pbVar21 + 1;
          } while (bVar24);
          if (!bVar24) {
            iVar7 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
          }
          if (iVar7 != 0) goto LAB_180002917;
        }
        free(local_118);
        iVar22 = iVar22 + 1;
        if (local_144 <= iVar22) break;
        uVar15 = (ulonglong)local_194;
      } while( true );
    }
    free(pcVar8);
    plVar10 = local_e8;
  }
  pcVar9 = (char *)0x0;
  pcVar8 = strstr(param_3,"t_MorphTargets");
  if (pcVar8 == (char *)0x0) goto LAB_180002c0a;
  sVar20 = 0;
  pcVar8 = "s_MorphTargets";
  do {
    if (*pcVar8 == '\0') break;
    uVar4 = (int)sVar20 + 1;
    sVar20 = (size_t)uVar4;
    pcVar8 = pcVar8 + 1;
  } while (uVar4 != 0xffffffff);
  pcVar8 = pcVar9;
  if ((int)sVar20 == 0) {
LAB_180002afc:
    pcVar11 = "";
  }
  else {
    pcVar11 = malloc((ulonglong)((int)sVar20 + 1));
    memcpy(pcVar11,"s_MorphTargets",sVar20);
    pcVar11[sVar20] = '\0';
    pcVar8 = pcVar11;
    if (pcVar11 == (char *)0x0) goto LAB_180002afc;
  }
  if (pcVar11 != (char *)0x0) {
    pcVar11 = "";
    if (pcVar8 != (char *)0x0) {
      pcVar11 = pcVar8;
    }
    operator_delete__((void *)0x0);
    if ((pcVar11 == (char *)0x0) || (*pcVar11 == '\0')) {
      pcVar9 = (char *)0x0;
    }
    else {
      uVar15 = 0xffffffffffffffff;
      pcVar9 = pcVar11;
      do {
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      pcVar9 = malloc(~uVar15);
      strcpy_s(pcVar9,~uVar15,pcVar11);
    }
  }
  free(pcVar8);
  uVar15 = (ulonglong)local_60;
  uVar4 = local_60 + 1;
  if (local_5c < uVar4) {
    local_5c = (local_5c * 10 >> 3) + 0x10 & 0xfffffff0;
    if (local_5c < uVar4) {
      local_5c = uVar4;
    }
    local_68 = realloc(local_68,(ulonglong)(local_5c * 0x18));
  }
  puVar19 = (undefined8 *)((longlong)local_68 + uVar15 * 0x18);
  if (puVar19 != (undefined8 *)0x0) {
    if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\0')) {
      pcVar8 = (char *)0x0;
    }
    else {
      uVar15 = 0xffffffffffffffff;
      pcVar8 = pcVar9;
      do {
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      pcVar8 = malloc(~uVar15);
      strcpy_s(pcVar8,~uVar15,pcVar9);
    }
    *puVar19 = pcVar8;
    puVar19[1] = 0;
    *(undefined1 *)(puVar19 + 2) = 1;
  }
  local_60 = uVar4;
  operator_delete__(pcVar9);
LAB_180002c0a:
  if ((void **)(param_4 + 0x1c) != &local_68) {
    FUN_180006250((longlong *)(param_4 + 0x1c),(longlong *)&local_68);
  }
  FUN_180007270(plVar10);
  free(local_f8);
  uVar13 = FUN_180002c90((longlong)local_d8);
  return (undefined1 *)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
  while( true ) {
    lVar16 = lVar16 + -1;
    bVar23 = *pcVar9 == *pcVar11;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
    if (!bVar23) break;
code_r0x0001800025be:
    if (lVar16 == 0) break;
  }
  uVar4 = local_138;
  uVar5 = local_194;
  if (bVar23) goto LAB_180002790;
  pcVar11 = (char *)0x0;
  sVar20 = 0;
  pcVar9 = pcVar8;
  do {
    if (*pcVar9 == '\0') break;
    uVar4 = (int)sVar20 + 1;
    sVar20 = (size_t)uVar4;
    pcVar9 = pcVar9 + 1;
  } while (uVar4 != 0xffffffff);
  if ((int)sVar20 == 0) {
    pcVar9 = (char *)0x0;
LAB_180002619:
    pcVar12 = "";
  }
  else {
    pcVar12 = malloc((ulonglong)((int)sVar20 + 1));
    memcpy(pcVar12,pcVar8,sVar20);
    pcVar12[sVar20] = '\0';
    pcVar9 = pcVar12;
    if (pcVar12 == (char *)0x0) goto LAB_180002619;
  }
  if (pcVar12 != (char *)0x0) {
    pcVar12 = "";
    if (pcVar9 != (char *)0x0) {
      pcVar12 = pcVar9;
    }
    operator_delete__((void *)0x0);
    if ((pcVar12 != (char *)0x0) && (*pcVar12 != '\0')) {
      uVar15 = 0xffffffffffffffff;
      pcVar11 = pcVar12;
      do {
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      pcVar11 = malloc(~uVar15);
      strcpy_s(pcVar11,~uVar15,pcVar12);
    }
  }
  free(pcVar9);
  uVar6 = (**(code **)__glewGetUniformLocation_exref)(param_2,pcVar8);
  local_140 = 0;
  (**(code **)__glewGetUniformiv_exref)(param_2,uVar6,&local_140);
  uVar15 = (ulonglong)local_60;
  uVar4 = local_60 + 1;
  iVar22 = local_140 + *param_4 * -0x10;
  local_140 = iVar22;
  if (local_190[0] < uVar4) {
    local_190[0] = (local_190[0] * 10 >> 3) + 0x10 & 0xfffffff0;
    if (local_190[0] < uVar4) {
      local_190[0] = uVar4;
    }
    local_5c = local_190[0];
    local_68 = realloc(local_68,(ulonglong)(local_190[0] * 0x18));
  }
  puVar19 = (undefined8 *)((longlong)local_68 + uVar15 * 0x18);
  if (puVar19 != (undefined8 *)0x0) {
    if ((pcVar11 == (char *)0x0) || (*pcVar11 == '\0')) {
      pcVar9 = (char *)0x0;
    }
    else {
      uVar15 = 0xffffffffffffffff;
      pcVar9 = pcVar11;
      do {
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      pcVar9 = malloc(~uVar15);
      strcpy_s(pcVar9,~uVar15,pcVar11);
    }
    *puVar19 = pcVar9;
    *(int *)(puVar19 + 1) = iVar22;
    *(int *)((longlong)puVar19 + 0xc) = iVar22;
    *(undefined1 *)(puVar19 + 2) = 1;
  }
  local_60 = uVar4;
  operator_delete__(pcVar11);
  uVar4 = local_a8;
LAB_18000277b:
  uVar15 = (ulonglong)uVar4;
  uVar4 = local_138;
  uVar5 = local_194;
LAB_180002790:
  local_198 = local_198 + 1;
  if (local_148 <= local_198) goto LAB_1800027a3;
  goto LAB_180001e21;
}



void FUN_180002c90(longlong param_1)

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
  FUN_180006040((longlong *)(param_1 + 0x28));
  iVar2 = *(int *)(param_1 + 0x18);
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(iVar2 - 1) * 8);
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    operator_delete__((void *)*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + -1;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
                    // WARNING: Could not recover jumptable at 0x000180002d45. Too many branches
                    // WARNING: Treating indirect jump as call
  free(*(void **)(param_1 + 0x10));
  return;
}



undefined1 FUN_180002d50(undefined8 param_1,int param_2)

{
  if (((param_2 != 1) && (param_2 != 0)) && (param_2 != 5)) {
    return 0;
  }
  return 1;
}



bool FUN_180002d70(longlong param_1)

{
  undefined8 *puVar1;
  HGLRC pHVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  
  pHVar2 = wglGetCurrentContext();
  if (pHVar2 == (HGLRC)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    pHVar2 = FUN_180001320(*(HDC *)(param_1 + 8));
    uVar5 = *(int *)(param_1 + 0x20) + 1;
    if (*(uint *)(param_1 + 0x24) < uVar5) {
      uVar4 = (*(uint *)(param_1 + 0x24) * 10 >> 3) + 0x10 & 0xfffffff0;
      if (uVar4 < uVar5) {
        uVar4 = uVar5;
      }
      *(uint *)(param_1 + 0x24) = uVar4;
      pvVar3 = realloc(*(void **)(param_1 + 0x18),(ulonglong)(uVar4 << 3));
      *(void **)(param_1 + 0x18) = pvVar3;
    }
    puVar1 = (undefined8 *)
             (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = pHVar2;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    pHVar2 = wglGetCurrentContext();
    return pHVar2 != (HGLRC)0x0;
  }
  return true;
}



// WARNING: Removing unreachable block (ram,0x000180004198)
// WARNING: Removing unreachable block (ram,0x0001800038aa)
// WARNING: Removing unreachable block (ram,0x000180003f9e)
// WARNING: Removing unreachable block (ram,0x000180003632)
// WARNING: Removing unreachable block (ram,0x00018000357f)
// WARNING: Removing unreachable block (ram,0x0001800034ed)
// WARNING: Removing unreachable block (ram,0x000180003591)
// WARNING: Removing unreachable block (ram,0x000180003395)
// WARNING: Removing unreachable block (ram,0x0001800034d7)
// WARNING: Removing unreachable block (ram,0x00018000374f)
// WARNING: Removing unreachable block (ram,0x000180003765)
// WARNING: Removing unreachable block (ram,0x000180003edf)
// WARNING: Removing unreachable block (ram,0x000180003d42)
// WARNING: Removing unreachable block (ram,0x000180003c89)
// WARNING: Removing unreachable block (ram,0x000180004109)
// WARNING: Removing unreachable block (ram,0x000180004325)
// WARNING: Removing unreachable block (ram,0x000180003adc)
// WARNING: Removing unreachable block (ram,0x000180003674)
// WARNING: Removing unreachable block (ram,0x000180003659)
// WARNING: Removing unreachable block (ram,0x0001800038bb)
// WARNING: Removing unreachable block (ram,0x00018000397a)
// WARNING: Removing unreachable block (ram,0x000180003989)
// WARNING: Removing unreachable block (ram,0x000180003a21)

undefined8
FUN_180002e30(longlong *param_1,char *param_2,longlong param_3,int param_4,longlong param_5,
             char param_6)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined1 **ppuVar12;
  undefined1 *puVar13;
  longlong *plVar14;
  ulonglong extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined8 uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  char *pcVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 *puVar24;
  byte *pbVar25;
  uint uVar26;
  char *_Memory;
  int iVar27;
  bool bVar28;
  bool bVar29;
  int local_res18 [2];
  int local_res20;
  longlong *local_408;
  char *local_400;
  char *local_3f8;
  undefined1 *local_3f0;
  undefined8 local_3e8;
  undefined1 *local_3e0;
  uint local_3d8;
  uint local_3d4;
  undefined1 *local_3d0;
  uint local_3c8;
  uint local_3c4;
  char *local_3c0;
  byte *local_3b8;
  longlong *local_3b0;
  char *local_3a8;
  undefined8 local_3a0;
  longlong *local_398;
  undefined1 *local_390;
  int local_388;
  undefined4 local_384;
  char *local_380;
  char *local_378;
  uint local_370;
  uint local_36c;
  undefined1 *local_368;
  undefined8 local_360;
  uint local_358;
  undefined1 *local_350;
  int local_348;
  undefined4 local_344;
  undefined1 *local_340;
  uint local_338;
  uint local_334;
  undefined1 *local_330;
  uint local_328;
  uint local_324;
  longlong **local_320;
  undefined1 *local_318;
  int *local_310;
  longlong **local_308;
  undefined1 *local_300;
  int *local_2f8;
  void *local_2e8 [2];
  void *local_2d8 [2];
  void *local_2c8 [2];
  void *local_2b8 [2];
  void *local_2a8 [2];
  void *local_298 [2];
  void *local_288 [2];
  void *local_278 [2];
  void *local_268 [2];
  void *local_258 [2];
  void *local_248 [2];
  void *local_238 [2];
  void *local_228 [2];
  char local_218 [16];
  undefined1 local_208 [64];
  char local_1c8 [128];
  char local_148 [264];
  
  lVar17 = *(longlong *)(param_3 + (longlong)param_4 * 8);
  *(undefined4 *)(param_1 + 1) = 0;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    *(undefined1 *)*param_1 = 0;
  }
  local_320 = &local_408;
  local_318 = local_208;
  local_res18[0] = 0;
  puVar11 = *(undefined8 **)(lVar17 + 0x18);
  local_310 = local_res18;
  local_308 = local_320;
  local_300 = local_318;
  local_2f8 = local_310;
  local_408 = param_1;
  local_res20 = param_4;
  if (puVar11 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    for (puVar18 = (undefined8 *)*puVar11; puVar18 != (undefined8 *)0x0;
        puVar18 = (undefined8 *)*puVar18) {
      puVar11 = puVar18;
    }
  }
joined_r0x000180002ee3:
  if (puVar11 != (undefined8 *)0x0) {
    FUN_180004770(&local_308,(char *)puVar11[-2],(char *)puVar11[-1]);
    puVar18 = (undefined8 *)puVar11[2];
    if (puVar18 == (undefined8 *)0x0) {
      puVar18 = puVar11;
      puVar24 = (undefined8 *)puVar11[1];
      if ((undefined8 *)puVar11[1] == (undefined8 *)0x0) goto LAB_180002f53;
      do {
        puVar11 = puVar24;
        if (puVar18 != (undefined8 *)puVar24[2]) break;
        puVar11 = (undefined8 *)puVar24[1];
        puVar18 = puVar24;
        puVar24 = puVar11;
      } while (puVar11 != (undefined8 *)0x0);
    }
    else {
      for (puVar24 = (undefined8 *)*puVar18; puVar11 = puVar18, puVar24 != (undefined8 *)0x0;
          puVar24 = (undefined8 *)*puVar24) {
        puVar18 = puVar24;
      }
    }
    goto joined_r0x000180002ee3;
  }
LAB_180002f53:
  iVar20 = 0;
  if (0 < local_res18[0]) {
    do {
      sprintf(local_148,"V2P_STRUCT_NAME_DOT vtex%d");
      if (*local_408 == 0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)*local_408;
      }
      pcVar3 = strstr(pcVar3,local_148);
      if (pcVar3 != (char *)0x0) {
        pcVar4 = strstr(pcVar3,"\n");
        pcVar19 = "SWIZZLE1_0";
        pcVar3 = strstr(pcVar3,"SWIZZLE1_0");
        if (((pcVar3 != (char *)0x0) && (pcVar4 != (char *)0x0)) && (pcVar3 < pcVar4)) {
          memset(pcVar3,(int)CONCAT71((int7)((ulonglong)pcVar19 >> 8),0x20),
                 (longlong)pcVar4 - (longlong)pcVar3);
        }
      }
      iVar20 = iVar20 + 1;
      param_4 = local_res20;
    } while (iVar20 < local_res18[0]);
  }
  FUN_180005a10(local_408,"\n #undef HALF_ON\n");
  if (param_6 == '\0') {
    FUN_180005a10(local_408,"\n #define OPENGL_SHADER_REFLECTION 1\n");
  }
  pcVar3 = *(char **)(*(longlong *)(lVar17 + 8) + 0x20);
  pcVar4 = "";
  if (pcVar3 != (char *)0x0) {
    pcVar4 = pcVar3;
  }
  FUN_180005a10(local_408,pcVar4);
  local_3b0 = (longlong *)0x0;
  local_398 = (longlong *)0x0;
  if (*local_408 == 0) {
    puVar5 = &DAT_18000b7b4;
  }
  else {
    puVar5 = (undefined1 *)*local_408;
  }
  iVar20 = D3DPreprocess(puVar5,(int)local_408[1],0,0,0,&local_3b0,&local_398);
  if ((iVar20 < 0) || (local_3b0 == (longlong *)0x0)) {
    if (local_398 != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_5 + 0x28);
      lVar17 = *plVar14;
      uVar15 = (**(code **)(*local_398 + 0x18))();
      (**(code **)(lVar17 + 8))(plVar14,0xc000002d,"Cannot preprocess shader: %s",uVar15);
      uVar16 = (**(code **)(*local_398 + 0x10))();
      return uVar16 & 0xffffffffffffff00;
    }
    uVar16 = (**(code **)(**(longlong **)(param_5 + 0x28) + 8))
                       (*(longlong **)(param_5 + 0x28),0xc000002d,
                        "Cannot preprocess shader: Error log not available");
    return uVar16 & 0xffffffffffffff00;
  }
  if (local_398 != (longlong *)0x0) {
    (**(code **)(*local_398 + 0x10))();
  }
  *(undefined4 *)(local_408 + 1) = 0;
  if ((undefined1 *)*local_408 != (undefined1 *)0x0) {
    *(undefined1 *)*local_408 = 0;
  }
  FUN_180005a10(local_408,
                "#version 430\n  #define OPENGL_LAYOUT_BINDING 1\n  #define OPENGL_FLOAT_SWIZZLES 1\n  #define OPENGL_DECLARE_VERTEX_ID 1\n//#define OPENGL_AMD_SHADOW_HOOK 1\n//#define OPENGL_NO_SSBO 1\n"
               );
  if (param_4 == 1) {
    FUN_180005a10(local_408,"$if defined(OPENGL_DECLARE_VERTEX_ID)\n");
    FUN_180005a10(local_408,"in int gl_VertexID;\n");
    FUN_180005a10(local_408,"$endif\n");
    FUN_180005a10(local_408,"uniform int MorphTargetsSize;\n");
    FUN_180005a10(local_408,"out gl_PerVertex { vec4 gl_Position; };\n");
    FUN_180005a10(local_408,"uniform int GL_BaseVertex;");
  }
  FUN_180005a10(local_408,"\n");
  local_370 = 0;
  pcVar3 = malloc(0x201);
  *pcVar3 = '\0';
  local_3c0 = pcVar3;
  free((void *)0x0);
  pcVar19 = "UnknownConstantBufferType";
  local_36c = 0x200;
  pcVar4 = "0";
  switch(param_4) {
  case 0:
    pcVar19 = "PS_Constants";
    pcVar4 = "6";
    break;
  case 1:
    pcVar19 = "VS_Constants";
    pcVar4 = "5";
    break;
  case 2:
    pcVar19 = "GS_Constants";
    pcVar4 = "7";
    break;
  case 3:
    pcVar19 = "HS_Constants";
    pcVar4 = "8";
    break;
  case 4:
    pcVar19 = "DS_Constants";
    pcVar4 = "9";
    break;
  case 5:
    pcVar19 = "CS_Constants";
    pcVar4 = "10";
  }
  local_378 = pcVar3;
  if (param_6 == '\0') goto LAB_18000421b;
  local_348 = 0;
  puVar5 = malloc(0x65);
  *puVar5 = 0;
  free((void *)0x0);
  local_344 = 100;
  bVar28 = true;
  local_350 = puVar5;
  FUN_180005a10(local_408,"$if defined(OPENGL_LAYOUT_BINDING)\n");
  FUN_180005a10(local_408,"layout ( std140 , binding = ");
  FUN_180005a10(local_408,pcVar4);
  FUN_180005a10(local_408," ) uniform ");
  FUN_180005a10(local_408,pcVar19);
  FUN_180005a10(local_408,"\n$else\n");
  FUN_180005a10(local_408,"layout ( std140 ) uniform ");
  FUN_180005a10(local_408,pcVar19);
  FUN_180005a10(local_408,"\n$endif\n { \n");
  pcVar3 = (char *)(**(code **)(*local_3b0 + 0x18))();
  local_388 = 0;
  local_380 = pcVar3;
  puVar6 = malloc(0x65);
  *puVar6 = 0;
  free((void *)0x0);
  local_384 = 100;
  iVar20 = 0;
  iVar27 = 0;
  local_390 = puVar6;
  if (*pcVar3 == '\0') {
LAB_1800040d4:
    puVar6 = local_390;
    FUN_180005a10(local_408,"\tfloat PLACEHOLDER;\n");
  }
  else {
    do {
      pcVar4 = (char *)0x0;
      cVar2 = *pcVar3;
      local_3f8 = pcVar3;
      if (cVar2 == '\0') {
LAB_180003358:
        if (*local_3f8 != '\0') {
          local_3f8 = local_3f8 + 1;
        }
      }
      else {
        do {
          if (cVar2 == '\n') goto LAB_180003358;
          cVar2 = local_3f8[1];
          local_3f8 = local_3f8 + 1;
        } while (cVar2 != '\0');
      }
      pcVar19 = local_3f8;
      if (local_3f8 == (char *)0x0) {
        FUN_1800057d0(&local_378,pcVar3);
        local_3c0 = local_378;
        pcVar7 = local_378;
        uVar22 = local_370;
      }
      else {
        pcVar7 = pcVar3;
        pcVar10 = pcVar4;
        if ((int)local_3f8 == (int)pcVar3) {
LAB_1800033bf:
          uVar22 = (uint)pcVar10;
          pcVar7 = pcVar4;
        }
        else {
          do {
            if (*pcVar7 == '\0') break;
            uVar22 = (int)pcVar10 + 1;
            pcVar10 = (char *)(ulonglong)uVar22;
            pcVar7 = pcVar7 + 1;
          } while (uVar22 < (uint)((int)local_3f8 - (int)pcVar3));
          uVar22 = (uint)pcVar10;
          if (uVar22 == 0) goto LAB_1800033bf;
          pcVar7 = malloc((ulonglong)(uVar22 + 1));
          memcpy(pcVar7,pcVar3,(size_t)pcVar10);
          pcVar7[(longlong)pcVar10] = '\0';
        }
        free(local_3c0);
        local_3c0 = pcVar7;
        local_378 = pcVar7;
        local_370 = uVar22;
        local_36c = uVar22;
        free((void *)0x0);
      }
      iVar20 = strncmp(pcVar3,"uniform",7);
      pcVar3 = pcVar19;
      pcVar10 = pcVar19;
      if (iVar20 == 0) {
        pcVar8 = "";
        if (pcVar7 != (char *)0x0) {
          pcVar8 = pcVar7;
        }
        pcVar8 = strstr(pcVar8,"sampler");
        if (pcVar8 == (char *)0x0) {
          pcVar8 = "";
          if (pcVar7 != (char *)0x0) {
            pcVar8 = pcVar7;
          }
          pcVar8 = strstr(pcVar8,"int t_");
          if (pcVar8 == (char *)0x0) {
            pcVar8 = "";
            if (pcVar7 != (char *)0x0) {
              pcVar8 = pcVar7;
            }
            pcVar7 = strstr(pcVar8,"int T_");
            if (pcVar7 == (char *)0x0) {
              local_3b8 = (byte *)0x0;
              local_400 = (char *)0x0;
              local_3a8 = (char *)0x0;
              local_3a0 = (char *)0x0;
              if (param_2 != (char *)0x0) {
                local_358 = uVar22 - 9;
                uVar21 = 0;
                pcVar3 = pcVar4;
                local_3a0 = pcVar7;
                if (uVar22 < 9) {
                  free((void *)0x0);
                }
                else {
                  uVar21 = local_358;
                  if (local_358 == 0xffffffff) {
                    uVar21 = uVar22;
                  }
                  if (uVar22 < uVar21 + 8) {
                    uVar21 = uVar22 - 8;
                  }
                  pcVar7 = (char *)(ulonglong)uVar21;
                  pcVar19 = pcVar4;
                  if (uVar21 != 0) {
                    pcVar3 = malloc((ulonglong)(uVar21 + 1));
                    *pcVar3 = '\0';
                    free((void *)0x0);
                    memcpy(pcVar3,local_3c0 + 8,(size_t)pcVar7);
                    pcVar7[(longlong)pcVar3] = '\0';
                    pcVar19 = pcVar7;
                  }
                  uVar21 = (uint)pcVar19;
                  free((void *)0x0);
                }
                free((void *)0x0);
                free((void *)0x0);
                pcVar19 = "";
                if (pcVar3 != (char *)0x0) {
                  pcVar19 = pcVar3;
                }
                pcVar7 = strstr(pcVar19," ");
                pcVar19 = "";
                if (pcVar3 != (char *)0x0) {
                  pcVar19 = pcVar3;
                }
                iVar20 = (int)pcVar7;
                uVar23 = iVar20 - (int)pcVar19;
                local_3b8 = (byte *)0x0;
                if (uVar21 == 0) {
                  local_3b8 = (byte *)0x0;
                }
                else {
                  if (uVar23 == 0xffffffff) {
                    uVar23 = uVar21;
                  }
                  if (uVar21 < uVar23) {
                    uVar23 = uVar21;
                  }
                  if (uVar23 != 0) {
                    pbVar9 = malloc((ulonglong)(uVar23 + 1));
                    *pbVar9 = 0;
                    local_3b8 = pbVar9;
                    free((void *)0x0);
                    memcpy(pbVar9,pcVar3,(ulonglong)uVar23);
                    pbVar9[uVar23] = 0;
                  }
                }
                free((void *)0x0);
                free((void *)0x0);
                free((void *)0x0);
                pcVar19 = strstr(pcVar7 + 1," ");
                pcVar7 = strstr(pcVar7,"[");
                if ((pcVar7 < pcVar19) && (pcVar7 != (char *)0x0)) {
                  pcVar19 = pcVar7;
                }
                local_400 = (char *)0x0;
                pcVar7 = "";
                if (pcVar3 != (char *)0x0) {
                  pcVar7 = pcVar3;
                }
                uVar23 = ((int)pcVar19 - iVar20) - 1;
                uVar26 = (iVar20 - (int)pcVar7) + 1;
                if (uVar26 < uVar21) {
                  if (uVar23 == 0xffffffff) {
                    uVar23 = uVar21;
                  }
                  if (uVar21 < uVar26 + uVar23) {
                    uVar23 = uVar21 - uVar26;
                  }
                  pcVar19 = (char *)(ulonglong)uVar23;
                  if (uVar23 == 0) {
                    pcVar7 = (char *)0x0;
                  }
                  else {
                    pcVar7 = malloc((ulonglong)(uVar23 + 1));
                    *pcVar7 = '\0';
                    local_400 = pcVar7;
                    free((void *)0x0);
                    memcpy(pcVar7,pcVar3 + uVar26,(size_t)pcVar19);
                    pcVar19[(longlong)pcVar7] = '\0';
                    pcVar4 = pcVar19;
                  }
                }
                else {
                  pcVar7 = (char *)0x0;
                  local_400 = (char *)0x0;
                  pcVar4 = (char *)0x0;
                }
                free((void *)0x0);
                free(pcVar3);
                local_3a0 = (char *)CONCAT44((int)pcVar4,(int)pcVar4);
                local_3a8 = pcVar7;
                free((void *)0x0);
                pcVar10 = param_2;
                while( true ) {
                  pcVar3 = "";
                  if (pcVar7 != (char *)0x0) {
                    pcVar3 = pcVar7;
                  }
                  pcVar10 = strstr(pcVar10,pcVar3);
                  pcVar3 = local_3f8;
                  if (pcVar10 == (char *)0x0) {
                    puVar5 = (undefined1 *)0x0;
                    local_380 = local_3f8;
                    if (uVar22 < 9) {
                      local_360 = 0;
                    }
                    else {
                      uVar21 = local_358;
                      if (local_358 == 0xffffffff) {
                        uVar21 = uVar22;
                      }
                      if (uVar22 < uVar21 + 8) {
                        uVar21 = uVar22 - 8;
                      }
                      uVar22 = 0;
                      if (uVar21 != 0) {
                        puVar5 = malloc((ulonglong)(uVar21 + 1));
                        *puVar5 = 0;
                        free((void *)0x0);
                        memcpy(puVar5,local_3c0 + 8,(ulonglong)uVar21);
                        puVar5[uVar21] = 0;
                        uVar22 = uVar21;
                      }
                      local_360 = CONCAT44(uVar22,uVar22);
                    }
                    local_368 = puVar5;
                    free((void *)0x0);
                    plVar14 = FUN_180005d50((longlong *)local_288,"/**/ ",&local_368);
                    puVar11 = FUN_180005c50(plVar14,local_278,"\n");
                    FUN_180005960((longlong *)&local_350,puVar11);
                    free(local_278[0]);
                    local_278[0] = (void *)0x0;
                    free(local_288[0]);
                    local_288[0] = (void *)0x0;
                    free(puVar5);
                    local_368 = (undefined1 *)0x0;
                    free(local_400);
                    local_3a8 = (char *)0x0;
                    free(local_3b8);
                    pcVar19 = local_3f8;
                    pcVar10 = local_380;
                    goto LAB_1800040af;
                  }
                  pcVar19 = local_3f8;
                  if ((pcVar4[(longlong)pcVar10] == '[') || (pcVar4[(longlong)pcVar10] == ';'))
                  break;
                  pcVar10 = pcVar10 + 1;
                }
              }
              pcVar10 = local_400;
              puVar5 = (undefined1 *)0x0;
              pcVar3 = local_380 + 8;
              FUN_180005ae0(local_408,9);
              pcVar7 = local_400;
              if (local_3b8 == (byte *)0x0) {
joined_r0x00018000406d:
                for (; local_400 = pcVar7, pcVar3 != pcVar19; pcVar3 = pcVar3 + 1) {
                  FUN_180005ae0(local_408,*pcVar3);
                  pcVar7 = local_400;
                }
              }
              else {
                bVar28 = false;
                iVar20 = 0;
                bVar29 = true;
                lVar17 = 6;
                pbVar9 = local_3b8;
                pbVar25 = (byte *)"float";
                do {
                  if (lVar17 == 0) break;
                  lVar17 = lVar17 + -1;
                  bVar28 = *pbVar9 < *pbVar25;
                  bVar29 = *pbVar9 == *pbVar25;
                  pbVar9 = pbVar9 + 1;
                  pbVar25 = pbVar25 + 1;
                } while (bVar29);
                if (!bVar29) {
                  iVar20 = (1 - (uint)bVar28) - (uint)(bVar28 != 0);
                }
                iVar27 = (int)pcVar4;
                if (iVar20 == 0) {
                  local_330 = (undefined1 *)0x0;
                  local_324 = 0;
                  uVar22 = iVar27 + 0xc;
                  if (uVar22 != 0) {
                    puVar5 = malloc((ulonglong)(iVar27 + 0xd));
                    *puVar5 = 0;
                    free((void *)0x0);
                    local_330 = puVar5;
                    local_324 = uVar22;
                  }
                  puVar5 = local_330;
                  memcpy(local_330,"vec4 PATCH_1",0xc);
                  if (iVar27 != 0) {
                    memcpy(puVar5 + 0xc,pcVar10,(size_t)pcVar4);
                  }
                  if (uVar22 != 0) {
                    puVar5[uVar22] = 0;
                  }
                  local_328 = uVar22;
                  puVar11 = FUN_180005c50(&local_330,local_268,";\n");
                  FUN_180005960(local_408,puVar11);
                  free(local_268[0]);
                  local_268[0] = (void *)0x0;
                  free(puVar5);
                  uVar22 = 0;
                  local_330 = (undefined1 *)0x0;
                  local_340 = (undefined1 *)0x0;
                  local_334 = 0;
                  uVar21 = iVar27 + 6;
                  if (uVar21 != 0) {
                    puVar5 = malloc((ulonglong)(iVar27 + 7));
                    *puVar5 = 0;
                    free((void *)0x0);
                    local_340 = puVar5;
                    local_334 = uVar21;
                  }
                  puVar5 = local_340;
                  memcpy(local_340,"float ",6);
                  if (iVar27 != 0) {
                    memcpy(puVar5 + 6,pcVar10,(size_t)pcVar4);
                  }
                  if (uVar21 != 0) {
                    puVar5[uVar21] = 0;
                  }
                  local_338 = uVar21;
                  ppuVar12 = (undefined1 **)FUN_180005c50(&local_340,local_2b8," = PATCH_1");
                  uVar21 = 0;
                  uVar23 = iVar27 + *(int *)(ppuVar12 + 1);
                  local_3f0 = (undefined1 *)0x0;
                  local_3e8 = 0;
                  if (uVar23 != 0) {
                    puVar6 = malloc((ulonglong)(uVar23 + 1));
                    *puVar6 = 0;
                    free((void *)0x0);
                    local_3e8 = CONCAT44(uVar23,(undefined4)local_3e8);
                    uVar22 = uVar23;
                    local_3f0 = puVar6;
                  }
                  puVar6 = local_3f0;
                  if (&local_3f0 != ppuVar12) {
                    uVar23 = *(uint *)(ppuVar12 + 1);
                    if (uVar23 == 0) {
                      free(local_3f0);
                      puVar6 = (undefined1 *)0x0;
                      local_3f0 = (undefined1 *)0x0;
                      uVar22 = 0;
                      local_3e8 = 0;
                    }
                    else if (uVar22 < uVar23) {
                      free(local_3f0);
                      uVar22 = *(uint *)(ppuVar12 + 1);
                      local_3e8 = CONCAT44(uVar22,uVar22);
                      puVar6 = malloc((ulonglong)(uVar22 + 1));
                      local_3f0 = puVar6;
                      memcpy(puVar6,*ppuVar12,(ulonglong)(uVar22 + 1));
                      uVar21 = uVar22;
                    }
                    else {
                      local_3e8 = CONCAT44(local_3e8._4_4_,uVar23);
                      memcpy(local_3f0,*ppuVar12,(ulonglong)(uVar23 + 1));
                      uVar21 = uVar23;
                    }
                  }
                  pcVar7 = local_400;
                  if (iVar27 != 0) {
                    uVar23 = uVar21 + iVar27;
                    puVar13 = puVar6;
                    if (uVar22 < uVar23) {
                      puVar13 = malloc((ulonglong)(uVar23 + 1));
                      if (uVar21 == 0) {
                        *puVar13 = 0;
                      }
                      else {
                        memcpy(puVar13,puVar6,(ulonglong)(uVar21 + 1));
                      }
                      free(puVar6);
                      local_3e8 = CONCAT44(uVar23,(undefined4)local_3e8);
                      local_3f0 = puVar13;
                    }
                    pcVar7 = local_400;
                    memcpy(puVar13 + uVar21,local_400,(ulonglong)(iVar27 + 1));
                    local_3e8 = CONCAT44(local_3e8._4_4_,uVar23);
                    puVar6 = puVar13;
                  }
                  puVar11 = FUN_180005c50(&local_3f0,local_258,".x;\n");
                  FUN_180005960((longlong *)&local_390,puVar11);
                  free(local_258[0]);
                  local_258[0] = (void *)0x0;
                  free(puVar6);
                  local_3f0 = (undefined1 *)0x0;
                  free(local_2b8[0]);
                  local_2b8[0] = (void *)0x0;
                  free(puVar5);
                  local_340 = (undefined1 *)0x0;
                  pcVar19 = local_3f8;
                }
                else {
                  bVar28 = false;
                  iVar20 = 0;
                  bVar29 = true;
                  lVar17 = 5;
                  pbVar9 = local_3b8;
                  pbVar25 = &DAT_18000b324;
                  do {
                    if (lVar17 == 0) break;
                    lVar17 = lVar17 + -1;
                    bVar28 = *pbVar9 < *pbVar25;
                    bVar29 = *pbVar9 == *pbVar25;
                    pbVar9 = pbVar9 + 1;
                    pbVar25 = pbVar25 + 1;
                  } while (bVar29);
                  if (!bVar29) {
                    iVar20 = (1 - (uint)bVar28) - (uint)(bVar28 != 0);
                  }
                  uVar22 = 0;
                  if (iVar20 == 0) {
                    plVar14 = FUN_180005d50((longlong *)local_298,"vec4 PATCH_2",&local_3a8);
                    puVar11 = FUN_180005c50(plVar14,local_228,";\n");
                    FUN_180005960(local_408,puVar11);
                    free(local_228[0]);
                    local_228[0] = (void *)0x0;
                    free(local_298[0]);
                    local_298[0] = (void *)0x0;
                    plVar14 = FUN_180005d50((longlong *)local_248,"vec2 ",&local_3a8);
                    ppuVar12 = (undefined1 **)FUN_180005c50(plVar14,local_2e8," = PATCH_2");
                    uVar21 = iVar27 + *(int *)(ppuVar12 + 1);
                    local_3d0 = (undefined1 *)0x0;
                    local_3c8 = 0;
                    local_3c4 = 0;
                    puVar6 = puVar5;
                    if (uVar21 != 0) {
                      puVar13 = malloc((ulonglong)(uVar21 + 1));
                      *puVar13 = 0;
                      free((void *)0x0);
                      puVar6 = (undefined1 *)(ulonglong)uVar21;
                      local_3d0 = puVar13;
                      local_3c4 = uVar21;
                    }
                    puVar13 = local_3d0;
                    uVar21 = (uint)puVar6;
                    if (&local_3d0 != ppuVar12) {
                      uVar23 = *(uint *)(ppuVar12 + 1);
                      if (uVar23 == 0) {
                        free(local_3d0);
                        local_3d0 = (undefined1 *)0x0;
                        local_3c8 = 0;
                        local_3c4 = 0;
                        puVar13 = puVar5;
                        uVar21 = uVar22;
                        uVar22 = 0;
                      }
                      else if (uVar21 < uVar23) {
                        free(local_3d0);
                        uVar21 = *(uint *)(ppuVar12 + 1);
                        local_3c8 = uVar21;
                        local_3c4 = uVar21;
                        puVar13 = malloc((ulonglong)(uVar21 + 1));
                        local_3d0 = puVar13;
                        memcpy(puVar13,*ppuVar12,(ulonglong)(uVar21 + 1));
                        uVar22 = uVar21;
                      }
                      else {
                        local_3c8 = uVar23;
                        memcpy(local_3d0,*ppuVar12,(ulonglong)(uVar23 + 1));
                        uVar22 = uVar23;
                      }
                    }
                    pcVar7 = local_400;
                    if (iVar27 != 0) {
                      uVar23 = uVar22 + iVar27;
                      puVar5 = puVar13;
                      if (uVar21 < uVar23) {
                        puVar5 = malloc((ulonglong)(uVar23 + 1));
                        if (uVar22 == 0) {
                          *puVar5 = 0;
                        }
                        else {
                          memcpy(puVar5,puVar13,(ulonglong)(uVar22 + 1));
                        }
                        free(puVar13);
                        local_3d0 = puVar5;
                        local_3c4 = uVar23;
                      }
                      pcVar7 = local_400;
                      memcpy(puVar5 + uVar22,local_400,(ulonglong)(iVar27 + 1));
                      puVar13 = puVar5;
                      local_3c8 = uVar23;
                    }
                    puVar11 = FUN_180005c50(&local_3d0,local_238,".xy;\n");
                    FUN_180005960((longlong *)&local_390,puVar11);
                    free(local_238[0]);
                    local_238[0] = (void *)0x0;
                    free(puVar13);
                    local_3d0 = (undefined1 *)0x0;
                    free(local_2e8[0]);
                    local_2e8[0] = (void *)0x0;
                    free(local_248[0]);
                    local_248[0] = (void *)0x0;
                    pcVar19 = local_3f8;
                  }
                  else {
                    bVar28 = false;
                    iVar20 = 0;
                    bVar29 = true;
                    lVar17 = 5;
                    pbVar9 = local_3b8;
                    pbVar25 = &DAT_18000a830;
                    do {
                      if (lVar17 == 0) break;
                      lVar17 = lVar17 + -1;
                      bVar28 = *pbVar9 < *pbVar25;
                      bVar29 = *pbVar9 == *pbVar25;
                      pbVar9 = pbVar9 + 1;
                      pbVar25 = pbVar25 + 1;
                    } while (bVar29);
                    if (!bVar29) {
                      iVar20 = (1 - (uint)bVar28) - (uint)(bVar28 != 0);
                    }
                    if (iVar20 != 0) goto joined_r0x00018000406d;
                    plVar14 = FUN_180005d50((longlong *)local_2c8,"vec4 PATCH_3",&local_3a8);
                    puVar11 = FUN_180005c50(plVar14,local_2d8,";\n");
                    FUN_180005960(local_408,puVar11);
                    free(local_2d8[0]);
                    local_2d8[0] = (void *)0x0;
                    free(local_2c8[0]);
                    local_2c8[0] = (void *)0x0;
                    plVar14 = FUN_180005d50((longlong *)&local_320,"vec3 ",&local_3a8);
                    ppuVar12 = (undefined1 **)FUN_180005c50(plVar14,&local_308," = PATCH_3");
                    uVar21 = iVar27 + *(int *)(ppuVar12 + 1);
                    local_3e0 = (undefined1 *)0x0;
                    local_3d8 = 0;
                    local_3d4 = 0;
                    puVar6 = puVar5;
                    if (uVar21 != 0) {
                      puVar13 = malloc((ulonglong)(uVar21 + 1));
                      *puVar13 = 0;
                      free((void *)0x0);
                      puVar6 = (undefined1 *)(ulonglong)uVar21;
                      local_3e0 = puVar13;
                      local_3d4 = uVar21;
                    }
                    puVar13 = local_3e0;
                    uVar21 = (uint)puVar6;
                    if (&local_3e0 != ppuVar12) {
                      uVar23 = *(uint *)(ppuVar12 + 1);
                      if (uVar23 == 0) {
                        free(local_3e0);
                        local_3e0 = (undefined1 *)0x0;
                        local_3d8 = 0;
                        local_3d4 = 0;
                        puVar13 = puVar5;
                        uVar21 = uVar22;
                      }
                      else if (uVar21 < uVar23) {
                        free(local_3e0);
                        uVar22 = *(uint *)(ppuVar12 + 1);
                        local_3d8 = uVar22;
                        local_3d4 = uVar22;
                        puVar13 = malloc((ulonglong)(uVar22 + 1));
                        local_3e0 = puVar13;
                        memcpy(puVar13,*ppuVar12,(ulonglong)(uVar22 + 1));
                        uVar21 = uVar22;
                      }
                      else {
                        local_3d8 = uVar23;
                        memcpy(local_3e0,*ppuVar12,(ulonglong)(uVar23 + 1));
                        uVar22 = uVar23;
                      }
                    }
                    pcVar7 = local_400;
                    if (iVar27 != 0) {
                      uVar23 = uVar22 + iVar27;
                      puVar5 = puVar13;
                      if (uVar21 < uVar23) {
                        puVar5 = malloc((ulonglong)(uVar23 + 1));
                        if (uVar22 == 0) {
                          *puVar5 = 0;
                        }
                        else {
                          memcpy(puVar5,puVar13,(ulonglong)(uVar22 + 1));
                        }
                        free(puVar13);
                        local_3e0 = puVar5;
                        local_3d4 = uVar23;
                      }
                      pcVar7 = local_400;
                      memcpy(puVar5 + uVar22,local_400,(ulonglong)(iVar27 + 1));
                      puVar13 = puVar5;
                      local_3d8 = uVar23;
                    }
                    puVar11 = FUN_180005c50(&local_3e0,local_2a8,".xyz;\n");
                    FUN_180005960((longlong *)&local_390,puVar11);
                    free(local_2a8[0]);
                    local_2a8[0] = (void *)0x0;
                    free(puVar13);
                    local_3e0 = (undefined1 *)0x0;
                    free(local_308);
                    local_308 = (longlong **)0x0;
                    free(local_320);
                    local_320 = (longlong **)0x0;
                    pcVar19 = local_3f8;
                  }
                }
              }
              bVar28 = false;
              free(pcVar7);
              local_3a8 = (char *)0x0;
              free(local_3b8);
              pcVar3 = pcVar19;
              pcVar10 = pcVar19;
            }
          }
        }
      }
LAB_1800040af:
      local_380 = pcVar10;
    } while (*pcVar19 != '\0');
    puVar6 = local_390;
    puVar5 = local_350;
    iVar20 = local_348;
    iVar27 = local_388;
    if (bVar28) goto LAB_1800040d4;
  }
  FUN_180005a10(local_408,"} ;\n//   Unused variables:\n");
  plVar14 = local_408;
  if (iVar20 != 0) {
    uVar22 = (int)local_408[1] + iVar20;
    if (*(uint *)((longlong)local_408 + 0xc) < uVar22) {
      puVar13 = malloc((ulonglong)(uVar22 + 1));
      if ((int)plVar14[1] == 0) {
        *puVar13 = 0;
      }
      else {
        memcpy(puVar13,(void *)*plVar14,(ulonglong)((int)plVar14[1] + 1));
      }
      free((void *)*plVar14);
      *plVar14 = (longlong)puVar13;
      *(uint *)((longlong)plVar14 + 0xc) = uVar22;
    }
    memcpy((void *)((ulonglong)*(uint *)(plVar14 + 1) + *plVar14),puVar5,(ulonglong)(iVar20 + 1));
    *(int *)(plVar14 + 1) = (int)plVar14[1] + iVar20;
  }
  FUN_180005a10(local_408,"\n");
  FUN_180005a10(local_408,"//   Patches:\n");
  plVar14 = local_408;
  if (iVar27 != 0) {
    iVar20 = (int)local_408[1];
    uVar22 = iVar20 + iVar27;
    if (*(uint *)((longlong)local_408 + 0xc) < uVar22) {
      puVar13 = malloc((ulonglong)(uVar22 + 1));
      if (iVar20 == 0) {
        *puVar13 = 0;
      }
      else {
        memcpy(puVar13,(void *)*plVar14,(ulonglong)(iVar20 + 1));
      }
      free((void *)*plVar14);
      *plVar14 = (longlong)puVar13;
      *(uint *)((longlong)plVar14 + 0xc) = uVar22;
    }
    memcpy((void *)((ulonglong)*(uint *)(plVar14 + 1) + *plVar14),puVar6,(ulonglong)(iVar27 + 1));
    *(int *)(plVar14 + 1) = (int)plVar14[1] + iVar27;
  }
  FUN_180005a10(local_408,"\n");
  free(puVar6);
  free(puVar5);
  param_4 = local_res20;
LAB_18000421b:
  pcVar19 = (char *)0x0;
  pcVar3 = (char *)(**(code **)(*local_3b0 + 0x18))();
  pcVar4 = strstr(pcVar3,"void main");
  cVar2 = *pcVar3;
joined_r0x000180004247:
  if (cVar2 == '\0') {
    FUN_180005ae0(local_408,0);
    if (param_4 == 1) {
      uVar16 = (ulonglong)((int)local_408[1] - 1);
      cVar2 = *(char *)(uVar16 + *local_408);
      while (cVar2 != '}') {
        uVar16 = (ulonglong)((int)uVar16 - 1);
        cVar2 = *(char *)(uVar16 + *local_408);
      }
      FUN_1800058b0(local_408,uVar16);
      FUN_180005a10(local_408,"\n\tgl_Position.y *= -1;\n}");
    }
    lVar17 = local_408[1];
    if (0 < (int)lVar17) {
      do {
        pcVar3 = pcVar19 + *local_408;
        cVar2 = *pcVar3;
        if (*pcVar3 == '$') {
          cVar2 = '#';
        }
        uVar22 = (int)pcVar19 + 1;
        pcVar19 = (char *)(ulonglong)uVar22;
        *pcVar3 = cVar2;
      } while ((int)uVar22 < (int)lVar17);
    }
    (**(code **)(*local_3b0 + 0x10))();
    free(local_3c0);
    return CONCAT71((int7)((ulonglong)extraout_RAX_00 >> 8),1);
  }
  pcVar7 = pcVar3;
  cVar1 = cVar2;
  if (cVar2 == '\0') {
LAB_180004271:
    if (*pcVar7 != '\0') {
      pcVar7 = pcVar7 + 1;
    }
  }
  else {
    do {
      if (cVar1 == '\n') goto LAB_180004271;
      pcVar10 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
      cVar1 = *pcVar10;
    } while (*pcVar10 != '\0');
  }
  if (pcVar3 == pcVar7) {
    pcVar7 = pcVar3 + 1;
  }
  else if (cVar2 == ';') {
    pcVar7 = pcVar3 + 1;
  }
  else {
    if ((pcVar3 < pcVar4) &&
       ((iVar20 = strncmp(pcVar3,"float",5), pcVar10 = pcVar3, iVar20 == 0 ||
        (iVar20 = strncmp(pcVar3,"vec",3), iVar20 == 0)))) {
      do {
        if ((*pcVar10 == '(') || (*pcVar10 == ')')) goto LAB_180004389;
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 != pcVar7);
      pcVar10 = pcVar3;
      pcVar8 = pcVar19;
      _Memory = pcVar19;
      if ((int)pcVar7 == (int)pcVar3) {
LAB_180004360:
        pcVar10 = "";
      }
      else {
        do {
          if (*pcVar10 == '\0') break;
          uVar22 = (int)pcVar8 + 1;
          pcVar8 = (char *)(ulonglong)uVar22;
          pcVar10 = pcVar10 + 1;
        } while (uVar22 < (uint)((int)pcVar7 - (int)pcVar3));
        if ((int)pcVar8 == 0) goto LAB_180004360;
        pcVar10 = malloc((ulonglong)((int)pcVar8 + 1));
        memcpy(pcVar10,pcVar3,(size_t)pcVar8);
        pcVar8[(longlong)pcVar10] = '\0';
        _Memory = pcVar10;
        if (pcVar10 == (char *)0x0) goto LAB_180004360;
      }
      pcVar10 = strstr(pcVar10,"float TIME");
      if (pcVar10 == (char *)0x0) {
        sprintf(local_1c8,
                "Found global variable which is not uniform. Did you forget to use CONST_FLOAT? : %s"
               );
        (**(code **)(**(longlong **)(param_5 + 0x28) + 0x18))
                  (*(longlong **)(param_5 + 0x28),0xc800003a,local_1c8);
        if (local_3b0 != (longlong *)0x0) {
          (**(code **)(*local_3b0 + 0x10))();
        }
        free(_Memory);
        free(local_3c0);
        return extraout_RAX & 0xffffffffffffff00;
      }
      free(_Memory);
    }
LAB_180004389:
    iVar20 = strncmp(pcVar3,"#line",5);
    if ((iVar20 != 0) &&
       ((param_6 == '\0' ||
        ((((iVar20 = strncmp(pcVar3,"uniform mat",0xb), iVar20 != 0 &&
           (iVar20 = strncmp(pcVar3,"uniform vec3",0xc), iVar20 != 0)) &&
          (iVar20 = strncmp(pcVar3,"uniform vec4",0xc), iVar20 != 0)) &&
         (((iVar20 = strncmp(pcVar3,"uniform vec2",0xc), iVar20 != 0 &&
           (iVar20 = strncmp(pcVar3,"uniform float",0xd), iVar20 != 0)) &&
          ((iVar20 = strncmp(pcVar3,"uniform ivec3",0xd), iVar20 != 0 &&
           ((iVar20 = strncmp(pcVar3,"uniform ivec4",0xd), iVar20 != 0 &&
            (iVar20 = strncmp(pcVar3,"uniform ivec2",0xd), iVar20 != 0)))))))))))) {
      iVar20 = strncmp(pcVar3,"uniform sampler",0xf);
      pcVar10 = pcVar3;
      if (iVar20 == 0) {
        sprintf(local_218,"%d");
        FUN_180005a10(local_408,"$if defined(OPENGL_LAYOUT_BINDING)\n");
        FUN_180005a10(local_408,"layout(binding=");
        FUN_180005a10(local_408,local_218);
        FUN_180005a10(local_408,") ");
        do {
          FUN_180005ae0(local_408,*pcVar10);
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 != pcVar7);
        FUN_180005a10(local_408,"$else\n");
        do {
          FUN_180005ae0(local_408,*pcVar3);
          pcVar3 = pcVar3 + 1;
        } while (pcVar3 != pcVar7);
        FUN_180005a10(local_408,"$endif\n");
      }
      else {
        for (; pcVar10 < pcVar7; pcVar10 = pcVar10 + 1) {
          cVar2 = *pcVar10;
          if ((((cVar2 != ' ') && (cVar2 != '\t')) && (cVar2 != '\n')) && (cVar2 != '\a'))
          goto LAB_1800045a0;
        }
      }
    }
  }
  goto LAB_1800045b8;
LAB_1800045a0:
  do {
    FUN_180005ae0(local_408,*pcVar3);
    pcVar3 = pcVar3 + 1;
  } while (pcVar3 != pcVar7);
LAB_1800045b8:
  cVar2 = *pcVar7;
  pcVar3 = pcVar7;
  param_4 = local_res20;
  goto joined_r0x000180004247;
}



// WARNING: Removing unreachable block (ram,0x0001800047b7)

void FUN_180004770(undefined8 *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  void *_Dst;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  char *pcVar6;
  void *pvVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 uVar10;
  void *local_68;
  uint local_60;
  uint local_5c;
  void *local_58 [2];
  void *local_48 [2];
  void *local_38 [2];
  void *local_28 [2];
  
  _Dst = (void *)0x0;
  pcVar2 = "#define ";
  pvVar7 = _Dst;
  do {
    local_60 = (uint)pvVar7;
    if (*pcVar2 == '\0') break;
    local_60 = local_60 + 1;
    pvVar7 = (void *)(ulonglong)local_60;
    pcVar2 = pcVar2 + 1;
  } while (local_60 != 0xffffffff);
  uVar8 = (ulonglong)local_60;
  local_5c = local_60;
  if (local_60 == 0) {
    local_68 = (void *)0x0;
  }
  else {
    _Dst = malloc((ulonglong)(local_60 + 1));
    local_68 = _Dst;
    memcpy(_Dst,"#define ",uVar8);
    *(undefined1 *)(uVar8 + (longlong)_Dst) = 0;
  }
  uVar10 = param_3 == (char *)0x0;
  pcVar2 = "";
  if (!(bool)uVar10) {
    pcVar2 = param_3;
  }
  puVar3 = FUN_180005c50(&local_68,local_28,param_2);
  puVar3 = FUN_180005c50(puVar3,local_38," ");
  puVar3 = FUN_180005c50(puVar3,local_48,pcVar2);
  puVar3 = FUN_180005c50(puVar3,local_58,"\n");
  FUN_180005960(*(longlong **)*param_1,puVar3);
  free(local_58[0]);
  local_58[0] = (void *)0x0;
  free(local_48[0]);
  local_48[0] = (void *)0x0;
  free(local_38[0]);
  local_38[0] = (void *)0x0;
  free(local_28[0]);
  local_28[0] = (void *)0x0;
  free(_Dst);
  lVar4 = 6;
  pcVar6 = pcVar2;
  pcVar9 = "FLOAT";
  do {
    if (lVar4 == 0) break;
    lVar4 = lVar4 + -1;
    uVar10 = *pcVar6 == *pcVar9;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  } while ((bool)uVar10);
  if (!(bool)uVar10) {
    lVar4 = 6;
    pcVar6 = "float";
    do {
      if (lVar4 == 0) break;
      lVar4 = lVar4 + -1;
      uVar10 = *pcVar2 == *pcVar6;
      pcVar2 = pcVar2 + 1;
      pcVar6 = pcVar6 + 1;
    } while ((bool)uVar10);
    if (!(bool)uVar10) {
      return;
    }
  }
  uVar8 = 0xffffffffffffffff;
  pcVar2 = param_2;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8 - 2;
  uVar5 = (uint)uVar8;
  lVar4 = (longlong)(int)uVar5;
  if (0 < (int)uVar5) {
    do {
      uVar5 = (uint)uVar8;
      if (param_2[lVar4] == '_') break;
      lVar4 = lVar4 + -1;
      uVar5 = uVar5 - 1;
      uVar8 = (ulonglong)uVar5;
    } while (0 < lVar4);
  }
  sscanf(param_2 + (int)(uVar5 + 1),"%d");
  *(int *)param_1[2] = *(int *)param_1[2] + 1;
  return;
}



// WARNING: Removing unreachable block (ram,0x000180004a18)
// WARNING: Removing unreachable block (ram,0x000180004b47)

bool FUN_180004940(longlong param_1,char *param_2,undefined4 param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *local_res10;
  int local_res18 [2];
  int local_res20 [2];
  int local_48;
  int local_44 [3];
  
  pcVar4 = (char *)0x0;
  *param_4 = 0;
  switch(param_3) {
  case 0:
    uVar5 = 0x8b30;
    break;
  default:
    uVar5 = 0x8b31;
    break;
  case 2:
    uVar5 = 0x8dd9;
    break;
  case 3:
    uVar5 = 0x8e88;
    break;
  case 4:
    uVar5 = 0x8e87;
    break;
  case 5:
    uVar5 = 0x91b9;
  }
  local_res10 = param_2;
  uVar2 = (**(code **)__glewCreateShader_exref)(uVar5);
  (**(code **)__glewShaderSource_exref)(uVar2,1,&local_res10);
  (**(code **)__glewCompileShader_exref)(uVar2);
  local_48 = 0;
  (**(code **)__glewGetShaderiv_exref)(uVar2,0x8b81,&local_48);
  local_res18[0] = 0;
  (**(code **)__glewGetShaderiv_exref)(uVar2,0x8b84,local_res18);
  if (local_res18[0] != -1) {
    pcVar4 = malloc((ulonglong)(local_res18[0] + 2));
    *pcVar4 = '\0';
    free((void *)0x0);
  }
  local_res20[0] = 0;
  if (pcVar4 == (char *)0x0) {
    pcVar4 = malloc(1);
    *pcVar4 = '\0';
  }
  (**(code **)__glewGetShaderInfoLog_exref)(uVar2,local_res18[0],local_res20,pcVar4);
  if (local_res20[0] != 0) {
    pcVar6 = "";
    if (pcVar4 != (char *)0x0) {
      pcVar6 = pcVar4;
    }
    FUN_1800055e0(param_3,*(char **)(param_1 + 0x40),local_res10,pcVar6);
    pcVar6 = "";
    if (pcVar4 != (char *)0x0) {
      pcVar6 = pcVar4;
    }
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))
              (*(longlong **)(param_1 + 0x28),0x80000002,pcVar6);
  }
  free(pcVar4);
  if (local_48 == 0) {
    (**(code **)__glewDeleteShader_exref)(uVar2);
    bVar1 = false;
  }
  else {
    uVar3 = (**(code **)__glewCreateProgram_exref)();
    (**(code **)__glewAttachShader_exref)(uVar3,uVar2);
    (**(code **)__glewLinkProgram_exref)(uVar3);
    (**(code **)__glewDetachShader_exref)(uVar3,uVar2);
    (**(code **)__glewDeleteShader_exref)(uVar2);
    local_44[0] = 0;
    (**(code **)__glewGetProgramiv_exref)(uVar3,0x8b82,local_44);
    local_res18[0] = 0;
    (**(code **)__glewGetProgramiv_exref)(uVar3,0x8b84,local_res18);
    pcVar4 = (char *)0x0;
    if (local_res18[0] != -1) {
      pcVar4 = malloc((ulonglong)(local_res18[0] + 2));
      *pcVar4 = '\0';
      free((void *)0x0);
    }
    local_res20[0] = 0;
    if (pcVar4 == (char *)0x0) {
      pcVar4 = malloc(1);
      *pcVar4 = '\0';
    }
    (**(code **)__glewGetProgramInfoLog_exref)(uVar3,local_res18[0],local_res20,pcVar4);
    if (local_res20[0] != 0) {
      pcVar6 = "";
      if (pcVar4 != (char *)0x0) {
        pcVar6 = pcVar4;
      }
      FUN_1800055e0(param_3,*(char **)(param_1 + 0x40),local_res10,pcVar6);
      pcVar6 = "";
      if (pcVar4 != (char *)0x0) {
        pcVar6 = pcVar4;
      }
      (**(code **)(**(longlong **)(param_1 + 0x28) + 8))
                (*(longlong **)(param_1 + 0x28),0x80000002,pcVar6);
    }
    free(pcVar4);
    if (local_44[0] == 0) {
      (**(code **)__glewDeleteProgram_exref)(uVar3);
      bVar1 = false;
    }
    else {
      *param_4 = uVar3;
      bVar1 = true;
    }
  }
  return bVar1;
}



// WARNING: Type propagation algorithm not settling

ulonglong FUN_180004c20(longlong param_1,longlong *param_2,undefined4 param_3,longlong *param_4)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined1 *_Dst;
  char *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  int *piVar7;
  uint local_res10 [2];
  uint local_38;
  int local_34 [3];
  
  pcVar4 = "";
  if ((char *)*param_2 != (char *)0x0) {
    pcVar4 = (char *)*param_2;
  }
  local_38 = 0;
  bVar2 = FUN_180004940(param_1,pcVar4,param_3,&local_38);
  if (!bVar2) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))
                      (*(longlong **)(param_1 + 0x28),0xc000002d,
                       "Failed to compile shader to get active uniforms");
    return uVar3 & 0xffffffffffffff00;
  }
  if (*(uint *)((longlong)param_4 + 0xc) < 0x400) {
    _Dst = malloc(0x401);
    if ((int)param_4[1] == 0) {
      *_Dst = 0;
    }
    else {
      memcpy(_Dst,(void *)*param_4,(ulonglong)((int)param_4[1] + 1));
    }
    free((void *)*param_4);
    *param_4 = (longlong)_Dst;
    *(undefined4 *)((longlong)param_4 + 0xc) = 0x400;
  }
  FUN_180005a10(param_4,"//");
  uVar1 = local_38;
  local_res10[0] = 0;
  (**(code **)__glewGetProgramiv_exref)(local_38,0x8b86,local_res10);
  if (local_res10[0] != 0) {
    local_38 = 0;
    local_34[2] = 0;
    (**(code **)__glewGetProgramiv_exref)(uVar1,0x8b87,&local_38);
    uVar3 = (ulonglong)(int)local_38;
    pcVar4 = malloc(uVar3);
    uVar6 = 0;
    if (local_res10[0] != 0) {
      do {
        local_34[1] = 0;
        local_34[0] = 0;
        (**(code **)__glewGetActiveUniform_exref)
                  (uVar1,uVar6,uVar3 & 0xffffffff,local_34 + 2,local_34 + 1,local_34,pcVar4);
        piVar7 = &DAT_1800168d0;
        do {
          if (*piVar7 == local_34[0]) goto LAB_180004ddc;
          piVar7 = piVar7 + 1;
        } while ((longlong)piVar7 < 0x180016940);
        FUN_180005b80(param_4,pcVar4,0xffffffff);
        FUN_180005a10(param_4,";");
LAB_180004ddc:
        uVar6 = uVar6 + 1;
        if (local_res10[0] <= uVar6) break;
        uVar3 = (ulonglong)local_38;
      } while( true );
    }
    free(pcVar4);
  }
  uVar5 = (**(code **)__glewDeleteProgram_exref)(uVar1);
  return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
}



// WARNING: Removing unreachable block (ram,0x000180005070)
// WARNING: Removing unreachable block (ram,0x000180004ecb)
// WARNING: Removing unreachable block (ram,0x000180004f75)
// WARNING: Removing unreachable block (ram,0x0001800050e3)

undefined8
FUN_180004e30(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
             longlong *param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined1 *_Dst;
  char *pcVar4;
  byte *_Dst_00;
  byte *pbVar5;
  byte *pbVar6;
  byte *_Dst_01;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 extraout_RAX;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  byte *pbVar15;
  byte *local_68;
  uint local_60;
  uint local_5c;
  void *local_58 [2];
  char local_48 [32];
  
  puVar10 = (uint *)&DAT_18000b7b4;
  if ((uint *)*param_3 != (uint *)0x0) {
    puVar10 = (uint *)*param_3;
  }
  FUN_1800068b0(0x811c9dc5,puVar10,*(uint *)(param_3 + 1));
  sprintf(local_48,"//HASH:%d");
  (**(code **)(**(longlong **)(param_2 + 0x28) + 0x18))
            (*(longlong **)(param_2 + 0x28),0x40000003,local_48);
  lVar9 = -1;
  pcVar4 = local_48;
  do {
    if (lVar9 == 0) break;
    lVar9 = lVar9 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar11 = ~(uint)lVar9 + *(int *)(param_4 + 1) + 9 + (int)param_3[1];
  if (*(uint *)((longlong)param_5 + 0xc) < uVar11) {
    _Dst = malloc((ulonglong)(uVar11 + 1));
    if ((int)param_5[1] == 0) {
      *_Dst = 0;
    }
    else {
      memcpy(_Dst,(void *)*param_5,(ulonglong)((int)param_5[1] + 1));
    }
    free((void *)*param_5);
    *param_5 = (longlong)_Dst;
    *(uint *)((longlong)param_5 + 0xc) = uVar11;
  }
  FUN_180005a10(param_5,local_48);
  FUN_180005a10(param_5,"\n");
  FUN_180005960(param_5,param_4);
  FUN_180005a10(param_5,"\n\n");
  FUN_180005960(param_5,param_3);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  _Dst_01 = (byte *)0x0;
  pcVar4 = local_48;
  pbVar6 = _Dst_01;
  do {
    if (*pcVar4 == '\0') break;
    uVar11 = (int)pbVar6 + 1;
    pbVar6 = (byte *)(ulonglong)uVar11;
    pcVar4 = pcVar4 + 1;
  } while (uVar11 != 0xffffffff);
  iVar12 = (int)pbVar6;
  _Dst_00 = _Dst_01;
  if (iVar12 != 0) {
    _Dst_00 = malloc((ulonglong)(iVar12 + 1));
    memcpy(_Dst_00,local_48,(size_t)pbVar6);
    pbVar6[(longlong)_Dst_00] = 0;
  }
  pbVar6 = *(byte **)(param_1 + 0x58);
  pbVar15 = _Dst_01;
  if (pbVar6 != (byte *)0x0) {
    do {
      pbVar5 = *(byte **)(pbVar6 + -0x20);
      iVar13 = 0;
      if ((pbVar5 == (byte *)0x0) || (_Dst_00 == (byte *)0x0)) {
        iVar3 = *(int *)(pbVar6 + -0x18) - iVar12;
      }
      else {
        lVar9 = (longlong)_Dst_00 - (longlong)pbVar5;
        do {
          bVar2 = *pbVar5;
          if (bVar2 != pbVar5[lVar9]) {
            uVar11 = (uint)(bVar2 < pbVar5[lVar9]);
            iVar3 = (1 - uVar11) - (uint)(uVar11 != 0);
            break;
          }
          pbVar5 = pbVar5 + 1;
          iVar3 = iVar13;
        } while (bVar2 != 0);
      }
      if (iVar3 < 0) {
        pbVar5 = *(byte **)(pbVar6 + 0x10);
      }
      else {
        pbVar5 = *(byte **)pbVar6;
        pbVar15 = pbVar6;
      }
      pbVar6 = pbVar5;
    } while (pbVar5 != (byte *)0x0);
    if (pbVar15 != (byte *)0x0) {
      if ((_Dst_00 == (byte *)0x0) || (*(longlong *)(pbVar15 + -0x20) == 0)) {
        iVar13 = iVar12 - *(int *)(pbVar15 + -0x18);
      }
      else {
        pbVar6 = _Dst_00;
        do {
          bVar2 = *pbVar6;
          if (bVar2 != pbVar6[*(longlong *)(pbVar15 + -0x20) - (longlong)_Dst_00]) {
            uVar11 = (uint)(bVar2 < pbVar6[*(longlong *)(pbVar15 + -0x20) - (longlong)_Dst_00]);
            iVar13 = (1 - uVar11) - (uint)(uVar11 != 0);
            break;
          }
          pbVar6 = pbVar6 + 1;
        } while (bVar2 != 0);
      }
      if (-1 < iVar13) goto LAB_180005048;
    }
  }
  pbVar15 = _Dst_01;
LAB_180005048:
  free(_Dst_00);
  if (pbVar15 == (byte *)0x0) {
    pcVar4 = local_48;
    pbVar6 = _Dst_01;
    do {
      local_60 = (uint)pbVar6;
      if (*pcVar4 == '\0') break;
      local_60 = local_60 + 1;
      pbVar6 = (byte *)(ulonglong)local_60;
      pcVar4 = pcVar4 + 1;
    } while (local_60 != 0xffffffff);
    uVar14 = (ulonglong)local_60;
    local_5c = local_60;
    if (local_60 == 0) {
      local_68 = (byte *)0x0;
    }
    else {
      _Dst_01 = malloc((ulonglong)(local_60 + 1));
      local_68 = _Dst_01;
      memcpy(_Dst_01,local_48,uVar14);
      _Dst_01[uVar14] = 0;
    }
    plVar7 = FUN_180005ec0((longlong *)(param_1 + 0x58),(longlong *)&local_68);
    FUN_1800057d0(plVar7,*(char **)(param_2 + 0x40));
  }
  else {
    pcVar4 = ";";
    pbVar6 = _Dst_01;
    do {
      local_60 = (uint)pbVar6;
      if (*pcVar4 == '\0') break;
      local_60 = local_60 + 1;
      pbVar6 = (byte *)(ulonglong)local_60;
      pcVar4 = pcVar4 + 1;
    } while (local_60 != 0xffffffff);
    uVar14 = (ulonglong)local_60;
    local_5c = local_60;
    if (local_60 == 0) {
      local_68 = (byte *)0x0;
    }
    else {
      _Dst_01 = malloc((ulonglong)(local_60 + 1));
      local_68 = _Dst_01;
      memcpy(_Dst_01,&DAT_18000b584,uVar14);
      _Dst_01[uVar14] = 0;
    }
    puVar8 = FUN_180005c50(&local_68,local_58,*(char **)(param_2 + 0x40));
    FUN_180005960((longlong *)(pbVar15 + -0x10),puVar8);
    free(local_58[0]);
    local_58[0] = (void *)0x0;
  }
  free(_Dst_01);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
}



ulonglong FUN_180005190(longlong param_1,longlong param_2,int param_3,longlong *param_4,
                       longlong param_5)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ulonglong extraout_RAX;
  ulonglong uVar4;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  undefined8 extraout_RAX_02;
  char *_Memory;
  char *pcVar5;
  undefined1 *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  
  local_38 = (undefined1 *)0x0;
  local_30 = 0;
  puVar2 = malloc(0x100001);
  *puVar2 = 0;
  free(local_38);
  local_30 = CONCAT44(0x100000,(undefined4)local_30);
  local_38 = puVar2;
  uVar3 = FUN_180002e30((longlong *)&local_38,(char *)0x0,param_2,param_3,param_5,'\0');
  if ((char)uVar3 == '\0') {
    (**(code **)(**(longlong **)(param_5 + 0x28) + 0x18))
              (*(longlong **)(param_5 + 0x28),0xc000002d,"Failed to prepare shader with uniforms");
    free(local_38);
    uVar4 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    bVar1 = FUN_180002d70(param_1);
    if (bVar1) {
      local_28 = (char *)0x0;
      local_20 = 0;
      uVar3 = FUN_180004c20(param_5,(longlong *)&local_38,param_3,(longlong *)&local_28);
      _Memory = local_28;
      if ((char)uVar3 == '\0') {
        (**(code **)(**(longlong **)(param_5 + 0x28) + 0x18))
                  (*(longlong **)(param_5 + 0x28),0xc0000001,"Failed to find active uniforms");
        _Memory = local_28;
      }
      else {
        pcVar5 = "";
        if (local_28 != (char *)0x0) {
          pcVar5 = local_28;
        }
        uVar3 = FUN_180002e30((longlong *)&local_38,pcVar5,param_2,param_3,param_5,'\x01');
        if ((char)uVar3 == '\0') {
          (**(code **)(**(longlong **)(param_5 + 0x28) + 0x18))
                    (*(longlong **)(param_5 + 0x28),0xc000002d,
                     "Failed to prepare source for shader with constbuffers!");
        }
        else {
          uVar3 = FUN_180004e30(param_1,param_5,(longlong *)&local_38,&local_28,param_4);
          if ((char)uVar3 != '\0') {
            free(_Memory);
            free(local_38);
            return CONCAT71((int7)((ulonglong)extraout_RAX_02 >> 8),1);
          }
          (**(code **)(**(longlong **)(param_5 + 0x28) + 0x18))
                    (*(longlong **)(param_5 + 0x28),0xc000002d,
                     "Failed to save shader\'s source code");
        }
      }
      free(_Memory);
      free(local_38);
      uVar4 = extraout_RAX_01 & 0xffffffffffffff00;
    }
    else {
      (**(code **)(**(longlong **)(param_5 + 0x28) + 0x18))
                (*(longlong **)(param_5 + 0x28),0xc800003b,"Failed to get OpenGL context");
      free(local_38);
      uVar4 = extraout_RAX_00 & 0xffffffffffffff00;
    }
  }
  return uVar4;
}



undefined8 FUN_180005380(void)

{
  void *pvVar1;
  undefined1 *_Src;
  uint uVar2;
  undefined8 *in_R9;
  undefined8 *in_stack_00000030;
  
  _Src = &DAT_18000b7b4;
  if ((undefined1 *)*in_R9 != (undefined1 *)0x0) {
    _Src = (undefined1 *)*in_R9;
  }
  uVar2 = *(int *)(in_R9 + 1) + 1;
  *(uint *)(in_stack_00000030 + 1) =
       uVar2 & 0x3fffffff | *(uint *)(in_stack_00000030 + 1) & 0xc0000000 | 0x40000000;
  pvVar1 = malloc((ulonglong)uVar2);
  *in_stack_00000030 = pvVar1;
  pvVar1 = memcpy(pvVar1,_Src,(ulonglong)uVar2);
  return CONCAT71((int7)((ulonglong)pvVar1 >> 8),1);
}



void FUN_180005400(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(*(void **)((longlong)param_1 + 8));
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    operator_delete(param_1);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180005467)

undefined8 * FUN_180005430(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  void *_Dst;
  uint uVar2;
  
  uVar2 = 0;
  *param_1 = SOpenGlShader::vftable;
  pcVar1 = param_2;
  do {
    if (*pcVar1 == '\0') break;
    uVar2 = uVar2 + 1;
    pcVar1 = pcVar1 + 1;
  } while (uVar2 != 0xffffffff);
  *(uint *)((longlong)param_1 + 0x14) = uVar2;
  *(uint *)(param_1 + 2) = uVar2;
  if (uVar2 == 0) {
    param_1[1] = 0;
    return param_1;
  }
  _Dst = malloc((ulonglong)(uVar2 + 1));
  param_1[1] = _Dst;
  memcpy(_Dst,param_2,(ulonglong)uVar2);
  *(undefined1 *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]) = 0;
  return param_1;
}



ulonglong FUN_1800054d0(undefined8 param_1,longlong param_2,int param_3,longlong param_4,
                       undefined8 *param_5)

{
  char *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  int local_res18 [4];
  
  pcVar1 = (char *)*param_5;
  puVar3 = malloc(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = FUN_180005430(puVar3,pcVar1);
  }
  *(undefined8 **)(*(longlong *)(param_2 + (longlong)param_3 * 8) + 0x88) = puVar3;
  bVar2 = FUN_180004940(param_4,pcVar1,param_3,local_res18);
  if (bVar2) {
    puVar5 = FUN_180001c00(param_4,local_res18[0],pcVar1,*(int **)(param_2 + (longlong)param_3 * 8))
    ;
    if ((char)puVar5 == '\0') {
      uVar4 = (**(code **)(**(longlong **)(param_4 + 0x28) + 0x18))
                        (*(longlong **)(param_4 + 0x28),0xc000002d,"Failed to fill reflection data")
      ;
      uVar4 = uVar4 & 0xffffffffffffff00;
    }
    else {
      uVar6 = (**(code **)__glewDeleteProgram_exref)(local_res18[0]);
      uVar4 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    }
  }
  else {
    uVar4 = (**(code **)(**(longlong **)(param_4 + 0x28) + 0x18))
                      (*(longlong **)(param_4 + 0x28),0xc000002d,
                       "Failed to compile shader with constant buffers");
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  return uVar4;
}



void FUN_1800055b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined1 **)(*(longlong *)(param_2 + 0x88) + 8);
  puVar2 = &DAT_18000b7b4;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  FUN_180008b40(param_3,puVar2,*(int *)(*(longlong *)(param_2 + 0x88) + 0x10) + 1);
  return;
}



void FUN_1800055e0(undefined4 param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  uint uVar2;
  
  LOCK();
  DAT_180016968 = DAT_180016968 + 1;
  UNLOCK();
  switch(param_1) {
  case 0:
    uVar2 = 0x8b30;
    goto LAB_180005662;
  default:
    uVar2 = 0x8b31;
    goto LAB_180005662;
  case 2:
    uVar2 = 0x8dd9;
LAB_180005662:
    if (uVar2 == 0x8b30) {
      pcVar1 = ".ps_error";
    }
    else if (uVar2 == 0x8b31) {
      pcVar1 = ".vs_error";
    }
    else if (uVar2 == 0x8dd9) {
      pcVar1 = ".gs_error";
    }
    else {
      pcVar1 = ".unknown_error";
    }
    break;
  case 3:
    uVar2 = 0x8e88;
    pcVar1 = ".hs_error";
    break;
  case 4:
    uVar2 = 0x8e87;
    pcVar1 = ".ds_error";
    break;
  case 5:
    uVar2 = 0x91b9;
    pcVar1 = ".cs_error";
  }
  FUN_1800018f0(param_2,(longlong)pcVar1,param_4);
  if (uVar2 < 0x8e88) {
    if (uVar2 == 0x8e87) {
      pcVar1 = ".ds_src";
      goto LAB_180005712;
    }
    if (uVar2 == 0x8b30) {
      pcVar1 = ".ps_src";
      goto LAB_180005712;
    }
    if (uVar2 == 0x8b31) {
      pcVar1 = ".vs_src";
      goto LAB_180005712;
    }
    if (uVar2 == 0x8dd9) {
      pcVar1 = ".gs_src";
      goto LAB_180005712;
    }
  }
  else {
    if (uVar2 == 0x8e88) {
      pcVar1 = ".hs_src";
      goto LAB_180005712;
    }
    if (uVar2 == 0x91b9) {
      pcVar1 = ".cs_src";
      goto LAB_180005712;
    }
  }
  pcVar1 = ".unknown_source";
LAB_180005712:
  FUN_1800018f0(param_2,(longlong)pcVar1,param_3);
  return;
}



undefined8 * CreateShaderCompiler(int param_1)

{
  undefined8 *puVar1;
  
                    // 0x5750  1  CreateShaderCompiler
  if (param_1 != 9) {
    return (undefined8 *)0x0;
  }
  puVar1 = malloc(0x70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = COpenGLShaderCompiler::vftable;
    *(undefined4 *)(puVar1 + 5) = 0x28;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 0xd) = 0x28;
    FUN_1800013e0((longlong)puVar1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



undefined1 IsShaderCompilerMultithreaded(void)

{
                    // 0x57c0  2  IsShaderCompilerMultithreaded
  return 1;
}



// WARNING: Removing unreachable block (ram,0x000180005824)

undefined8 * FUN_1800057d0(undefined8 *param_1,char *param_2)

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



// WARNING: Removing unreachable block (ram,0x0001800058c9)
// WARNING: Removing unreachable block (ram,0x0001800058d0)

void FUN_1800058b0(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  undefined1 *_Dst;
  uint uVar2;
  
  uVar2 = (uint)param_2;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar2) {
    _Dst = malloc((ulonglong)(uVar2 + 1));
    if ((int)param_1[1] == 0) {
      *_Dst = 0;
    }
    else {
      memcpy(_Dst,(void *)*param_1,(ulonglong)((int)param_1[1] + 1));
    }
    free((void *)*param_1);
    *param_1 = (longlong)_Dst;
    *(uint *)((longlong)param_1 + 0xc) = uVar2;
  }
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar2 <= uVar1) {
    if (uVar2 < uVar1) {
      *(undefined1 *)((param_2 & 0xffffffff) + *param_1) = 0;
    }
    *(uint *)(param_1 + 1) = uVar2;
    return;
  }
  memset((void *)((ulonglong)uVar1 + *param_1),0,(ulonglong)((uVar2 - uVar1) + 1));
  *(uint *)(param_1 + 1) = uVar2;
  return;
}



// WARNING: Removing unreachable block (ram,0x000180005992)

void FUN_180005960(longlong *param_1,undefined8 *param_2)

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



// WARNING: Removing unreachable block (ram,0x000180005a45)
// WARNING: Removing unreachable block (ram,0x000180005a62)

void FUN_180005a10(longlong *param_1,char *param_2)

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



// WARNING: Removing unreachable block (ram,0x000180005b0a)

void FUN_180005ae0(longlong *param_1,undefined1 param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *_Dst;
  
  iVar2 = (int)param_1[1];
  uVar1 = iVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1) {
    _Dst = malloc((ulonglong)(iVar2 + 2));
    if (iVar2 == 0) {
      *_Dst = 0;
    }
    else {
      memcpy(_Dst,(void *)*param_1,(ulonglong)uVar1);
    }
    free((void *)*param_1);
    *param_1 = (longlong)_Dst;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
  }
  *(undefined1 *)((ulonglong)*(uint *)(param_1 + 1) + *param_1) = param_2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *(undefined1 *)((ulonglong)*(uint *)(param_1 + 1) + *param_1) = 0;
  return;
}



// WARNING: Removing unreachable block (ram,0x000180005bce)

void FUN_180005b80(longlong *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *_Dst;
  uint uVar4;
  
  if (param_3 != 0) {
    uVar4 = 0;
    pcVar3 = param_2;
    do {
      if (*pcVar3 == '\0') break;
      uVar4 = uVar4 + 1;
      pcVar3 = pcVar3 + 1;
    } while (uVar4 < param_3);
    if (uVar4 != 0) {
      iVar2 = (int)param_1[1];
      uVar1 = iVar2 + uVar4;
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
      memcpy((void *)((ulonglong)*(uint *)(param_1 + 1) + *param_1),param_2,(ulonglong)uVar4);
      *(uint *)(param_1 + 1) = (int)param_1[1] + uVar4;
      *(undefined1 *)((ulonglong)*(uint *)(param_1 + 1) + *param_1) = 0;
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180005cab)
// WARNING: Removing unreachable block (ram,0x000180005cb8)

undefined8 * FUN_180005c50(undefined8 *param_1,undefined8 *param_2,char *param_3)

{
  char cVar1;
  undefined1 *_Dst;
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
  FUN_180006420(param_2,param_1);
  return param_2;
}



// WARNING: Removing unreachable block (ram,0x000180005da4)
// WARNING: Removing unreachable block (ram,0x000180005db1)

longlong * FUN_180005d50(longlong *param_1,char *param_2,undefined8 *param_3)

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



undefined8 * FUN_180005e40(undefined8 *param_1,undefined8 *param_2)

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



longlong * FUN_180005ec0(longlong *param_1,longlong *param_2)

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
      if ((pbVar9 == (byte *)0x0) || (plVar10[-4] == 0)) {
        iVar7 = (int)param_2[1] - (int)plVar10[-3];
      }
      else {
        pbVar3 = pbVar9;
        do {
          bVar1 = *pbVar3;
          if (bVar1 != pbVar3[plVar10[-4] - (longlong)pbVar9]) {
            uVar2 = (uint)(bVar1 < pbVar3[plVar10[-4] - (longlong)pbVar9]);
            iVar7 = (1 - uVar2) - (uint)(uVar2 != 0);
            goto LAB_180005f28;
          }
          pbVar3 = pbVar3 + 1;
        } while (bVar1 != 0);
        iVar7 = 0;
      }
LAB_180005f28:
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
      if ((longlong *)plVar10[1] == (longlong *)0x0) goto LAB_180005fcd;
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
    pbVar9 = (byte *)plVar5[-4];
    if ((pbVar9 == (byte *)0x0) || (*param_2 == 0)) {
      iVar7 = (int)plVar5[-3] - (int)param_2[1];
    }
    else {
      lVar11 = *param_2 - (longlong)pbVar9;
      do {
        bVar1 = *pbVar9;
        if (bVar1 != pbVar9[lVar11]) {
          uVar2 = (uint)(bVar1 < pbVar9[lVar11]);
          iVar7 = (1 - uVar2) - (uint)(uVar2 != 0);
          goto LAB_180005fc3;
        }
        pbVar9 = pbVar9 + 1;
      } while (bVar1 != 0);
      iVar7 = 0;
    }
LAB_180005fc3:
    if (-1 < iVar7) {
      return plVar5 + -2;
    }
  }
LAB_180005fcd:
  puVar6 = malloc(0x40);
  if (puVar6 != (undefined8 *)0x0) {
    FUN_180006420(puVar6,param_2);
  }
  if (puVar6 + 2 != (undefined8 *)0x0) {
    puVar6[2] = 0;
    puVar6[3] = 0;
  }
  FUN_180006e70(param_1,puVar6 + 4,bVar12,plVar10);
  return puVar6 + 2;
}



void FUN_180006040(longlong *param_1)

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
                    // WARNING: Could not recover jumptable at 0x0001800060ab. Too many branches
                    // WARNING: Treating indirect jump as call
  free((void *)*param_1);
  return;
}



void FUN_1800060c0(longlong *param_1)

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



undefined8 * FUN_180006150(undefined8 *param_1,longlong *param_2)

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



void FUN_1800061d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  while (param_2 != (undefined8 *)0x0) {
    FUN_1800061d0(param_1,(undefined8 *)param_2[2]);
    puVar1 = (undefined8 *)*param_2;
    free((void *)param_2[-2]);
    param_2[-2] = 0;
    free((void *)param_2[-4]);
    param_2[-4] = 0;
    free(param_2 + -4);
    param_2 = puVar1;
  }
  return;
}



longlong * FUN_180006250(longlong *param_1,longlong *param_2)

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



char * FUN_180006390(undefined8 *param_1,char *param_2)

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



undefined8 * FUN_180006420(undefined8 *param_1,undefined8 *param_2)

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



HWND FUN_180006490(HINSTANCE param_1)

{
  BOOL BVar1;
  DWORD dwErrCode;
  undefined8 uVar2;
  HWND pHVar3;
  ULONG_PTR local_res10;
  
  dwErrCode = 0;
  local_res10 = 0;
  if ((((DAT_180016970 == 0) ||
       (OutputDebugStringA("IsolationAware function called after IsolationAwareCleanup\n"),
       DAT_180016970 == 0)) && (uVar2 = FUN_180006590(), (int)uVar2 == 0)) ||
     (BVar1 = ActivateActCtx(DAT_180016940,&local_res10), BVar1 == 0)) {
    pHVar3 = (HWND)0x0;
  }
  else {
    pHVar3 = CreateWindowExA(0x40100,"OpenGL_Context","OpenGL_Context",0x6cf0000,0,0,400,400,
                             (HWND)0x0,(HMENU)0x0,param_1,(LPVOID)0x0);
    if (pHVar3 == (HWND)0x0) {
      dwErrCode = GetLastError();
    }
    DeactivateActCtx(0,local_res10);
    if (pHVar3 == (HWND)0x0) {
      SetLastError(dwErrCode);
    }
  }
  return pHVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180006590(void)

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
  if (DAT_180016940 == (HANDLE)0xffffffffffffffff) {
    BVar1 = QueryActCtxW(0x80000010,&DAT_180016940,(PVOID)0x0,1,local_298,0x10,(SIZE_T *)0x0);
    if (BVar1 == 0) {
      return 0;
    }
    if (local_298[0] == (HANDLE)0x0) {
      BVar1 = GetModuleHandleExW(6,(LPCWSTR)&DAT_180016940,local_res10);
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
      _DAT_18001696c = 1;
    }
    DAT_180016940 = local_298[0];
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



ATOM FUN_180006750(WNDCLASSA *param_1)

{
  ATOM AVar1;
  BOOL BVar2;
  DWORD dwErrCode;
  undefined8 uVar3;
  ULONG_PTR local_res10;
  
  dwErrCode = 0;
  AVar1 = 0;
  local_res10 = 0;
  if ((((DAT_180016970 != 0) &&
       (OutputDebugStringA("IsolationAware function called after IsolationAwareCleanup\n"),
       DAT_180016970 != 0)) || (uVar3 = FUN_180006590(), (int)uVar3 != 0)) &&
     (BVar2 = ActivateActCtx(DAT_180016940,&local_res10), BVar2 != 0)) {
    AVar1 = RegisterClassA(param_1);
    if (AVar1 == 0) {
      dwErrCode = GetLastError();
    }
    DeactivateActCtx(0,local_res10);
    if (AVar1 == 0) {
      SetLastError(dwErrCode);
    }
  }
  return AVar1;
}



// WARNING: Removing unreachable block (ram,0x000180006844)

longlong * FUN_180006810(longlong *param_1,char *param_2,uint param_3)

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



uint FUN_1800068b0(uint param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar4 = ~param_1;
  for (; (uVar2 = (ulonglong)param_3, param_3 != 0 && (((ulonglong)param_2 & 3) != 0));
      param_2 = (uint *)((longlong)param_2 + 1)) {
    uVar4 = *(uint *)(&DAT_180010fb0 + (ulonglong)(byte)((byte)*param_2 ^ (byte)uVar4) * 4) ^
            uVar4 >> 8;
    param_3 = param_3 - 1;
  }
  if (0x1f < param_3) {
    uVar3 = (ulonglong)(param_3 >> 5);
    puVar5 = param_2;
    do {
      uVar4 = uVar4 ^ *puVar5;
      uVar4 = *(uint *)(&DAT_1800113b0 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
              *(uint *)(&DAT_1800117b0 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
              *(uint *)(&DAT_180010fb0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
              *(uint *)(&DAT_180011bb0 + (ulonglong)(uVar4 & 0xff) * 4) ^ puVar5[1];
      uVar4 = *(uint *)(&DAT_1800113b0 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
              *(uint *)(&DAT_1800117b0 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
              *(uint *)(&DAT_180010fb0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
              *(uint *)(&DAT_180011bb0 + (ulonglong)(uVar4 & 0xff) * 4) ^ puVar5[2];
      uVar4 = *(uint *)(&DAT_1800113b0 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
              *(uint *)(&DAT_1800117b0 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
              *(uint *)(&DAT_180010fb0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
              *(uint *)(&DAT_180011bb0 + (ulonglong)(uVar4 & 0xff) * 4) ^ puVar5[3];
      uVar4 = *(uint *)(&DAT_1800113b0 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
              *(uint *)(&DAT_1800117b0 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
              *(uint *)(&DAT_180010fb0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
              *(uint *)(&DAT_180011bb0 + (ulonglong)(uVar4 & 0xff) * 4) ^ puVar5[4];
      uVar4 = *(uint *)(&DAT_1800113b0 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
              *(uint *)(&DAT_1800117b0 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
              *(uint *)(&DAT_180010fb0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
              *(uint *)(&DAT_180011bb0 + (ulonglong)(uVar4 & 0xff) * 4) ^ puVar5[5];
      param_2 = puVar5 + 8;
      uVar2 = (ulonglong)((int)uVar2 - 0x20);
      uVar4 = *(uint *)(&DAT_1800113b0 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
              *(uint *)(&DAT_1800117b0 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
              *(uint *)(&DAT_180010fb0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
              *(uint *)(&DAT_180011bb0 + (ulonglong)(uVar4 & 0xff) * 4) ^ puVar5[6];
      uVar4 = *(uint *)(&DAT_1800113b0 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
              *(uint *)(&DAT_1800117b0 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
              *(uint *)(&DAT_180010fb0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
              *(uint *)(&DAT_180011bb0 + (ulonglong)(uVar4 & 0xff) * 4) ^ puVar5[7];
      uVar4 = *(uint *)(&DAT_1800113b0 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
              *(uint *)(&DAT_1800117b0 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
              *(uint *)(&DAT_180010fb0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
              *(uint *)(&DAT_180011bb0 + (ulonglong)(uVar4 & 0xff) * 4);
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
      uVar4 = *(uint *)(&DAT_1800113b0 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
              *(uint *)(&DAT_1800117b0 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
              *(uint *)(&DAT_180010fb0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
              *(uint *)(&DAT_180011bb0 + (ulonglong)(uVar4 & 0xff) * 4);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  uVar1 = (uint)uVar2;
  while (uVar1 != 0) {
    uVar1 = *param_2;
    param_2 = (uint *)((longlong)param_2 + 1);
    uVar4 = *(uint *)(&DAT_180010fb0 + (ulonglong)(byte)((byte)uVar1 ^ (byte)uVar4) * 4) ^
            uVar4 >> 8;
    uVar1 = (int)uVar2 - 1;
    uVar2 = (ulonglong)uVar1;
  }
  return ~uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180006be0(void)

{
  uint uVar1;
  undefined8 *puVar2;
  HANDLE hSourceHandle;
  
  DAT_1800169f0 = 0;
  _DAT_1800169f8 = 0;
  hSourceHandle = GetCurrentThread();
  DuplicateHandle((HANDLE)0x0,hSourceHandle,(HANDLE)0x0,(LPHANDLE)&DAT_1800169f0,0,0,0);
  _DAT_1800169f8 = GetCurrentThreadId();
  uVar1 = DAT_180016740 + 1;
  if (DAT_180016744 < uVar1) {
    DAT_180016744 = (DAT_180016744 * 10 >> 3) + 0x10 & 0xfffffff0;
    if (DAT_180016744 < uVar1) {
      DAT_180016744 = uVar1;
    }
    DAT_180016738 = realloc(DAT_180016738,(ulonglong)(DAT_180016744 << 3));
  }
  puVar2 = (undefined8 *)((longlong)DAT_180016738 + (ulonglong)DAT_180016740 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &DAT_1800169f0;
  }
  DAT_180016740 = DAT_180016740 + 1;
  atexit((_func_5014 *)&LAB_180006bd0);
  return &DAT_1800169f0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180006cc0(void)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar3 = (ulonglong)(int)DAT_180016740;
  uVar4 = 0;
  uVar2 = 0;
  if (DAT_180016740 != 0) {
    uVar6 = DAT_180016740 - 1;
    lVar7 = uVar3 * 8 + -8;
    puVar1 = DAT_180016738;
    puVar5 = DAT_180016738;
    do {
      if ((HANDLE *)*puVar5 == &DAT_1800169f0) {
        if (uVar4 < uVar6) {
          *puVar5 = *(undefined8 *)(lVar7 + (longlong)puVar1);
          puVar1 = DAT_180016738;
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
  DAT_180016740 = uVar2;
  CloseHandle(DAT_1800169f0);
  DAT_1800169f0 = (HANDLE)0x0;
  _DAT_1800169f8 = 0;
  return;
}



void FUN_180006d50(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1800166d0;
  while (DAT_1800166d8 != 0) {
    DAT_1800166d0 = lVar1;
    free(*(void **)(lVar1 + -0x10));
    *(undefined8 *)(lVar1 + -0x10) = 0;
    if (DAT_1800166c8 == DAT_1800166d0) {
      DAT_1800166c8 = 0;
      DAT_1800166d0 = 0;
    }
    else {
      **(undefined8 **)(DAT_1800166d0 + 8) = 0;
      DAT_1800166d0 = *(longlong *)(DAT_1800166d0 + 8);
    }
    DAT_1800166d8 = DAT_1800166d8 + -1;
    free((void *)(lVar1 + -0x10));
    lVar1 = DAT_1800166d0;
  }
  DAT_1800166d0 = lVar1;
  return;
}



void FUN_180006de0(void)

{
  longlong lVar1;
  
  lVar1 = DAT_180016708;
  while (DAT_180016710 != 0) {
    DAT_180016708 = lVar1;
    free(*(void **)(lVar1 + -0x10));
    *(undefined8 *)(lVar1 + -0x10) = 0;
    if (DAT_180016700 == DAT_180016708) {
      DAT_180016700 = 0;
      DAT_180016708 = 0;
    }
    else {
      **(undefined8 **)(DAT_180016708 + 8) = 0;
      DAT_180016708 = *(longlong *)(DAT_180016708 + 8);
    }
    DAT_180016710 = DAT_180016710 + -1;
    free((void *)(lVar1 + -0x10));
    lVar1 = DAT_180016708;
  }
  DAT_180016708 = lVar1;
  return;
}



longlong * FUN_180006e70(longlong *param_1,longlong *param_2,char param_3,undefined8 *param_4)

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
LAB_180006fbc:
        *(undefined4 *)(plVar1 + 3) = 1;
        *(undefined4 *)(lVar4 + 0x18) = 1;
        *(undefined4 *)(*(longlong *)(plVar3[1] + 8) + 0x18) = 0;
        plVar3 = *(longlong **)(plVar3[1] + 8);
      }
    }
    lVar4 = *plVar2;
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x18) == 0)) goto LAB_180006fbc;
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



void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x0001800070c0. Too many branches
                    // WARNING: Treating indirect jump as call
  DeleteCriticalSection(lpCriticalSection);
  return;
}



LPCRITICAL_SECTION FUN_1800070d0(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return param_1;
}



undefined8 FUN_1800070f0(undefined4 param_1)

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



uint FUN_180007170(longlong *param_1,uint param_2,uint param_3)

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
  uVar2 = FUN_1800070f0(param_2);
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



void FUN_180007270(undefined8 *param_1)

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
      FUN_180008110(puVar2,puVar2 + (ulonglong)*(uint *)(param_1 + 1) * 6,local_res8);
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
FUN_180007310(longlong *param_1,int param_2,undefined4 param_3,int param_4,char *param_5,
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
            goto LAB_180007566;
          }
          uVar11 = 0;
          if ((int)param_7[1] == 0) goto LAB_180007566;
          if (pcVar8 != (char *)0x0) {
            _MaxCount = (longlong)pcVar8 - (longlong)_Str2;
            goto LAB_1800074db;
          }
          uVar9 = 0xffffffffffffffff;
          pcVar15 = _Str2;
          goto code_r0x0001800074d2;
        }
        uVar11 = uVar14;
        if ((cVar1 == '\0') || (uVar11 = 0, cVar1 == '[')) goto LAB_180007566;
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
    if (param_5 == (char *)0x0) goto LAB_1800077ae;
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
    if (param_5 == (char *)0x0) goto LAB_1800077ae;
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
    if (param_5 == (char *)0x0) goto LAB_1800077ae;
    ppvVar13 = &local_70;
  }
  local_4c = 0;
  local_50 = param_6;
  local_60 = (void *)0x0;
  local_68 = (void *)0x0;
  local_70 = (void *)0x0;
  local_78 = 0;
  FUN_180006390(ppvVar13,param_5);
LAB_1800077ae:
  pvVar3 = local_60;
  pvVar2 = local_68;
  pvVar12 = local_70;
  FUN_180008050(param_1,&local_78);
  operator_delete__(pvVar3);
  operator_delete__(pvVar2);
LAB_1800077d0:
  operator_delete__(pvVar12);
  return CONCAT71((int7)((ulonglong)extraout_RAX_00 >> 8),1);
  while( true ) {
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    if (cVar1 == '\0') break;
code_r0x0001800074d2:
    if (uVar9 == 0) break;
  }
  _MaxCount = ~uVar9 - 1;
LAB_1800074db:
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
LAB_180007566:
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
          FUN_180008050(param_1,&local_78);
          operator_delete__((void *)0x0);
          operator_delete__((void *)0x0);
          pvVar12 = (void *)0x0;
          goto LAB_1800077d0;
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



ulonglong FUN_180007810(longlong *param_1,longlong param_2)

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



ulonglong FUN_180007bb0(longlong *param_1,longlong param_2)

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



undefined8 FUN_180007d30(longlong *param_1)

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



undefined8 FUN_180007e40(longlong *param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

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
        uVar5 = FUN_180007310(param_1,*(int *)(lVar9 + 8 + lVar1),uVar11,
                              *(int *)(lVar9 + 0x18 + lVar1),pcVar7,*(uint *)(lVar9 + 0xc + lVar1),
                              (longlong *)(param_2 + 0x70),param_3,param_4);
        if ((char)uVar5 == '\0') {
          puVar14 = &DAT_18000b7b4;
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
  FUN_180007810(param_1,param_2);
  if (*(char *)(param_2 + 0x88) != '\0') {
    FUN_180007bb0(param_1,param_2);
  }
  FUN_180007270(param_1);
  uVar5 = FUN_180007d30(param_1);
  return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
}



void FUN_180008050(longlong *param_1,undefined8 *param_2)

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
    FUN_180005e40(puVar4 + 1,param_2 + 1);
    FUN_180005e40(puVar4 + 2,param_2 + 2);
    FUN_180005e40(puVar4 + 3,param_2 + 3);
    *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)puVar4 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    *(undefined4 *)(puVar4 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)puVar4 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



void FUN_180008110(ulonglong *param_1,ulonglong *param_2,undefined8 param_3)

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
    FUN_180008230(&local_28,local_res8,local_res10);
    puVar2 = local_20;
    puVar1 = local_28;
    lVar3 = ((longlong)local_res10 - (longlong)local_20) / 6 +
            ((longlong)local_res10 - (longlong)local_20 >> 0x3f);
    if ((ulonglong)(((longlong)local_28 - (longlong)local_res8) / 0x30) <
        (ulonglong)((lVar3 >> 3) - (lVar3 >> 0x3f))) {
      FUN_180008110(local_res8,local_28,param_3);
      local_res8 = puVar2;
    }
    else {
      FUN_180008110(local_20,local_res10,param_3);
      local_res10 = puVar1;
    }
    lVar3 = (longlong)local_res10 - (longlong)local_res8;
  }
  if (1 < (ulonglong)(lVar3 / 0x30)) {
    FUN_1800087a0(local_res8,local_res10);
  }
  return;
}



undefined8 * FUN_180008230(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

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
  FUN_1800088c0(param_2,puVar10,param_3 + -6);
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
LAB_180008390:
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
  goto LAB_180008390;
}



void FUN_1800087a0(ulonglong *param_1,ulonglong *param_2)

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



void FUN_1800088c0(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  
  uVar1 = ((longlong)param_3 - (longlong)param_1) / 0x30;
  if (0x28 < uVar1) {
    uVar1 = uVar1 + 1 >> 3;
    FUN_1800089a0(param_1,param_1 + uVar1 * 6,param_1 + uVar1 * 0xc);
    FUN_1800089a0(param_2 + uVar1 * -6,param_2,param_2 + uVar1 * 6);
    FUN_1800089a0(param_3 + uVar1 * -0xc,param_3 + uVar1 * -6,param_3);
    FUN_1800089a0(param_1 + uVar1 * 6,param_2,param_3 + uVar1 * -6);
    return;
  }
  FUN_1800089a0(param_1,param_2,param_3);
  return;
}



void FUN_1800089a0(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

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



undefined4 FUN_180008b40(undefined8 *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *pvVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  
  plVar5 = malloc(0x38);
  uVar4 = 0;
  plVar6 = plVar5 + 5;
  plVar5[6] = param_1[1];
  *plVar6 = 0;
  if ((undefined8 *)param_1[1] == (undefined8 *)0x0) {
    *param_1 = plVar6;
  }
  else {
    *(undefined8 *)param_1[1] = plVar6;
  }
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
  param_1[1] = plVar6;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = 0;
    plVar5[1] = 0;
    *(undefined4 *)(plVar5 + 2) = 0x3d;
  }
  *(undefined4 *)((longlong)plVar5 + 0x1c) = 1;
  *(undefined4 *)(plVar5 + 3) = 1;
  uVar10 = param_3 + 0xf & 0xfffffff0;
  if (*(uint *)(plVar5 + 1) <= uVar10) {
    if (*(uint *)((longlong)plVar5 + 0xc) < uVar10) {
      *(uint *)((longlong)plVar5 + 0xc) = uVar10;
      pvVar7 = realloc((void *)*plVar5,(ulonglong)uVar10);
      *plVar5 = (longlong)pvVar7;
    }
    uVar1 = *(uint *)(plVar5 + 1);
    puVar8 = (undefined1 *)((ulonglong)uVar1 + *plVar5);
    if (uVar1 < uVar10) {
      uVar9 = (ulonglong)(uVar10 - uVar1);
      do {
        if (puVar8 != (undefined1 *)0x0) {
          *puVar8 = 0;
        }
        puVar8 = puVar8 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  *(uint *)(plVar5 + 1) = uVar10;
  memcpy((void *)*plVar5,param_2,(ulonglong)param_3);
  puVar2 = (undefined8 *)*param_1;
  do {
    if (puVar2 == (undefined8 *)0x0) {
LAB_180008c53:
      return *(undefined4 *)(param_1[1] + -8);
    }
    if (puVar2 + -5 == plVar5) {
      if ((*(uint *)(puVar2 + -4) != 0) && (puVar3 = (uint *)puVar2[-5], puVar3 != (uint *)0x0)) {
        uVar4 = FUN_1800068b0(0x811c9dc5,puVar3,*(uint *)(puVar2 + -4));
      }
      *(uint *)(puVar2 + -1) = uVar4;
      goto LAB_180008c53;
    }
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
}



void * FUN_180008c80(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20000) != (void *)0x0) {
    FUN_180008c80(*(void **)((longlong)param_1 + 0x20000));
  }
  *(undefined8 *)((longlong)param_1 + 0x20000) = 0;
  operator_delete(param_1);
  return param_1;
}



void FUN_180008cc0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  while (param_2 != (undefined8 *)0x0) {
    FUN_180008cc0(param_1,(undefined8 *)param_2[2]);
    puVar1 = (undefined8 *)*param_2;
    free(param_2 + -4);
    param_2 = puVar1;
  }
  return;
}



void __cdecl operator_delete(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000180008d12. Too many branches
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
                    // WARNING: Could not recover jumptable at 0x000180008d82. Too many branches
                    // WARNING: Treating indirect jump as call
  _purecall();
  return;
}



bool FUN_180008d88(void)

{
  undefined8 *Ptr;
  
  Ptr = _malloc_crt(0x100);
  DAT_180016c38 = EncodePointer(Ptr);
  DAT_180016c40 = DAT_180016c38;
  if (Ptr != (undefined8 *)0x0) {
    *Ptr = 0;
    FUN_180009340();
    atexit(FUN_180009378);
    atexit((_func_5014 *)&LAB_180009334);
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
    if (DAT_180016950 < 1) {
      return 0;
    }
    DAT_180016950 = DAT_180016950 + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_180016c30 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_180016c30;
        pvVar3 = DAT_180016c30;
      }
      DAT_180016c30 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_180008e62;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_180008e62:
    if (DAT_180016c28 == 2) {
      _Memory = DecodePointer(DAT_180016c40);
      if (_Memory != (longlong *)0x0) {
        plVar7 = DecodePointer(DAT_180016c38);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = DecodePointer((PVOID)*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = DecodePointer(DAT_180016c40);
            plVar12 = DecodePointer(DAT_180016c38);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_180016c38 = (PVOID)_encoded_null();
        DAT_180016c40 = DAT_180016c38;
      }
      DAT_180016c28 = 0;
      if (!bVar2) {
        LOCK();
        DAT_180016c30 = (void *)0x0;
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
      bVar13 = DAT_180016c30 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_180016c30;
        pvVar3 = DAT_180016c30;
      }
      DAT_180016c30 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_180008f8b;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_180008f8b:
    if (DAT_180016c28 == 0) {
      DAT_180016c28 = 1;
      iVar4 = _initterm_e(&DAT_18000a668,&DAT_18000a678);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_18000a370,&DAT_18000a660);
      DAT_180016c28 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_180016c30 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_180016c48 != (code *)0x0) &&
       (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_180016c48), BVar5 != 0)) {
      (*DAT_180016c48)(param_1,2,param_3);
    }
    DAT_180016950 = DAT_180016950 + 1;
  }
  return 1;
}



// WARNING: Removing unreachable block (ram,0x000180009108)
// WARNING: Removing unreachable block (ram,0x00018000909b)
// WARNING: Removing unreachable block (ram,0x000180009143)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __DllMainCRTStartup
// 
// Library: Visual Studio 2010 Release

uint __DllMainCRTStartup(HMODULE param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_180016950 == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_180016020 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) &&
       (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_180016020 = 0xffffffff;
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
  _DAT_180016020 = 0xffffffff;
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
  
  local_res10 = DecodePointer(DAT_180016c40);
  if (local_res10 == (PVOID)0xffffffffffffffff) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = DecodePointer(DAT_180016c40);
    local_res18[0] = DecodePointer(DAT_180016c38);
    pvVar2 = EncodePointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(pvVar2,&local_res10,local_res18);
    DAT_180016c40 = EncodePointer(local_res10);
    DAT_180016c38 = EncodePointer(local_res18[0]);
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



void FUN_180009340(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180013788; puVar1 < &DAT_180013788; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



void FUN_180009378(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180013798; puVar1 < &DAT_180013798; puVar1 = puVar1 + 1) {
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
                    // WARNING: Could not recover jumptable at 0x000180009472. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x000180009478. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



void __cdecl _amsg_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00018000947e. Too many branches
                    // WARNING: Treating indirect jump as call
  _amsg_exit(param_1);
  return;
}



int __cdecl __CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018000948a. Too many branches
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
  if (DAT_180016028 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_180016028 =
         (local_res10.QuadPart ^
         (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff
    ;
    if (DAT_180016028 == 0x2b992ddfa232) {
      DAT_180016028 = 0x2b992ddfa233;
    }
  }
  _DAT_180016030 = ~DAT_180016028;
  return;
}



void __cdecl _unlock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x000180009568. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock(_File);
  return;
}



void __dllonexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00018000956e. Too many branches
                    // WARNING: Treating indirect jump as call
  __dllonexit();
  return;
}



void __cdecl _lock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x000180009574. Too many branches
                    // WARNING: Treating indirect jump as call
  _lock(_File);
  return;
}



void __cdecl terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x00018000957a. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



void __thiscall type_info::_type_info_dtor_internal_method(type_info *this)

{
                    // WARNING: Could not recover jumptable at 0x000180009580. Too many branches
                    // WARNING: Treating indirect jump as call
  _type_info_dtor_internal_method(this);
  return;
}



void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018000958c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000180009592. Too many branches
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



void FUN_180009600(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180009630(void)

{
  _DAT_180016020 = 0xffffffff;
  return;
}



void FUN_18000964a(void)

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



bool FUN_1800096e0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



void FUN_180009710(undefined8 param_1,longlong param_2)

{
  DeactivateActCtx(0,*(ULONG_PTR *)(param_2 + 0x2e0));
  return;
}



void FUN_180009730(undefined8 param_1,longlong param_2)

{
  DWORD dwErrCode;
  bool bVar1;
  
  bVar1 = *(longlong *)(param_2 + 0x60) != 0;
  if (bVar1) {
    dwErrCode = 0;
  }
  else {
    dwErrCode = GetLastError();
  }
  DeactivateActCtx(0,*(ULONG_PTR *)(param_2 + 0x88));
  if (!bVar1) {
    SetLastError(dwErrCode);
  }
  return;
}



void FUN_180009780(undefined8 param_1,longlong param_2)

{
  DWORD dwErrCode;
  bool bVar1;
  
  bVar1 = *(short *)(param_2 + 0x20) != 0;
  if (bVar1) {
    dwErrCode = 0;
  }
  else {
    dwErrCode = GetLastError();
  }
  DeactivateActCtx(0,*(ULONG_PTR *)(param_2 + 0x48));
  if (!bVar1) {
    SetLastError(dwErrCode);
  }
  return;
}



void FUN_180009980(void)

{
  FUN_1800070d0((LPCRITICAL_SECTION)&DAT_180016b40);
  atexit(FUN_180009c30);
  return;
}



void FUN_1800099c0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_180016b68);
  atexit((_func_5014 *)&LAB_180009cb0);
  return;
}



void FUN_1800099f0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_180016b90);
  atexit((_func_5014 *)&LAB_180009cc0);
  return;
}



void FUN_180009a20(void)

{
  if (DAT_180016bf0 == '\0') {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_180016bf8);
    DAT_180016bf0 = '\x01';
  }
  atexit(FUN_180009d00);
  return;
}



void FUN_180009a60(void)

{
  if (DAT_180016bb8 == '\0') {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_180016bc0);
    DAT_180016bb8 = '\x01';
  }
  atexit(FUN_180009cd0);
  return;
}



void FUN_180009ab0(void)

{
  free(DAT_180016a00);
  DAT_180016a00 = (void *)0x0;
  return;
}



void FUN_180009ae0(void)

{
  free(DAT_180016a10);
  DAT_180016a10 = (void *)0x0;
  return;
}



void thunk_FUN_180006d50(void)

{
  FUN_180006d50();
  return;
}



void FUN_180009b20(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)((ulonglong)(DAT_1800166f0 - 1) * 0x10 + (longlong)DAT_1800166e8);
  for (iVar2 = DAT_1800166f0; iVar2 != 0; iVar2 = iVar2 + -1) {
    free((void *)*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + -2;
  }
  DAT_1800166f0 = 0;
                    // WARNING: Could not recover jumptable at 0x000180009b80. Too many branches
                    // WARNING: Treating indirect jump as call
  free(DAT_1800166e8);
  return;
}



void thunk_FUN_180006de0(void)

{
  FUN_180006de0();
  return;
}



void FUN_180009ba0(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)((ulonglong)(DAT_180016728 - 1) * 0x10 + (longlong)DAT_180016720);
  for (iVar2 = DAT_180016728; iVar2 != 0; iVar2 = iVar2 + -1) {
    free((void *)*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + -2;
  }
  DAT_180016728 = 0;
                    // WARNING: Could not recover jumptable at 0x000180009c00. Too many branches
                    // WARNING: Treating indirect jump as call
  free(DAT_180016720);
  return;
}



void FUN_180009c10(void)

{
  DAT_180016740 = 0;
                    // WARNING: Could not recover jumptable at 0x000180009c21. Too many branches
                    // WARNING: Treating indirect jump as call
  free(DAT_180016738);
  return;
}



void FUN_180009c30(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_180016b40);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180009c50(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_180016750;
  if (DAT_180016750 != (void *)0x0) {
    if (*(void **)((longlong)DAT_180016750 + 0x20000) != (void *)0x0) {
      FUN_180008c80(*(void **)((longlong)DAT_180016750 + 0x20000));
    }
    *(undefined8 *)((longlong)pvVar1 + 0x20000) = 0;
    operator_delete(pvVar1);
  }
  DAT_180016750 = (void *)0x0;
  _DAT_180016758 = 0;
  _DAT_180016760 = 0;
  return;
}



void FUN_180009cd0(void)

{
  if (DAT_180016bb8 != '\0') {
    DAT_180016bb8 = '\0';
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_180016bc0);
  }
  return;
}



void FUN_180009d00(void)

{
  if (DAT_180016bf0 != '\0') {
    DAT_180016bf0 = '\0';
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_180016bf8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180009d30(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_180016780;
  while (puVar2 != (undefined8 *)0x0) {
    FUN_180008cc0(&DAT_180016780,(undefined8 *)puVar2[2]);
    puVar1 = (undefined8 *)*puVar2;
    free(puVar2 + -4);
    puVar2 = puVar1;
  }
  _DAT_180016788 = 0;
  DAT_180016780 = (undefined8 *)0x0;
  return;
}


