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

typedef struct _s__RTTIClassHierarchyDescriptor _s__RTTIClassHierarchyDescriptor, *P_s__RTTIClassHierarchyDescriptor;

struct _s__RTTIClassHierarchyDescriptor {
    dword signature;
    dword attributes; // bit flags
    dword numBaseClasses; // number of base classes (i.e. rtti1Count)
    RTTIBaseClassDescriptor *32 __((image-base-relative)) *32 __((image-base-relative)) pBaseClassArray; // ref to BaseClassArray (RTTI 2)
};

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    ImageBaseOffset32 pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    ImageBaseOffset32 pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef struct type_info type_info, *Ptype_info;

struct type_info { // PlaceHolder Class Structure
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

typedef ulonglong __uint64;

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

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef void *PVOID;

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

typedef wchar_t WCHAR;

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

typedef union _LARGE_INTEGER LARGE_INTEGER;

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

typedef CHAR *LPSTR;

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

typedef WCHAR *LPCWSTR;

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
    char pdbpath[101];
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

typedef int BOOL;

typedef HINSTANCE HMODULE;

typedef HANDLE *LPHANDLE;

typedef BOOL *LPBOOL;

typedef uint UINT;

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

typedef struct RDPLogicalResourceEntryHeader RDPLogicalResourceEntryHeader, *PRDPLogicalResourceEntryHeader;

struct RDPLogicalResourceEntryHeader { // PlaceHolder Structure
};

typedef struct SFsFile SFsFile, *PSFsFile;

struct SFsFile { // PlaceHolder Structure
};

typedef struct CVertexElement CVertexElement, *PCVertexElement;

struct CVertexElement { // PlaceHolder Structure
};

typedef struct AssetManager AssetManager, *PAssetManager;

struct AssetManager { // PlaceHolder Structure
};

typedef struct CMaterialsPack CMaterialsPack, *PCMaterialsPack;

struct CMaterialsPack { // PlaceHolder Structure
};

typedef struct CResourceDataPackBuilder CResourceDataPackBuilder, *PCResourceDataPackBuilder;

struct CResourceDataPackBuilder { // PlaceHolder Structure
};

typedef enum TYPE {
} TYPE;

typedef enum ELoadFlags {
} ELoadFlags;

typedef struct Settings Settings, *PSettings;

struct Settings { // PlaceHolder Structure
};

typedef enum ENUM {
} ENUM;

typedef struct string_base<char> string_base<char>, *Pstring_base<char>;

struct string_base<char> { // PlaceHolder Structure
};

typedef struct path path, *Ppath;

struct path { // PlaceHolder Structure
};

typedef struct file file, *Pfile;

struct file { // PlaceHolder Structure
};

typedef enum FLAGS {
} FLAGS;

typedef int (*_onexit_t)(void);

typedef ulonglong size_t;

typedef int errno_t;

typedef size_t rsize_t;



pointer[3] vftable;
pointer[22] vftable;
undefined1 DAT_1800198fb;
undefined LAB_180001900;
undefined LAB_180001920;
undefined LAB_180001930;
undefined LAB_1800019a0;
undefined FUN_180001a90;
undefined FUN_1800019d0;
uint DAT_180029700;
void *DAT_1800296f8;
undefined4 DAT_1800238a0;
undefined4 DAT_1800238ac;
undefined DAT_180023ec0;
undefined LAB_1800022f0;
undefined8 DAT_180027c90;
undefined DAT_180027c98;
uint DAT_18002450c;
uint DAT_180024508;
void *DAT_180024500;
undefined LAB_1800032e0;
undefined8 *DAT_180024500;
int DAT_180024560;
longlong DAT_180024558;
longlong DAT_180024550;
undefined DAT_180027e30;
undefined DAT_180027e50;
undefined DAT_180027e10;
undefined DAT_180027e68;
undefined DAT_180027e18;
undefined DAT_180027e20;
undefined DAT_180027e28;
undefined DAT_180027e38;
undefined DAT_180027e40;
undefined DAT_180027e48;
undefined8 DAT_180027e58;
undefined DAT_180027e60;
undefined8 DAT_180027e70;
undefined DAT_180027e78;
undefined DAT_180027e88;
undefined DAT_180027e90;
undefined DAT_180027ea0;
undefined DAT_180027ea8;
undefined DAT_180027e80;
undefined DAT_180027e98;
undefined DAT_180027eb0;
pointer[11] vftable;
undefined1 DAT_18001c86c;
undefined1 DAT_18001cbe0;
undefined1 DAT_1800195b4;
pointer[1] vftable;
pointer[15] vftable;
undefined DAT_18001d144;
undefined DAT_18001d22c;
pointer[10] vftable;
undefined *PTR_`vftable'_180019278;
undefined1 DAT_18001da04;
undefined1 DAT_18001dd18;
undefined2 DAT_18001c880;
undefined DAT_18001e000;
pointer[2] vftable;
undefined *PTR_DAT_1800230f0;
uint DAT_18002b910;
undefined1 DAT_1800296f0;
float DAT_180027c34;
undefined DAT_1800296e0;
undefined8 DAT_1800296e8;
undefined DAT_180029710;
undefined DAT_18002b710;
undefined *PTR_g_StartupValidator_180019328;
int DAT_1800296d8;
undefined8 *DAT_1800296d0;
undefined DAT_1800296c0;
undefined8 DAT_180027ec0;
undefined4 DAT_180027ed0;
longlong *DAT_1800296d0;
undefined8 DAT_180027710;
undefined DAT_180027718;
char DAT_1800296f0;
undefined8 DAT_180027c50;
LARGE_INTEGER DAT_1800296e8;
undefined _type_info_dtor_internal_method;
PVOID DAT_18002b928;
undefined FUN_180017fe8;
PVOID DAT_18002b920;
undefined LAB_180017fa4;
int DAT_180027bf0;
void *DAT_18002b918;
int DAT_18002b914;
void *StackBase;
undefined8 DAT_18002b930;
undefined DAT_180019338;
undefined DAT_180019448;
undefined DAT_180019450;
undefined DAT_180019460;
undefined DAT_180023020;
undefined8 DAT_18001f890;
undefined8 DAT_18001f8a0;
IMAGE_DOS_HEADER IMAGE_DOS_HEADER_180000000;
ulonglong DAT_180023028;
undefined DAT_180023030;
void *StackLimit;
undefined FUN_180018600;
undefined DAT_180027dc0;
undefined FUN_180018800;
undefined DAT_1800296c8;
undefined LAB_180018890;
undefined4 DAT_180024508;
void *DAT_180027de8;
void *DAT_180027df8;
int DAT_180024528;
longlong DAT_180024520;
longlong DAT_180024518;
int DAT_180024540;
void *DAT_180024538;
int DAT_180024578;
void *DAT_180024570;
undefined8 DAT_180027728;
undefined DAT_180027730;
undefined8 DAT_180027740;
undefined DAT_180027748;
undefined8 DAT_180027758;
undefined DAT_180027760;

undefined8 * FUN_180001000(undefined8 *param_1,byte param_2)

{
  *param_1 = IConfiguration::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



undefined8 FUN_180001030(undefined4 param_1)

{
  switch(param_1) {
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x61:
  case 0x66:
  case 0x67:
  case 0x68:
    return 1;
  default:
    return 0;
  }
}



void FUN_1800010c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  *param_1 = ICompilationBackEnd::vftable;
  FUN_1800016c0(param_1 + 0x20,(undefined8 *)param_1[0x20]);
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b));
  iVar2 = *(int *)(param_1 + 0x19);
  puVar1 = (undefined8 *)((ulonglong)(iVar2 - 1) * 0x10 + param_1[0x18]);
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    free((void *)*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + -2;
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  free((void *)param_1[0x18]);
  FUN_180001640(param_1 + 0x14);
  FUN_180001200(param_1 + 10);
  *(undefined4 *)(param_1 + 2) = 0;
                    // WARNING: Could not recover jumptable at 0x000180001187. Too many branches
                    // WARNING: Treating indirect jump as call
  free((void *)param_1[1]);
  return;
}



void FUN_180001190(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x90) = param_2;
  return;
}



undefined8 FUN_1800011a0(void)

{
  return 5;
}



longlong FUN_1800011b0(longlong param_1)

{
  return (ulonglong)*(uint *)(param_1 + 0x28) << 10;
}



undefined8 FUN_1800011c0(void)

{
  return 0;
}



undefined8 * FUN_1800011d0(undefined8 *param_1,uint param_2)

{
  FUN_1800010c0(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



void FUN_180001200(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  iVar2 = (int)param_1[1];
  puVar1 = (undefined8 *)((ulonglong)(iVar2 - 1) * 0x10 + *param_1);
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    free((void *)*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + -2;
  }
  *(undefined4 *)(param_1 + 1) = 0;
                    // WARNING: Could not recover jumptable at 0x000180001262. Too many branches
                    // WARNING: Treating indirect jump as call
  free((void *)*param_1);
  return;
}



char * FUN_180001270(void)

{
  return "Linux";
}



longlong FUN_180001280(longlong param_1)

{
  if (param_1 != 0) {
    return param_1 + 8;
  }
  return 0;
}



undefined2 FUN_180001290(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0x128);
}



undefined8 * FUN_1800012a0(undefined8 *param_1,uint param_2)

{
  *param_1 = CLinuxConfiguration::vftable;
  param_1[1] = CLinuxConfiguration::vftable;
  FUN_1800010c0(param_1 + 1);
  *param_1 = IConfiguration::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



undefined8 FUN_180001300(longlong param_1,char *param_2,char *param_3,longlong *param_4)

{
  int iVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined8 uVar3;
  uint local_18;
  
  iVar1 = _stricmp(param_2,"platform");
  if (iVar1 == 0) {
    iVar1 = sscanf(param_3,"%x");
    uVar2 = CONCAT44(extraout_var,iVar1);
    if (iVar1 == 1) {
      uVar2 = (ulonglong)local_18;
      *(uint *)(param_1 + 0x128) = local_18;
    }
  }
  else {
    iVar1 = _stricmp(param_2,"skiptex");
    if (iVar1 == 0) {
      iVar1 = printf("Linux option: skip textures mode\n");
      uVar2 = CONCAT44(extraout_var_00,iVar1);
      *(undefined1 *)(param_1 + 0x130) = 1;
    }
    else {
      iVar1 = _stricmp(param_2,"GL");
      if ((iVar1 != 0) && (iVar1 = _stricmp(param_2,"OpenGL"), iVar1 != 0)) {
        iVar1 = _stricmp(param_2,"UpsideDownTextures");
        if (iVar1 == 0) {
          iVar1 = _stricmp(param_3,"1");
          uVar2 = CONCAT44(extraout_var_01,iVar1);
          if (iVar1 == 0) {
            *(undefined1 *)(param_1 + 0x131) = 1;
            goto LAB_180001407;
          }
        }
        uVar3 = FUN_1800058f0(param_1,param_2,param_3,param_4);
        return uVar3;
      }
      uVar2 = 0;
      *(undefined2 *)(param_1 + 0x128) = 0;
      *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | 9;
    }
  }
LAB_180001407:
  return CONCAT71((int7)(uVar2 >> 8),1);
}



ulonglong FUN_180001420(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_1800061f0(param_1,param_2,param_3,param_4);
  if ((int)uVar2 == 9) {
    iVar1 = (**(code **)(*param_2 + 0x48))(param_2);
    if (iVar1 == 0x20) {
      uVar2 = FUN_180002300((longlong)(param_1 + -1),param_2,param_3,param_4);
    }
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



undefined8 FUN_180001480(undefined8 param_1,int param_2,undefined4 *param_3)

{
  if ((param_2 != 0x10) && (param_2 != 0x30)) {
    *param_3 = 4;
    return 0;
  }
  *param_3 = 0x10;
  return 0;
}



undefined8
FUN_1800014a0(longlong param_1,int param_2,undefined8 *param_3,undefined4 *param_4,
             undefined8 *param_5,longlong *param_6)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    return 2;
  }
  uVar1 = FUN_1800076e0(param_1,param_3,param_4,param_5,param_6);
  return uVar1;
}



undefined8 FUN_1800014e0(undefined8 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0x20:
  case 0x21:
  case 0x22:
    return 1;
  default:
    return 2;
  case 0x30:
  case 0x32:
  case 0x33:
  case 0x41:
  case 0x45:
    return 3;
  }
}



undefined8 FUN_180001550(HMODULE param_1,int param_2)

{
  if (param_2 == 1) {
    DisableThreadLibraryCalls(param_1);
  }
  return 1;
}



void RegisterConfigurations(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
                    // 0x1570  1  RegisterConfigurations
  if (param_1 != (longlong *)0x0) {
    puVar1 = malloc(0x140);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = IConfiguration::vftable;
      FUN_180005820(puVar1 + 1);
      puVar1[1] = CLinuxConfiguration::vftable;
      *puVar1 = CLinuxConfiguration::vftable;
      puVar1[0x26] = 0;
      *(undefined2 *)(puVar1 + 0x27) = 0;
      *(undefined2 *)(puVar1 + 0x26) = 0;
      *(uint *)(puVar1 + 0x26) = *(uint *)(puVar1 + 0x26) | 9;
      *(undefined4 *)(puVar1 + 0x18) = 1;
    }
    (**(code **)(*param_1 + 8))(param_1,puVar1,param_2);
  }
  return;
}



void ReleaseConfiguration(undefined8 *param_1)

{
                    // 0x1620  2  ReleaseConfiguration
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}



void FUN_180001640(longlong *param_1)

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
      FUN_1800176b0(param_1,(undefined8 *)plVar2[2]);
      plVar1 = (longlong *)*plVar2;
      free((void *)plVar2[-3]);
      plVar2[-3] = 0;
      free(plVar2 + -3);
      plVar2 = plVar1;
    } while (plVar1 != (longlong *)0x0);
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



void FUN_1800016c0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  while (param_2 != (undefined8 *)0x0) {
    FUN_1800016c0(param_1,(undefined8 *)param_2[2]);
    puVar1 = (undefined8 *)*param_2;
    puVar3 = (undefined8 *)param_2[-3];
    while (puVar3 != (undefined8 *)0x0) {
      FUN_180003f00(param_2 + -3,(undefined8 *)puVar3[2]);
      puVar2 = (undefined8 *)*puVar3;
      free((void *)puVar3[-2]);
      puVar3[-2] = 0;
      free(puVar3 + -2);
      puVar3 = puVar2;
    }
    param_2[-3] = 0;
    *(undefined4 *)(param_2 + -2) = 0;
    *(undefined4 *)(param_2 + -5) = 0;
    free((void *)param_2[-6]);
    free(param_2 + -6);
    param_2 = puVar1;
  }
  return;
}



void FUN_1800017a0(longlong param_1,uint param_2)

{
  FUN_1800012a0((undefined8 *)(param_1 + -8),param_2);
  return;
}



void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x0001800017b0. Too many branches
                    // WARNING: Treating indirect jump as call
  DeleteCriticalSection(lpCriticalSection);
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800017f7)
// WARNING: Removing unreachable block (ram,0x000180001848)

longlong * FUN_1800017c0(longlong *param_1)

{
  char *pcVar1;
  void *pvVar2;
  uint uVar3;
  
  uVar3 = 0;
  pcVar1 = "";
  do {
    if (*pcVar1 == '\0') break;
    uVar3 = uVar3 + 1;
    pcVar1 = pcVar1 + 1;
  } while (uVar3 != 0xffffffff);
  *(uint *)((longlong)param_1 + 0xc) = uVar3;
  *(uint *)(param_1 + 1) = uVar3;
  if (uVar3 == 0) {
    *param_1 = 0;
  }
  else {
    pvVar2 = malloc((ulonglong)(uVar3 + 1));
    *param_1 = (longlong)pvVar2;
    memcpy(pvVar2,&DAT_1800198fb,(ulonglong)uVar3);
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 1) + *param_1) = 0;
  }
  uVar3 = 0;
  pcVar1 = "";
  do {
    if (*pcVar1 == '\0') break;
    uVar3 = uVar3 + 1;
    pcVar1 = pcVar1 + 1;
  } while (uVar3 != 0xffffffff);
  *(uint *)((longlong)param_1 + 0x1c) = uVar3;
  *(uint *)(param_1 + 3) = uVar3;
  if (uVar3 == 0) {
    param_1[2] = 0;
  }
  else {
    pvVar2 = malloc((ulonglong)(uVar3 + 1));
    param_1[2] = (longlong)pvVar2;
    memcpy(pvVar2,&DAT_1800198fb,(ulonglong)uVar3);
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 3) + param_1[2]) = 0;
  }
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xf8;
  param_1[4] = (longlong)&DAT_1800198fb;
  param_1[5] = -1;
  param_1[6] = -1;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xffffffff;
  return param_1;
}



void FUN_1800018d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_res18);
  return;
}



void FUN_1800019d0(longlong param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = ((uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 3)) * 0x100 +
          (uint)*(byte *)(param_1 + 2);
  uVar6 = uVar4 >> 0xc;
  uVar2 = ((uint)*(byte *)(param_1 + 7) * 0x100 + (uint)*(byte *)(param_1 + 6)) * 0x100 +
          (uint)*(byte *)(param_1 + 5);
  iVar5 = (uVar4 & 0xfff) << 0xc;
  *(char *)(param_1 + 5) = (char)uVar6;
  uVar4 = uVar2 >> 0xc;
  iVar3 = (uVar2 & 0xfff) << 0xc;
  *(char *)(param_1 + 2) = (char)uVar4;
  *(char *)(param_1 + 4) = (char)((uint)iVar3 >> 0x10);
  *(byte *)(param_1 + 3) = (byte)(uVar4 >> 8) | (byte)((uint)iVar3 >> 8);
  *(char *)(param_1 + 7) = (char)((uint)iVar5 >> 0x10);
  *(byte *)(param_1 + 6) = (byte)(uVar6 >> 8) | (byte)((uint)iVar5 >> 8);
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0xf) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0xe) = uVar1;
  return;
}



void FUN_180001a90(longlong param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = ((uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 3)) * 0x100 +
          (uint)*(byte *)(param_1 + 2);
  uVar2 = uVar3 >> 0xc;
  iVar4 = (uVar3 & 0xfff) << 0xc;
  *(char *)(param_1 + 2) = (char)uVar2;
  *(char *)(param_1 + 4) = (char)((uint)iVar4 >> 0x10);
  *(byte *)(param_1 + 3) = (byte)(uVar2 >> 8) | (byte)((uint)iVar4 >> 8);
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  return;
}



undefined8 FUN_180001af0(uint param_1,uint param_2,int param_3,longlong param_4)

{
  code *pcVar1;
  void *_Dst;
  uint uVar2;
  ulonglong uVar3;
  void *_Src;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_68;
  int local_60;
  uint local_5c;
  code *local_48;
  
  if (((param_1 != 0) && (param_2 != 0)) && ((param_2 & param_2 - 1) == 0)) {
    if (param_3 == 0x11) {
      iVar4 = 8;
      local_48 = (code *)&LAB_180001900;
      pcVar1 = (code *)&LAB_180001920;
    }
    else if (param_3 == 0x12) {
      iVar4 = 0x10;
      local_48 = (code *)&LAB_180001930;
      pcVar1 = (code *)&LAB_1800019a0;
    }
    else {
      if (param_3 != 0x13) {
        return 0;
      }
      iVar4 = 0x10;
      local_48 = FUN_1800019d0;
      pcVar1 = FUN_180001a90;
    }
    local_60 = 0;
    do {
      uVar8 = param_2 + 3 >> 2;
      uVar6 = param_1 + 3 >> 2;
      uVar7 = uVar8 * uVar6;
      if (param_2 == 1) {
        return 1;
      }
      if (param_2 == 2) {
        if (param_1 + 3 >> 2 != 0) {
          uVar3 = 0;
          uVar5 = (ulonglong)uVar6;
          do {
            (*pcVar1)(uVar3 + param_4);
            uVar3 = (ulonglong)(uint)((int)uVar3 + iVar4);
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
      else {
        if (uVar7 != 0) {
          uVar3 = 0;
          uVar5 = (ulonglong)uVar7;
          do {
            (*local_48)(uVar3 + param_4);
            uVar3 = (ulonglong)(uint)((int)uVar3 + iVar4);
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        uVar6 = uVar6 * iVar4;
        _Dst = malloc((ulonglong)uVar6);
        uVar2 = param_2 + 3 >> 3;
        local_5c = 0;
        if (uVar2 != 0) {
          local_68 = 0;
          uVar3 = (ulonglong)uVar6;
          do {
            _Src = (void *)((ulonglong)(((uVar8 - local_5c) + -1) * uVar6) + param_4);
            memcpy(_Dst,(void *)((ulonglong)local_68 + param_4),uVar3);
            memcpy((void *)((ulonglong)local_68 + param_4),_Src,uVar3);
            memcpy(_Src,_Dst,uVar3);
            local_5c = local_5c + 1;
            local_68 = local_68 + uVar6;
          } while (local_5c < uVar2);
        }
        if (_Dst != (void *)0x0) {
          operator_delete__(_Dst);
        }
      }
      param_1 = param_1 >> 1;
      param_4 = param_4 + (ulonglong)(uVar7 * iVar4);
      if (param_1 == 0) {
        param_1 = 1;
      }
      param_2 = param_2 >> 1;
      if (param_2 == 0) {
        param_2 = 1;
      }
      local_60 = local_60 + 1;
    } while (local_60 == 0);
    return 1;
  }
  return 0;
}



undefined8 FUN_180001d90(int param_1,ulonglong param_2,int param_3,longlong param_4)

{
  void *_Dst;
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *_Src;
  
  iVar4 = 0;
  if (((param_3 == 2) || (param_3 == 3)) || (param_3 == 0x1f)) {
    iVar4 = 4;
  }
  else if (param_3 == 0xe) {
    iVar4 = 1;
  }
  else if ((param_3 == 0x1c) || (param_3 == 8)) {
    iVar4 = 2;
  }
  uVar3 = (int)param_2 - 1;
  uVar5 = iVar4 * param_1;
  uVar7 = ((uint)(param_2 >> 1) & 0x7fffffff) + 1;
  if (uVar7 <= uVar3) {
    uVar6 = uVar3 * uVar5;
    uVar1 = param_2;
    _Dst = DAT_1800296f8;
    uVar2 = DAT_180029700;
    do {
      _Src = (void *)((ulonglong)((((int)uVar1 - uVar3) + -1) * uVar5) + param_4);
      if ((uVar2 & 1) == 0) {
        uVar2 = uVar2 | 1;
        DAT_180029700 = uVar2;
        _Dst = malloc(0x2000000);
        DAT_1800296f8 = _Dst;
      }
      memcpy(_Dst,(void *)((ulonglong)uVar6 + param_4),(ulonglong)uVar5);
      memcpy((void *)((ulonglong)uVar6 + param_4),_Src,(ulonglong)uVar5);
      if ((uVar2 & 1) == 0) {
        uVar2 = uVar2 | 1;
        DAT_180029700 = uVar2;
        _Dst = malloc(0x2000000);
        DAT_1800296f8 = _Dst;
      }
      memcpy(_Src,_Dst,(ulonglong)uVar5);
      uVar1 = param_2 & 0xffffffff;
      uVar3 = uVar3 - 1;
      uVar6 = uVar6 - uVar5;
    } while (uVar7 <= uVar3);
  }
  return 1;
}



void * FUN_180001ef0(longlong *param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  uint uVar10;
  ulonglong _Size;
  
  iVar1 = (**(code **)(*param_1 + 0x68))();
  if (((iVar1 != 0x11) && (iVar1 = (**(code **)(*param_1 + 0x68))(param_1), iVar1 != 0x12)) &&
     (iVar1 = (**(code **)(*param_1 + 0x68))(param_1), iVar1 != 0x13)) {
    iVar1 = (**(code **)(*param_1 + 0x68))(param_1);
    uVar2 = (**(code **)(*param_1 + 0x38))(param_1,param_2);
    iVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
    FUN_180001d90(iVar3,(ulonglong)uVar2,iVar1,(longlong)param_3);
    return param_3;
  }
  iVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2);
  uVar2 = (**(code **)(*param_1 + 0x38))(param_1,param_2);
  if ((iVar1 - 1U & uVar2) == 0) {
    iVar1 = (**(code **)(*param_1 + 0x68))(param_1);
    uVar2 = (**(code **)(*param_1 + 0x38))(param_1,param_2);
    uVar4 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
    FUN_180001af0(uVar4,uVar2,iVar1,(longlong)param_3);
    return param_3;
  }
  uVar2 = 1;
  uVar4 = (**(code **)(*param_1 + 0x38))(param_1,param_2);
  if (1 < uVar4) {
    do {
      uVar2 = uVar2 * 2;
      uVar4 = (**(code **)(*param_1 + 0x38))(param_1,param_2);
    } while (uVar2 < uVar4);
  }
  iVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2);
  iVar3 = (**(code **)(*param_1 + 0x38))(param_1,param_2);
  iVar5 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
  iVar6 = (**(code **)(*param_1 + 0x70))(param_1);
  iVar7 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
  iVar8 = (**(code **)(*param_1 + 0x70))(param_1);
  uVar10 = iVar7 * iVar8 * (uVar2 - iVar1) >> 3;
  uVar4 = DAT_180029700;
  if ((DAT_180029700 & 1) == 0) {
    uVar4 = DAT_180029700 | 1;
    DAT_180029700 = uVar4;
    DAT_1800296f8 = malloc(0x2000000);
  }
  pvVar9 = DAT_1800296f8;
  memset(DAT_1800296f8,0,(ulonglong)uVar10);
  if ((uVar4 & 1) == 0) {
    uVar4 = uVar4 | 1;
    DAT_180029700 = uVar4;
    pvVar9 = malloc(0x2000000);
    DAT_1800296f8 = pvVar9;
  }
  _Size = (ulonglong)((uint)(iVar6 * iVar3 * iVar5) >> 3);
  memcpy((void *)((ulonglong)uVar10 + (longlong)pvVar9),param_3,_Size);
  if ((uVar4 & 1) == 0) {
    DAT_180029700 = uVar4 | 1;
    DAT_1800296f8 = malloc(0x2000000);
  }
  iVar1 = (**(code **)(*param_1 + 0x68))(param_1);
  uVar4 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
  FUN_180001af0(uVar4,uVar2,iVar1,(longlong)DAT_1800296f8);
  if ((DAT_180029700 & 1) == 0) {
    DAT_180029700 = DAT_180029700 | 1;
    DAT_1800296f8 = malloc(0x2000000);
  }
  memcpy(param_3,DAT_1800296f8,_Size);
  return param_3;
}



ulonglong FUN_1800021a0(int param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  ulonglong uVar3;
  
  uVar6 = 0;
  piVar11 = &DAT_1800238ac;
  uVar3 = uVar6;
  do {
    if (*piVar11 == param_2) {
      iVar9 = (&DAT_1800238a0)[uVar3 * 4];
      goto LAB_1800021f6;
    }
    uVar1 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar1;
    piVar11 = piVar11 + 4;
  } while (uVar1 < 99);
  iVar9 = 0xff;
LAB_1800021f6:
  iVar12 = 1;
  if (param_1 == 4) {
    iVar12 = 6;
  }
  uVar4 = FUN_180001030(iVar9);
  uVar1 = 1;
  if ((int)uVar4 != 0) {
    uVar1 = 4;
  }
  piVar11 = &DAT_1800238a0;
  uVar3 = uVar6;
  do {
    if (*piVar11 == iVar9) {
      puVar5 = &DAT_1800238a0 + uVar3 * 4;
      goto LAB_180002244;
    }
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
    piVar11 = piVar11 + 4;
  } while (uVar2 < 99);
  puVar5 = (undefined4 *)&DAT_180023ec0;
LAB_180002244:
  if (param_6 < 0) {
    for (; ((param_3 != 0 || (param_4 != 0)) || (param_5 != 0)); param_5 = param_5 >> 1) {
      uVar2 = param_3;
      if (param_3 < uVar1) {
        uVar2 = uVar1;
      }
      uVar10 = param_4;
      if (param_4 < uVar1) {
        uVar10 = uVar1;
      }
      uVar8 = param_5;
      if (param_5 == 0) {
        uVar8 = 1;
      }
      param_3 = param_3 >> 1;
      param_4 = param_4 >> 1;
      uVar6 = (ulonglong)
              ((int)uVar6 + (uVar2 * uVar10 * uVar8 * (uint)*(byte *)(puVar5 + 1) * iVar12 >> 3));
    }
  }
  else {
    bVar7 = (byte)param_6;
    uVar2 = param_4 >> (bVar7 & 0x1f);
    uVar10 = param_3 >> (bVar7 & 0x1f);
    uVar8 = param_5 >> (bVar7 & 0x1f);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    if (uVar10 < uVar1) {
      uVar10 = uVar1;
    }
    if (uVar8 == 0) {
      uVar8 = 1;
    }
    uVar6 = (ulonglong)(uVar2 * uVar10 * uVar8 * (uint)*(byte *)(puVar5 + 1) * iVar12 >> 3);
  }
  return uVar6;
}



undefined8 FUN_180002300(longlong param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  longlong lVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  char *pcVar15;
  char *******pppppppcVar16;
  int iVar17;
  uint local_res10;
  uint local_res20;
  longlong *local_1b8;
  uint local_1b0;
  uint local_1ac;
  void *local_1a8 [2];
  void *local_198 [2];
  void *local_188 [2];
  undefined8 local_178;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  byte local_150;
  void *local_148 [2];
  char ******local_138 [4];
  char ******local_118 [4];
  byte local_f8;
  ushort local_e8;
  ushort local_e6;
  ushort uStack_e4;
  short sStack_e2;
  ushort uStack_e0;
  undefined2 uStack_de;
  int iStack_dc;
  undefined2 uStack_d8;
  undefined4 local_d6;
  undefined1 local_d2;
  undefined8 local_d1 [18];
  
  plVar14 = (longlong *)param_2[6];
  if (*(char *)(param_1 + 0x138) != '\0') goto LAB_18000279c;
  uVar9 = FUN_1800051b0(param_2);
  local_res20 = FUN_180004c20("red",param_2);
  local_1b0 = FUN_180004c20("green",param_2);
  local_1ac = FUN_180004c20("blue",param_2);
  local_res10 = FUN_180004c20("alpha",param_2);
  iVar4 = (**(code **)(*param_2 + 0x70))(param_2);
  plVar10 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,local_1a8);
  uVar12 = 0;
  uVar11 = FUN_180002de0(plVar10,"_n.dds",0);
  free(local_1a8[0]);
  iVar17 = 4;
  iVar7 = (int)uVar9;
  if ((int)uVar11 != -1) {
    iVar7 = 1;
  }
  if (iVar7 == 1) {
    cVar3 = IL_IsCompressedFormat(iVar4);
    if (cVar3 == '\0') {
      iVar4 = 0x13;
      local_res10 = 2;
      local_res20 = 4;
    }
    uVar12 = IL_FormatStr(iVar4);
    FUN_1800018d0(plVar14," * info * normal map semantic chosen: %s.\n",uVar12,param_4);
  }
  local_1b8 = (longlong *)(**(code **)(*param_2 + 0x58))(param_2,0);
  if (local_1b8 == (longlong *)0x0) {
    FUN_1800018d0(plVar14," * error * cannot access image!\n",uVar12,param_4);
    return 5;
  }
  uVar5 = FUN_180004fb0(param_2);
  uVar6 = FUN_180004ec0(param_2);
  cVar3 = (**(code **)(*local_1b8 + 0x88))();
  if (cVar3 == '\0') {
    uVar12 = (ulonglong)uVar5;
    param_4 = plVar14;
    uVar9 = FUN_180005610((longlong *)&local_1b8,uVar6,uVar12,plVar14);
    if ((char)uVar9 == '\0') goto LAB_1800024a4;
  }
  else {
    FUN_1800018d0(plVar14,"At this moment resizing CubeMap or 3D textures is not supported!\n",
                  uVar12,param_4);
LAB_1800024a4:
    FUN_1800018d0(plVar14," * warning * cannot adjust mip levels for image!\n",uVar12,param_4);
  }
  uVar12 = (ulonglong)local_1ac;
  uVar11 = (ulonglong)local_1b0;
  uVar9 = FUN_1800052b0(local_1b8,local_res20,uVar11,uVar12,local_res10,plVar14);
  if ((char)uVar9 == '\0') {
    FUN_1800018d0(plVar14," * error * cannot swizzle image channels!\n",uVar11,uVar12);
    return 6;
  }
  iVar7 = (**(code **)(*param_2 + 0x68))(param_2,0xffff);
  if (iVar7 != iVar4) {
    lVar1 = *local_1b8;
    uVar8 = (**(code **)(*param_2 + 0x68))(param_2,0xffff);
    uVar9 = 0;
    cVar3 = (**(code **)(lVar1 + 0xb0))(local_1b8,uVar8);
    if (cVar3 == '\0') {
      FUN_1800018d0(plVar14," * error * cannot convert image format!\n",uVar9,uVar12);
      return 7;
    }
  }
  iVar7 = (**(code **)(*local_1b8 + 0x68))();
  if (iVar7 == 0) {
    uVar9 = 0;
    cVar3 = (**(code **)(*local_1b8 + 0xb0))(local_1b8,3);
    if (cVar3 == '\0') {
      FUN_1800018d0(plVar14,
                    " * error * texture was in 24-bit format and conversion to 32-bit format failed!\n"
                    ,uVar9,uVar12);
      return 7;
    }
    FUN_1800018d0(plVar14," * info * texture converted from 24bpp to 32bpp.\n",uVar9,uVar12);
LAB_1800025aa:
    (**(code **)(*local_1b8 + 0xd0))(local_1b8,&LAB_1800022f0);
  }
  else if ((iVar4 == 3) || (iVar4 == 2)) goto LAB_1800025aa;
  iVar4 = 0xf;
  local_e6 = 0;
  uStack_e4 = 0;
  sStack_e2 = 0;
  uStack_e0 = 0;
  uStack_de = 0;
  iStack_dc = 0;
  uStack_d8 = 0;
  local_d6 = 0;
  local_d2 = 0;
  local_e8 = 0;
  puVar13 = local_d1;
  do {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  uVar11 = FUN_1800050b0(param_2);
  FUN_180002800(&local_e8,local_1b8,(byte)uVar11);
  FUN_180002a70(param_1,&local_e8,local_1b8,param_3);
  (**(code **)(*param_2 + 0x10))(param_2,local_148);
  plVar10 = (longlong *)fs::root_path((char *)local_1a8);
  pcVar15 = "";
  if ((char *)*plVar10 != (char *)0x0) {
    pcVar15 = (char *)*plVar10;
  }
  fs::path::path((path *)local_138,pcVar15,true);
  free(local_1a8[0]);
  local_1a8[0] = (void *)0x0;
  free(local_148[0]);
  FUN_1800017c0((longlong *)local_198);
  pppppppcVar16 = local_118;
  if ((local_f8 & 2) != 0) {
    pppppppcVar16 = (char *******)local_118[0];
  }
  FUN_180003200(local_198,(char *)pppppppcVar16);
  pppppppcVar16 = local_138;
  if ((local_f8 & 1) != 0) {
    pppppppcVar16 = (char *******)local_138[0];
  }
  FUN_180003200(local_188,(char *)pppppppcVar16);
  iVar4 = iStack_dc;
  local_178 = IL_FormatStr(iStack_dc);
  uVar2 = local_e8;
  local_164 = uStack_e0 & 0x7fff;
  local_170 = (uint)local_e8;
  local_16c = (uint)local_e6;
  local_168 = (uint)uStack_e4;
  if (sStack_e2 != 6) {
    iVar17 = (1 < uStack_e4) + 2;
  }
  local_160 = iVar17;
  uVar11 = FUN_1800021a0(iVar17,iVar4,local_170,local_16c,local_168,-1);
  local_15c = (int)uVar11;
  uVar12 = FUN_1800021a0(iVar17,iVar4,(uint)uVar2,(uint)local_e6,(uint)uStack_e4,0);
  local_158 = (int)uVar12;
  local_154 = (int)uVar11 - local_158;
  local_150 = local_150 ^ (*(char *)((longlong)param_2 + 0x24) * '\x02' ^ local_150) & 2;
  (**(code **)(*plVar14 + 0x28))(plVar14,local_198);
  free(local_188[0]);
  local_188[0] = (void *)0x0;
  free(local_198[0]);
  local_198[0] = (void *)0x0;
  fs::path::~path((path *)local_138);
LAB_18000279c:
  if (*(char *)((longlong)param_2 + 0x24) != '\0') {
    plVar14 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,local_148);
    pcVar15 = "";
    if ((char *)*plVar14 != (char *)0x0) {
      pcVar15 = (char *)*plVar14;
    }
    fs::path::path((path *)local_138,pcVar15,false);
    free(local_148[0]);
    fs::path::~path((path *)local_138);
  }
  return 0;
}



void FUN_180002800(undefined2 *param_1,longlong *param_2,byte param_3)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  ushort uVar4;
  undefined4 uVar5;
  
  memset(param_1,0,0x97);
  uVar3 = (**(code **)(*param_2 + 0x30))(param_2);
  *param_1 = uVar3;
  uVar3 = (**(code **)(*param_2 + 0x40))(param_2);
  param_1[1] = uVar3;
  uVar3 = (**(code **)(*param_2 + 0x50))(param_2);
  param_1[2] = uVar3;
  cVar1 = (**(code **)(*param_2 + 0x88))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x90))(param_2);
    uVar3 = 1;
  }
  else {
    uVar3 = 6;
  }
  param_1[3] = uVar3;
  uVar5 = (**(code **)(*param_2 + 0x68))(param_2);
  *(undefined4 *)(param_1 + 6) = uVar5;
  uVar4 = (**(code **)(*param_2 + 0x58))(param_2);
  param_1[4] = (ushort)param_3 << 0xf | uVar4 & 0x7fff;
  bVar2 = IL_IsCompressedFormat(*(undefined4 *)(param_1 + 6));
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfe;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | bVar2 & 1;
  return;
}



void FUN_1800028d0(longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4,
                  int param_5,undefined4 *param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  void *pvVar9;
  void *_Src;
  uint uVar10;
  uint local_res18;
  
  puVar2 = param_6;
  iVar3 = (**(code **)(*param_3 + 0x38))(param_3,param_4);
  iVar4 = (**(code **)(*param_3 + 0x28))(param_3,param_4);
  iVar5 = (**(code **)(*param_3 + 0x70))(param_3);
  uVar10 = (uint)(iVar5 * iVar3 * iVar4) >> 3;
  if (param_6 != (undefined4 *)0x0) {
    param_6[1] = 0;
    *param_6 = *(undefined4 *)(param_2 + 0x10);
  }
  local_res18 = 0;
  iVar3 = (**(code **)(*param_3 + 0x48))(param_3,param_4);
  if (iVar3 != 0) {
    param_6._0_4_ = 0;
    do {
      iVar3 = 0;
      if (0 < param_5) {
        do {
          lVar8 = (**(code **)(*param_3 + 0xa0))(param_3,param_4,iVar3);
          _Src = (void *)((ulonglong)(uint)param_6 + lVar8);
          if (*(char *)(param_1 + 0x139) != '\0') {
            _Src = FUN_180001ef0(param_3,param_4,_Src);
          }
          uVar7 = uVar10 + *(int *)(param_2 + 0x10);
          if (*(uint *)(param_2 + 0x14) < uVar7) {
            uVar6 = (*(uint *)(param_2 + 0x14) * 10 >> 3) + 0x10 & 0xfffffff0;
            if (uVar6 < uVar7) {
              uVar6 = uVar7;
            }
            *(uint *)(param_2 + 0x14) = uVar6;
            pvVar9 = realloc(*(void **)(param_2 + 8),(ulonglong)uVar6);
            *(void **)(param_2 + 8) = pvVar9;
          }
          memcpy((void *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)),_Src,
                 (ulonglong)uVar10);
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + uVar10;
          if (puVar2 != (undefined4 *)0x0) {
            piVar1 = puVar2 + 1;
            *piVar1 = *piVar1 + uVar10;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_5);
      }
      param_6._0_4_ = (uint)param_6 + uVar10;
      local_res18 = local_res18 + 1;
      uVar7 = (**(code **)(*param_3 + 0x48))(param_3,param_4);
    } while (local_res18 < uVar7);
  }
  return;
}



void FUN_180002a70(longlong param_1,ushort *param_2,longlong *param_3,undefined8 *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  void *pvVar11;
  uint uVar12;
  void *_Src;
  ulonglong uVar13;
  uint uVar14;
  uint local_res20;
  uint local_48;
  
  puVar7 = malloc(0x38);
  puVar9 = (undefined8 *)(puVar7 + 10);
  uVar13 = 0;
  *(undefined8 *)(puVar7 + 0xc) = param_4[1];
  *puVar9 = 0;
  if ((undefined8 *)param_4[1] == (undefined8 *)0x0) {
    *param_4 = puVar9;
  }
  else {
    *(undefined8 *)param_4[1] = puVar9;
  }
  *(int *)(param_4 + 2) = *(int *)(param_4 + 2) + 1;
  param_4[1] = puVar9;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    *(undefined8 *)(puVar7 + 2) = 0;
    *(undefined8 *)(puVar7 + 4) = 0;
    puVar7[6] = 0x3d;
    puVar7[8] = 0;
    *(undefined2 *)(puVar7 + 9) = 0;
  }
  *puVar7 = 0x20;
  if ((param_2[3] < 2) && (param_2[2] < 2)) {
    uVar1 = param_2[4];
    if (((((uVar1 & 0x8000) == 0) && (7 < (uVar1 & 0x7fff))) && (0x40 < *param_2)) &&
       (0x40 < param_2[1])) {
      uVar12 = 7;
      puVar8 = (undefined4 *)FUN_180002ef0(param_4);
      *puVar8 = 0x21;
      iVar2 = (**(code **)(*param_3 + 0x58))(param_3);
      if (iVar2 != 0) {
        do {
          FUN_1800028d0(param_1,(longlong)puVar8,param_3,(int)uVar13,(uint)param_2[3],
                        (undefined4 *)((longlong)param_2 + uVar13 * 8 + 0x17));
          uVar6 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar6;
          uVar14 = (**(code **)(*param_3 + 0x58))(param_3);
        } while (uVar6 < uVar14);
      }
    }
    else {
      uVar12 = uVar1 & 0x7fff;
    }
  }
  else {
    uVar12 = param_2[4] & 0x7fff;
  }
  uVar12 = (param_2[4] & 0x7fff) - uVar12;
  puVar8 = malloc(0x38);
  puVar9 = (undefined8 *)(puVar8 + 10);
  *(undefined8 *)(puVar8 + 0xc) = param_4[1];
  *puVar9 = 0;
  if ((undefined8 *)param_4[1] == (undefined8 *)0x0) {
    *param_4 = puVar9;
  }
  else {
    *(undefined8 *)param_4[1] = puVar9;
  }
  *(int *)(param_4 + 2) = *(int *)(param_4 + 2) + 1;
  param_4[1] = puVar9;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 0;
    *(undefined8 *)(puVar8 + 2) = 0;
    *(undefined8 *)(puVar8 + 4) = 0;
    puVar8[6] = 0x3d;
    puVar8[8] = 0;
    *(undefined2 *)(puVar8 + 9) = 0;
  }
  *puVar8 = 0x22;
  *(byte *)(param_2 + 0xb) = (byte)param_2[0xb] & 0xe1;
  *(byte *)(param_2 + 0xb) = (byte)param_2[0xb] | ((byte)uVar12 & 0xf) * '\x02';
  if (uVar12 < (param_2[4] & 0x7fff)) {
    do {
      uVar1 = param_2[3];
      iVar2 = (**(code **)(*param_3 + 0x38))(param_3,uVar12);
      iVar3 = (**(code **)(*param_3 + 0x28))(param_3,uVar12);
      iVar4 = (**(code **)(*param_3 + 0x70))(param_3);
      uVar14 = (uint)(iVar4 * iVar2 * iVar3) >> 3;
      local_48 = 0;
      iVar2 = (**(code **)(*param_3 + 0x48))(param_3,uVar12);
      if (iVar2 != 0) {
        local_res20 = 0;
        do {
          iVar2 = 0;
          if (uVar1 != 0) {
            do {
              lVar10 = (**(code **)(*param_3 + 0xa0))(param_3,uVar12,iVar2);
              _Src = (void *)((ulonglong)local_res20 + lVar10);
              if (*(char *)(param_1 + 0x139) != '\0') {
                _Src = FUN_180001ef0(param_3,uVar12,_Src);
              }
              uVar6 = uVar14 + puVar8[4];
              if ((uint)puVar8[5] < uVar6) {
                uVar5 = ((uint)(puVar8[5] * 10) >> 3) + 0x10 & 0xfffffff0;
                if (uVar5 < uVar6) {
                  uVar5 = uVar6;
                }
                puVar8[5] = uVar5;
                pvVar11 = realloc(*(void **)(puVar8 + 2),(ulonglong)uVar5);
                *(void **)(puVar8 + 2) = pvVar11;
              }
              memcpy((void *)((ulonglong)(uint)puVar8[4] + *(longlong *)(puVar8 + 2)),_Src,
                     (ulonglong)uVar14);
              puVar8[4] = puVar8[4] + uVar14;
              iVar2 = iVar2 + 1;
            } while (iVar2 < (int)(uint)uVar1);
          }
          local_res20 = local_res20 + uVar14;
          local_48 = local_48 + 1;
          uVar6 = (**(code **)(*param_3 + 0x48))(param_3,uVar12);
        } while (local_48 < uVar6);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < (param_2[4] & 0x7fff));
  }
  FUN_180002f60((longlong *)(puVar7 + 2),(ulonglong)(uint)puVar7[4] + *(longlong *)(puVar7 + 2),
                (undefined1 *)param_2,(undefined1 *)((longlong)param_2 + 0x97));
  return;
}



ulonglong FUN_180002de0(longlong *param_1,char *param_2,uint param_3)

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
          if (*pcVar4 == '\0') goto LAB_180002e62;
          if ((cVar2 != *pcVar4) ||
             ((longlong)(int)*(uint *)(param_1 + 1) <= (longlong)(pcVar4 + (lVar1 - lVar3)))) break;
          cVar2 = pcVar4[lVar1 + 1];
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
      }
      if (*pcVar4 == '\0') {
LAB_180002e62:
        return (ulonglong)param_3;
      }
    }
  }
  return 0xffffffff;
}



uint FUN_180002e70(longlong *param_1,void *param_2,uint param_3)

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



void FUN_180002ef0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = malloc(0x38);
  puVar1 = (undefined8 *)(puVar2 + 10);
  *(undefined8 *)(puVar2 + 0xc) = param_1[1];
  *puVar1 = 0;
  if ((undefined8 *)param_1[1] == (undefined8 *)0x0) {
    *param_1 = puVar1;
  }
  else {
    *(undefined8 *)param_1[1] = puVar1;
  }
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
  param_1[1] = puVar1;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined8 *)(puVar2 + 4) = 0;
    puVar2[6] = 0x3d;
    puVar2[8] = 0;
    *(undefined2 *)(puVar2 + 9) = 0;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180003068)

void FUN_180002f60(longlong *param_1,longlong param_2,undefined1 *param_3,undefined1 *param_4)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar9;
  ulonglong uVar8;
  
  iVar5 = 0;
  if (param_3 != param_4) {
    iVar5 = (int)param_4 - (int)param_3;
  }
  pvVar3 = (void *)*param_1;
  uVar6 = iVar5 + (int)param_1[1];
  if (*(uint *)((longlong)param_1 + 0xc) < uVar6) {
    *(uint *)((longlong)param_1 + 0xc) = uVar6;
    pvVar2 = realloc(pvVar3,(ulonglong)uVar6);
    *param_1 = (longlong)pvVar2;
  }
  pvVar2 = (void *)*param_1;
  lVar4 = (longlong)pvVar2 + (param_2 - (longlong)pvVar3);
  for (; param_3 != param_4; param_3 = param_3 + 1) {
    iVar5 = (int)param_1[1];
    if (iVar5 == 0) {
      if (*(int *)((longlong)param_1 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0x10;
        pvVar3 = realloc(pvVar2,0x10);
        *param_1 = (longlong)pvVar3;
      }
      if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
        *(undefined1 *)*param_1 = *param_3;
      }
      pvVar3 = (void *)*param_1;
      *(undefined4 *)(param_1 + 1) = 1;
      pvVar2 = pvVar3;
    }
    else {
      uVar7 = (int)lVar4 - (int)*param_1;
      uVar8 = (ulonglong)uVar7;
      uVar9 = ((int)*param_1 - (int)lVar4) + iVar5;
      uVar6 = iVar5 + 1;
      if (*(uint *)((longlong)param_1 + 0xc) < uVar6) {
        uVar1 = (*(uint *)((longlong)param_1 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
        if (uVar1 < uVar6) {
          uVar1 = uVar6;
        }
        *(uint *)((longlong)param_1 + 0xc) = uVar1;
        pvVar3 = realloc(pvVar2,(ulonglong)uVar1);
        *param_1 = (longlong)pvVar3;
      }
      if (uVar9 != 0) {
        memmove((void *)((ulonglong)(uVar7 + 1) + *param_1),(void *)(uVar8 + *param_1),
                (ulonglong)uVar9);
      }
      if ((undefined1 *)(uVar8 + *param_1) != (undefined1 *)0x0) {
        *(undefined1 *)(uVar8 + *param_1) = *param_3;
      }
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      pvVar3 = (void *)(uVar8 + *param_1);
      pvVar2 = (void *)*param_1;
    }
    lVar4 = (longlong)pvVar3 + 1;
  }
  return;
}



longlong *
FUN_1800030d0(longlong *param_1,longlong *param_2,int *param_3,undefined1 *param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == 0) {
    uVar8 = (ulonglong)param_5;
    if (*(uint *)((longlong)param_1 + 0xc) < param_5) {
      uVar5 = (*(uint *)((longlong)param_1 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
      if (uVar5 < param_5) {
        uVar5 = param_5;
      }
      *(uint *)((longlong)param_1 + 0xc) = uVar5;
      pvVar3 = realloc((void *)*param_1,(ulonglong)uVar5);
      *param_1 = (longlong)pvVar3;
    }
    if (param_5 != 0) {
      lVar4 = 0;
      do {
        if ((undefined1 *)(lVar4 + *param_1) != (undefined1 *)0x0) {
          *(undefined1 *)(lVar4 + *param_1) = *param_4;
        }
        lVar4 = lVar4 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    lVar4 = *param_1;
    *(uint *)(param_1 + 1) = param_5;
  }
  else {
    uVar7 = *param_3 - (int)*param_1;
    uVar5 = iVar1 + param_5;
    uVar9 = ((int)*param_1 - *param_3) + iVar1;
    if (*(uint *)((longlong)param_1 + 0xc) < uVar5) {
      uVar2 = (*(uint *)((longlong)param_1 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
      if (uVar2 < uVar5) {
        uVar2 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0xc) = uVar2;
      pvVar3 = realloc((void *)*param_1,(ulonglong)uVar2);
      *param_1 = (longlong)pvVar3;
    }
    if (uVar9 != 0) {
      memmove((void *)((ulonglong)(uVar7 + param_5) + *param_1),
              (void *)((ulonglong)uVar7 + *param_1),(ulonglong)uVar9);
    }
    uVar5 = 0;
    if (param_5 != 0) {
      do {
        puVar6 = (undefined1 *)((ulonglong)(uVar5 + uVar7) + *param_1);
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = *param_4;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_5);
    }
    *(uint *)(param_1 + 1) = (int)param_1[1] + param_5;
    lVar4 = (ulonglong)uVar7 + *param_1;
  }
  *param_2 = lVar4;
  return param_2;
}



// WARNING: Removing unreachable block (ram,0x000180003254)

undefined8 * FUN_180003200(undefined8 *param_1,char *param_2)

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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1800032f0(void)

{
  uint uVar1;
  undefined8 *puVar2;
  HANDLE hSourceHandle;
  
  DAT_180027c90 = 0;
  _DAT_180027c98 = 0;
  hSourceHandle = GetCurrentThread();
  DuplicateHandle((HANDLE)0x0,hSourceHandle,(HANDLE)0x0,(LPHANDLE)&DAT_180027c90,0,0,0);
  _DAT_180027c98 = GetCurrentThreadId();
  uVar1 = DAT_180024508 + 1;
  if (DAT_18002450c < uVar1) {
    DAT_18002450c = (DAT_18002450c * 10 >> 3) + 0x10 & 0xfffffff0;
    if (DAT_18002450c < uVar1) {
      DAT_18002450c = uVar1;
    }
    DAT_180024500 = realloc(DAT_180024500,(ulonglong)(DAT_18002450c << 3));
  }
  puVar2 = (undefined8 *)((longlong)DAT_180024500 + (ulonglong)DAT_180024508 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &DAT_180027c90;
  }
  DAT_180024508 = DAT_180024508 + 1;
  atexit((_func_5014 *)&LAB_1800032e0);
  return &DAT_180027c90;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1800033d0(void)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar3 = (ulonglong)(int)DAT_180024508;
  uVar4 = 0;
  uVar2 = 0;
  if (DAT_180024508 != 0) {
    uVar6 = DAT_180024508 - 1;
    lVar7 = uVar3 * 8 + -8;
    puVar1 = DAT_180024500;
    puVar5 = DAT_180024500;
    do {
      if ((HANDLE *)*puVar5 == &DAT_180027c90) {
        if (uVar4 < uVar6) {
          *puVar5 = *(undefined8 *)(lVar7 + (longlong)puVar1);
          puVar1 = DAT_180024500;
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
  DAT_180024508 = uVar2;
  CloseHandle(DAT_180027c90);
  DAT_180027c90 = (HANDLE)0x0;
  _DAT_180027c98 = 0;
  return;
}



longlong FUN_180003460(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  void *local_18 [2];
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = FUN_180003a30(local_18,param_2,(va_list)&local_res18);
  FUN_1800035a0((longlong *)(param_1 + 0x28),puVar1);
  free(local_18[0]);
  return param_1;
}



longlong FUN_1800034b0(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1800034e0(param_1,param_2,(char *)&local_res18);
  return param_1;
}



void FUN_1800034e0(longlong param_1,char *param_2,char *param_3)

{
  ENUM EVar1;
  undefined8 uVar2;
  bool bVar3;
  
  bVar3 = *(int *)(param_1 + 0x30) != 0;
  if (bVar3) {
    uVar2 = FUN_180003650(*(undefined4 *)(param_1 + 4));
    EVar1 = _CLFilter((uint)uVar2);
    _CLog(*(TYPE *)(param_1 + 4),*(char **)(param_1 + 8),*(char **)(param_1 + 0x10),
          *(int *)(param_1 + 0x18),EVar1,0,(string_base<char> *)(param_1 + 0x28));
  }
  uVar2 = FUN_180003650(*(undefined4 *)(param_1 + 4));
  EVar1 = _CLFilter((uint)uVar2);
  _CLogV(*(TYPE *)(param_1 + 4),*(char **)(param_1 + 8),*(char **)(param_1 + 0x10),
         *(int *)(param_1 + 0x18),EVar1,-(uint)bVar3 & 2,param_2,param_3);
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800035d2)

void FUN_1800035a0(longlong *param_1,undefined8 *param_2)

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



undefined8 FUN_180003650(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0x4e4f4e45;
  case 1:
    return 0x4641544c;
  case 2:
    return 0x45525252;
  case 3:
    return 0x494e464f;
  case 4:
    return 0x5741524e;
  case 5:
    return 0x44454247;
  case 6:
    return 0x56455242;
  case 7:
    return 0x56455231;
  case 8:
    return 0x56455232;
  case 9:
    return 0x56455233;
  case 10:
    return 0x56455234;
  case 0xb:
    return 0x56455235;
  case 0xc:
    return 0x56455236;
  case 0xd:
    return 0x56455237;
  case 0xe:
    return 0x56455238;
  case 0xf:
    return 0x56455245;
  default:
    return 0;
  }
}



undefined8 * FUN_180003710(undefined8 *param_1,undefined8 *param_2)

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



// WARNING: Removing unreachable block (ram,0x0001800037d9)
// WARNING: Removing unreachable block (ram,0x0001800037e0)

void FUN_1800037c0(longlong *param_1,ulonglong param_2)

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



// WARNING: Removing unreachable block (ram,0x0001800038cb)
// WARNING: Removing unreachable block (ram,0x0001800038d8)

undefined8 * FUN_180003870(undefined8 *param_1,undefined8 *param_2,char *param_3)

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
  FUN_180003970(param_2,param_1);
  return param_2;
}



undefined8 * FUN_180003970(undefined8 *param_1,undefined8 *param_2)

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



LPCRITICAL_SECTION FUN_1800039e0(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return param_1;
}



undefined8 * FUN_180003a00(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_180003a30(param_1,param_2,(va_list)&local_res18);
  return param_1;
}



undefined8 * FUN_180003a30(undefined8 *param_1,char *param_2,va_list param_3)

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



undefined8 * FUN_180003b00(undefined8 *param_1,LPCSTR param_2)

{
  char cVar1;
  uint cchWideChar;
  LPWSTR lpWideCharStr;
  int cbMultiByte;
  longlong lVar2;
  LPCSTR pCVar3;
  LPWSTR local_28;
  undefined8 local_20;
  
  lVar2 = -1;
  pCVar3 = param_2;
  do {
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    cVar1 = *pCVar3;
    pCVar3 = pCVar3 + 1;
  } while (cVar1 != '\0');
  cbMultiByte = ~(uint)lVar2 - 1;
  if (cbMultiByte == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  cchWideChar = MultiByteToWideChar(0,0,param_2,cbMultiByte,(LPWSTR)0x0,0);
  if (cchWideChar == 0xffffffff) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    local_28 = (LPWSTR)0x0;
    local_20 = 0;
    FUN_180003d20((longlong *)&local_28,(ulonglong)cchWideChar);
    lpWideCharStr = local_28;
    if (local_28 == (LPWSTR)0x0) {
      lpWideCharStr = malloc(2);
      *lpWideCharStr = L'\0';
    }
    MultiByteToWideChar(0,0,param_2,cbMultiByte,lpWideCharStr,cchWideChar);
    *(undefined4 *)(param_1 + 1) = (undefined4)local_20;
    *param_1 = lpWideCharStr;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_20._4_4_;
    free((void *)0x0);
  }
  return param_1;
}



undefined8 * FUN_180003c00(undefined8 *param_1,LPCWSTR param_2)

{
  WCHAR WVar1;
  uint cbMultiByte;
  LPSTR lpMultiByteStr;
  int cchWideChar;
  longlong lVar2;
  LPCWSTR pWVar3;
  LPSTR local_28;
  undefined8 local_20;
  
  lVar2 = -1;
  pWVar3 = param_2;
  do {
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    WVar1 = *pWVar3;
    pWVar3 = pWVar3 + 1;
  } while (WVar1 != L'\0');
  cchWideChar = ~(uint)lVar2 - 1;
  if (cchWideChar == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    cbMultiByte = WideCharToMultiByte(0,0,param_2,cchWideChar,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (cbMultiByte == 0xffffffff) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      local_28 = (LPSTR)0x0;
      local_20 = 0;
      FUN_1800037c0((longlong *)&local_28,(ulonglong)cbMultiByte);
      lpMultiByteStr = local_28;
      if (local_28 == (LPSTR)0x0) {
        lpMultiByteStr = malloc(1);
        *lpMultiByteStr = '\0';
      }
      WideCharToMultiByte(0,0,param_2,cchWideChar,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0
                         );
      if (lpMultiByteStr == (LPSTR)0x0) {
        lpMultiByteStr = malloc(1);
        *lpMultiByteStr = '\0';
      }
      lpMultiByteStr[(int)cbMultiByte] = '\0';
      *(undefined4 *)(param_1 + 1) = (undefined4)local_20;
      *param_1 = lpMultiByteStr;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_20._4_4_;
      free((void *)0x0);
    }
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000180003d3f)
// WARNING: Removing unreachable block (ram,0x000180003d46)

void FUN_180003d20(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  undefined2 *_Dst;
  uint uVar2;
  
  uVar2 = (uint)param_2;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar2) {
    _Dst = malloc((ulonglong)(uVar2 + 1) * 2);
    if ((int)param_1[1] == 0) {
      *_Dst = 0;
    }
    else {
      memcpy(_Dst,(void *)*param_1,(ulonglong)((int)param_1[1] + 1) * 2);
    }
    free((void *)*param_1);
    *param_1 = (longlong)_Dst;
    *(uint *)((longlong)param_1 + 0xc) = uVar2;
  }
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar2 <= uVar1) {
    if (uVar2 < uVar1) {
      *(undefined2 *)(*param_1 + (param_2 & 0xffffffff) * 2) = 0;
    }
    *(uint *)(param_1 + 1) = uVar2;
    return;
  }
  memset((void *)(*param_1 + (ulonglong)uVar1 * 2),0,(ulonglong)((uVar2 - uVar1) + 1) * 2);
  *(uint *)(param_1 + 1) = uVar2;
  return;
}



void FUN_180003df0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[2];
  while (iVar1 != 0) {
    lVar2 = param_1[1];
    free(*(void **)(lVar2 + -0x10));
    *(undefined8 *)(lVar2 + -0x10) = 0;
    lVar3 = param_1[1];
    if (*param_1 == lVar3) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      **(undefined8 **)(lVar3 + 8) = 0;
      param_1[1] = *(longlong *)(lVar3 + 8);
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    free((void *)(lVar2 + -0x10));
    iVar1 = (int)param_1[2];
  }
  return;
}



void FUN_180003e70(void)

{
  longlong lVar1;
  
  lVar1 = DAT_180024558;
  while (DAT_180024560 != 0) {
    DAT_180024558 = lVar1;
    free(*(void **)(lVar1 + -0x10));
    *(undefined8 *)(lVar1 + -0x10) = 0;
    if (DAT_180024550 == DAT_180024558) {
      DAT_180024550 = 0;
      DAT_180024558 = 0;
    }
    else {
      **(undefined8 **)(DAT_180024558 + 8) = 0;
      DAT_180024558 = *(longlong *)(DAT_180024558 + 8);
    }
    DAT_180024560 = DAT_180024560 + -1;
    free((void *)(lVar1 + -0x10));
    lVar1 = DAT_180024558;
  }
  DAT_180024558 = lVar1;
  return;
}



void FUN_180003f00(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  while (param_2 != (undefined8 *)0x0) {
    FUN_180003f00(param_1,(undefined8 *)param_2[2]);
    puVar1 = (undefined8 *)*param_2;
    free((void *)param_2[-2]);
    param_2[-2] = 0;
    free(param_2 + -2);
    param_2 = puVar1;
  }
  return;
}



longlong * FUN_180003f70(longlong *param_1,longlong *param_2,char param_3,undefined8 *param_4)

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
LAB_1800040bc:
        *(undefined4 *)(plVar1 + 3) = 1;
        *(undefined4 *)(lVar4 + 0x18) = 1;
        *(undefined4 *)(*(longlong *)(plVar3[1] + 8) + 0x18) = 0;
        plVar3 = *(longlong **)(plVar3[1] + 8);
      }
    }
    lVar4 = *plVar2;
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x18) == 0)) goto LAB_1800040bc;
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



ulonglong FUN_1800041c0(uint param_1)

{
  int3 iVar1;
  ulonglong in_RAX;
  int7 iVar2;
  
  if (param_1 < 0x20) {
    iVar1 = (int3)(param_1 >> 8);
    iVar2 = (int7)iVar1;
    switch(param_1) {
    default:
      return CONCAT71((int7)iVar1,4);
    case 1:
    case 7:
    case 10:
    case 0xc:
    case 0x10:
      return CONCAT71(iVar2,8);
    case 2:
      return CONCAT71(iVar2,0xc);
    case 3:
      return CONCAT71(iVar2,0x10);
    case 0x1d:
      return CONCAT71(iVar2,6);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



char * FUN_180004270(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "PC";
  case 1:
    return "XBOX";
  case 2:
    return "PS3";
  case 3:
    return "WIIU";
  case 4:
    return "DURANGO";
  case 5:
    return "ORBIS";
  case 6:
    return "LINUX";
  default:
    return "?";
  }
}



longlong FUN_1800042f0(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint7 uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  
  pcVar6 = "Undefined";
  pbVar5 = param_1;
  do {
    bVar1 = *pbVar5;
    uVar4 = (uint)bVar1;
    pbVar5 = pbVar5 + 1;
    if (bVar1 - 0x41 < 0x1a) {
      uVar4 = bVar1 + 0x20;
    }
    bVar1 = *pcVar6;
    uVar3 = (uint)bVar1;
    pcVar6 = pcVar6 + 1;
    if (bVar1 - 0x41 < 0x1a) {
      uVar3 = bVar1 + 0x20;
    }
  } while ((uVar4 != 0) && (uVar4 == uVar3));
  if (uVar4 == uVar3) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
    return CONCAT71((uint7)(uint3)(bVar1 - 0x41 >> 8),1);
  }
  pcVar6 = "Skinned";
  pbVar5 = param_1;
  do {
    bVar1 = *pbVar5;
    uVar4 = (uint)bVar1;
    pbVar5 = pbVar5 + 1;
    if (bVar1 - 0x41 < 0x1a) {
      uVar4 = bVar1 + 0x20;
    }
    bVar1 = *pcVar6;
    uVar3 = (uint)bVar1;
    pcVar6 = pcVar6 + 1;
    if (bVar1 - 0x41 < 0x1a) {
      uVar3 = bVar1 + 0x20;
    }
  } while ((uVar4 != 0) && (uVar4 == uVar3));
  if (uVar4 == uVar3) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 1;
    }
    return CONCAT71((uint7)(uint3)(bVar1 - 0x41 >> 8),1);
  }
  pcVar6 = "SmallSize";
  pbVar5 = param_1;
  do {
    bVar1 = *pbVar5;
    uVar4 = (uint)bVar1;
    pbVar5 = pbVar5 + 1;
    if (bVar1 - 0x41 < 0x1a) {
      uVar4 = bVar1 + 0x20;
    }
    bVar1 = *pcVar6;
    uVar3 = (uint)bVar1;
    pcVar6 = pcVar6 + 1;
    if (bVar1 - 0x41 < 0x1a) {
      uVar3 = bVar1 + 0x20;
    }
  } while ((uVar4 != 0) && (uVar4 == uVar3));
  if (uVar4 == uVar3) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 2;
    }
    return CONCAT71((uint7)(uint3)(bVar1 - 0x41 >> 8),1);
  }
  pcVar6 = "BigSize";
  do {
    bVar1 = *param_1;
    uVar4 = (uint)bVar1;
    param_1 = param_1 + 1;
    if (bVar1 - 0x41 < 0x1a) {
      uVar4 = bVar1 + 0x20;
    }
    bVar1 = *pcVar6;
    uVar3 = (uint)bVar1;
    pcVar6 = pcVar6 + 1;
    if (bVar1 - 0x41 < 0x1a) {
      uVar3 = bVar1 + 0x20;
    }
  } while ((uVar4 != 0) && (uVar4 == uVar3));
  uVar2 = (uint7)(uint3)(bVar1 - 0x41 >> 8);
  if (uVar4 == uVar3) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 3;
    }
    return CONCAT71(uVar2,1);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  return (ulonglong)uVar2 << 8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined * FUN_180004470(void)

{
  _DAT_180027e30 = 0x3d;
  _DAT_180027e50 = 0x3d;
  _DAT_180027e10 = IResourceLogger::vftable;
  _DAT_180027e68 = 0x3d;
  _DAT_180027e18 = 0;
  _DAT_180027e20 = 0;
  _DAT_180027e28 = 0;
  _DAT_180027e38 = 0;
  _DAT_180027e40 = 0;
  _DAT_180027e48 = 0;
  DAT_180027e58 = 0;
  _DAT_180027e60 = 0;
  DAT_180027e70 = 0;
  _DAT_180027e78 = 0;
  _DAT_180027e88 = 0;
  _DAT_180027e90 = 0;
  _DAT_180027ea0 = 0;
  _DAT_180027ea8 = 0;
  _DAT_180027e80 = 0x3d;
  _DAT_180027e98 = 0x3d;
  _DAT_180027eb0 = 0x3d;
  return &DAT_180027e10;
}



void FUN_180004530(undefined8 *param_1)

{
  *param_1 = IResourceLogger::vftable;
  FUN_180008240(param_1 + 0x12);
  FUN_180008550(param_1 + 0xf);
  FUN_1800084e0(param_1 + 0xc);
  free((void *)param_1[0xc]);
  FUN_180008470(param_1 + 9);
  free((void *)param_1[9]);
  FUN_180008170(param_1 + 5);
  FUN_180008170(param_1 + 1);
  return;
}



void FUN_1800045b0(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = malloc(0x38);
  puVar1 = (undefined8 *)(puVar2 + 10);
  *(undefined8 *)(puVar2 + 0xc) = param_1[1];
  *puVar1 = 0;
  if ((undefined8 *)param_1[1] == (undefined8 *)0x0) {
    *param_1 = puVar1;
  }
  else {
    *(undefined8 *)param_1[1] = puVar1;
  }
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
  param_1[1] = puVar1;
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined8 *)(puVar2 + 4) = 0;
    puVar2[6] = 0x3d;
    puVar2[8] = 0;
    *(undefined2 *)(puVar2 + 9) = 0;
  }
  *puVar2 = param_2;
  return;
}



void FUN_180004620(void)

{
  return;
}



void FUN_180004630(void)

{
  return;
}



char * FUN_180004640(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "null";
  case 1:
    return "dx9";
  case 2:
    return "dx10";
  case 3:
    return "dx11";
  case 4:
    return "xbox";
  case 5:
    return "ps3";
  case 6:
    return "wiiu";
  case 7:
    return "durango";
  case 8:
    return "orbis";
  case 9:
    return "opengl";
  default:
    return "?";
  }
}



char * FUN_1800046e0(undefined4 param_1)

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



char * FUN_1800048a0(undefined4 param_1)

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



void FUN_180004980(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))
                    (*(longlong **)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x18),param_1 + 8,
                     param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}



undefined8 * FUN_1800049b0(undefined8 *param_1,uint param_2)

{
  FUN_180004530(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



void FUN_1800049e0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)*param_2;
  piVar3 = piVar2;
  if (piVar2 != piVar2 + *(uint *)(param_2 + 1)) {
    do {
      iVar1 = *piVar2;
      FUN_1800046e0((iVar1 << 0x10) >> 0x19);
      FUN_1800048a0((iVar1 << 0x1b) >> 0x1b);
      FUN_1800018d0(param_1,"  %d | %d | %-12s | %d | %-12s\n",
                    (longlong)piVar2 - (longlong)piVar3 >> 2,
                    (ulonglong)(uint)((iVar1 << 0xb) >> 0x1b));
      piVar2 = piVar2 + 1;
      piVar3 = (int *)*param_2;
    } while (piVar2 != (int *)*param_2 + *(uint *)(param_2 + 1));
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180004ae6)
// WARNING: Removing unreachable block (ram,0x000180004b48)

undefined8 FUN_180004ab0(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined8 extraout_RAX;
  uint7 uVar4;
  uint uVar5;
  char *local_28;
  uint local_20;
  uint local_1c;
  void *local_18;
  uint local_10;
  uint local_c;
  
  uVar5 = 0;
  pcVar3 = "0";
  do {
    if (*pcVar3 == '\0') break;
    uVar5 = uVar5 + 1;
    pcVar3 = pcVar3 + 1;
  } while (uVar5 != 0xffffffff);
  local_20 = uVar5;
  local_1c = uVar5;
  if (uVar5 == 0) {
    local_28 = (char *)0x0;
  }
  else {
    local_28 = malloc((ulonglong)(uVar5 + 1));
    memcpy(local_28,&DAT_18001c86c,(ulonglong)uVar5);
    local_28[local_20] = '\0';
  }
  uVar5 = 0;
  pcVar3 = "skip";
  do {
    if (*pcVar3 == '\0') break;
    uVar5 = uVar5 + 1;
    pcVar3 = pcVar3 + 1;
  } while (uVar5 != 0xffffffff);
  local_10 = uVar5;
  local_c = uVar5;
  if (uVar5 == 0) {
    local_18 = (void *)0x0;
  }
  else {
    local_18 = malloc((ulonglong)(uVar5 + 1));
    memcpy(local_18,&DAT_18001cbe0,(ulonglong)uVar5);
    *(undefined1 *)((ulonglong)local_10 + (longlong)local_18) = 0;
  }
  iVar2 = (**(code **)(*param_1 + 0x38))(param_1,&local_18,&local_28);
  if (((iVar2 == 0) || (iVar2 == 8)) || (iVar2 == 9)) {
    pcVar3 = "";
    if (local_28 != (char *)0x0) {
      pcVar3 = local_28;
    }
    iVar2 = atoi(pcVar3);
    if (iVar2 == 1) {
      bVar1 = true;
      goto LAB_180004bd7;
    }
  }
  bVar1 = false;
LAB_180004bd7:
  free(local_18);
  free(local_28);
  uVar4 = (uint7)((ulonglong)extraout_RAX >> 8);
  if (!bVar1) {
    return (ulonglong)uVar4 << 8;
  }
  return CONCAT71(uVar4,1);
}



// WARNING: Removing unreachable block (ram,0x000180004c76)

undefined4 FUN_180004c20(char *param_1,longlong *param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  char *local_28;
  undefined8 local_20;
  void *local_18;
  uint local_10;
  uint local_c;
  
  if (param_2 == (longlong *)0x0) {
    return 7;
  }
  uVar3 = 0;
  local_28 = (char *)0x0;
  local_20 = 0;
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
  iVar1 = (**(code **)(*param_2 + 0x38))(param_2,&local_18,&local_28);
  free(local_18);
  if (iVar1 == 0) {
    pcVar2 = "";
    if (local_28 != (char *)0x0) {
      pcVar2 = local_28;
    }
    iVar1 = _stricmp(pcVar2,"alpha");
    if (iVar1 == 0) {
      free(local_28);
      return 3;
    }
    pcVar2 = "";
    if (local_28 != (char *)0x0) {
      pcVar2 = local_28;
    }
    iVar1 = _stricmp(pcVar2,"red");
    if (iVar1 == 0) {
      free(local_28);
      return 2;
    }
    pcVar2 = "";
    if (local_28 != (char *)0x0) {
      pcVar2 = local_28;
    }
    iVar1 = _stricmp(pcVar2,"green");
    if (iVar1 == 0) {
      free(local_28);
      return 1;
    }
    pcVar2 = "";
    if (local_28 != (char *)0x0) {
      pcVar2 = local_28;
    }
    iVar1 = _stricmp(pcVar2,"blue");
    if (iVar1 == 0) {
      free(local_28);
      return 0;
    }
    pcVar2 = "";
    if (local_28 != (char *)0x0) {
      pcVar2 = local_28;
    }
    iVar1 = _stricmp(pcVar2,"zero");
    if (iVar1 == 0) {
      free(local_28);
      return 4;
    }
    pcVar2 = "";
    if (local_28 != (char *)0x0) {
      pcVar2 = local_28;
    }
    iVar1 = _stricmp(pcVar2,"one");
    if (iVar1 == 0) {
      free(local_28);
      return 5;
    }
    pcVar2 = "";
    if (local_28 != (char *)0x0) {
      pcVar2 = local_28;
    }
    iVar1 = _stricmp(pcVar2,"current");
    if (iVar1 != 0) {
      pcVar2 = "";
      if (local_28 != (char *)0x0) {
        pcVar2 = local_28;
      }
      iVar1 = _stricmp(pcVar2,"invert");
      if (iVar1 == 0) {
        free(local_28);
        return 6;
      }
      pcVar2 = "";
      if (local_28 != (char *)0x0) {
        pcVar2 = local_28;
      }
      iVar1 = _stricmp(pcVar2,"rgbintensity");
      if (iVar1 == 0) {
        free(local_28);
        return 8;
      }
    }
  }
  free(local_28);
  return 7;
}



// WARNING: Removing unreachable block (ram,0x000180004ef7)

int FUN_180004ec0(longlong *param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  void *local_28;
  uint local_20;
  uint local_1c;
  char *local_18;
  undefined8 local_10;
  
  uVar3 = 0;
  pcVar2 = "skipmiplevels";
  local_18 = (char *)0x0;
  local_10 = 0;
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
    memcpy(local_28,"skipmiplevels",(ulonglong)uVar3);
    *(undefined1 *)((ulonglong)local_20 + (longlong)local_28) = 0;
  }
  iVar1 = (**(code **)(*param_1 + 0x38))(param_1,&local_28,&local_18);
  free(local_28);
  if (iVar1 == 0) {
    pcVar2 = "";
    if (local_18 != (char *)0x0) {
      pcVar2 = local_18;
    }
    iVar1 = atoi(pcVar2);
    free(local_18);
    return iVar1;
  }
  free(local_18);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x000180004fe7)

int FUN_180004fb0(longlong *param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  void *local_28;
  uint local_20;
  uint local_1c;
  char *local_18;
  undefined8 local_10;
  
  uVar3 = 0;
  pcVar2 = "leavemiplevels";
  local_18 = (char *)0x0;
  local_10 = 0;
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
    memcpy(local_28,"leavemiplevels",(ulonglong)uVar3);
    *(undefined1 *)((ulonglong)local_20 + (longlong)local_28) = 0;
  }
  iVar1 = (**(code **)(*param_1 + 0x38))(param_1,&local_28,&local_18);
  free(local_28);
  if (iVar1 == 0) {
    pcVar2 = "";
    if (local_18 != (char *)0x0) {
      pcVar2 = local_18;
    }
    iVar1 = atoi(pcVar2);
    free(local_18);
    return iVar1;
  }
  free(local_18);
  return 0x14;
}



// WARNING: Removing unreachable block (ram,0x0001800050e7)

ulonglong FUN_1800050b0(longlong *param_1)

{
  int iVar1;
  char *pcVar2;
  ulonglong extraout_RAX;
  uint uVar3;
  void *local_28;
  uint local_20;
  uint local_1c;
  char *local_18;
  undefined8 local_10;
  
  uVar3 = 0;
  pcVar2 = "disable_streaming";
  local_18 = (char *)0x0;
  local_10 = 0;
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
    memcpy(local_28,"disable_streaming",(ulonglong)uVar3);
    *(undefined1 *)((ulonglong)local_20 + (longlong)local_28) = 0;
  }
  iVar1 = (**(code **)(*param_1 + 0x38))(param_1,&local_28,&local_18);
  free(local_28);
  if (iVar1 != 0) {
    free(local_18);
    return extraout_RAX & 0xffffffffffffff00;
  }
  pcVar2 = "";
  if (local_18 != (char *)0x0) {
    pcVar2 = local_18;
  }
  iVar1 = atoi(pcVar2);
  free(local_18);
  return (ulonglong)(iVar1 != 0);
}



// WARNING: Removing unreachable block (ram,0x0001800051e7)

undefined8 FUN_1800051b0(longlong *param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  void *local_28;
  uint local_20;
  uint local_1c;
  char *local_18;
  undefined8 local_10;
  
  uVar3 = 0;
  pcVar2 = "semantic";
  local_18 = (char *)0x0;
  local_10 = 0;
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
    memcpy(local_28,"semantic",(ulonglong)uVar3);
    *(undefined1 *)((ulonglong)local_20 + (longlong)local_28) = 0;
  }
  iVar1 = (**(code **)(*param_1 + 0x38))(param_1,&local_28,&local_18);
  free(local_28);
  if (iVar1 == 0) {
    pcVar2 = "";
    if (local_18 != (char *)0x0) {
      pcVar2 = local_18;
    }
    iVar1 = _stricmp(pcVar2,"normalmap");
    if (iVar1 == 0) {
      free(local_18);
      return 1;
    }
  }
  free(local_18);
  return 0;
}



ulonglong FUN_1800052b0(longlong *param_1,uint param_2,undefined8 param_3,ulonglong param_4,
                       uint param_5,longlong *param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  
  uVar16 = (uint)param_4;
  uVar15 = (uint)param_3;
  uVar10 = param_4 & 0xffffffff;
  if (((((param_2 != 2) && (param_2 != 7)) && (uVar15 != 1)) && ((uVar15 != 7 && (uVar16 != 0)))) &&
     ((uVar16 != 7 && ((uVar10 = (ulonglong)param_5, param_5 != 3 && (param_5 != 7)))))) {
    if (param_1 == (longlong *)0x0) {
      uVar10 = FUN_1800018d0(param_6,"CommonTools::SwizzleComponents: Invalid parameter Bitmap!\n",
                             param_3,param_4);
      return uVar10 & 0xffffffffffffff00;
    }
    iVar3 = (**(code **)(*param_1 + 0x68))();
    if (iVar3 != 2) {
      uVar10 = FUN_1800018d0(param_6,
                             "CommonTools::SwizzleComponents: Invalid image format. Only 8888 formats supported!\n"
                             ,param_3,param_4);
      return uVar10 & 0xffffffffffffff00;
    }
    cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
    iVar3 = 1;
    if (cVar2 != '\0') {
      iVar3 = 6;
    }
    iVar4 = (**(code **)(*param_1 + 0x70))(param_1);
    uVar5 = (**(code **)(*param_1 + 0x50))(param_1);
    uVar10 = (**(code **)(*param_1 + 0x58))(param_1);
    iVar20 = 0;
    iVar6 = (int)uVar10;
    if (0 < iVar6) {
      do {
        iVar7 = (**(code **)(*param_1 + 0x38))(param_1,iVar20);
        iVar8 = (**(code **)(*param_1 + 0x28))(param_1,iVar20);
        iVar19 = 0;
        uVar12 = iVar7 * iVar8;
        uVar9 = (int)(uVar12 * iVar4 + ((int)(uVar12 * iVar4) >> 0x1f & 7U)) >> 3;
        uVar10 = (ulonglong)uVar9;
        if (iVar3 != 0) {
          do {
            uVar13 = (ulonglong)uVar5;
            if (0 < (int)uVar5) {
              uVar11 = 0;
              do {
                uVar10 = (**(code **)(*param_1 + 0xa0))(param_1,iVar20,iVar19);
                if (0 < (int)uVar12) {
                  uVar14 = (ulonglong)uVar12;
                  puVar18 = (uint *)(uVar11 + uVar10);
                  do {
                    uVar1 = *puVar18;
                    uVar17 = uVar1;
                    uVar10 = FUN_180005560(uVar1,uVar1 >> 0x10,param_2);
                    *(char *)puVar18 = (char)uVar10;
                    uVar10 = FUN_180005560(uVar17,uVar1 >> 8 & 0xff,uVar15);
                    *(char *)((longlong)puVar18 + 1) = (char)uVar10;
                    uVar10 = FUN_180005560(uVar17,uVar17 & 0xff,uVar16);
                    *(char *)((longlong)puVar18 + 2) = (char)uVar10;
                    uVar10 = FUN_180005560(uVar17,uVar1 >> 0x18,param_5);
                    uVar14 = uVar14 - 1;
                    *(char *)((longlong)puVar18 + 3) = (char)uVar10;
                    puVar18 = puVar18 + 1;
                  } while (uVar14 != 0);
                }
                uVar11 = uVar11 + uVar9;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            iVar19 = iVar19 + 1;
          } while (iVar19 < iVar3);
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 < iVar6);
    }
  }
  return CONCAT71((int7)(uVar10 >> 8),1);
}



ulonglong FUN_180005560(uint param_1,uint param_2,uint param_3)

{
  uint7 uVar1;
  
  if (param_3 < 9) {
    uVar1 = (uint7)(int3)(param_3 >> 8);
    switch(param_3) {
    case 1:
      return (ulonglong)(param_1 >> 8 & 0xff);
    case 2:
      param_1 = param_1 >> 0x10;
    case 0:
      return (ulonglong)(param_1 & 0xff);
    case 3:
      return (ulonglong)(param_1 >> 0x18);
    case 4:
      return (ulonglong)uVar1 << 8;
    case 5:
      return CONCAT71(uVar1,0xff);
    case 6:
      return (ulonglong)(0xff - (param_2 & 0xff));
    case 8:
      return (ulonglong)
             (((param_1 >> 8 & 0xff) * 0x3b + (param_1 >> 0x10 & 0xff) * 0x1e +
              (param_1 & 0xff) * 0xb) / 100);
    }
  }
  return (ulonglong)param_2 & 0xff;
}



ulonglong FUN_180005610(longlong *param_1,uint param_2,ulonglong param_3,longlong *param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  
  uVar7 = param_3;
  plVar10 = param_4;
  cVar3 = (**(code **)(*(longlong *)*param_1 + 0x90))();
  if (cVar3 != '\0') {
    uVar7 = FUN_1800018d0(param_4,
                          "At this moment resizing CubeMap or 3D textures is not supported!\n",uVar7
                          ,plVar10);
    return uVar7 & 0xffffffffffffff00;
  }
  uVar8 = (**(code **)(*(longlong *)*param_1 + 0x58))();
  if ((int)uVar8 == 1) {
    if (0 < (int)param_2) {
      uVar4 = (**(code **)(*(longlong *)*param_1 + 0x30))();
      bVar1 = (byte)param_2 & 0x1f;
      uVar5 = (**(code **)(*(longlong *)*param_1 + 0x40))();
      bVar2 = (byte)param_2 & 0x1f;
      uVar6 = (**(code **)(*(longlong *)*param_1 + 0x68))();
      cVar3 = IL_IsCompressedFormat(uVar6);
      if (((cVar3 == '\0') && (uVar4 >> bVar1 != 0)) && (uVar5 >> bVar2 != 0)) {
        lVar9 = IL_ScaleImage(*param_1,uVar4 >> bVar1,uVar5 >> bVar2,3);
        if (lVar9 == 0) {
          plVar10 = (longlong *)*param_1;
          uVar4 = (**(code **)(*plVar10 + 0x40))(plVar10);
          uVar5 = (**(code **)(*plVar10 + 0x30))(plVar10);
          uVar7 = FUN_1800018d0(param_4,
                                "Cannot scale uncompressed one-mip-level image %dx%d pixels %d-times down!\n"
                                ,(ulonglong)uVar5,(ulonglong)uVar4);
          return uVar7 & 0xffffffffffffff00;
        }
        uVar8 = IL_DestroyImage(param_1);
        *param_1 = lVar9;
      }
      else {
        uVar8 = FUN_1800018d0(param_4,
                              "Image has no mip-maps, is compressed and cannot be scaled %d-times down!\n"
                              ,(ulonglong)param_2,plVar10);
      }
    }
  }
  else {
    uVar8 = (**(code **)(*(longlong *)*param_1 + 200))
                      ((longlong *)*param_1,param_2,param_3 & 0xffffffff);
    if ((char)uVar8 == '\0') {
      (**(code **)(*(longlong *)*param_1 + 0x58))();
      uVar8 = FUN_1800018d0(param_4,
                            "Cannot adjust mip levels for image (skip=%d, leave=%d, image=%d mips)!\n"
                            ,(ulonglong)param_2,param_3 & 0xffffffff);
    }
  }
  return CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
}



longlong * FUN_180005780(longlong *param_1)

{
  undefined4 local_res8 [2];
  
  *(undefined2 *)(param_1 + 3) = 0x500;
  local_res8[0] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)((longlong)param_1 + 0x1a) = 0x2d0;
  *(undefined4 *)(param_1 + 2) = 0x3d;
  *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0x2d;
  FUN_180008080(param_1,local_res8);
  *(undefined4 *)*param_1 = 0x40b00000;
  *(undefined4 *)(*param_1 + 4) = 0x41080000;
  *(undefined2 *)((longlong)param_1 + 0x1d) = 0xc14;
  *(undefined4 *)(param_1 + 4) = 0x400000;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x2000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x42) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3e) = 0;
  return param_1;
}



undefined8 * FUN_180005820(undefined8 *param_1)

{
  *param_1 = ICompilationBackEnd::vftable;
  FUN_180005780(param_1 + 1);
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3d;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3d;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3d;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b));
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0x3d;
  *(undefined4 *)(param_1 + 0x13) = 6;
  param_1[0x23] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x24] = 0;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000180005ccf)
// WARNING: Removing unreachable block (ram,0x000180005e34)

ulonglong FUN_1800058f0(longlong param_1,char *param_2,char *param_3,longlong *param_4)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  ulonglong uVar5;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  undefined4 extraout_var_09;
  undefined4 extraout_var_10;
  undefined4 extraout_var_11;
  undefined4 extraout_var_12;
  undefined4 extraout_var_13;
  char *pcVar6;
  undefined1 *puVar7;
  undefined8 extraout_RAX;
  ulonglong extraout_RAX_00;
  void *pvVar8;
  undefined8 extraout_RAX_01;
  undefined4 extraout_var_14;
  undefined4 extraout_var_15;
  undefined4 extraout_var_16;
  undefined4 extraout_var_17;
  undefined8 extraout_RAX_02;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  undefined1 uVar12;
  undefined7 uVar13;
  undefined1 *puVar14;
  double dVar15;
  uint local_48;
  longlong *local_40;
  ulonglong local_38;
  undefined4 local_30;
  
  uVar12 = SUB81(param_4,0);
  uVar13 = (undefined7)((ulonglong)param_4 >> 8);
  iVar2 = _stricmp(param_2,"packlimitkb");
  if ((iVar2 == 0) || (iVar2 = _stricmp(param_2,"plkb"), iVar2 == 0)) {
    iVar2 = sscanf(param_3,"%u");
    uVar5 = CONCAT44(extraout_var_17,iVar2);
    if (iVar2 == 1) {
      *(uint *)(param_1 + 0x28) = local_48;
      FUN_1800018d0(param_4,"option: pack size limit changed to %u kbytes\n",(ulonglong)local_48,
                    CONCAT71(uVar13,uVar12));
      return CONCAT71((int7)((ulonglong)extraout_RAX_02 >> 8),1);
    }
    goto LAB_180005dc3;
  }
  iVar2 = _stricmp(param_2,"quick");
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x40) = 1;
    return CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),1);
  }
  iVar2 = _stricmp(param_2,"generate_mesh_lods");
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x41) = 1;
    return CONCAT71((int7)(CONCAT44(extraout_var_00,iVar2) >> 8),1);
  }
  iVar2 = _stricmp(param_2,"skip_gct");
  if (iVar2 == 0) {
    iVar2 = atoi(param_3);
    *(int *)(param_1 + 0x38) = iVar2;
    return CONCAT71((int7)(CONCAT44(extraout_var_01,iVar2) >> 8),1);
  }
  iVar2 = _stricmp(param_2,"skip_gct_ho");
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x38) = 5;
    return CONCAT71((int7)(CONCAT44(extraout_var_02,iVar2) >> 8),1);
  }
  iVar2 = _stricmp(param_2,"skip_mip_levels");
  if (iVar2 == 0) {
    uVar3 = atoi(param_3);
    if ((int)uVar3 < -0x14) {
      uVar3 = 0xffffffec;
    }
    uVar5 = (ulonglong)uVar3;
    if (0x14 < (int)uVar3) {
      uVar5 = 0x14;
    }
    *(int *)(param_1 + 0x30) = (int)uVar5;
    return CONCAT71((int7)(uVar5 >> 8),1);
  }
  iVar2 = _stricmp(param_2,"sml_minres");
  if (iVar2 == 0) {
    uVar3 = atoi(param_3);
    if (0x1000 < (int)uVar3) {
      uVar3 = 0x1000;
    }
    if ((int)uVar3 < 1) {
      uVar3 = 1;
    }
    uVar5 = (ulonglong)uVar3;
    *(uint *)(param_1 + 0x34) = uVar3;
    goto LAB_180005dc3;
  }
  iVar2 = _stricmp(param_2,"build_mip_textures");
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x44) = 1;
    return CONCAT71((int7)(CONCAT44(extraout_var_03,iVar2) >> 8),1);
  }
  iVar2 = _stricmp(param_2,"md_fastmode");
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x45) = 1;
    return CONCAT71((int7)(CONCAT44(extraout_var_04,iVar2) >> 8),1);
  }
  iVar2 = _stricmp(param_2,"build_obj");
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x42) = 1;
    return CONCAT71((int7)(CONCAT44(extraout_var_05,iVar2) >> 8),1);
  }
  iVar2 = _stricmp(param_2,"force_all_skins");
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x43) = 1;
    return CONCAT71((int7)(CONCAT44(extraout_var_06,iVar2) >> 8),1);
  }
  iVar2 = _stricmp(param_2,"instances_limit");
  if (iVar2 == 0) {
    iVar2 = sscanf(param_3,"%d");
    uVar5 = CONCAT44(extraout_var_07,iVar2);
    if (iVar2 == 1) {
      *(uint *)(param_1 + 0x2c) = local_48;
      return CONCAT71((uint7)(uint3)(local_48 >> 8),1);
    }
    goto LAB_180005dc3;
  }
  iVar2 = _stricmp(param_2,"packgeometry");
  if (iVar2 == 0) {
    if (*param_3 != '\0') {
      iVar2 = atoi(param_3);
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 0x46) = 0;
        return CONCAT71((int7)(CONCAT44(extraout_var_08,iVar2) >> 8),1);
      }
    }
    *(undefined1 *)(param_1 + 0x46) = 1;
    return 1;
  }
  iVar2 = _stricmp(param_2,"packskins");
  if (iVar2 == 0) {
    if (*param_3 != '\0') {
      iVar2 = atoi(param_3);
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 0x47) = 0;
        return CONCAT71((int7)(CONCAT44(extraout_var_09,iVar2) >> 8),1);
      }
    }
    *(undefined1 *)(param_1 + 0x47) = 1;
    return 1;
  }
  iVar2 = _stricmp(param_2,"storelodsseparately");
  if (iVar2 == 0) {
    if (*param_3 != '\0') {
      iVar2 = atoi(param_3);
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 0x48) = 0;
        return CONCAT71((int7)(CONCAT44(extraout_var_10,iVar2) >> 8),1);
      }
    }
    *(undefined1 *)(param_1 + 0x48) = 1;
    return 1;
  }
  iVar2 = _stricmp(param_2,"DisableGeometryOptimization");
  if (iVar2 == 0) {
    if (*param_3 != '\0') {
      iVar2 = atoi(param_3);
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 0x49) = 0;
        return CONCAT71((int7)(CONCAT44(extraout_var_11,iVar2) >> 8),1);
      }
    }
    *(undefined1 *)(param_1 + 0x49) = 1;
    return 1;
  }
  iVar2 = _stricmp(param_2,"force_streaming");
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x4a) = 1;
    return CONCAT71((int7)(CONCAT44(extraout_var_12,iVar2) >> 8),1);
  }
  iVar2 = _stricmp(param_2,"mipcalc_save_image");
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x27) = 1;
    return CONCAT71((int7)(CONCAT44(extraout_var_13,iVar2) >> 8),1);
  }
  iVar2 = _stricmp(param_2,"mipcalc_camera_fovy");
  if (iVar2 == 0) {
    dVar15 = atof(param_3);
    *(char *)(param_1 + 0x24) = (char)(longlong)dVar15;
    return CONCAT71((int7)((ulonglong)(longlong)dVar15 >> 8),1);
  }
  iVar2 = _stricmp(param_2,"mipcalc_screen_res");
  if (iVar2 == 0) {
    puVar11 = (undefined1 *)0x0;
    local_30 = 0x3d;
    local_40 = (longlong *)0x0;
    local_38 = 0;
    pcVar6 = param_3;
    puVar14 = puVar11;
    do {
      if (*pcVar6 == '\0') break;
      uVar3 = (int)puVar14 + 1;
      puVar14 = (undefined1 *)(ulonglong)uVar3;
      pcVar6 = pcVar6 + 1;
    } while (uVar3 != 0xffffffff);
    uVar3 = (uint)puVar14;
    if (uVar3 == 0) {
LAB_180005d0a:
      puVar7 = &DAT_1800198fb;
    }
    else {
      puVar7 = malloc((ulonglong)(uVar3 + 1));
      memcpy(puVar7,param_3,(size_t)puVar14);
      puVar14[(longlong)puVar7] = 0;
      puVar11 = puVar7;
      if (puVar7 == (undefined1 *)0x0) goto LAB_180005d0a;
    }
    FUN_180008980((longlong *)&local_40,(longlong)puVar7,uVar3,',');
    free(puVar11);
    plVar9 = local_40;
    if ((int)local_38 == 2) {
      pcVar6 = "";
      if ((char *)*local_40 != (char *)0x0) {
        pcVar6 = (char *)*local_40;
      }
      iVar2 = atoi(pcVar6);
      plVar10 = plVar9 + 2;
      *(short *)(param_1 + 0x20) = (short)iVar2;
      pcVar6 = "";
      if ((char *)*plVar10 != (char *)0x0) {
        pcVar6 = (char *)*plVar10;
      }
      iVar2 = atoi(pcVar6);
      *(short *)(param_1 + 0x22) = (short)iVar2;
      iVar2 = 2;
      do {
        free((void *)*plVar10);
        *plVar10 = 0;
        plVar10 = plVar10 + -2;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      free(plVar9);
      return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
    }
    plVar10 = local_40 + (ulonglong)((int)local_38 - 1) * 2;
    for (iVar2 = (int)local_38; iVar2 != 0; iVar2 = iVar2 + -1) {
      free((void *)*plVar10);
      *plVar10 = 0;
      plVar10 = plVar10 + -2;
    }
  }
  else {
    iVar2 = _stricmp(param_2,"mipcalc_mips");
    if (iVar2 != 0) {
      iVar2 = _stricmp(param_2,"mipcalc_max_mips");
      if (iVar2 == 0) {
        iVar2 = atoi(param_3);
        if (0xff < iVar2) {
          iVar2 = 0xff;
        }
        uVar12 = (undefined1)iVar2;
        if (iVar2 < 1) {
          uVar12 = 1;
        }
        *(undefined1 *)(param_1 + 0x26) = uVar12;
        return 1;
      }
      iVar2 = _stricmp(param_2,"AnimationStreaming");
      uVar5 = CONCAT44(extraout_var_14,iVar2);
      if (iVar2 == 0) {
        iVar2 = _stricmp(param_3,"Disabled");
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x3c) = 0;
          return CONCAT71((int7)(CONCAT44(extraout_var_15,iVar2) >> 8),1);
        }
        iVar2 = _stricmp(param_3,"Native");
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x3c) = 1;
          return 1;
        }
        iVar2 = _stricmp(param_3,"NativeWithFallback");
        uVar5 = CONCAT44(extraout_var_16,iVar2);
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x3c) = 2;
          return CONCAT71((int7)(uVar5 >> 8),1);
        }
      }
      goto LAB_180005dc3;
    }
    puVar11 = (undefined1 *)0x0;
    local_30 = 0x3d;
    local_40 = (longlong *)0x0;
    local_38 = 0;
    pcVar6 = param_3;
    puVar14 = puVar11;
    do {
      if (*pcVar6 == '\0') break;
      uVar3 = (int)puVar14 + 1;
      puVar14 = (undefined1 *)(ulonglong)uVar3;
      pcVar6 = pcVar6 + 1;
    } while (uVar3 != 0xffffffff);
    uVar3 = (uint)puVar14;
    if (uVar3 == 0) {
LAB_180005e6f:
      puVar7 = &DAT_1800198fb;
    }
    else {
      puVar7 = malloc((ulonglong)(uVar3 + 1));
      memcpy(puVar7,param_3,(size_t)puVar14);
      puVar14[(longlong)puVar7] = 0;
      puVar11 = puVar7;
      if (puVar7 == (undefined1 *)0x0) goto LAB_180005e6f;
    }
    FUN_180008980((longlong *)&local_40,(longlong)puVar7,uVar3,',');
    free(puVar11);
    plVar9 = local_40;
    iVar2 = (int)local_38;
    if ((int)local_38 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      uVar5 = local_38 & 0xffffffff;
      plVar10 = local_40;
      do {
        pcVar6 = "";
        if ((char *)*plVar10 != (char *)0x0) {
          pcVar6 = (char *)*plVar10;
        }
        dVar15 = atof(pcVar6);
        uVar3 = *(int *)(param_1 + 0x10) + 1;
        if (*(uint *)(param_1 + 0x14) < uVar3) {
          uVar4 = (*(uint *)(param_1 + 0x14) * 10 >> 3) + 0x10 & 0xfffffff0;
          if (uVar4 < uVar3) {
            uVar4 = uVar3;
          }
          *(uint *)(param_1 + 0x14) = uVar4;
          pvVar8 = realloc(*(void **)(param_1 + 8),(ulonglong)(uVar4 << 2));
          *(void **)(param_1 + 8) = pvVar8;
        }
        pfVar1 = (float *)(*(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x10) * 4);
        if (pfVar1 != (float *)0x0) {
          *pfVar1 = (float)dVar15;
        }
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        plVar10 = plVar10 + 2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      plVar10 = plVar9 + (ulonglong)(iVar2 - 1) * 2;
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        free((void *)*plVar10);
        *plVar10 = 0;
        plVar10 = plVar10 + -2;
      }
      free(plVar9);
      return CONCAT71((int7)((ulonglong)extraout_RAX_01 >> 8),1);
    }
  }
  free(plVar9);
  uVar5 = extraout_RAX_00;
LAB_180005dc3:
  return uVar5 & 0xffffffffffffff00;
}



undefined8 FUN_180006060(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 3;
  case 1:
    return 4;
  case 2:
    return 5;
  case 3:
    return 6;
  case 4:
    return 7;
  case 5:
    return 8;
  case 6:
    return 9;
  default:
    return 0;
  }
}



ulonglong FUN_1800060d0(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 extraout_var;
  uint uVar4;
  longlong *plVar5;
  
  if (param_2 == (longlong *)0x0) {
    return 2;
  }
  plVar5 = (longlong *)param_2[5];
  if ((plVar5 == (longlong *)0x0) && (plVar5 = (longlong *)param_1[0x23], plVar5 == (longlong *)0x0)
     ) {
    uVar2 = 5;
  }
  else {
    iVar1 = (**(code **)(*param_2 + 0x48))(param_2);
    if (iVar1 == 0x10) {
      uVar2 = FUN_180006e80(param_1,param_2,(longlong)param_3,param_4);
    }
    else if (iVar1 == 0x20) {
      iVar1 = FUN_180006ff0(param_1,(longlong)param_2,(longlong)param_3);
      uVar2 = CONCAT44(extraout_var,iVar1);
    }
    else if (iVar1 == 0x40) {
      uVar3 = FUN_180009270(param_2,(longlong)param_3);
      uVar4 = 5;
      if ((char)uVar3 != '\0') {
        uVar4 = 0;
      }
      uVar2 = (ulonglong)uVar4;
    }
    else if (iVar1 == 0x42) {
      uVar3 = FUN_1800095d0(param_2,(longlong)param_3,plVar5);
      uVar4 = 5;
      if ((char)uVar3 != '\0') {
        uVar4 = 0;
      }
      uVar2 = (ulonglong)uVar4;
    }
    else if (iVar1 == 0xf8) {
      uVar3 = FUN_180006060((int)param_1[0x13]);
      uVar3 = FUN_180009f10(param_2,param_3,plVar5,(int)uVar3);
      uVar4 = 5;
      if ((char)uVar3 != '\0') {
        uVar4 = 0;
      }
      uVar2 = (ulonglong)uVar4;
    }
    else {
      uVar2 = 9;
    }
  }
  return uVar2;
}



ulonglong FUN_1800061f0(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined7 extraout_var;
  uint uVar7;
  undefined1 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  void *local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_2 == (longlong *)0x0) {
    return 2;
  }
  puVar10 = param_3;
  uVar5 = FUN_180004ab0(param_2);
  if ((char)uVar5 == '\0') {
    plVar9 = (longlong *)param_2[5];
    if ((plVar9 == (longlong *)0x0) &&
       (plVar9 = (longlong *)param_1[0x23], plVar9 == (longlong *)0x0)) {
      uVar6 = 5;
    }
    else {
      iVar3 = (**(code **)(*param_1 + 0x78))(param_1);
      if (((iVar3 == 4) || (iVar3 == 5)) || (iVar3 == 6)) {
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
      }
      uVar4 = (**(code **)(*param_2 + 0x48))(param_2);
      switch(uVar4) {
      case 0x10:
        bVar2 = FUN_180006800(param_1,param_2,param_3,0);
        uVar6 = CONCAT71(extraout_var,bVar2);
        break;
      default:
        uVar6 = 9;
        break;
      case 0x30:
        uVar6 = 0;
        break;
      case 0x40:
        uVar5 = FUN_180008c90(param_2,param_3,plVar9,uVar8,*(int *)((longlong)param_1 + 0x3c));
        uVar7 = 5;
        if ((char)uVar5 != '\0') {
          uVar7 = 0;
        }
        uVar6 = (ulonglong)uVar7;
        break;
      case 0x42:
        uVar5 = FUN_1800093f0(param_2,param_3,plVar9,uVar8);
        uVar7 = 5;
        if ((char)uVar5 != '\0') {
          uVar7 = 0;
        }
        uVar6 = (ulonglong)uVar7;
        break;
      case 0x50:
        uVar6 = FUN_1800066c0((longlong)param_1,param_2,puVar10,param_4);
        break;
      case 0xf8:
        uVar5 = FUN_180006060((int)param_1[0x13]);
        local_38 = (void *)0x0;
        local_30 = 0;
        local_28 = 0;
        local_20 = 0;
        local_18 = 0;
        cVar1 = FUN_180009e20(param_2,(longlong)param_3,plVar9,(int)uVar5,(longlong *)&local_38);
        operator_delete__(local_38);
        uVar6 = 5;
        if (cVar1 != '\0') {
          uVar6 = 0;
        }
      }
    }
    return uVar6;
  }
  FUN_1800018d0((longlong *)param_2[6],"  skipping due to \'Skip\' override.\n",puVar10,param_4);
  return 3;
}



ulonglong FUN_1800064d0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 extraout_var;
  uint uVar5;
  longlong *plVar6;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  plVar6 = (longlong *)param_2[5];
  if ((plVar6 == (longlong *)0x0) && (plVar6 = (longlong *)param_1[0x23], plVar6 == (longlong *)0x0)
     ) {
    uVar3 = 5;
  }
  else {
    iVar1 = (**(code **)(*param_2 + 0x48))(param_2);
    if (iVar1 == 0x10) {
      uVar3 = FUN_180006be0(param_1,param_2,param_3);
    }
    else if (iVar1 == 0x30) {
      uVar2 = FUN_180007240(param_2,param_3);
      uVar3 = CONCAT44(extraout_var,uVar2);
    }
    else if (iVar1 == 0x50) {
      FUN_18000b2c0(param_2 + 10,0x30,(longlong)param_2,param_3);
      FUN_18000b2c0(param_2 + 0x12,0x20,(longlong)param_2,param_3);
      FUN_18000b2c0(param_2 + 0xe,0x65,(longlong)param_2,param_3);
      FUN_18000b2c0(param_2 + 0x16,0x50,(longlong)param_2,param_3);
      uVar3 = 0;
    }
    else if (iVar1 == 0x61) {
      uVar3 = FUN_18000a610((longlong)param_2,param_3);
    }
    else if (iVar1 == 0xf8) {
      FUN_180006060((int)param_1[0x13]);
      uVar4 = FUN_1800099a0(param_2,param_3,plVar6);
      uVar5 = 5;
      if ((char)uVar4 != '\0') {
        uVar5 = 0;
      }
      uVar3 = (ulonglong)uVar5;
    }
    else {
      uVar3 = 9;
    }
  }
  return uVar3;
}



undefined8 FUN_180006620(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == (longlong *)0x0) {
    return 2;
  }
  iVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  if (iVar1 != 0x10) {
    uVar2 = 0;
    if (iVar1 != 0x30) {
      uVar2 = 9;
    }
    return uVar2;
  }
  uVar2 = FUN_180006d50(param_1,param_2,param_3);
  return uVar2;
}



void FUN_1800066a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  for (puVar1 = (undefined8 *)*param_2; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1)
  {
    *(undefined4 *)(puVar1 + -3) = 0;
  }
  return;
}



undefined8 FUN_1800066c0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  char *local_18;
  int local_10;
  
  (**(code **)(*param_2 + 0x18))(param_2,&local_18);
  pcVar5 = "";
  if (local_18 != (char *)0x0) {
    pcVar5 = local_18;
  }
  bVar1 = fs::exists(pcVar5);
  if (!bVar1) {
    pcVar5 = "";
    if (local_18 != (char *)0x0) {
      pcVar5 = local_18;
    }
    FUN_1800018d0((longlong *)param_2[6],
                  "ICompilationBackEnd::ProcessFx: fx file \'%s\' does not exist!\n",pcVar5,param_4)
    ;
    free(local_18);
    return 1;
  }
  uVar4 = *(int *)(param_1 + 200) + 1;
  if (*(uint *)(param_1 + 0xcc) < uVar4) {
    uVar2 = (*(uint *)(param_1 + 0xcc) * 10 >> 3) + 0x10 & 0xfffffff0;
    if (uVar2 < uVar4) {
      uVar2 = uVar4;
    }
    *(uint *)(param_1 + 0xcc) = uVar2;
    pvVar3 = realloc(*(void **)(param_1 + 0xc0),(ulonglong)(uVar2 << 4));
    *(void **)(param_1 + 0xc0) = pvVar3;
  }
  puVar6 = (undefined8 *)
           ((ulonglong)*(uint *)(param_1 + 200) * 0x10 + *(longlong *)(param_1 + 0xc0));
  if (puVar6 != (undefined8 *)0x0) {
    if (local_10 == 0) {
      *puVar6 = 0;
      puVar6[1] = 0;
    }
    else {
      *(int *)(puVar6 + 1) = local_10;
      *(int *)((longlong)puVar6 + 0xc) = local_10;
      pvVar3 = malloc((ulonglong)(local_10 + 1));
      *puVar6 = pvVar3;
      memcpy(pvVar3,local_18,(ulonglong)(*(int *)(puVar6 + 1) + 1));
    }
  }
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
  free(local_18);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00018000685f)

bool FUN_180006800(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte *_Memory;
  undefined4 *_Memory_00;
  char *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  undefined8 *puVar10;
  int iVar11;
  byte **ppbVar12;
  char cVar13;
  char cVar14;
  undefined7 uVar15;
  undefined4 uVar16;
  undefined4 local_res20 [2];
  void *local_e8;
  uint local_e0;
  uint local_dc;
  byte *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 *local_98;
  ulonglong local_90;
  undefined4 local_88;
  undefined2 local_80;
  undefined2 local_7e;
  undefined1 local_7c;
  undefined2 local_7b;
  undefined1 local_79;
  undefined8 local_78;
  undefined4 local_70;
  void *local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 *local_48;
  uint local_40;
  uint local_3c;
  uint local_38;
  
  cVar13 = (char)param_4;
  uVar15 = (undefined7)((ulonglong)param_4 >> 8);
  uVar8 = 0;
  pcVar3 = "format";
  local_res20[0] = 0;
  local_d8 = (byte *)0x0;
  local_d0 = 0;
  do {
    if (*pcVar3 == '\0') break;
    uVar8 = uVar8 + 1;
    pcVar3 = pcVar3 + 1;
  } while (uVar8 != 0xffffffff);
  cVar14 = cVar13;
  local_e0 = uVar8;
  local_dc = uVar8;
  if (uVar8 == 0) {
    local_e8 = (void *)0x0;
  }
  else {
    local_e8 = malloc((ulonglong)(uVar8 + 1));
    memcpy(local_e8,"format",(ulonglong)uVar8);
    *(undefined1 *)((ulonglong)local_e0 + (longlong)local_e8) = 0;
  }
  ppbVar12 = &local_d8;
  (**(code **)(*param_2 + 0x38))(param_2,&local_e8);
  free(local_e8);
  _Memory = local_d8;
  uVar16 = 0;
  if ((int)local_d0 != 0) {
    pbVar6 = &DAT_1800198fb;
    if (local_d8 != (byte *)0x0) {
      pbVar6 = local_d8;
    }
    FUN_1800042f0(pbVar6,local_res20);
    uVar16 = local_res20[0];
  }
  free(_Memory);
  lVar2 = param_1[0x23];
  local_b0 = (**(code **)(*param_1 + 0x78))(param_1);
  local_res20[0] = 0;
  local_a0 = 0;
  local_98 = (undefined4 *)0x0;
  local_90 = 0;
  local_79 = 0;
  local_80 = 0x500;
  local_a8 = 8;
  local_88 = 0x3d;
  local_7e = 0x2d0;
  local_7c = 0x2d;
  local_c8 = param_2;
  local_c0 = lVar2;
  local_b8 = param_1;
  local_ac = uVar16;
  FUN_180008080((longlong *)&local_98,local_res20);
  plVar5 = param_1 + 1;
  *local_98 = 0x40b00000;
  local_98[1] = 0x41080000;
  local_a0 = (undefined4)param_1[7];
  local_7b = 0xc14;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0x3d;
  local_78 = param_3;
  local_a8._0_4_ = *(undefined4 *)((longlong)param_1 + 0x2c);
  FUN_1800087f0((longlong *)&local_98,plVar5);
  local_7e = *(undefined2 *)((longlong)param_1 + 0x22);
  local_80 = (undefined2)param_1[4];
  local_7c = *(undefined1 *)((longlong)param_1 + 0x24);
  local_7b = *(undefined2 *)((longlong)param_1 + 0x25);
  local_79 = *(undefined1 *)((longlong)param_1 + 0x27);
  if (*(char *)((longlong)param_1 + 0x41) != '\0') {
    local_a8._4_4_ = local_a8._4_4_ | 1;
  }
  if (*(char *)((longlong)param_1 + 0x43) != '\0') {
    local_a8._4_4_ = local_a8._4_4_ | 8;
  }
  if (*(char *)((longlong)param_1 + 0x46) != '\0') {
    local_a8._4_4_ = local_a8._4_4_ | 0x10;
  }
  if (*(char *)((longlong)param_1 + 0x47) != '\0') {
    local_a8._4_4_ = local_a8._4_4_ | 2;
  }
  if ((char)param_1[9] != '\0') {
    local_a8._4_4_ = local_a8._4_4_ | 0x20;
  }
  if (*(char *)((longlong)param_1 + 0x49) != '\0') {
    local_a8._4_4_ = local_a8._4_4_ | 0x40;
  }
  if (cVar13 != '\0') {
    local_a8._4_4_ = local_a8._4_4_ | 4;
  }
  uVar4 = FUN_18000b660((longlong *)&local_c8,plVar5,ppbVar12,(char *)CONCAT71(uVar15,cVar14));
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b));
  (**(code **)(*param_2 + 0x18))(param_2,&local_e8);
  fs::filename_get_name((char *)&local_d8);
  free(local_e8);
  if (local_68 != (void *)((longlong)local_68 + (local_60 & 0xffffffff) * 0x18)) {
    puVar9 = (uint *)((longlong)local_68 + 8);
    do {
      local_38 = puVar9[2];
      local_48 = (undefined4 *)0x0;
      uVar8 = *puVar9;
      local_3c = 0;
      if (uVar8 != 0) {
        local_3c = uVar8;
        local_48 = realloc((void *)0x0,(ulonglong)(uVar8 << 2));
      }
      _Memory_00 = local_48;
      lVar2 = *(longlong *)(puVar9 + -2);
      if (*puVar9 != 0) {
        puVar7 = local_48;
        uVar8 = 0;
        do {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *(undefined4 *)((lVar2 - (longlong)local_48) + (longlong)puVar7);
          }
          uVar8 = uVar8 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar8 < *puVar9);
      }
      local_40 = *puVar9;
      plVar5 = FUN_1800082c0(param_1 + 0x20,(longlong *)&local_48);
      FUN_1800085d0(plVar5,&local_e8,&local_d8);
      free(_Memory_00);
      puVar1 = puVar9 + 4;
      puVar9 = puVar9 + 6;
    } while (puVar1 != (uint *)((longlong)local_68 + (local_60 & 0xffffffff) * 0x18));
  }
  free(local_d8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b));
  puVar10 = (undefined8 *)((longlong)local_68 + (ulonglong)((int)local_60 - 1) * 0x18);
  for (iVar11 = (int)local_60; iVar11 != 0; iVar11 = iVar11 + -1) {
    *(undefined4 *)(puVar10 + 1) = 0;
    free((void *)*puVar10);
    puVar10 = puVar10 + -3;
  }
  local_60 = local_60 & 0xffffffff00000000;
  free(local_68);
  local_90 = local_90 & 0xffffffff00000000;
  free(local_98);
  return (char)uVar4 == '\0';
}



// WARNING: Removing unreachable block (ram,0x000180006c32)
// WARNING: Removing unreachable block (ram,0x000180006c97)

undefined8 FUN_180006be0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  void *local_28;
  uint local_20;
  uint local_1c;
  void *local_18;
  uint local_10;
  uint local_c;
  
  if (*(char *)((longlong)param_1 + 0x43) != '\0') {
    uVar3 = 0;
    pcVar2 = "1";
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
      memcpy(local_18,&DAT_1800195b4,(ulonglong)uVar3);
      *(undefined1 *)((ulonglong)local_10 + (longlong)local_18) = 0;
    }
    uVar3 = 0;
    pcVar2 = "force_all_skins";
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
      memcpy(local_28,"force_all_skins",(ulonglong)uVar3);
      *(undefined1 *)((ulonglong)local_20 + (longlong)local_28) = 0;
    }
    (**(code **)(*param_2 + 0x28))(param_2,&local_28,&local_18);
    free(local_28);
    local_28 = (void *)0x0;
    free(local_18);
  }
  iVar1 = (**(code **)(*param_1 + 0x78))(param_1);
  FUN_18000ccc0(param_2,param_3,iVar1,param_1);
  return 0;
}



undefined8 FUN_180006d50(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *_Memory;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *_Dst;
  undefined8 *puVar5;
  undefined8 *local_48;
  ulonglong local_40;
  undefined4 local_38;
  
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  local_38 = 0x3d;
  FUN_180006be0(param_1,param_2,(longlong *)&local_48);
  _Memory = local_48;
  puVar1 = local_48 + (local_40 & 0xffffffff);
  for (puVar5 = local_48; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    puVar3 = (undefined8 *)(**(code **)(*(longlong *)*puVar5 + 0x18))((longlong *)*puVar5,&local_48)
    ;
    puVar4 = malloc(0x20);
    if (puVar4 != (undefined8 *)0x0) {
      iVar2 = *(int *)(puVar3 + 1);
      if (iVar2 == 0) {
        *puVar4 = 0;
        puVar4[1] = 0;
      }
      else {
        *(int *)(puVar4 + 1) = iVar2;
        *(int *)((longlong)puVar4 + 0xc) = iVar2;
        _Dst = malloc((ulonglong)(iVar2 + 1));
        *puVar4 = _Dst;
        memcpy(_Dst,(void *)*puVar3,(ulonglong)(iVar2 + 1));
      }
    }
    puVar3 = puVar4 + 2;
    puVar4[3] = param_3[1];
    *puVar3 = 0;
    if ((undefined8 *)param_3[1] == (undefined8 *)0x0) {
      *param_3 = puVar3;
    }
    else {
      *(undefined8 *)param_3[1] = puVar3;
    }
    *(int *)(param_3 + 2) = *(int *)(param_3 + 2) + 1;
    param_3[1] = puVar3;
    free(local_48);
    local_48 = (undefined8 *)0x0;
  }
  free(_Memory);
  return 0;
}



ulonglong FUN_180006e80(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined7 extraout_var;
  ulonglong uVar6;
  undefined8 *local_28;
  undefined8 *local_20;
  int local_18;
  undefined4 local_10;
  
  if (param_2 == (longlong *)0x0) {
    return 2;
  }
  local_10 = 0x3d;
  local_28 = (undefined8 *)0x0;
  local_20 = (undefined8 *)0x0;
  local_18 = 0;
  bVar5 = FUN_180006800(param_1,param_2,&local_28,CONCAT71((int7)((ulonglong)param_4 >> 8),1));
  uVar6 = CONCAT71(extraout_var,bVar5) & 0xffffffff;
  puVar3 = local_28;
  puVar4 = local_20;
  if ((int)CONCAT71(extraout_var,bVar5) == 0) {
    for (; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
      iVar1 = *(int *)(puVar3 + -5);
      iVar2 = *(int *)(puVar3 + -3);
      if (iVar1 == 0x10) {
        *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + iVar2;
      }
      else if (iVar1 == 0x11) {
        *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + iVar2;
      }
      else if (iVar1 == 0xf0) {
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + iVar2;
      }
      else if (iVar1 == 0xf1) {
        *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + iVar2;
      }
      else {
        *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + iVar2;
      }
    }
    while (local_18 != 0) {
      if (*(char *)((longlong)puVar4 + -4) != '\0') {
        puVar4[-4] = 0;
      }
      *(undefined4 *)(puVar4 + -3) = 0;
      local_20 = puVar4;
      free((void *)puVar4[-4]);
      if (local_28 == local_20) {
        local_28 = (undefined8 *)0x0;
        local_20 = (undefined8 *)0x0;
      }
      else {
        *(undefined8 *)local_20[1] = 0;
        local_20 = (undefined8 *)local_20[1];
      }
      local_18 = local_18 + -1;
      free(puVar4 + -5);
      puVar4 = local_20;
    }
    uVar6 = 0;
  }
  else {
    while (local_18 != 0) {
      if (*(char *)((longlong)puVar4 + -4) != '\0') {
        puVar4[-4] = 0;
      }
      *(undefined4 *)(puVar4 + -3) = 0;
      local_20 = puVar4;
      free((void *)puVar4[-4]);
      if (local_28 == local_20) {
        local_28 = (undefined8 *)0x0;
        local_20 = (undefined8 *)0x0;
      }
      else {
        *(undefined8 *)local_20[1] = 0;
        local_20 = (undefined8 *)local_20[1];
      }
      local_18 = local_18 + -1;
      free(puVar4 + -5);
      puVar4 = local_20;
    }
  }
  return uVar6;
}



int FUN_180006ff0(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *local_28;
  undefined8 *local_20;
  int local_18;
  undefined4 local_10;
  
  if (param_2 == 0) {
    return 2;
  }
  local_28 = (undefined8 *)0x0;
  local_20 = (undefined8 *)0x0;
  local_18 = 0;
  local_10 = 0x3d;
  iVar3 = (**(code **)(*param_1 + 0x48))(param_1,param_2,&local_28);
  puVar1 = local_28;
  puVar2 = local_20;
  if (iVar3 == 0) {
    for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      iVar3 = *(int *)(puVar1 + -5);
      if (iVar3 == 0x20) {
        *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + *(int *)(puVar1 + -3);
      }
      else if ((iVar3 == 0x21) || (iVar3 == 0x22)) {
        *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + *(int *)(puVar1 + -3);
      }
    }
    while (local_18 != 0) {
      if (*(char *)((longlong)puVar2 + -4) != '\0') {
        puVar2[-4] = 0;
      }
      *(undefined4 *)(puVar2 + -3) = 0;
      local_20 = puVar2;
      free((void *)puVar2[-4]);
      if (local_28 == local_20) {
        local_28 = (undefined8 *)0x0;
        local_20 = (undefined8 *)0x0;
      }
      else {
        *(undefined8 *)local_20[1] = 0;
        local_20 = (undefined8 *)local_20[1];
      }
      local_18 = local_18 + -1;
      free(puVar2 + -5);
      puVar2 = local_20;
    }
    iVar3 = 0;
  }
  else {
    while (local_18 != 0) {
      if (*(char *)((longlong)puVar2 + -4) != '\0') {
        puVar2[-4] = 0;
      }
      *(undefined4 *)(puVar2 + -3) = 0;
      local_20 = puVar2;
      free((void *)puVar2[-4]);
      if (local_28 == local_20) {
        local_28 = (undefined8 *)0x0;
        local_20 = (undefined8 *)0x0;
      }
      else {
        *(undefined8 *)local_20[1] = 0;
        local_20 = (undefined8 *)local_20[1];
      }
      local_18 = local_18 + -1;
      free(puVar2 + -5);
      puVar2 = local_20;
    }
  }
  return iVar3;
}



ulonglong FUN_180007140(longlong *param_1,CVertexElement *param_2,uint *param_3,undefined8 param_4,
                       TYPE param_5)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (param_1[0x24] != 0) {
    uVar1 = FUN_180007170(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



ulonglong FUN_180007170(longlong *param_1,CVertexElement *param_2,uint *param_3,undefined8 param_4,
                       TYPE param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulonglong extraout_RAX;
  undefined8 extraout_RAX_00;
  uint uVar4;
  char *pcVar5;
  char *local_18 [2];
  
  fs::root_path((char *)local_18);
  pcVar5 = "";
  if (local_18[0] != (char *)0x0) {
    pcVar5 = local_18[0];
  }
  bVar2 = CMaterialsPack::FetchMaterialVertexInputs
                    ((CMaterialsPack *)param_1[0x24],param_2,param_3,pcVar5,param_5);
  if (!bVar2) {
    free(local_18[0]);
    return extraout_RAX & 0xffffffffffffff00;
  }
  iVar3 = (**(code **)(*param_1 + 0x78))();
  if ((((iVar3 == 4) || (iVar3 == 5)) || (iVar3 == 6)) && (uVar4 = 0, *param_3 != 0)) {
    do {
      uVar1 = *(uint *)param_2;
      uVar4 = uVar4 + 1;
      *(uint *)param_2 =
           uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      param_2 = param_2 + 4;
    } while (uVar4 < *param_3);
  }
  free(local_18[0]);
  return CONCAT71((int7)((ulonglong)extraout_RAX_00 >> 8),1);
}



// WARNING: Removing unreachable block (ram,0x0001800073f1)
// WARNING: Removing unreachable block (ram,0x000180007407)

undefined4 FUN_180007240(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  char **ppcVar7;
  AssetManager *pAVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  char *pcVar11;
  longlong *plVar12;
  void *pvVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  char *local_78;
  undefined8 local_70;
  void *local_68 [2];
  undefined **local_58;
  char *local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong *local_38;
  
  (**(code **)(*param_1 + 0x10))(param_1,&local_78);
  if (local_78 == (char *)0x0) {
    local_78 = malloc(1);
    *local_78 = '\0';
  }
  fs::filename_change_extension_inplace(local_78,".dmt");
  ppcVar7 = (char **)fs::root_path((char *)local_68);
  if (&local_78 != ppcVar7) {
    uVar15 = *(uint *)(ppcVar7 + 1);
    if (uVar15 == 0) {
      free(local_78);
      local_78 = (char *)0x0;
      local_70 = 0;
    }
    else if (local_70._4_4_ < uVar15) {
      free(local_78);
      iVar1 = *(int *)(ppcVar7 + 1);
      local_70 = CONCAT44(iVar1,iVar1);
      local_78 = malloc((ulonglong)(iVar1 + 1U));
      memcpy(local_78,*ppcVar7,(ulonglong)(iVar1 + 1U));
    }
    else {
      local_70 = CONCAT44(local_70._4_4_,uVar15);
      memcpy(local_78,*ppcVar7,(ulonglong)(*(int *)(ppcVar7 + 1) + 1));
    }
  }
  free(local_68[0]);
  pAVar8 = GetAssetManager();
  pcVar11 = "";
  if (local_78 != (char *)0x0) {
    pcVar11 = local_78;
  }
  plVar9 = (longlong *)(**(code **)(*(longlong *)pAVar8 + 0x138))(pAVar8,pcVar11);
  if (plVar9 == (longlong *)0x0) {
    if (local_78 != (char *)0x0) {
      uVar16 = local_70 & 0xffffffff;
      uVar15 = (uint)local_70;
      do {
        if (uVar15 == 0) goto LAB_180007392;
        uVar5 = (uint)uVar16;
        uVar15 = uVar5 - 1;
        uVar16 = (ulonglong)uVar15;
      } while (local_78[uVar16] != '.');
      uVar15 = uVar5 - 1;
      if (0 < (int)uVar15) {
        uVar14 = (uint)local_70;
        if (uVar15 < (uint)local_70) {
          uVar14 = uVar5;
        }
        if (uVar14 != 0) {
          while (uVar5 = uVar14 - 1, local_78[uVar5] != '_') {
            uVar14 = uVar5;
            if (uVar5 == 0) {
              free(local_78);
              return 9;
            }
          }
          uVar14 = uVar14 - 1;
          if (0 < (int)uVar14) {
            uVar16 = (ulonglong)uVar14;
            if (uVar14 < (uint)local_70) {
              uVar5 = uVar15 - uVar14;
              if (uVar15 - uVar14 == 0xffffffff) {
                uVar5 = (uint)local_70;
              }
              uVar5 = uVar14 + uVar5;
              if (uVar5 < (uint)local_70) {
                uVar15 = (uint)local_70 - uVar5;
                memmove(local_78 + uVar16,local_78 + uVar5,(ulonglong)uVar15);
                uVar16 = (ulonglong)(uVar14 + uVar15);
              }
              local_70 = CONCAT44(local_70._4_4_,(int)uVar16);
              local_78[uVar16] = '\0';
            }
            puVar10 = (undefined8 *)fs::root_path((char *)local_68);
            FUN_180003710(&local_78,puVar10);
            free(local_68[0]);
            pAVar8 = GetAssetManager();
            pcVar11 = "";
            if (local_78 != (char *)0x0) {
              pcVar11 = local_78;
            }
            plVar9 = (longlong *)(**(code **)(*(longlong *)pAVar8 + 0x138))(pAVar8,pcVar11);
            if (plVar9 == (longlong *)0x0) {
              free(local_78);
              return 9;
            }
            goto LAB_18000749e;
          }
        }
      }
    }
LAB_180007392:
    free(local_78);
    uVar6 = 9;
  }
  else {
LAB_18000749e:
    local_50 = (char *)0x0;
    local_48 = 0xffffffffffffffff;
    local_40 = 0xffffffff;
    local_58 = AssetManager::UsedFilesIterator::vftable;
    local_38 = plVar9;
    local_40 = (**(code **)(*plVar9 + 0x30))(plVar9);
    local_40 = (**(code **)(*local_38 + 0x38))(local_38,local_40,&local_50,&local_48);
    while (local_50 != (char *)0x0) {
      pcVar11 = strstr(local_50,".dds");
      if (pcVar11 != (char *)0x0) {
        lVar2 = param_1[7];
        lVar3 = param_1[6];
        lVar4 = param_1[5];
        plVar12 = malloc(0x58);
        if (plVar12 != (longlong *)0x0) {
          plVar12[1] = 0;
          *(undefined4 *)(plVar12 + 2) = 0;
          *(undefined4 *)(plVar12 + 3) = 0x3d;
          *(undefined4 *)(plVar12 + 4) = 0x20;
          plVar12[5] = lVar4;
          plVar12[6] = lVar3;
          plVar12[7] = lVar2;
          *plVar12 = (longlong)CTextures_FrontEnd::vftable;
          plVar12[8] = 0;
          plVar12[9] = 0;
          plVar12[10] = 0;
          (**(code **)(*plVar12 + 8))(plVar12,local_50,1);
          uVar15 = (int)param_2[1] + 1;
          if (*(uint *)((longlong)param_2 + 0xc) < uVar15) {
            uVar5 = (*(uint *)((longlong)param_2 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
            if (uVar5 < uVar15) {
              uVar5 = uVar15;
            }
            *(uint *)((longlong)param_2 + 0xc) = uVar5;
            pvVar13 = realloc((void *)*param_2,(ulonglong)(uVar5 << 3));
            *param_2 = (longlong)pvVar13;
          }
          puVar10 = (undefined8 *)(*param_2 + (ulonglong)*(uint *)(param_2 + 1) * 8);
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = plVar12;
          }
          *(int *)(param_2 + 1) = (int)param_2[1] + 1;
        }
      }
      (*(code *)*local_58)(&local_58);
    }
    (**(code **)(*plVar9 + 0x68))(plVar9);
    free(local_78);
    uVar6 = 0;
  }
  return uVar6;
}



void FUN_180007620(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  plVar2 = *(longlong **)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    for (puVar3 = (undefined8 *)*puVar1; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3
        ) {
      puVar1 = puVar3;
    }
  }
  do {
    while( true ) {
      if (puVar1 == (undefined8 *)0x0) {
        return;
      }
      puVar6 = &DAT_1800198fb;
      if ((undefined1 *)puVar1[-2] != (undefined1 *)0x0) {
        puVar6 = (undefined1 *)puVar1[-2];
      }
      puVar5 = &DAT_1800198fb;
      if ((undefined1 *)puVar1[-4] != (undefined1 *)0x0) {
        puVar5 = (undefined1 *)puVar1[-4];
      }
      FUN_1800018d0(plVar2,"%s -> %s\n",puVar5,puVar6);
      puVar3 = (undefined8 *)puVar1[2];
      if (puVar3 == (undefined8 *)0x0) break;
      for (puVar7 = (undefined8 *)*puVar3; puVar1 = puVar3, puVar7 != (undefined8 *)0x0;
          puVar7 = (undefined8 *)*puVar7) {
        puVar3 = puVar7;
      }
    }
    puVar3 = (undefined8 *)puVar1[1];
    puVar7 = puVar1;
    if ((undefined8 *)puVar1[1] == (undefined8 *)0x0) {
      return;
    }
    do {
      puVar4 = puVar3;
      puVar1 = puVar4;
      if (puVar7 != (undefined8 *)puVar4[2]) break;
      puVar1 = (undefined8 *)puVar4[1];
      puVar3 = puVar1;
      puVar7 = puVar4;
    } while (puVar1 != (undefined8 *)0x0);
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00018000799a)

undefined8
FUN_1800076e0(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
             longlong *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  void *pvVar7;
  char *_Src;
  undefined1 *_Dst;
  uint uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *local_58;
  int local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  int local_38;
  undefined4 local_30;
  
  puVar13 = param_4;
  (**(code **)(*param_5 + 8))(param_5,&DAT_18001d144,0);
  FUN_1800018d0(param_5,"FXes gathered during compilation: %d\n",(ulonglong)*(uint *)(param_1 + 200)
                ,puVar13);
  if (*(uint *)(param_1 + 200) != 0) {
    FUN_1800018d0(param_5,"FXes: %d\n",(ulonglong)*(uint *)(param_1 + 200),puVar13);
    FUN_180003200(param_2,"FX");
    *param_3 = 0x50;
    puVar4 = malloc(0x38);
    _Dst = (undefined1 *)0x0;
    puVar5 = (undefined8 *)(puVar4 + 10);
    *(undefined8 *)(puVar4 + 0xc) = param_4[1];
    *puVar5 = 0;
    if ((undefined8 *)param_4[1] == (undefined8 *)0x0) {
      *param_4 = puVar5;
    }
    else {
      *(undefined8 *)param_4[1] = puVar5;
    }
    *(int *)(param_4 + 2) = *(int *)(param_4 + 2) + 1;
    param_4[1] = puVar5;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0;
      *(undefined8 *)(puVar4 + 2) = 0;
      *(undefined8 *)(puVar4 + 4) = 0;
      puVar4[6] = 0x3d;
      puVar4[8] = 0;
      *(undefined2 *)(puVar4 + 9) = 0;
    }
    *puVar4 = 0x50;
    plVar11 = *(longlong **)(param_1 + 0xc0);
    if (plVar11 != plVar11 + (ulonglong)*(uint *)(param_1 + 200) * 2) {
      do {
        local_48 = (undefined1 *)0x0;
        local_40 = (undefined1 *)0x0;
        local_38 = 0;
        local_30 = 0x3d;
        uVar6 = FUN_18000ae10(plVar11,&local_48,param_5,puVar13);
        puVar14 = local_48;
        iVar2 = (int)uVar6;
        if (((iVar2 == 0) || (iVar2 == 8)) || (puVar10 = local_40, iVar1 = local_38, iVar2 == 9)) {
          fs::filename_get_name((char *)&local_58);
          puVar10 = &DAT_1800198fb;
          if (local_58 != (undefined1 *)0x0) {
            puVar10 = local_58;
          }
          FUN_180002e70((longlong *)(puVar4 + 2),puVar10,local_50 + 1);
          if (*(uint *)(puVar14 + -0x18) != 0) {
            FUN_180002e70((longlong *)(puVar4 + 2),*(void **)(puVar14 + -0x20),
                          *(uint *)(puVar14 + -0x18));
          }
          free(local_58);
          local_58 = (undefined1 *)0x0;
          puVar10 = local_40;
          iVar1 = local_38;
        }
        for (; iVar1 != 0; iVar1 = iVar1 + -1) {
          if (puVar10[-4] != '\0') {
            *(undefined8 *)(puVar10 + -0x20) = 0;
          }
          *(undefined4 *)(puVar10 + -0x18) = 0;
          free(*(void **)(puVar10 + -0x20));
          puVar12 = _Dst;
          puVar15 = _Dst;
          if (puVar14 != puVar10) {
            **(undefined8 **)(puVar10 + 8) = 0;
            puVar12 = *(undefined1 **)(puVar10 + 8);
            puVar15 = puVar14;
          }
          free(puVar10 + -0x28);
          puVar14 = puVar15;
          puVar10 = puVar12;
        }
        plVar11 = plVar11 + 2;
      } while (plVar11 !=
               (longlong *)
               ((ulonglong)*(uint *)(param_1 + 200) * 0x10 + *(longlong *)(param_1 + 0xc0)));
    }
    puVar14 = &DAT_1800198fb;
    uVar8 = puVar4[4] + 1;
    if ((uint)puVar4[5] < uVar8) {
      uVar3 = ((uint)(puVar4[5] * 10) >> 3) + 0x10 & 0xfffffff0;
      if (uVar3 < uVar8) {
        uVar3 = uVar8;
      }
      puVar4[5] = uVar3;
      pvVar7 = realloc(*(void **)(puVar4 + 2),(ulonglong)uVar3);
      *(void **)(puVar4 + 2) = pvVar7;
    }
    *(undefined1 *)((ulonglong)(uint)puVar4[4] + *(longlong *)(puVar4 + 2)) = 0;
    puVar4[4] = puVar4[4] + 1;
    _Src = FUN_180008b70((char *)&local_48,(ulonglong)(uint)puVar4[4]);
    pcVar9 = _Src;
    puVar10 = _Dst;
    do {
      if (*pcVar9 == '\0') break;
      uVar8 = (int)puVar10 + 1;
      puVar10 = (undefined1 *)(ulonglong)uVar8;
      pcVar9 = pcVar9 + 1;
    } while (uVar8 != 0xffffffff);
    if ((int)puVar10 != 0) {
      _Dst = malloc((ulonglong)((int)puVar10 + 1));
      memcpy(_Dst,_Src,(size_t)puVar10);
      puVar10[(longlong)_Dst] = 0;
      if (_Dst != (undefined1 *)0x0) {
        puVar14 = _Dst;
      }
    }
    FUN_1800018d0(param_5,"  occupy %s bytes\n",puVar14,puVar13);
    free(_Dst);
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x000180007b17)
// WARNING: Removing unreachable block (ram,0x000180007c23)

void FUN_180007a00(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  undefined1 *_Dst;
  char *_Src;
  void *_Dst_00;
  ulonglong uVar2;
  undefined8 *puVar3;
  char *pcVar4;
  uint uVar5;
  size_t _Size;
  undefined8 *puVar6;
  uint uVar7;
  int *piVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  uint local_res8;
  undefined8 *local_res18;
  void *local_78 [2];
  char local_68 [40];
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xd8);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
  }
  (**(code **)(*param_2 + 8))
            (param_2,"=================== Mesh Vertex Format Summary ===========\n",0);
  FUN_1800018d0(param_2,"%d unique mesh vertex formats.\n",(ulonglong)*(uint *)(param_1 + 0x108),
                param_4);
  _Dst = malloc(0x10001);
  *_Dst = 0;
  free((void *)0x0);
  local_res18 = *(undefined8 **)(param_1 + 0x100);
  local_res8 = 0;
  if (local_res18 != (undefined8 *)0x0) {
    for (puVar1 = (undefined8 *)*local_res18; puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      local_res18 = puVar1;
    }
  }
  if (local_res18 != (undefined8 *)0x0) {
    uVar7 = 0x10000;
    do {
      uVar13 = 0;
      _Src = FUN_180008b70(local_68,(ulonglong)*(uint *)(local_res18 + -2));
      _Size = 0;
      pcVar4 = _Src;
      do {
        if (*pcVar4 == '\0') break;
        uVar5 = (int)_Size + 1;
        _Size = (size_t)uVar5;
        pcVar4 = pcVar4 + 1;
      } while (uVar5 != 0xffffffff);
      if ((int)_Size == 0) {
        _Dst_00 = (void *)0x0;
      }
      else {
        _Dst_00 = malloc((ulonglong)((int)_Size + 1));
        memcpy(_Dst_00,_Src,_Size);
        *(undefined1 *)(_Size + (longlong)_Dst_00) = 0;
      }
      piVar8 = (int *)local_res18[-6];
      uVar2 = 0;
      piVar12 = piVar8 + *(uint *)(local_res18 + -5);
      if (piVar8 != piVar12) {
        do {
          iVar11 = (int)uVar2;
          uVar2 = FUN_1800041c0((*piVar8 << 0x10) >> 0x19);
          piVar8 = piVar8 + 1;
          uVar2 = (ulonglong)(iVar11 + ((uint)uVar2 & 0xff));
        } while (piVar8 != piVar12);
      }
      FUN_1800018d0(param_2,"declaration %d [%d bytes, %s times used]:\n",(ulonglong)local_res8,
                    uVar2);
      free(_Dst_00);
      FUN_1800049e0(param_2,local_res18 + -6);
      puVar1 = (undefined8 *)local_res18[-3];
      puVar10 = _Dst;
      if (puVar1 != (undefined8 *)0x0) {
        for (puVar3 = (undefined8 *)*puVar1; puVar3 != (undefined8 *)0x0;
            puVar3 = (undefined8 *)*puVar3) {
          puVar1 = puVar3;
        }
      }
joined_r0x000180007be1:
      _Dst = puVar10;
      if (puVar1 != (undefined8 *)0x0) {
        puVar9 = &DAT_1800198fb;
        if ((undefined1 *)puVar1[-2] != (undefined1 *)0x0) {
          puVar9 = (undefined1 *)puVar1[-2];
        }
        puVar3 = FUN_180003a00(local_78,"%s, ",puVar9,uVar2);
        if (*(int *)(puVar3 + 1) != 0) {
          uVar5 = *(int *)(puVar3 + 1) + uVar13;
          if (uVar7 < uVar5) {
            _Dst = malloc((ulonglong)(uVar5 + 1));
            if (uVar13 == 0) {
              *_Dst = 0;
            }
            else {
              memcpy(_Dst,puVar10,(ulonglong)(uVar13 + 1));
            }
            free(puVar10);
            uVar7 = uVar5;
          }
          memcpy(_Dst + uVar13,(void *)*puVar3,(ulonglong)(*(int *)(puVar3 + 1) + 1));
          uVar13 = uVar13 + *(int *)(puVar3 + 1);
        }
        free(local_78[0]);
        puVar3 = (undefined8 *)puVar1[2];
        local_78[0] = (void *)0x0;
        puVar10 = _Dst;
        if (puVar3 == (undefined8 *)0x0) {
          puVar3 = puVar1;
          puVar6 = (undefined8 *)puVar1[1];
          if ((undefined8 *)puVar1[1] == (undefined8 *)0x0) goto LAB_180007ce3;
          do {
            puVar1 = puVar6;
            if (puVar3 != (undefined8 *)puVar6[2]) break;
            puVar1 = (undefined8 *)puVar6[1];
            puVar3 = puVar6;
            puVar6 = puVar1;
          } while (puVar1 != (undefined8 *)0x0);
        }
        else {
          for (puVar6 = (undefined8 *)*puVar3; puVar1 = puVar3, puVar6 != (undefined8 *)0x0;
              puVar6 = (undefined8 *)*puVar6) {
            puVar3 = puVar6;
          }
        }
        goto joined_r0x000180007be1;
      }
LAB_180007ce3:
      puVar10 = &DAT_1800198fb;
      if (_Dst != (undefined1 *)0x0) {
        puVar10 = _Dst;
      }
      FUN_1800018d0(param_2,&DAT_18001d22c,puVar10,uVar2);
      if (_Dst != (undefined1 *)0x0) {
        *_Dst = 0;
      }
      puVar1 = (undefined8 *)local_res18[2];
      if (puVar1 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)local_res18[1];
        puVar1 = local_res18;
        while ((local_res18 = puVar3, local_res18 != (undefined8 *)0x0 &&
               (puVar1 == (undefined8 *)local_res18[2]))) {
          puVar1 = local_res18;
          puVar3 = (undefined8 *)local_res18[1];
        }
      }
      else {
        local_res18 = puVar1;
        for (puVar1 = (undefined8 *)*puVar1; puVar1 != (undefined8 *)0x0;
            puVar1 = (undefined8 *)*puVar1) {
          local_res18 = puVar1;
        }
      }
      local_res8 = local_res8 + 1;
    } while (local_res18 != (undefined8 *)0x0);
  }
  free(_Dst);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



void FUN_180007de0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  TYPE TVar4;
  Settings *pSVar5;
  CMaterialsPack *pCVar6;
  longlong lVar7;
  char *pcVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *local_78 [2];
  undefined1 local_68 [4];
  undefined4 local_64;
  char *local_60;
  char *local_58;
  undefined4 local_50;
  char *local_48;
  void *local_40;
  undefined8 local_38;
  
  lVar7 = 0;
  iVar3 = (**(code **)(*param_1 + 0x78))();
  if (((iVar3 == 1) || (iVar3 == 2)) || (iVar3 == 9)) {
    pSVar5 = Log::Settings::Instance();
    TVar4 = Log::Settings::GetCategoryLevel(pSVar5,"Gather");
    if (1 < (int)TVar4) {
      local_64 = 2;
      local_60 = "Gather";
      local_58 = 
      "F:\\PERFORCE\\dkoziol_ce6_dw_modding_2015\\src\\engine\\ResPackCompilerBase\\CommonTools.cpp"
      ;
      local_68[0] = 1;
      local_50 = 0x4ae;
      local_48 = "ICompilationBackEnd::BeginGather";
      local_40 = (void *)0x0;
      local_38 = 0;
      FUN_1800034b0((longlong)local_68,"Forcing DX11 gathering mode!\n",param_3,param_4);
      free(local_40);
    }
    iVar3 = 3;
  }
  bVar1 = false;
  pCVar6 = malloc(0x1e0);
  if (pCVar6 != (CMaterialsPack *)0x0) {
    lVar7 = CMaterialsPack::CMaterialsPack(pCVar6);
  }
  param_1[0x24] = lVar7;
  pcVar8 = FUN_180004640(iVar3);
  uVar9 = FUN_180010bc0(iVar3);
  pcVar10 = FUN_180004270((int)uVar9);
  FUN_180003a00(local_78,"assets_%s/global_%s.mp",pcVar10,pcVar8);
  pcVar10 = "";
  if (local_78[0] != (char *)0x0) {
    pcVar10 = local_78[0];
  }
  bVar2 = CMaterialsPack::Load((CMaterialsPack *)param_1[0x24],pcVar10,1);
  if (!bVar2) {
    pSVar5 = Log::Settings::Instance();
    TVar4 = Log::Settings::GetCategoryLevel(pSVar5,"Gather");
    if (1 < (int)TVar4) {
      bVar1 = true;
      pcVar10 = "";
      if (local_78[0] != (char *)0x0) {
        pcVar10 = local_78[0];
      }
      local_68[0] = 1;
      local_64 = 2;
      local_60 = "Gather";
      local_58 = 
      "F:\\PERFORCE\\dkoziol_ce6_dw_modding_2015\\src\\engine\\ResPackCompilerBase\\CommonTools.cpp"
      ;
      local_50 = 0x4b8;
      local_48 = "ICompilationBackEnd::BeginGather";
      local_40 = (void *)0x0;
      local_38 = 0;
      FUN_1800034b0((longlong)local_68,"Failed to load pack %s!\n",pcVar10,pcVar8);
    }
    if (bVar1) {
      free(local_40);
    }
    pCVar6 = (CMaterialsPack *)param_1[0x24];
    if (pCVar6 != (CMaterialsPack *)0x0) {
      CMaterialsPack::~CMaterialsPack(pCVar6);
      operator_delete(pCVar6);
    }
    param_1[0x24] = 0;
  }
                    // WARNING: Could not recover jumptable at 0x000180007fdf. Too many branches
                    // WARNING: Treating indirect jump as call
  free(local_78[0]);
  return;
}



void FUN_180007ff0(longlong param_1)

{
  CMaterialsPack *this;
  
  this = *(CMaterialsPack **)(param_1 + 0x120);
  if (this != (CMaterialsPack *)0x0) {
    CMaterialsPack::~CMaterialsPack(this);
    operator_delete(this);
    *(undefined8 *)(param_1 + 0x120) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  return;
}



void FUN_180008050(undefined8 param_1,CResourceDataPackBuilder *param_2,
                  RDPLogicalResourceEntryHeader *param_3,CResourceDataPackBuilder *param_4,
                  RDPLogicalResourceEntryHeader *param_5,string_base<char> *param_6)

{
  AreRpackResourcesEqual(param_2,param_3,param_4,param_5,param_6);
  return;
}



void FUN_180008080(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  
  if (*(uint *)(param_1 + 1) < 3) {
    if (*(uint *)((longlong)param_1 + 0xc) < 2) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 2;
      pvVar2 = realloc((void *)*param_1,8);
      *param_1 = (longlong)pvVar2;
    }
    uVar5 = *(uint *)(param_1 + 1);
    puVar3 = (undefined4 *)(*param_1 + (ulonglong)uVar5 * 4);
    if (uVar5 < 2) {
      if (3 < (int)(2 - uVar5)) {
        uVar1 = (-uVar5 - 2 >> 2) + 1;
        uVar4 = (ulonglong)uVar1;
        uVar5 = uVar5 + uVar1 * 4;
        do {
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = *param_2;
          }
          if (puVar3 + 1 != (undefined4 *)0x0) {
            puVar3[1] = *param_2;
          }
          if (puVar3 != (undefined4 *)0xfffffffffffffff8) {
            puVar3[2] = *param_2;
          }
          if (puVar3 + 3 != (undefined4 *)0x0) {
            puVar3[3] = *param_2;
          }
          puVar3 = puVar3 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (uVar5 < 2) {
        uVar4 = (ulonglong)(2 - uVar5);
        do {
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = *param_2;
          }
          puVar3 = puVar3 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    *(undefined4 *)(param_1 + 1) = 2;
    return;
  }
  *(undefined4 *)(param_1 + 1) = 2;
  return;
}



void FUN_180008170(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[2];
  while (iVar1 != 0) {
    lVar2 = param_1[1];
    iVar1 = *(int *)(lVar2 + -0x10);
    while (iVar1 != 0) {
      lVar3 = *(longlong *)(lVar2 + -0x18);
      free(*(void **)(lVar3 + -0x10));
      *(undefined8 *)(lVar3 + -0x10) = 0;
      lVar4 = *(longlong *)(lVar2 + -0x18);
      if (*(longlong *)(lVar2 + -0x20) == lVar4) {
        *(undefined8 *)(lVar2 + -0x20) = 0;
        *(undefined8 *)(lVar2 + -0x18) = 0;
      }
      else {
        **(undefined8 **)(lVar4 + 8) = 0;
        *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(lVar4 + 8);
      }
      *(int *)(lVar2 + -0x10) = *(int *)(lVar2 + -0x10) + -1;
      free((void *)(lVar3 + -0x10));
      iVar1 = *(int *)(lVar2 + -0x10);
    }
    lVar3 = param_1[1];
    if (*param_1 == lVar3) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      **(undefined8 **)(lVar3 + 8) = 0;
      param_1[1] = *(longlong *)(lVar3 + 8);
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    free((void *)(lVar2 + -0x20));
    iVar1 = (int)param_1[2];
  }
  return;
}



void FUN_180008240(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  puVar1 = (undefined8 *)((ulonglong)(iVar2 - 1) * 0x10 + *param_1);
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    operator_delete__((void *)puVar1[1]);
    puVar1[1] = 0;
    operator_delete__((void *)*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + -2;
  }
  *(undefined4 *)(param_1 + 1) = 0;
                    // WARNING: Could not recover jumptable at 0x0001800082ac. Too many branches
                    // WARNING: Treating indirect jump as call
  free((void *)*param_1);
  return;
}



longlong * FUN_1800082c0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int *piVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  
  plVar8 = (longlong *)0x0;
  bVar12 = false;
  if ((longlong *)*param_1 != (longlong *)0x0) {
    uVar1 = *(uint *)(param_2 + 1);
    plVar7 = (longlong *)*param_1;
    do {
      plVar8 = plVar7;
      bVar12 = uVar1 < *(uint *)(plVar8 + -5);
      if (uVar1 == *(uint *)(plVar8 + -5)) {
        uVar9 = 0;
        lVar11 = 0;
        if (uVar1 != 0) {
          piVar2 = (int *)plVar8[-6];
          piVar5 = piVar2;
          do {
            if (*(int *)((*param_2 - (longlong)piVar2) + (longlong)piVar5) != *piVar5) {
              bVar12 = *(uint *)(*param_2 + lVar11 * 4) < (uint)piVar2[lVar11];
              goto LAB_180008338;
            }
            uVar9 = uVar9 + 1;
            lVar11 = lVar11 + 1;
            piVar5 = piVar5 + 1;
          } while (uVar9 < uVar1);
        }
        bVar12 = false;
      }
LAB_180008338:
      if (bVar12 == false) {
        plVar7 = (longlong *)plVar8[2];
      }
      else {
        plVar7 = (longlong *)*plVar8;
      }
    } while (plVar7 != (longlong *)0x0);
  }
  plVar7 = plVar8;
  if (bVar12 != false) {
    plVar7 = (longlong *)*plVar8;
    if (plVar7 == (longlong *)0x0) {
      plVar3 = plVar8;
      plVar6 = (longlong *)plVar8[1];
      if ((longlong *)plVar8[1] == (longlong *)0x0) goto LAB_1800083f9;
      do {
        plVar7 = plVar6;
        if (plVar3 != (longlong *)*plVar6) break;
        plVar7 = (longlong *)plVar6[1];
        plVar3 = plVar6;
        plVar6 = plVar7;
      } while (plVar7 != (longlong *)0x0);
    }
    else {
      for (plVar3 = (longlong *)plVar7[2]; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[2]
          ) {
        plVar7 = plVar3;
      }
    }
  }
  if (plVar7 == (longlong *)0x0) {
LAB_1800083f9:
    puVar4 = malloc(0x50);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_180008900(puVar4,param_2);
    }
    if (puVar4 + 3 != (undefined8 *)0x0) {
      puVar4[3] = 0;
      *(undefined4 *)(puVar4 + 4) = 0;
      *(undefined4 *)(puVar4 + 5) = 0x3d;
    }
    FUN_180003f70(param_1,puVar4 + 6,bVar12,plVar8);
    return puVar4 + 3;
  }
  uVar1 = *(uint *)(plVar7 + -5);
  bVar13 = uVar1 < *(uint *)(param_2 + 1);
  if (uVar1 == *(uint *)(param_2 + 1)) {
    uVar10 = 0;
    if (uVar1 != 0) {
      piVar2 = (int *)*param_2;
      piVar5 = piVar2;
      do {
        if (*(int *)((plVar7[-6] - (longlong)piVar2) + (longlong)piVar5) != *piVar5) {
          bVar13 = *(uint *)(plVar7[-6] + uVar10 * 4) < (uint)piVar2[uVar10];
          goto LAB_1800083f2;
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        piVar5 = piVar5 + 1;
      } while (uVar9 < uVar1);
    }
  }
  else {
LAB_1800083f2:
    if (bVar13) goto LAB_1800083f9;
  }
  return plVar7 + -3;
}



void FUN_180008470(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  puVar1 = (undefined8 *)((ulonglong)(iVar2 - 1) * 0x50 + *param_1);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    do {
      free((void *)puVar1[2]);
      puVar1[2] = 0;
      free((void *)*puVar1);
      *puVar1 = 0;
      puVar1 = puVar1 + -10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



void FUN_1800084e0(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  puVar1 = (undefined8 *)((ulonglong)(iVar2 - 1) * 0x78 + *param_1);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    do {
      free((void *)puVar1[2]);
      puVar1[2] = 0;
      free((void *)*puVar1);
      *puVar1 = 0;
      puVar1 = puVar1 + -0xf;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



void FUN_180008550(longlong *param_1)

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
      FUN_180008780(param_1,(undefined8 *)plVar2[2]);
      plVar1 = (longlong *)*plVar2;
      operator_delete__((void *)plVar2[-1]);
      plVar2[-1] = 0;
      free(plVar2 + -1);
      plVar2 = plVar1;
    } while (plVar1 != (longlong *)0x0);
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



undefined8 * FUN_1800085d0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  
  plVar4 = (longlong *)0x0;
  bVar11 = false;
  if ((longlong *)*param_1 != (longlong *)0x0) {
    plVar7 = (longlong *)*param_1;
    do {
      plVar4 = plVar7;
      pbVar9 = &DAT_1800198fb;
      if ((byte *)plVar4[-2] != (byte *)0x0) {
        pbVar9 = (byte *)plVar4[-2];
      }
      pbVar10 = &DAT_1800198fb;
      if ((byte *)*param_3 != (byte *)0x0) {
        pbVar10 = (byte *)*param_3;
      }
      do {
        bVar1 = *pbVar10;
        uVar5 = (uint)bVar1;
        if (bVar1 - 0x41 < 0x1a) {
          uVar5 = bVar1 + 0x20;
        }
        bVar1 = *pbVar9;
        uVar8 = (uint)bVar1;
        pbVar9 = pbVar9 + 1;
        if (bVar1 - 0x41 < 0x1a) {
          uVar8 = bVar1 + 0x20;
        }
      } while ((uVar5 != 0) && (pbVar10 = pbVar10 + 1, uVar5 == uVar8));
      bVar11 = (int)(uVar5 - uVar8) < 0;
      if (bVar11) {
        plVar7 = (longlong *)*plVar4;
      }
      else {
        plVar7 = (longlong *)plVar4[2];
      }
    } while (plVar7 != (longlong *)0x0);
  }
  plVar7 = plVar4;
  if (bVar11 != false) {
    plVar7 = (longlong *)*plVar4;
    if (plVar7 == (longlong *)0x0) {
      plVar2 = plVar4;
      plVar6 = (longlong *)plVar4[1];
      if ((longlong *)plVar4[1] == (longlong *)0x0) goto LAB_18000871d;
      do {
        plVar7 = plVar6;
        if (plVar2 != (longlong *)*plVar6) break;
        plVar7 = (longlong *)plVar6[1];
        plVar2 = plVar6;
        plVar6 = plVar7;
      } while (plVar7 != (longlong *)0x0);
    }
    else {
      for (plVar2 = (longlong *)plVar7[2]; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[2]
          ) {
        plVar7 = plVar2;
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    pbVar9 = &DAT_1800198fb;
    if ((byte *)*param_3 != (byte *)0x0) {
      pbVar9 = (byte *)*param_3;
    }
    pbVar10 = &DAT_1800198fb;
    if ((byte *)plVar7[-2] != (byte *)0x0) {
      pbVar10 = (byte *)plVar7[-2];
    }
    do {
      bVar1 = *pbVar10;
      uVar5 = (uint)bVar1;
      pbVar10 = pbVar10 + 1;
      if (bVar1 - 0x41 < 0x1a) {
        uVar5 = bVar1 + 0x20;
      }
      bVar1 = *pbVar9;
      uVar8 = (uint)bVar1;
      pbVar9 = pbVar9 + 1;
      if (bVar1 - 0x41 < 0x1a) {
        uVar8 = bVar1 + 0x20;
      }
    } while ((uVar5 != 0) && (uVar5 == uVar8));
    if (-1 < (int)(uVar5 - uVar8)) {
      *param_2 = plVar7;
      *(undefined1 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
LAB_18000871d:
  puVar3 = malloc(0x30);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_180003970(puVar3,param_3);
  }
  plVar4 = FUN_180003f70(param_1,puVar3 + 2,bVar11,plVar4);
  *(undefined1 *)(param_2 + 1) = 1;
  *param_2 = plVar4;
  return param_2;
}



void FUN_180008780(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  while (param_2 != (undefined8 *)0x0) {
    FUN_180008780(param_1,(undefined8 *)param_2[2]);
    puVar1 = (undefined8 *)*param_2;
    operator_delete__((void *)param_2[-1]);
    param_2[-1] = 0;
    free(param_2 + -1);
    param_2 = puVar1;
  }
  return;
}



longlong * FUN_1800087f0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if (param_1 != param_2) {
    lVar8 = 0;
    uVar7 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    uVar1 = *(uint *)(param_2 + 1);
    if (*(uint *)((longlong)param_1 + 0xc) < uVar1) {
      *(uint *)((longlong)param_1 + 0xc) = uVar1;
      pvVar5 = realloc((void *)*param_1,(ulonglong)(uVar1 << 2));
      *param_1 = (longlong)pvVar5;
    }
    uVar1 = *(uint *)(param_2 + 1);
    lVar2 = *param_1;
    lVar3 = *param_2;
    if (3 < (int)uVar1) {
      puVar6 = (undefined4 *)(lVar2 + 4);
      lVar9 = lVar3 - lVar2;
      uVar4 = (uVar1 - 4 >> 2) + 1;
      uVar10 = (ulonglong)uVar4;
      uVar7 = uVar4 * 4;
      lVar8 = (ulonglong)uVar4 * 4;
      do {
        if (puVar6 + -1 != (undefined4 *)0x0) {
          puVar6[-1] = *(undefined4 *)(lVar9 + -4 + (longlong)puVar6);
        }
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *(undefined4 *)(lVar9 + (longlong)puVar6);
        }
        if (puVar6 + 1 != (undefined4 *)0x0) {
          puVar6[1] = *(undefined4 *)(lVar9 + 4 + (longlong)puVar6);
        }
        if (puVar6 + 2 != (undefined4 *)0x0) {
          puVar6[2] = *(undefined4 *)(lVar9 + 8 + (longlong)puVar6);
        }
        puVar6 = puVar6 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (uVar7 < uVar1) {
      puVar6 = (undefined4 *)(lVar2 + lVar8 * 4);
      uVar10 = (ulonglong)(uVar1 - uVar7);
      do {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *(undefined4 *)((longlong)puVar6 + (lVar3 - lVar2));
        }
        puVar6 = puVar6 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    *(uint *)(param_1 + 1) = uVar1;
  }
  return param_1;
}



undefined8 * FUN_180008900(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  *(int *)(param_1 + 2) = (int)param_2[2];
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = (int)param_2[1];
  if (iVar1 != 0) {
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    pvVar3 = realloc((void *)0x0,(ulonglong)(uint)(iVar1 << 2));
    *param_1 = pvVar3;
  }
  uVar2 = *(uint *)(param_2 + 1);
  puVar4 = (undefined4 *)*param_1;
  if (uVar2 != 0) {
    lVar6 = *param_2 - (longlong)puVar4;
    uVar5 = (ulonglong)uVar2;
    do {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *(undefined4 *)(lVar6 + (longlong)puVar4);
      }
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  *(uint *)(param_1 + 1) = uVar2;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x0001800089f7)
// WARNING: Removing unreachable block (ram,0x000180008ad4)

void FUN_180008980(longlong *param_1,longlong param_2,uint param_3,char param_4)

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
LAB_180008a20:
            pvVar2 = (void *)0x0;
          }
          else {
            do {
              if (*pcVar1 == '\0') break;
              uVar7 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar7;
              pcVar1 = pcVar1 + 1;
            } while (uVar7 < uVar9 - uVar5);
            if ((int)uVar8 == 0) goto LAB_180008a20;
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
      goto LAB_180008aff;
    }
  }
  pvVar2 = (void *)0x0;
LAB_180008aff:
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



char * FUN_180008b70(char *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char *pcVar9;
  uint uVar10;
  bool bVar11;
  
  uVar7 = 0;
  bVar11 = param_2 < 0;
  uVar4 = 0x20;
  pcVar3 = param_1;
  uVar8 = uVar7;
  if (bVar11) {
    param_2 = -param_2;
  }
  do {
    pcVar9 = pcVar3 + 1;
    iVar6 = (int)uVar7;
    uVar7 = (ulonglong)(iVar6 + 1);
    uVar5 = uVar4 - 1;
    lVar2 = param_2 / 10;
    *pcVar3 = (char)param_2 + (char)lVar2 * -10 + '0';
    if (lVar2 == 0) break;
    uVar10 = (int)uVar8 + 1;
    if (uVar10 == (uVar10 / 3) * 3) {
      if (uVar5 < 2) break;
      *pcVar9 = ',';
      pcVar9 = pcVar3 + 2;
      uVar7 = (ulonglong)(iVar6 + 2);
      uVar5 = uVar4 - 2;
    }
    uVar4 = uVar5;
    param_2 = lVar2;
    pcVar3 = pcVar9;
    uVar8 = (ulonglong)uVar10;
    uVar5 = uVar4;
  } while (1 < uVar4);
  if ((bVar11) && (1 < uVar5)) {
    param_1[uVar7] = '-';
    uVar7 = (ulonglong)((int)uVar7 + 1);
  }
  param_1[uVar7] = '\0';
  uVar8 = uVar7 >> 1;
  if ((int)uVar8 != 0) {
    pcVar3 = param_1;
    pcVar9 = param_1 + (longlong)(int)uVar7 + -1;
    do {
      cVar1 = *pcVar3;
      *pcVar3 = *pcVar9;
      *pcVar9 = cVar1;
      pcVar3 = pcVar3 + 1;
      uVar8 = uVar8 - 1;
      pcVar9 = pcVar9 + -1;
    } while (uVar8 != 0);
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000180008cf0)
// WARNING: Removing unreachable block (ram,0x000180008e15)

undefined8
FUN_180008c90(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined1 param_4,int param_5
             )

{
  undefined1 **ppuVar1;
  char *pcVar2;
  ulonglong extraout_RAX;
  void *_Dst;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_RAX_00;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong _Size;
  undefined1 *puVar8;
  undefined1 *local_b8;
  ulonglong local_b0;
  undefined4 local_a8;
  undefined1 *local_a0;
  ulonglong local_98;
  undefined4 local_90;
  undefined1 *local_88;
  undefined8 local_80;
  void *local_78;
  uint local_70;
  uint local_6c;
  undefined1 *local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined1 *local_50 [2];
  undefined1 *local_40 [3];
  
  (**(code **)(*param_1 + 0x10))(param_1,local_50);
  uVar6 = 0;
  pcVar2 = "range";
  local_88 = (undefined1 *)0x0;
  local_80 = 0;
  uVar7 = uVar6;
  do {
    if (*pcVar2 == '\0') break;
    uVar7 = uVar7 + 1;
    pcVar2 = pcVar2 + 1;
  } while (uVar7 != 0xffffffff);
  local_70 = uVar7;
  local_6c = uVar7;
  if (uVar7 == 0) {
    local_78 = (void *)0x0;
  }
  else {
    local_78 = malloc((ulonglong)(uVar7 + 1));
    memcpy(local_78,"range",(ulonglong)uVar7);
    *(undefined1 *)((ulonglong)local_70 + (longlong)local_78) = 0;
  }
  (**(code **)(*param_1 + 0x38))(param_1,&local_78,&local_88);
  free(local_78);
  if (param_5 == 0) {
    puVar4 = &DAT_1800198fb;
    if (local_88 != (undefined1 *)0x0) {
      puVar4 = local_88;
    }
    local_b8 = (undefined1 *)0x0;
    local_b0 = 0;
    local_a8 = 0x3d;
    puVar8 = &DAT_1800198fb;
    if (local_50[0] != (undefined1 *)0x0) {
      puVar8 = local_50[0];
    }
    (**(code **)(*param_3 + 0x98))(param_3,puVar8,puVar4,&local_b8,param_4);
    if ((uint)local_b0 != 0) {
      puVar3 = (undefined4 *)FUN_180002ef0(param_2);
      ppuVar1 = (undefined1 **)(puVar3 + 2);
      *puVar3 = 0x40;
      if (ppuVar1 != &local_b8) {
        puVar3[4] = 0;
        if ((uint)puVar3[5] < (uint)local_b0) {
          puVar3[5] = (uint)local_b0;
          puVar4 = realloc(*ppuVar1,local_b0 & 0xffffffff);
          *ppuVar1 = puVar4;
        }
        puVar4 = *ppuVar1;
        puVar8 = local_b8;
        uVar7 = (uint)local_b0;
        if ((uint)local_b0 != 0) {
          do {
            if (puVar4 != (undefined1 *)0x0) {
              *puVar4 = *puVar8;
              uVar7 = (uint)local_b0;
            }
            uVar6 = uVar6 + 1;
            puVar4 = puVar4 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar6 < uVar7);
        }
        puVar3[4] = uVar7;
      }
    }
    local_b0 = local_b0 & 0xffffffff00000000;
    puVar4 = local_b8;
  }
  else {
    if (param_5 != 1) {
      if (param_5 != 2) {
        free(local_88);
        local_88 = (undefined1 *)0x0;
        free(local_50[0]);
        return extraout_RAX & 0xffffffffffffff00;
      }
      puVar4 = &DAT_1800198fb;
      if (local_50[0] != (undefined1 *)0x0) {
        puVar4 = local_50[0];
      }
      local_b8 = (undefined1 *)0x0;
      local_b0 = 0;
      local_a8 = 0x3d;
      local_a0 = (undefined1 *)0x0;
      local_98 = 0;
      local_90 = 0x3d;
      (**(code **)(*param_3 + 0x90))(param_3,puVar4,param_4,&local_b8,&local_a0);
      local_68 = (undefined1 *)0x0;
      local_60 = 0;
      local_58 = 0x3d;
      puVar4 = &DAT_1800198fb;
      if (local_88 != (undefined1 *)0x0) {
        puVar4 = local_88;
      }
      local_70 = 0;
      pcVar2 = "_fallback";
      do {
        if (*pcVar2 == '\0') break;
        local_70 = local_70 + 1;
        pcVar2 = pcVar2 + 1;
      } while (local_70 != 0xffffffff);
      _Size = (ulonglong)local_70;
      local_6c = local_70;
      if (local_70 == 0) {
        _Dst = (void *)0x0;
        local_78 = (void *)0x0;
      }
      else {
        _Dst = malloc((ulonglong)(local_70 + 1));
        local_78 = _Dst;
        memcpy(_Dst,"_fallback",_Size);
        *(undefined1 *)((longlong)_Dst + _Size) = 0;
      }
      FUN_180009690(local_40,local_50,&local_78);
      free(_Dst);
      puVar8 = &DAT_1800198fb;
      if (local_40[0] != (undefined1 *)0x0) {
        puVar8 = local_40[0];
      }
      (**(code **)(*param_3 + 0x98))(param_3,puVar8,puVar4,&local_68,param_4);
      free(local_40[0]);
      if ((uint)local_b0 != 0) {
        puVar3 = (undefined4 *)FUN_180002ef0(param_2);
        uVar7 = 0;
        ppuVar1 = (undefined1 **)(puVar3 + 2);
        *puVar3 = 0x44;
        if (ppuVar1 != &local_b8) {
          puVar3[4] = 0;
          if ((uint)puVar3[5] < (uint)local_b0) {
            puVar3[5] = (uint)local_b0;
            puVar4 = realloc(*ppuVar1,local_b0 & 0xffffffff);
            *ppuVar1 = puVar4;
          }
          puVar4 = *ppuVar1;
          puVar8 = local_b8;
          uVar6 = (uint)local_b0;
          if ((uint)local_b0 != 0) {
            do {
              if (puVar4 != (undefined1 *)0x0) {
                *puVar4 = *puVar8;
                uVar6 = (uint)local_b0;
              }
              uVar7 = uVar7 + 1;
              puVar4 = puVar4 + 1;
              puVar8 = puVar8 + 1;
            } while (uVar7 < uVar6);
          }
          puVar3[4] = uVar6;
        }
      }
      uVar7 = 0;
      if ((uint)local_98 != 0) {
        puVar3 = (undefined4 *)FUN_180002ef0(param_2);
        ppuVar1 = (undefined1 **)(puVar3 + 2);
        *puVar3 = 0x45;
        if (ppuVar1 != &local_a0) {
          puVar3[4] = 0;
          if ((uint)puVar3[5] < (uint)local_98) {
            puVar3[5] = (uint)local_98;
            puVar4 = realloc(*ppuVar1,local_98 & 0xffffffff);
            *ppuVar1 = puVar4;
          }
          puVar4 = *ppuVar1;
          puVar8 = local_a0;
          uVar6 = (uint)local_98;
          uVar5 = uVar7;
          if ((uint)local_98 != 0) {
            do {
              if (puVar4 != (undefined1 *)0x0) {
                *puVar4 = *puVar8;
                uVar6 = (uint)local_98;
              }
              uVar5 = uVar5 + 1;
              puVar4 = puVar4 + 1;
              puVar8 = puVar8 + 1;
            } while (uVar5 < uVar6);
          }
          puVar3[4] = uVar6;
        }
      }
      if ((uint)local_60 != 0) {
        puVar3 = (undefined4 *)FUN_180002ef0(param_2);
        ppuVar1 = (undefined1 **)(puVar3 + 2);
        *puVar3 = 0x46;
        if (ppuVar1 != &local_68) {
          puVar3[4] = 0;
          if ((uint)puVar3[5] < (uint)local_60) {
            puVar3[5] = (uint)local_60;
            puVar4 = realloc(*ppuVar1,local_60 & 0xffffffff);
            *ppuVar1 = puVar4;
          }
          puVar4 = *ppuVar1;
          puVar8 = local_68;
          uVar6 = (uint)local_60;
          if ((uint)local_60 != 0) {
            do {
              if (puVar4 != (undefined1 *)0x0) {
                *puVar4 = *puVar8;
                uVar6 = (uint)local_60;
              }
              uVar7 = uVar7 + 1;
              puVar4 = puVar4 + 1;
              puVar8 = puVar8 + 1;
            } while (uVar7 < uVar6);
          }
          puVar3[4] = uVar6;
        }
      }
      local_60 = local_60 & 0xffffffff00000000;
      free(local_68);
      local_98 = local_98 & 0xffffffff00000000;
      free(local_a0);
      local_b0 = local_b0 & 0xffffffff00000000;
      free(local_b8);
      free(local_88);
      goto LAB_18000923b;
    }
    puVar4 = &DAT_1800198fb;
    if (local_50[0] != (undefined1 *)0x0) {
      puVar4 = local_50[0];
    }
    local_a0 = (undefined1 *)0x0;
    local_98 = 0;
    local_90 = 0x3d;
    local_b8 = (undefined1 *)0x0;
    local_b0 = 0;
    local_a8 = 0x3d;
    (**(code **)(*param_3 + 0x90))(param_3,puVar4,param_4,&local_a0,&local_b8);
    if ((uint)local_98 != 0) {
      puVar3 = (undefined4 *)FUN_180002ef0(param_2);
      ppuVar1 = (undefined1 **)(puVar3 + 2);
      *puVar3 = 0x44;
      if (ppuVar1 != &local_a0) {
        puVar3[4] = 0;
        if ((uint)puVar3[5] < (uint)local_98) {
          puVar3[5] = (uint)local_98;
          puVar4 = realloc(*ppuVar1,local_98 & 0xffffffff);
          *ppuVar1 = puVar4;
        }
        puVar4 = *ppuVar1;
        puVar8 = local_a0;
        uVar7 = (uint)local_98;
        uVar5 = uVar6;
        if ((uint)local_98 != 0) {
          do {
            if (puVar4 != (undefined1 *)0x0) {
              *puVar4 = *puVar8;
              uVar7 = (uint)local_98;
            }
            uVar5 = uVar5 + 1;
            puVar4 = puVar4 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar5 < uVar7);
        }
        puVar3[4] = uVar7;
      }
    }
    if ((uint)local_b0 != 0) {
      puVar3 = (undefined4 *)FUN_180002ef0(param_2);
      ppuVar1 = (undefined1 **)(puVar3 + 2);
      *puVar3 = 0x45;
      if (ppuVar1 != &local_b8) {
        puVar3[4] = 0;
        if ((uint)puVar3[5] < (uint)local_b0) {
          puVar3[5] = (uint)local_b0;
          puVar4 = realloc(*ppuVar1,local_b0 & 0xffffffff);
          *ppuVar1 = puVar4;
        }
        puVar4 = *ppuVar1;
        puVar8 = local_b8;
        uVar7 = (uint)local_b0;
        if ((uint)local_b0 != 0) {
          do {
            if (puVar4 != (undefined1 *)0x0) {
              *puVar4 = *puVar8;
              uVar7 = (uint)local_b0;
            }
            uVar6 = uVar6 + 1;
            puVar4 = puVar4 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar6 < uVar7);
        }
        puVar3[4] = uVar7;
      }
    }
    local_b0 = local_b0 & 0xffffffff00000000;
    free(local_b8);
    local_98 = local_98 & 0xffffffff00000000;
    puVar4 = local_a0;
  }
  free(puVar4);
  free(local_88);
LAB_18000923b:
  local_88 = (undefined1 *)0x0;
  free(local_50[0]);
  return CONCAT71((int7)((ulonglong)extraout_RAX_00 >> 8),1);
}



// WARNING: Removing unreachable block (ram,0x000180009310)

ulonglong FUN_180009270(longlong *param_1,longlong param_2)

{
  SFsFile *pSVar1;
  ulonglong extraout_RAX;
  __uint64 _Var2;
  char *pcVar3;
  void *_Dst;
  ulonglong extraout_RAX_00;
  undefined8 extraout_RAX_01;
  void *pvVar4;
  ulonglong _Size;
  char *local_38 [2];
  void *local_28;
  uint local_20;
  uint local_1c;
  char *local_18;
  int local_10;
  
  (**(code **)(*param_1 + 0x10))(param_1,local_38);
  pcVar3 = "";
  if (local_38[0] != (char *)0x0) {
    pcVar3 = local_38[0];
  }
  pSVar1 = fs::open(pcVar3,0,0);
  if (pSVar1 == (SFsFile *)0x0) {
    free(local_38[0]);
    return extraout_RAX & 0xffffffffffffff00;
  }
  _Var2 = fs::length(pSVar1);
  fs::close(pSVar1);
  _Dst = (void *)0x0;
  *(int *)(param_2 + 4) = (int)_Var2;
  pcVar3 = "_fallback";
  pvVar4 = _Dst;
  do {
    local_20 = (uint)pvVar4;
    if (*pcVar3 == '\0') break;
    local_20 = local_20 + 1;
    pvVar4 = (void *)(ulonglong)local_20;
    pcVar3 = pcVar3 + 1;
  } while (local_20 != 0xffffffff);
  _Size = (ulonglong)local_20;
  local_1c = local_20;
  if (local_20 == 0) {
    local_28 = (void *)0x0;
  }
  else {
    _Dst = malloc((ulonglong)(local_20 + 1));
    local_28 = _Dst;
    memcpy(_Dst,"_fallback",_Size);
    *(undefined1 *)(_Size + (longlong)_Dst) = 0;
  }
  FUN_180009690(&local_18,local_38,&local_28);
  free(_Dst);
  if (local_10 != 0) {
    pcVar3 = "";
    if (local_18 != (char *)0x0) {
      pcVar3 = local_18;
    }
    pSVar1 = fs::open(pcVar3,0,0);
    if (pSVar1 == (SFsFile *)0x0) {
      free(local_18);
      free(local_38[0]);
      return extraout_RAX_00 & 0xffffffffffffff00;
    }
    _Var2 = fs::length(pSVar1);
    fs::close(pSVar1);
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + (int)_Var2;
  }
  free(local_18);
  free(local_38[0]);
  return CONCAT71((int7)((ulonglong)extraout_RAX_01 >> 8),1);
}



ulonglong FUN_1800093f0(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined1 param_4)

{
  undefined1 **ppuVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_RAX;
  ulonglong uVar6;
  ulonglong extraout_RAX_00;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *local_48 [2];
  undefined1 *local_38;
  ulonglong local_30;
  undefined4 local_28;
  undefined1 *local_20;
  ulonglong local_18;
  undefined4 local_10;
  
  (**(code **)(*param_1 + 0x10))(param_1,local_48);
  uVar8 = 0;
  puVar5 = &DAT_1800198fb;
  if (local_48[0] != (undefined1 *)0x0) {
    puVar5 = local_48[0];
  }
  local_38 = (undefined1 *)0x0;
  local_30 = 0;
  local_28 = 0x3d;
  local_20 = (undefined1 *)0x0;
  local_18 = 0;
  local_10 = 0x3d;
  (**(code **)(*param_3 + 0xa0))(param_3,puVar5,&local_38,&local_20,param_4);
  if (((uint)local_30 == 0) || ((int)local_18 == 0)) {
    local_18 = local_18 & 0xffffffff00000000;
    free(local_20);
    local_30 = local_30 & 0xffffffff00000000;
    free(local_38);
    free(local_48[0]);
    uVar6 = extraout_RAX_00 & 0xffffffffffffff00;
  }
  else {
    puVar4 = (undefined4 *)FUN_180002ef0(param_2);
    ppuVar1 = (undefined1 **)(puVar4 + 2);
    *puVar4 = 0x42;
    if (ppuVar1 != &local_38) {
      puVar4[4] = 0;
      if ((uint)puVar4[5] < (uint)local_30) {
        puVar4[5] = (uint)local_30;
        puVar5 = realloc(*ppuVar1,local_30 & 0xffffffff);
        *ppuVar1 = puVar5;
      }
      puVar5 = *ppuVar1;
      puVar7 = local_38;
      uVar3 = (uint)local_30;
      if ((uint)local_30 != 0) {
        do {
          if (puVar5 != (undefined1 *)0x0) {
            *puVar5 = *puVar7;
            uVar3 = (uint)local_30;
          }
          uVar8 = uVar8 + 1;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar8 < uVar3);
      }
      puVar4[4] = uVar3;
    }
    puVar4 = malloc(0x38);
    puVar2 = (undefined8 *)(puVar4 + 10);
    *(undefined8 *)(puVar4 + 0xc) = param_2[1];
    *puVar2 = 0;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      *param_2 = puVar2;
    }
    else {
      *(undefined8 *)param_2[1] = puVar2;
    }
    *(int *)(param_2 + 2) = *(int *)(param_2 + 2) + 1;
    param_2[1] = puVar2;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0;
      *(undefined8 *)(puVar4 + 2) = 0;
      *(undefined8 *)(puVar4 + 4) = 0;
      puVar4[6] = 0x3d;
      puVar4[8] = 0;
      *(undefined2 *)(puVar4 + 9) = 0;
    }
    *puVar4 = 0x43;
    FUN_1800098f0((longlong *)(puVar4 + 2),(ulonglong)(uint)puVar4[4] + *(longlong *)(puVar4 + 2),
                  local_20,local_20 + (local_18 & 0xffffffff));
    local_18 = local_18 & 0xffffffff00000000;
    free(local_20);
    local_30 = local_30 & 0xffffffff00000000;
    free(local_38);
    free(local_48[0]);
    uVar6 = CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
  }
  return uVar6;
}



undefined8 FUN_1800095d0(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined8 extraout_RAX;
  undefined1 *puVar2;
  undefined1 *local_48 [2];
  void *local_38;
  ulonglong local_30;
  undefined4 local_28;
  void *local_20;
  ulonglong local_18;
  undefined4 local_10;
  
  (**(code **)(*param_1 + 0x10))(param_1,local_48);
  puVar2 = &DAT_1800198fb;
  if (local_48[0] != (undefined1 *)0x0) {
    puVar2 = local_48[0];
  }
  local_20 = (void *)0x0;
  local_18 = 0;
  local_10 = 0x3d;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = 0x3d;
  (**(code **)(*param_3 + 0xa0))(param_3,puVar2,&local_20,&local_38,0);
  iVar1 = (int)local_30;
  local_30 = local_30 & 0xffffffff00000000;
  *(int *)(param_2 + 4) = iVar1 + (int)local_18;
  free(local_38);
  local_18 = local_18 & 0xffffffff00000000;
  free(local_20);
  free(local_48[0]);
  return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
}



// WARNING: Removing unreachable block (ram,0x0001800097d4)
// WARNING: Removing unreachable block (ram,0x000180009781)
// WARNING: Removing unreachable block (ram,0x00018000978f)
// WARNING: Removing unreachable block (ram,0x000180009882)

undefined8 * FUN_180009690(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  char *_Dst;
  void *_Dst_00;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *local_28;
  uint local_20;
  uint local_1c;
  ulonglong uVar7;
  
  uVar6 = *(uint *)(param_2 + 1);
  if (uVar6 == 0) {
    _Dst = (char *)0x0;
  }
  else {
    local_20 = uVar6;
    local_1c = uVar6;
    _Dst = malloc((ulonglong)(uVar6 + 1));
    local_28 = _Dst;
    memcpy(_Dst,(void *)*param_2,(ulonglong)(uVar6 + 1));
    uVar5 = uVar6;
    if (_Dst != (char *)0x0) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        cVar1 = _Dst[(ulonglong)uVar5 - 1];
        pcVar4 = ".";
        if (cVar1 != '\0') {
          do {
            if (*pcVar4 == '\0') goto LAB_180009776;
            if ((cVar1 != *pcVar4) ||
               ((longlong)(int)uVar6 <= (longlong)(pcVar4 + ((ulonglong)uVar5 - 0x18001c865))))
            break;
            cVar1 = (_Dst + ((ulonglong)uVar5 - 0x18001c864))[(longlong)pcVar4];
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          if (*pcVar4 == '\0') {
LAB_180009776:
            uVar5 = uVar5 - 1;
            uVar7 = (ulonglong)uVar5;
            if (uVar5 != 0xffffffff) {
              if (uVar5 < uVar6) {
                uVar3 = uVar6 + uVar5;
                if (uVar3 < uVar6) {
                  memmove(_Dst + uVar7,_Dst + uVar3,(ulonglong)(uVar6 - uVar3));
                  uVar7 = (ulonglong)(uVar5 + (uVar6 - uVar3));
                }
                local_20 = (uint)uVar7;
                _Dst[uVar7] = '\0';
              }
              FUN_1800035a0((longlong *)&local_28,param_3);
              uVar6 = local_20;
              uVar7 = (ulonglong)local_20;
              uVar3 = local_20 + 5;
              _Dst = local_28;
              uVar5 = local_1c;
              if (local_1c < uVar3) {
                _Dst = malloc((ulonglong)(local_20 + 6));
                pcVar4 = local_28;
                uVar5 = uVar3;
                if (uVar6 == 0) {
                  *_Dst = '\0';
                  free(local_28);
                }
                else {
                  memcpy(_Dst,local_28,(ulonglong)(uVar6 + 1));
                  free(pcVar4);
                }
              }
              builtin_strncpy(_Dst + uVar7,".anm",4);
              pcVar4 = "";
              if (_Dst != (char *)0x0) {
                pcVar4 = _Dst;
              }
              (_Dst + uVar7 + 4)[0] = '2';
              (_Dst + uVar7 + 4)[1] = '\0';
              bVar2 = fs::does_file_exist(pcVar4);
              if (bVar2) {
                *param_1 = _Dst;
                *(uint *)(param_1 + 1) = uVar3;
                *(uint *)((longlong)param_1 + 0xc) = uVar5;
                _Dst = (char *)0x0;
                goto LAB_1800098c5;
              }
            }
            break;
          }
        }
      }
    }
  }
  uVar6 = 0;
  pcVar4 = "";
  do {
    if (*pcVar4 == '\0') break;
    uVar6 = uVar6 + 1;
    pcVar4 = pcVar4 + 1;
  } while (uVar6 != 0xffffffff);
  *(uint *)((longlong)param_1 + 0xc) = uVar6;
  *(uint *)(param_1 + 1) = uVar6;
  if (uVar6 == 0) {
    *param_1 = 0;
  }
  else {
    _Dst_00 = malloc((ulonglong)(uVar6 + 1));
    *param_1 = _Dst_00;
    memcpy(_Dst_00,&DAT_1800198fb,(ulonglong)uVar6);
    *(undefined1 *)((ulonglong)uVar6 + (longlong)_Dst_00) = 0;
  }
LAB_1800098c5:
  free(_Dst);
  return param_1;
}



void FUN_1800098f0(longlong *param_1,longlong param_2,undefined1 *param_3,undefined1 *param_4)

{
  uint uVar1;
  void *_Memory;
  void *pvVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong local_res8;
  longlong local_res10;
  undefined1 *local_res18;
  undefined1 *local_res20;
  
  iVar4 = 0;
  if (param_3 != param_4) {
    iVar4 = (int)param_4 - (int)param_3;
  }
  _Memory = (void *)*param_1;
  uVar1 = iVar4 + (int)param_1[1];
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1) {
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    local_res10 = param_2;
    pvVar2 = realloc(_Memory,(ulonglong)uVar1);
    *param_1 = (longlong)pvVar2;
  }
  local_res10 = (param_2 - (longlong)_Memory) + *param_1;
  puVar5 = local_res18;
  if (local_res18 != local_res20) {
    do {
      plVar3 = FUN_1800030d0(param_1,&local_res8,(int *)&local_res10,puVar5,1);
      puVar5 = puVar5 + 1;
      *plVar3 = *plVar3 + 1;
      local_res10 = *plVar3;
    } while (puVar5 != local_res20);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180009b86)

ulonglong FUN_1800099a0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  ulonglong in_RAX;
  ulonglong extraout_RAX;
  char *pcVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 extraout_RAX_00;
  undefined1 *puVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  size_t _Size;
  undefined1 *puVar14;
  char *_Src;
  longlong lVar15;
  longlong lVar16;
  longlong local_d8;
  void *local_c0;
  ulonglong local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  undefined1 *local_80 [2];
  undefined1 *local_70 [2];
  void *local_60 [2];
  undefined8 local_50 [3];
  
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x10))(param_1,local_80);
    local_a8 = 0x40a00000;
    local_a4 = 0x447a0000;
    puVar7 = &DAT_1800198fb;
    if (local_80[0] != (undefined1 *)0x0) {
      puVar7 = local_80[0];
    }
    local_c0 = (void *)0x0;
    local_a0 = 0xc2c80000;
    local_b8 = 0;
    local_b0 = 0x4b;
    iVar4 = (**(code **)(*param_3 + 0x70))(param_3,puVar7,&local_c0);
    if (iVar4 != 0) {
      (**(code **)(*param_3 + 0x80))(param_3);
      uVar13 = local_b8 & 0xffffffff;
      if ((int)local_b8 != 0) {
        local_d8 = 0;
        local_98 = uVar13;
        do {
          pvVar3 = local_c0;
          uVar12 = *(uint *)((longlong)local_c0 + local_d8 + 8);
          if (uVar12 != 0) {
            local_88 = 0x18;
            local_90 = (ulonglong)uVar12;
            do {
              lVar16 = 3;
              lVar15 = local_88;
              do {
                lVar1 = *(longlong *)((longlong)pvVar3 + local_d8);
                pcVar6 = *(char **)(lVar15 + lVar1);
                if ((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) {
                  pcVar6 = *(char **)(lVar15 + -0x18 + lVar1);
                  _Src = "";
                  if (pcVar6 != (char *)0x0) {
                    _Src = pcVar6;
                  }
                  _Size = 0;
                  pcVar6 = _Src;
                  do {
                    if (*pcVar6 == '\0') break;
                    uVar12 = (int)_Size + 1;
                    _Size = (size_t)uVar12;
                    pcVar6 = pcVar6 + 1;
                  } while (uVar12 != 0xffffffff);
                  if ((int)_Size == 0) {
                    puVar7 = (undefined1 *)0x0;
                    puVar10 = *(undefined1 **)(lVar15 + *(longlong *)((longlong)pvVar3 + local_d8));
                    puVar14 = &DAT_1800198fb;
                    if (puVar10 != (undefined1 *)0x0) {
                      puVar14 = puVar10;
                    }
                    puVar8 = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,local_60,puVar14);
                    if (local_50 != puVar8) {
                      free((void *)0x0);
                      puVar7 = (undefined1 *)*puVar8;
                      *puVar8 = 0;
                      puVar8[1] = 0;
                    }
                    free(local_60[0]);
                    local_60[0] = (void *)0x0;
                  }
                  else {
                    puVar7 = malloc((ulonglong)((int)_Size + 1));
                    memcpy(puVar7,_Src,_Size);
                    puVar7[_Size] = 0;
                  }
                  lVar1 = param_1[7];
                  lVar2 = param_1[6];
                  plVar11 = malloc(0x68);
                  if (plVar11 != (longlong *)0x0) {
                    plVar11[1] = 0;
                    *(undefined4 *)(plVar11 + 2) = 0;
                    *(undefined4 *)(plVar11 + 3) = 0x3d;
                    *(undefined4 *)(plVar11 + 4) = 0x30;
                    plVar11[6] = lVar2;
                    plVar11[5] = (longlong)param_3;
                    plVar11[7] = lVar1;
                    *plVar11 = (longlong)CMaterials_FrontEnd::vftable;
                    plVar11[8] = 0;
                    plVar11[9] = 0;
                    plVar11[10] = 0;
                    plVar11[0xb] = 0;
                    puVar10 = &DAT_1800198fb;
                    if (puVar7 != (undefined1 *)0x0) {
                      puVar10 = puVar7;
                    }
                    fs::mangle_file_name((char *)local_70,(uint)puVar10);
                    puVar10 = &DAT_1800198fb;
                    if (local_70[0] != (undefined1 *)0x0) {
                      puVar10 = local_70[0];
                    }
                    iVar4 = (**(code **)(*plVar11 + 8))(plVar11,puVar10,1);
                    if (iVar4 == 0) {
                      uVar12 = (int)param_2[1] + 1;
                      if (*(uint *)((longlong)param_2 + 0xc) < uVar12) {
                        uVar5 = (*(uint *)((longlong)param_2 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
                        if (uVar5 < uVar12) {
                          uVar5 = uVar12;
                        }
                        *(uint *)((longlong)param_2 + 0xc) = uVar5;
                        pvVar9 = realloc((void *)*param_2,(ulonglong)(uVar5 << 3));
                        *param_2 = (longlong)pvVar9;
                      }
                      puVar8 = (undefined8 *)(*param_2 + (ulonglong)*(uint *)(param_2 + 1) * 8);
                      if (puVar8 != (undefined8 *)0x0) {
                        *puVar8 = plVar11;
                      }
                      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
                    }
                    free(local_70[0]);
                    local_70[0] = (undefined1 *)0x0;
                  }
                  free(puVar7);
                }
                lVar15 = lVar15 + 8;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
              local_88 = local_88 + 0x48;
              local_90 = local_90 - 1;
            } while (local_90 != 0);
            local_90 = 0;
          }
          local_d8 = local_d8 + 0x58;
          local_98 = local_98 - 1;
        } while (local_98 != 0);
        uVar13 = local_b8 & 0xffffffff;
        local_98 = 0;
      }
      uVar12 = (uint)uVar13;
      plVar11 = (longlong *)((ulonglong)(uVar12 - 1) * 0x58 + (longlong)local_c0);
      while (uVar12 != 0) {
        operator_delete__((void *)plVar11[9]);
        plVar11[9] = 0;
        operator_delete__((void *)plVar11[8]);
        plVar11[8] = 0;
        FUN_18000a180(plVar11);
        free((void *)*plVar11);
        plVar11 = plVar11 + -0xb;
        uVar12 = (int)uVar13 - 1;
        uVar13 = (ulonglong)uVar12;
      }
      local_b8 = local_b8 & 0xffffffff00000000;
      free(local_c0);
      free(local_80[0]);
      return CONCAT71((int7)((ulonglong)extraout_RAX_00 >> 8),1);
    }
    plVar11 = (longlong *)((ulonglong)((int)local_b8 - 1) * 0x58 + (longlong)local_c0);
    for (iVar4 = (int)local_b8; iVar4 != 0; iVar4 = iVar4 + -1) {
      operator_delete__((void *)plVar11[9]);
      plVar11[9] = 0;
      operator_delete__((void *)plVar11[8]);
      plVar11[8] = 0;
      FUN_18000a180(plVar11);
      free((void *)*plVar11);
      plVar11 = plVar11 + -0xb;
    }
    local_b8 = local_b8 & 0xffffffff00000000;
    free(local_c0);
    free(local_80[0]);
    in_RAX = extraout_RAX;
  }
  return in_RAX & 0xffffffffffffff00;
}



undefined1
FUN_180009e20(longlong *param_1,longlong param_2,longlong *param_3,undefined4 param_4,
             longlong *param_5)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char *pcVar5;
  void *local_18 [2];
  
  plVar2 = (longlong *)(**(code **)(*param_3 + 0x78))(param_3);
  plVar3 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2);
  if (plVar3 == (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,0);
    (**(code **)(*plVar2 + 0x30))(plVar2);
    uVar1 = 1;
  }
  else {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,local_18);
    pcVar5 = "";
    if ((char *)*plVar4 != (char *)0x0) {
      pcVar5 = (char *)*plVar4;
    }
    if ((char *)*param_5 != pcVar5) {
      FUN_18000a240(param_5,pcVar5);
    }
    free(local_18[0]);
    *(undefined4 *)(param_5 + 1) = param_4;
    param_5[2] = param_2;
    uVar1 = (**(code **)(*plVar3 + 0x50))(plVar3,param_5);
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar3);
    (**(code **)(*plVar2 + 0x30))(plVar2);
  }
  return uVar1;
}



undefined8 FUN_180009f10(longlong *param_1,int *param_2,longlong *param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 extraout_RAX;
  longlong *plVar6;
  char *pcVar7;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  undefined8 extraout_RAX_02;
  ulonglong uVar8;
  char *_Src;
  void *local_88 [2];
  longlong local_78;
  longlong local_70;
  int local_68;
  undefined4 local_60;
  char *local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0x3d;
  local_58 = (char *)0x0;
  local_50 = 0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  local_38 = 0;
  plVar4 = (longlong *)(**(code **)(*param_3 + 0x78))(param_3);
  plVar5 = (longlong *)(**(code **)(*plVar4 + 8))(plVar4);
  if (plVar5 == (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4,0);
    (**(code **)(*plVar4 + 0x30))(plVar4);
  }
  else {
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,local_88);
    _Src = "";
    if ((char *)*plVar6 != (char *)0x0) {
      _Src = (char *)*plVar6;
    }
    pcVar7 = local_58;
    if (local_58 != _Src) {
      operator_delete__(local_58);
      local_58 = (char *)0x0;
      pcVar7 = (char *)0x0;
      if ((_Src != (char *)0x0) && (*_Src != '\0')) {
        uVar8 = 0xffffffffffffffff;
        pcVar7 = _Src;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar3 != '\0');
        pcVar7 = malloc(~uVar8);
        strcpy_s(pcVar7,~uVar8,_Src);
      }
    }
    local_58 = pcVar7;
    free(local_88[0]);
    local_48 = &local_78;
    local_88[0] = (void *)0x0;
    local_50 = param_4;
    cVar3 = (**(code **)(*plVar5 + 0x50))(plVar5,&local_58);
    (**(code **)(*plVar4 + 0x10))(plVar4,plVar5);
    (**(code **)(*plVar4 + 0x30))(plVar4);
    if (cVar3 == '\0') {
      operator_delete__(local_58);
      local_58 = (char *)0x0;
      uVar8 = extraout_RAX_00;
      while (local_68 != 0) {
        pvVar1 = (void *)(local_70 + -0x28);
        if (*(char *)(local_70 + -4) != '\0') {
          *(undefined8 *)(local_70 + -0x20) = 0;
        }
        *(undefined4 *)(local_70 + -0x18) = 0;
        free(*(void **)(local_70 + -0x20));
        if (local_78 == local_70) {
          local_78 = 0;
          local_70 = 0;
        }
        else {
          **(undefined8 **)(local_70 + 8) = 0;
          local_70 = *(longlong *)(local_70 + 8);
        }
        local_68 = local_68 + -1;
        free(pvVar1);
        uVar8 = extraout_RAX_01;
      }
      return uVar8 & 0xffffffffffffff00;
    }
  }
  param_2[5] = param_2[5] + (int)local_40;
  param_2[4] = param_2[4] + local_40._4_4_;
  param_2[3] = param_2[3] + (int)local_38;
  *param_2 = *param_2 + local_38._4_4_;
  operator_delete__(local_58);
  local_58 = (char *)0x0;
  uVar2 = extraout_RAX;
  while (local_68 != 0) {
    pvVar1 = (void *)(local_70 + -0x28);
    if (*(char *)(local_70 + -4) != '\0') {
      *(undefined8 *)(local_70 + -0x20) = 0;
    }
    *(undefined4 *)(local_70 + -0x18) = 0;
    free(*(void **)(local_70 + -0x20));
    if (local_78 == local_70) {
      local_78 = 0;
      local_70 = 0;
    }
    else {
      **(undefined8 **)(local_70 + 8) = 0;
      local_70 = *(longlong *)(local_70 + 8);
    }
    local_68 = local_68 + -1;
    free(pvVar1);
    uVar2 = extraout_RAX_02;
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}



void FUN_18000a180(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_1[1];
  if (iVar5 != 0) {
    puVar3 = (undefined8 *)(*param_1 + 0x18 + (ulonglong)(iVar5 - 1) * 0x48);
    do {
      puVar2 = puVar3 + 3;
      iVar4 = 2;
      do {
        puVar1 = puVar2 + -1;
        puVar2 = puVar2 + -1;
        operator_delete__((void *)*puVar1);
        iVar4 = iVar4 + -1;
        *puVar2 = 0;
      } while (-1 < iVar4);
      iVar4 = 2;
      puVar2 = puVar3;
      do {
        puVar1 = puVar2 + -1;
        puVar2 = puVar2 + -1;
        operator_delete__((void *)*puVar1);
        iVar4 = iVar4 + -1;
        *puVar2 = 0;
      } while (-1 < iVar4);
      puVar3 = puVar3 + -9;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



char * FUN_18000a240(undefined8 *param_1,char *param_2)

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



undefined4 FUN_18000a2d0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



undefined8 * FUN_18000a2e0(undefined8 *param_1,uint param_2)

{
  *param_1 = ICompilationFrontEnd::vftable;
  FUN_18000aa30(param_1 + 1,(undefined8 *)param_1[1]);
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00018000a3f0)

undefined8 FUN_18000a340(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  char *_Dst;
  char *pcVar3;
  void *_Dst_00;
  longlong *plVar4;
  void *pvVar5;
  ulonglong _Size;
  char *_Memory;
  void *local_28;
  uint local_20;
  uint local_1c;
  
  if (*(int *)(param_2 + 1) != 0) {
    uVar2 = *(int *)(param_2 + 1) + 1;
    _Dst = malloc((ulonglong)uVar2);
    memcpy(_Dst,(void *)*param_2,(ulonglong)uVar2);
    _Memory = _Dst;
    if (_Dst != (char *)0x0) goto LAB_18000a3a0;
  }
  _Dst = malloc(1);
  *_Dst = '\0';
  _Memory = _Dst;
LAB_18000a3a0:
  for (; (*_Dst == ' ' || (*_Dst == '\t')); _Dst = _Dst + 1) {
  }
  cVar1 = *_Dst;
  pcVar3 = _Dst;
  while (((cVar1 != '\0' && (*pcVar3 != ' ')) && (*pcVar3 != '\t'))) {
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar3;
  }
  _Dst_00 = (void *)0x0;
  *pcVar3 = '\0';
  pcVar3 = _Dst;
  pvVar5 = _Dst_00;
  do {
    local_20 = (uint)pvVar5;
    if (*pcVar3 == '\0') break;
    local_20 = local_20 + 1;
    pvVar5 = (void *)(ulonglong)local_20;
    pcVar3 = pcVar3 + 1;
  } while (local_20 != 0xffffffff);
  _Size = (ulonglong)local_20;
  local_1c = local_20;
  if (local_20 == 0) {
    local_28 = (void *)0x0;
  }
  else {
    _Dst_00 = malloc((ulonglong)(local_20 + 1));
    local_28 = _Dst_00;
    memcpy(_Dst_00,_Dst,_Size);
    *(undefined1 *)(_Size + (longlong)_Dst_00) = 0;
  }
  plVar4 = FUN_18000a750((longlong *)(param_1 + 8),&local_28);
  FUN_180003710(plVar4,param_3);
  free(_Dst_00);
  free(_Memory);
  return 0;
}



undefined4 FUN_18000a470(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



undefined8 FUN_18000a480(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = FUN_18000a910((longlong *)(param_1 + 8),param_2);
  if (puVar1 == (undefined8 *)0x0) {
    return 4;
  }
  FUN_180003710(param_3,puVar1 + -2);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00018000a4f0)

undefined8 * FUN_18000a4c0(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  void *_Dst;
  uint uVar2;
  
  uVar2 = 0;
  pcVar1 = "";
  do {
    if (*pcVar1 == '\0') break;
    uVar2 = uVar2 + 1;
    pcVar1 = pcVar1 + 1;
  } while (uVar2 != 0xffffffff);
  *(uint *)((longlong)param_2 + 0xc) = uVar2;
  *(uint *)(param_2 + 1) = uVar2;
  if (uVar2 == 0) {
    *param_2 = 0;
    return param_2;
  }
  _Dst = malloc((ulonglong)(uVar2 + 1));
  *param_2 = _Dst;
  memcpy(_Dst,&DAT_1800198fb,(ulonglong)uVar2);
  *(undefined1 *)((ulonglong)uVar2 + (longlong)_Dst) = 0;
  return param_2;
}



undefined8 * FUN_18000a550(undefined8 *param_1,uint param_2)

{
  FUN_18000a580(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



void FUN_18000a580(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  *param_1 = CFlash_FrontEnd::vftable;
  iVar2 = *(int *)(param_1 + 9);
  puVar1 = (undefined8 *)((ulonglong)(iVar2 - 1) * 0x10 + param_1[8]);
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    free((void *)*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + -2;
  }
  *(undefined4 *)(param_1 + 9) = 0;
  free((void *)param_1[8]);
  *param_1 = ICompilationFrontEnd::vftable;
  FUN_18000aa30(param_1 + 1,(undefined8 *)param_1[1]);
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



undefined8 FUN_18000a610(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  void *pvVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  puVar11 = *(undefined8 **)(param_1 + 0x40);
  puVar12 = puVar11 + (ulonglong)*(uint *)(param_1 + 0x48) * 2;
  for (; puVar11 != puVar12; puVar11 = puVar11 + 2) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar3 = *(longlong *)(param_1 + 0x30);
    lVar4 = *(longlong *)(param_1 + 0x28);
    plVar7 = malloc(0x58);
    if (plVar7 != (longlong *)0x0) {
      plVar7[1] = 0;
      *(undefined4 *)(plVar7 + 2) = 0;
      *(undefined4 *)(plVar7 + 3) = 0x3d;
      *plVar7 = (longlong)CTextures_FrontEnd::vftable;
      *(undefined4 *)(plVar7 + 4) = 0x20;
      plVar7[5] = lVar4;
      plVar7[6] = lVar3;
      plVar7[7] = lVar2;
      plVar7[8] = 0;
      plVar7[9] = 0;
      plVar7[10] = 0;
      puVar10 = &DAT_1800198fb;
      if ((undefined1 *)*puVar11 != (undefined1 *)0x0) {
        puVar10 = (undefined1 *)*puVar11;
      }
      iVar5 = (**(code **)(*plVar7 + 8))(plVar7,puVar10,1);
      if (iVar5 == 0) {
        uVar9 = (int)param_2[1] + 1;
        if (*(uint *)((longlong)param_2 + 0xc) < uVar9) {
          uVar6 = (*(uint *)((longlong)param_2 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
          if (uVar6 < uVar9) {
            uVar6 = uVar9;
          }
          *(uint *)((longlong)param_2 + 0xc) = uVar6;
          pvVar8 = realloc((void *)*param_2,(ulonglong)(uVar6 << 3));
          *param_2 = (longlong)pvVar8;
        }
        puVar1 = (undefined8 *)(*param_2 + (ulonglong)*(uint *)(param_2 + 1) * 8);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = plVar7;
        }
        *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      }
    }
  }
  return 0;
}



longlong * FUN_18000a750(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  
  plVar8 = (longlong *)0x0;
  bVar11 = false;
  if ((longlong *)*param_1 != (longlong *)0x0) {
    plVar6 = (longlong *)*param_1;
    do {
      plVar8 = plVar6;
      pbVar10 = &DAT_1800198fb;
      if ((byte *)plVar8[-4] != (byte *)0x0) {
        pbVar10 = (byte *)plVar8[-4];
      }
      pbVar9 = &DAT_1800198fb;
      if ((byte *)*param_2 != (byte *)0x0) {
        pbVar9 = (byte *)*param_2;
      }
      do {
        bVar1 = *pbVar9;
        uVar4 = (uint)bVar1;
        if (bVar1 - 0x41 < 0x1a) {
          uVar4 = bVar1 + 0x20;
        }
        bVar1 = *pbVar10;
        uVar7 = (uint)bVar1;
        pbVar10 = pbVar10 + 1;
        if (bVar1 - 0x41 < 0x1a) {
          uVar7 = bVar1 + 0x20;
        }
      } while ((uVar4 != 0) && (pbVar9 = pbVar9 + 1, uVar4 == uVar7));
      bVar11 = (int)(uVar4 - uVar7) < 0;
      if (bVar11) {
        plVar6 = (longlong *)*plVar8;
      }
      else {
        plVar6 = (longlong *)plVar8[2];
      }
    } while (plVar6 != (longlong *)0x0);
  }
  plVar6 = plVar8;
  if (bVar11 != false) {
    plVar6 = (longlong *)*plVar8;
    if (plVar6 == (longlong *)0x0) {
      plVar2 = plVar8;
      plVar5 = (longlong *)plVar8[1];
      if ((longlong *)plVar8[1] == (longlong *)0x0) goto LAB_18000a89a;
      do {
        plVar6 = plVar5;
        if (plVar2 != (longlong *)*plVar5) break;
        plVar6 = (longlong *)plVar5[1];
        plVar2 = plVar5;
        plVar5 = plVar6;
      } while (plVar6 != (longlong *)0x0);
    }
    else {
      for (plVar2 = (longlong *)plVar6[2]; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[2]
          ) {
        plVar6 = plVar2;
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    pbVar10 = &DAT_1800198fb;
    if ((byte *)*param_2 != (byte *)0x0) {
      pbVar10 = (byte *)*param_2;
    }
    pbVar9 = &DAT_1800198fb;
    if ((byte *)plVar6[-4] != (byte *)0x0) {
      pbVar9 = (byte *)plVar6[-4];
    }
    do {
      bVar1 = *pbVar9;
      uVar4 = (uint)bVar1;
      if (bVar1 - 0x41 < 0x1a) {
        uVar4 = bVar1 + 0x20;
      }
      bVar1 = *pbVar10;
      uVar7 = (uint)bVar1;
      pbVar10 = pbVar10 + 1;
      if (bVar1 - 0x41 < 0x1a) {
        uVar7 = bVar1 + 0x20;
      }
    } while ((uVar4 != 0) && (pbVar9 = pbVar9 + 1, uVar4 == uVar7));
    if (-1 < (int)(uVar4 - uVar7)) {
      return plVar6 + -2;
    }
  }
LAB_18000a89a:
  puVar3 = malloc(0x40);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_180003970(puVar3,param_2);
  }
  if (puVar3 + 2 != (undefined8 *)0x0) {
    puVar3[2] = 0;
    puVar3[3] = 0;
  }
  FUN_180003f70(param_1,puVar3 + 4,bVar11,plVar8);
  return puVar3 + 2;
}



undefined8 * FUN_18000a910(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  puVar2 = FUN_18000a9a0(param_1,param_2);
  if (puVar2 != (undefined8 *)0x0) {
    pbVar6 = &DAT_1800198fb;
    if ((byte *)puVar2[-4] != (byte *)0x0) {
      pbVar6 = (byte *)puVar2[-4];
    }
    pbVar5 = &DAT_1800198fb;
    if ((byte *)*param_2 != (byte *)0x0) {
      pbVar5 = (byte *)*param_2;
    }
    do {
      bVar1 = *pbVar5;
      uVar3 = (uint)bVar1;
      if (bVar1 - 0x41 < 0x1a) {
        uVar3 = bVar1 + 0x20;
      }
      bVar1 = *pbVar6;
      uVar4 = (uint)bVar1;
      pbVar6 = pbVar6 + 1;
      if (bVar1 - 0x41 < 0x1a) {
        uVar4 = bVar1 + 0x20;
      }
    } while ((uVar3 != 0) && (pbVar5 = pbVar5 + 1, uVar3 == uVar4));
    if (-1 < (int)(uVar3 - uVar4)) {
      return puVar2;
    }
  }
  return (undefined8 *)0x0;
}



undefined8 * FUN_18000a9a0(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)0x0;
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*param_1;
    do {
      pbVar5 = &DAT_1800198fb;
      if ((byte *)*param_2 != (byte *)0x0) {
        pbVar5 = (byte *)*param_2;
      }
      pbVar4 = &DAT_1800198fb;
      if ((byte *)puVar6[-4] != (byte *)0x0) {
        pbVar4 = (byte *)puVar6[-4];
      }
      do {
        bVar1 = *pbVar4;
        uVar2 = (uint)bVar1;
        pbVar4 = pbVar4 + 1;
        if (bVar1 - 0x41 < 0x1a) {
          uVar2 = bVar1 + 0x20;
        }
        bVar1 = *pbVar5;
        uVar3 = (uint)bVar1;
        pbVar5 = pbVar5 + 1;
        if (bVar1 - 0x41 < 0x1a) {
          uVar3 = bVar1 + 0x20;
        }
      } while ((uVar2 != 0) && (uVar2 == uVar3));
      if ((int)(uVar2 - uVar3) < 0) {
        puVar7 = (undefined8 *)puVar6[2];
      }
      else {
        puVar7 = (undefined8 *)*puVar6;
        puVar8 = puVar6;
      }
      puVar6 = puVar7;
    } while (puVar7 != (undefined8 *)0x0);
  }
  return puVar8;
}



void FUN_18000aa30(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  while (param_2 != (undefined8 *)0x0) {
    FUN_18000aa30(param_1,(undefined8 *)param_2[2]);
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



// WARNING: Removing unreachable block (ram,0x00018000aba9)
// WARNING: Removing unreachable block (ram,0x00018000ab96)
// WARNING: Removing unreachable block (ram,0x00018000ac7e)
// WARNING: Removing unreachable block (ram,0x00018000ac90)
// WARNING: Removing unreachable block (ram,0x00018000abc3)

void FUN_18000aab0(longlong *param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  undefined8 *_Memory;
  uint uVar12;
  int local_res10;
  uint local_68 [4];
  undefined8 *local_58;
  ulonglong local_50;
  undefined4 local_48;
  
  puVar4 = &DAT_1800198fb;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)*param_1;
  }
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_48 = 0x3d;
  FUN_180008980((longlong *)&local_58,(longlong)puVar4,*(uint *)(param_1 + 1),'\n');
  _Memory = local_58;
  uVar12 = (uint)local_50;
  if (local_58 != local_58 + (local_50 & 0xffffffff) * 2) {
    iVar11 = (uint)local_50 << 4;
    puVar7 = (uint *)(local_58 + 1);
    local_res10 = iVar11;
    do {
      uVar5 = *puVar7;
      uVar9 = 0;
      if (0 < (int)uVar5) {
        puVar1 = puVar7 + -2;
        do {
          cVar2 = *(char *)(uVar9 + *(longlong *)(puVar7 + -2));
          if ((((cVar2 != ' ') && (cVar2 != '\t')) && (cVar2 != '\n')) && (cVar2 != '\r')) break;
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
        } while ((int)uVar8 < (int)uVar5);
        uVar8 = (uint)uVar9;
        _Memory = local_58;
        if (0 < (int)uVar8) {
          puVar4 = (undefined1 *)0x0;
          uVar10 = 0;
          if (uVar8 < uVar5) {
            if (uVar5 < uVar8 + uVar5) {
              uVar5 = uVar5 - uVar8;
            }
            if (uVar5 != 0) {
              puVar4 = malloc((ulonglong)(uVar5 + 1));
              *puVar4 = 0;
              free((void *)0x0);
              memcpy(puVar4,(void *)(uVar9 + *(longlong *)puVar1),(ulonglong)uVar5);
              puVar4[uVar5] = 0;
              uVar10 = uVar5;
            }
          }
          free((void *)0x0);
          if (puVar1 != local_68) {
            free(*(void **)puVar1);
            *(undefined1 **)puVar1 = puVar4;
            puVar4 = (undefined1 *)0x0;
            *puVar7 = uVar10;
            puVar7[1] = uVar10;
          }
          free(puVar4);
          _Memory = local_58;
          iVar11 = local_res10;
        }
      }
      uVar5 = *puVar7;
      uVar8 = uVar5;
      if (0 < (int)uVar5) {
        do {
          cVar2 = *(char *)((ulonglong)(uVar8 - 1) + *(longlong *)(puVar7 + -2));
          if (((cVar2 != ' ') && (cVar2 != '\t')) && ((cVar2 != '\n' && (cVar2 != '\r')))) break;
          uVar8 = uVar8 - 1;
        } while (0 < (int)uVar8);
      }
      if (uVar5 != uVar8) {
        puVar4 = (undefined1 *)0x0;
        uVar10 = 0;
        if (uVar5 != 0) {
          if (uVar8 == 0xffffffff) {
            uVar8 = uVar5;
          }
          if (uVar5 < uVar8) {
            uVar8 = uVar5;
          }
          if (uVar8 != 0) {
            puVar4 = malloc((ulonglong)(uVar8 + 1));
            *puVar4 = 0;
            free((void *)0x0);
            memcpy(puVar4,*(void **)(puVar7 + -2),(ulonglong)uVar8);
            puVar4[uVar8] = 0;
            uVar10 = uVar8;
          }
        }
        free((void *)0x0);
        puVar1 = puVar7 + -2;
        if (puVar1 != local_68) {
          free(*(void **)puVar1);
          *(undefined1 **)puVar1 = puVar4;
          puVar4 = (undefined1 *)0x0;
          *puVar7 = uVar10;
          puVar7[1] = uVar10;
        }
        free(puVar4);
      }
      if (*puVar7 == 0) {
        free(*(void **)(puVar7 + -2));
        puVar7[-2] = 0;
        puVar7[-1] = 0;
        iVar3 = ((int)local_58 - (int)(puVar7 + 2)) + iVar11;
        if (0 < iVar3) {
          memmove(puVar7 + -2,puVar7 + 2,(longlong)iVar3);
        }
        uVar12 = uVar12 - 1;
        iVar11 = iVar11 + -0x10;
        local_res10 = iVar11;
      }
      else {
        puVar7 = puVar7 + 4;
      }
    } while (puVar7 + -2 != (uint *)(_Memory + (ulonglong)uVar12 * 2));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    *(undefined1 *)*param_1 = 0;
  }
  for (puVar6 = _Memory; puVar6 != _Memory + (ulonglong)uVar12 * 2; puVar6 = puVar6 + 2) {
    FUN_1800035a0(param_1,puVar6);
    FUN_18000b3b0(param_1);
  }
  puVar6 = _Memory + (ulonglong)(uVar12 - 1) * 2;
  for (; uVar12 != 0; uVar12 = uVar12 - 1) {
    free((void *)*puVar6);
    *puVar6 = 0;
    puVar6 = puVar6 + -2;
  }
                    // WARNING: Could not recover jumptable at 0x00018000adfb. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}



ulonglong FUN_18000ae10(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  ulonglong uVar5;
  longlong lVar6;
  void *pvVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 local_res8 [2];
  char *local_28;
  undefined8 local_20;
  
  pcVar10 = "";
  pcVar9 = "";
  if ((char *)*param_1 != (char *)0x0) {
    pcVar9 = (char *)*param_1;
  }
  bVar2 = fs::exists(pcVar9);
  pcVar9 = (char *)*param_1;
  if (bVar2) {
    local_28 = (char *)0x0;
    pcVar4 = "";
    if (pcVar9 != (char *)0x0) {
      pcVar4 = pcVar9;
    }
    local_20 = 0;
    bVar2 = fs::load_text_file((string_base<char> *)&local_28,pcVar4);
    if (bVar2) {
      FUN_18000aab0((longlong *)&local_28);
      local_res8[0] = 0;
      pcVar9 = "";
      if (local_28 != (char *)0x0) {
        pcVar9 = local_28;
      }
      pcVar4 = strstr(pcVar9,"EmiterDef");
      uVar11 = 0;
      if (pcVar4 == (char *)0x0) {
        uVar5 = FUN_18000b0e0(local_res8,pcVar9);
        uVar11 = local_res8[0];
        if ((int)uVar5 != 0) {
          if ((char *)*param_1 != (char *)0x0) {
            pcVar10 = (char *)*param_1;
          }
          FUN_1800018d0(param_3,
                        "FxProcessingTools::ProcessFromPath: fx type not recognized in file \'%s\'!\n"
                        ,pcVar10,param_4);
          free(local_28);
          return uVar5 & 0xffffffff;
        }
      }
      lVar6 = FUN_1800045b0(param_2,0x50);
      plVar1 = (longlong *)(lVar6 + 8);
      uVar8 = *(int *)(lVar6 + 0x10) + 1;
      if (*(uint *)(lVar6 + 0x14) < uVar8) {
        uVar3 = (*(uint *)(lVar6 + 0x14) * 10 >> 3) + 0x10 & 0xfffffff0;
        if (uVar3 < uVar8) {
          uVar3 = uVar8;
        }
        *(uint *)(lVar6 + 0x14) = uVar3;
        pvVar7 = realloc((void *)*plVar1,(ulonglong)uVar3);
        *plVar1 = (longlong)pvVar7;
      }
      *(char *)((ulonglong)*(uint *)(lVar6 + 0x10) + *plVar1) = (char)uVar11;
      *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + 1;
      if (local_28 != (char *)0x0) {
        pcVar10 = local_28;
      }
      FUN_180002e70(plVar1,pcVar10,(int)local_20 + 1);
      free(local_28);
      uVar5 = 0;
    }
    else {
      if ((char *)*param_1 != (char *)0x0) {
        pcVar10 = (char *)*param_1;
      }
      FUN_1800018d0(param_3,
                    "FxProcessingTools::ProcessFromPath: fx file \'%s\' could not be loaded as a text file!\n"
                    ,pcVar10,param_4);
      free(local_28);
      uVar5 = 1;
    }
    return uVar5;
  }
  if (pcVar9 != (char *)0x0) {
    pcVar10 = pcVar9;
  }
  FUN_1800018d0(param_3,"FxProcessingTools::ProcessFromPath: fx file \'%s\' does not exist!\n",
                pcVar10,param_4);
  return 1;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe

ulonglong FUN_18000afe0(char *param_1,undefined4 *param_2)

{
  char *_Str;
  longlong lVar1;
  bool bVar2;
  __uint64 _Var3;
  char *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 auStack_40 [5];
  code *local_18;
  undefined8 local_10;
  
  uVar5 = 0;
  *param_2 = 0;
  local_18 = _vftable__exref;
  local_10 = 0;
  auStack_40[0] = 0x18000b024;
  bVar2 = fs::file::open((file *)&local_18,param_1,0,0);
  if (bVar2) {
    auStack_40[0] = 0x18000b040;
    _Var3 = fs::file::length((file *)&local_18);
    if (_Var3 == 0) {
      auStack_40[0] = 0x18000b052;
      fs::file::~file((file *)&local_18);
      uVar5 = 2;
    }
    else {
      uVar6 = _Var3 + 0x10;
      if (uVar6 <= _Var3 + 1) {
        uVar6 = 0xffffffffffffff0;
      }
      auStack_40[0] = 0x18000b079;
      lVar1 = -(uVar6 & 0xfffffffffffffff0);
      _Str = (char *)((longlong)&local_18 + lVar1);
      *(undefined8 *)((longlong)auStack_40 + lVar1) = 0x18000b091;
      fs::file::read((file *)&local_18,_Str,_Var3);
      _Str[_Var3] = '\0';
      *param_2 = 0;
      *(undefined8 *)((longlong)auStack_40 + lVar1) = 0x18000b0a7;
      pcVar4 = strstr(_Str,"EmiterDef");
      if (pcVar4 == (char *)0x0) {
        *(undefined8 *)((longlong)auStack_40 + lVar1) = 0x18000b0bb;
        uVar5 = FUN_18000b0e0(param_2,_Str);
        uVar5 = uVar5 & 0xffffffff;
      }
      else {
        *param_2 = 0;
      }
      *(undefined8 *)((longlong)auStack_40 + lVar1) = 0x18000b0c7;
      fs::file::~file((file *)&local_18);
    }
  }
  else {
    auStack_40[0] = 0x18000b032;
    fs::file::~file((file *)&local_18);
    uVar5 = 1;
  }
  return uVar5;
}



undefined8 FUN_18000b0e0(undefined4 *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = strstr(param_2,"StandardDef");
  if (pcVar1 != (char *)0x0) {
    *param_1 = 1;
    return 0;
  }
  pcVar1 = strstr(param_2,"ParticleDef");
  if (pcVar1 != (char *)0x0) {
    *param_1 = 2;
    return 0;
  }
  pcVar1 = strstr(param_2,"TraceDef");
  if (pcVar1 != (char *)0x0) {
    *param_1 = 3;
    return 0;
  }
  pcVar1 = strstr(param_2,"FlareDef");
  if (pcVar1 != (char *)0x0) {
    *param_1 = 4;
    return 0;
  }
  pcVar1 = strstr(param_2,"SequenceDef");
  if (pcVar1 != (char *)0x0) {
    *param_1 = 6;
    return 0;
  }
  pcVar1 = strstr(param_2,"FloatingTextDef");
  if (pcVar1 != (char *)0x0) {
    *param_1 = 7;
    return 0;
  }
  pcVar1 = strstr(param_2,"SoundDef");
  if (pcVar1 != (char *)0x0) {
    *param_1 = 8;
    return 0;
  }
  pcVar1 = strstr(param_2,"LightDef");
  if (pcVar1 != (char *)0x0) {
    *param_1 = 9;
    return 0;
  }
  pcVar1 = strstr(param_2,"BlurTrailDef");
  if (pcVar1 != (char *)0x0) {
    *param_1 = 10;
    return 0;
  }
  pcVar1 = strstr(param_2,"CameraShakeDef");
  if (pcVar1 != (char *)0x0) {
    *param_1 = 0xb;
    return 0;
  }
  pcVar1 = strstr(param_2,"VarListDef");
  if (pcVar1 != (char *)0x0) {
    *param_1 = 0xc;
    return 0;
  }
  return 2;
}



void FUN_18000b2c0(undefined8 *param_1,undefined4 param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  void *pvVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  for (puVar2 = (undefined8 *)*param_1; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2)
  {
    plVar5 = FUN_18000d870(param_2,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30),
                           *(undefined8 *)(param_3 + 0x38));
    if (plVar5 != (longlong *)0x0) {
      puVar8 = &DAT_1800198fb;
      if ((undefined1 *)puVar2[-2] != (undefined1 *)0x0) {
        puVar8 = (undefined1 *)puVar2[-2];
      }
      iVar3 = (**(code **)(*plVar5 + 8))(plVar5,puVar8,1);
      if (iVar3 == 0) {
        uVar7 = (int)param_4[1] + 1;
        if (*(uint *)((longlong)param_4 + 0xc) < uVar7) {
          uVar4 = (*(uint *)((longlong)param_4 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
          if (uVar4 < uVar7) {
            uVar4 = uVar7;
          }
          *(uint *)((longlong)param_4 + 0xc) = uVar4;
          pvVar6 = realloc((void *)*param_4,(ulonglong)(uVar4 << 3));
          *param_4 = (longlong)pvVar6;
        }
        puVar1 = (undefined8 *)(*param_4 + (ulonglong)*(uint *)(param_4 + 1) * 8);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = plVar5;
        }
        *(int *)(param_4 + 1) = (int)param_4[1] + 1;
      }
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018000b3d8)

void FUN_18000b3b0(longlong *param_1)

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
  *(undefined1 *)((ulonglong)*(uint *)(param_1 + 1) + *param_1) = 10;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *(undefined1 *)((ulonglong)*(uint *)(param_1 + 1) + *param_1) = 0;
  return;
}



// WARNING: Removing unreachable block (ram,0x00018000b496)
// WARNING: Removing unreachable block (ram,0x00018000b56c)

void FUN_18000b450(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  void *_Dst;
  void *pvVar4;
  char *pcVar5;
  uint uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  char *local_38;
  undefined8 local_30;
  void *local_28;
  uint local_20;
  uint local_1c;
  
  pvVar8 = (void *)0x0;
  pcVar3 = "skins";
  local_38 = (char *)0x0;
  local_30 = 0;
  pvVar4 = pvVar8;
  do {
    uVar6 = (uint)pvVar4;
    if (*pcVar3 == '\0') break;
    uVar6 = uVar6 + 1;
    pvVar4 = (void *)(ulonglong)uVar6;
    pcVar3 = pcVar3 + 1;
  } while (uVar6 != 0xffffffff);
  local_20 = uVar6;
  local_1c = uVar6;
  if (uVar6 == 0) {
    local_28 = (void *)0x0;
  }
  else {
    local_28 = malloc((ulonglong)(uVar6 + 1));
    memcpy(local_28,"skins",(ulonglong)uVar6);
    *(undefined1 *)((ulonglong)local_20 + (longlong)local_28) = 0;
  }
  iVar1 = (**(code **)(*param_1 + 0x38))(param_1,&local_28,&local_38);
  free(local_28);
  if (iVar1 == 0) {
    if (local_38 == (char *)0x0) {
      local_38 = malloc(1);
      *local_38 = '\0';
    }
    pcVar3 = strtok(local_38,",");
    while (pcVar5 = pcVar3, pvVar4 = pvVar8, pcVar3 != (char *)0x0) {
      do {
        if (*pcVar5 == '\0') break;
        uVar6 = (int)pvVar4 + 1;
        pvVar4 = (void *)(ulonglong)uVar6;
        pcVar5 = pcVar5 + 1;
      } while (uVar6 != 0xffffffff);
      iVar1 = (int)pvVar4;
      _Dst = pvVar8;
      if (iVar1 != 0) {
        _Dst = malloc((ulonglong)(iVar1 + 1));
        memcpy(_Dst,pcVar3,(size_t)pvVar4);
        *(undefined1 *)((longlong)pvVar4 + (longlong)_Dst) = 0;
      }
      uVar6 = (int)param_2[1] + 1;
      if (*(uint *)((longlong)param_2 + 0xc) < uVar6) {
        uVar2 = (*(uint *)((longlong)param_2 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
        if (uVar2 < uVar6) {
          uVar2 = uVar6;
        }
        *(uint *)((longlong)param_2 + 0xc) = uVar2;
        pvVar4 = realloc((void *)*param_2,(ulonglong)(uVar2 << 4));
        *param_2 = (longlong)pvVar4;
      }
      puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 1) * 0x10 + *param_2);
      if (puVar7 != (undefined8 *)0x0) {
        if (iVar1 == 0) {
          *puVar7 = 0;
          puVar7[1] = 0;
        }
        else {
          *(int *)(puVar7 + 1) = iVar1;
          *(int *)((longlong)puVar7 + 0xc) = iVar1;
          pvVar4 = malloc((ulonglong)(iVar1 + 1U));
          *puVar7 = pvVar4;
          memcpy(pvVar4,_Dst,(ulonglong)(iVar1 + 1U));
        }
      }
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      free(_Dst);
      pcVar3 = strtok((char *)0x0,",");
    }
    free(local_38);
  }
  else {
    free(local_38);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018000c0f0)
// WARNING: Removing unreachable block (ram,0x00018000bfc0)
// WARNING: Removing unreachable block (ram,0x00018000bee0)
// WARNING: Removing unreachable block (ram,0x00018000bdb0)
// WARNING: Removing unreachable block (ram,0x00018000bca2)
// WARNING: Removing unreachable block (ram,0x00018000bba0)
// WARNING: Removing unreachable block (ram,0x00018000ba92)
// WARNING: Removing unreachable block (ram,0x00018000b990)
// WARNING: Removing unreachable block (ram,0x00018000b882)
// WARNING: Removing unreachable block (ram,0x00018000b783)
// WARNING: Removing unreachable block (ram,0x00018000b7e1)
// WARNING: Removing unreachable block (ram,0x00018000b8e0)
// WARNING: Removing unreachable block (ram,0x00018000b9e8)
// WARNING: Removing unreachable block (ram,0x00018000baf0)
// WARNING: Removing unreachable block (ram,0x00018000bbf8)
// WARNING: Removing unreachable block (ram,0x00018000bd00)
// WARNING: Removing unreachable block (ram,0x00018000be08)
// WARNING: Removing unreachable block (ram,0x00018000bf40)
// WARNING: Removing unreachable block (ram,0x00018000c018)
// WARNING: Removing unreachable block (ram,0x00018000c150)

ulonglong FUN_18000b660(longlong *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  ulonglong *puVar7;
  ulonglong extraout_RAX;
  undefined4 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  void *pvVar12;
  void *pvVar13;
  longlong *plVar14;
  ulonglong *puVar15;
  undefined8 extraout_RAX_00;
  uint uVar16;
  undefined1 *puVar17;
  char *****pppppcVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined8 *puVar21;
  uint *puVar22;
  ulonglong uVar23;
  char **ppcVar24;
  byte bVar25;
  uint *puVar26;
  uint local_res10 [2];
  longlong *local_res18;
  char *local_238;
  uint local_230;
  uint local_22c;
  void *local_228;
  uint local_220;
  uint local_21c;
  char *local_218;
  uint local_210;
  uint local_20c;
  char *local_208;
  uint local_200;
  uint local_1fc;
  char *local_1f8;
  uint local_1f0;
  uint local_1ec;
  char *local_1e8;
  uint local_1e0;
  uint local_1dc;
  char *local_1d8;
  uint local_1d0;
  uint local_1cc;
  char *local_1c8;
  uint local_1c0;
  uint local_1bc;
  char *local_1b8;
  uint local_1b0;
  uint local_1ac;
  char *local_1a8;
  uint local_1a0;
  uint local_19c;
  char *local_198;
  void *local_190;
  ulonglong local_188;
  undefined4 local_180;
  uint local_178;
  undefined4 local_174;
  undefined4 local_170;
  longlong local_168;
  uint local_160;
  longlong *local_158;
  int local_150;
  undefined4 *local_148;
  ulonglong local_140;
  undefined4 local_138;
  undefined2 local_130;
  undefined2 local_12e;
  undefined1 local_12c;
  undefined2 local_12b;
  undefined1 local_129;
  char *local_128;
  uint local_120;
  uint local_11c;
  void *local_118 [2];
  void *local_108 [2];
  uint local_f8;
  uint local_f4 [8];
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  int local_b8;
  undefined8 local_b4;
  int local_ac;
  undefined1 local_a8;
  char *local_98 [2];
  char ****local_88 [4];
  char ****local_68 [4];
  byte local_48;
  
  uVar19 = 0;
  plVar14 = *(longlong **)(*param_1 + 0x30);
  local_174 = (undefined4)param_1[3];
  local_res10[0] = 0;
  local_170 = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_168 = param_1[2];
  local_130 = 0x500;
  local_198 = (char *)0x0;
  local_190 = (void *)0x0;
  local_188 = 0;
  local_180 = 0x3d;
  local_12e = 0x2d0;
  uVar4 = 0;
  local_178 = 0;
  local_160 = 8;
  local_150 = 0;
  local_148 = (undefined4 *)0x0;
  local_140 = 0;
  local_138 = 0x3d;
  local_129 = 0;
  local_12c = 0x2d;
  local_res18 = plVar14;
  local_158 = plVar14;
  FUN_180008080((longlong *)&local_148,local_res10);
  *local_148 = 0x40b00000;
  local_148[1] = 0x41080000;
  local_12b = 0xc14;
  (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,local_98);
  local_198 = "";
  if (local_98[0] != (char *)0x0) {
    local_198 = local_98[0];
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    FUN_18000b450((longlong *)*param_1,(longlong *)&local_190);
  }
  pcVar6 = "0";
  uVar10 = uVar19;
  do {
    uVar20 = (uint)uVar10;
    if (*pcVar6 == '\0') break;
    uVar20 = uVar20 + 1;
    uVar10 = (ulonglong)uVar20;
    pcVar6 = pcVar6 + 1;
  } while (uVar20 != 0xffffffff);
  local_210 = uVar20;
  local_20c = uVar20;
  if (uVar20 == 0) {
    local_218 = (char *)0x0;
  }
  else {
    local_218 = malloc((ulonglong)(uVar20 + 1));
    memcpy(local_218,&DAT_18001c86c,(ulonglong)uVar20);
    local_218[local_210] = '\0';
  }
  pcVar6 = "skip_gct";
  uVar10 = uVar19;
  do {
    uVar20 = (uint)uVar10;
    if (*pcVar6 == '\0') break;
    uVar20 = uVar20 + 1;
    uVar10 = (ulonglong)uVar20;
    pcVar6 = pcVar6 + 1;
  } while (uVar20 != 0xffffffff);
  local_230 = uVar20;
  local_22c = uVar20;
  if (uVar20 == 0) {
    local_238 = (char *)0x0;
  }
  else {
    local_238 = malloc((ulonglong)(uVar20 + 1));
    memcpy(local_238,"skip_gct",(ulonglong)uVar20);
    local_238[local_230] = '\0';
  }
  iVar2 = (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,&local_238,&local_218);
  free(local_238);
  if (iVar2 == 0) {
    pcVar6 = "";
    if (local_218 != (char *)0x0) {
      pcVar6 = local_218;
    }
    local_150 = atoi(pcVar6);
  }
  pcVar6 = "0";
  uVar10 = uVar19;
  do {
    uVar20 = (uint)uVar10;
    if (*pcVar6 == '\0') break;
    uVar20 = uVar20 + 1;
    uVar10 = (ulonglong)uVar20;
    pcVar6 = pcVar6 + 1;
  } while (uVar20 != 0xffffffff);
  local_200 = uVar20;
  local_1fc = uVar20;
  if (uVar20 == 0) {
    local_208 = (char *)0x0;
  }
  else {
    local_208 = malloc((ulonglong)(uVar20 + 1));
    memcpy(local_208,&DAT_18001c86c,(ulonglong)uVar20);
    local_208[local_200] = '\0';
  }
  pcVar6 = "force_all_skins";
  uVar10 = uVar19;
  do {
    uVar20 = (uint)uVar10;
    if (*pcVar6 == '\0') break;
    uVar20 = uVar20 + 1;
    uVar10 = (ulonglong)uVar20;
    pcVar6 = pcVar6 + 1;
  } while (uVar20 != 0xffffffff);
  local_230 = uVar20;
  local_22c = uVar20;
  if (uVar20 == 0) {
    local_238 = (char *)0x0;
  }
  else {
    local_238 = malloc((ulonglong)(uVar20 + 1));
    memcpy(local_238,"force_all_skins",(ulonglong)uVar20);
    local_238[local_230] = '\0';
  }
  ppcVar24 = &local_208;
  (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,&local_238);
  free(local_238);
  pcVar6 = "";
  if (local_208 != (char *)0x0) {
    pcVar6 = local_208;
  }
  iVar2 = atoi(pcVar6);
  if (iVar2 == 1) {
    local_178 = local_178 | 2;
    FUN_1800018d0(plVar14,"   --> option: Exporting all mesh skins.\n",ppcVar24,param_4);
  }
  pcVar6 = "1";
  uVar10 = uVar19;
  do {
    uVar20 = (uint)uVar10;
    if (*pcVar6 == '\0') break;
    uVar20 = uVar20 + 1;
    uVar10 = (ulonglong)uVar20;
    pcVar6 = pcVar6 + 1;
  } while (uVar20 != 0xffffffff);
  local_1c0 = uVar20;
  local_1bc = uVar20;
  if (uVar20 == 0) {
    local_1c8 = (char *)0x0;
  }
  else {
    local_1c8 = malloc((ulonglong)(uVar20 + 1));
    memcpy(local_1c8,&DAT_1800195b4,(ulonglong)uVar20);
    local_1c8[local_1c0] = '\0';
  }
  pcVar6 = "pos_compression";
  uVar10 = uVar19;
  do {
    uVar20 = (uint)uVar10;
    if (*pcVar6 == '\0') break;
    uVar20 = uVar20 + 1;
    uVar10 = (ulonglong)uVar20;
    pcVar6 = pcVar6 + 1;
  } while (uVar20 != 0xffffffff);
  local_230 = uVar20;
  local_22c = uVar20;
  if (uVar20 == 0) {
    local_238 = (char *)0x0;
  }
  else {
    local_238 = malloc((ulonglong)(uVar20 + 1));
    memcpy(local_238,"pos_compression",(ulonglong)uVar20);
    local_238[local_230] = '\0';
  }
  ppcVar24 = &local_1c8;
  (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,&local_238);
  free(local_238);
  pcVar6 = "";
  if (local_1c8 != (char *)0x0) {
    pcVar6 = local_1c8;
  }
  iVar2 = atoi(pcVar6);
  if (iVar2 == 0) {
    local_178 = local_178 | 8;
    FUN_1800018d0(plVar14,"   --> option: Position compression disabled\n",ppcVar24,param_4);
  }
  pcVar6 = "1";
  uVar10 = uVar19;
  do {
    uVar20 = (uint)uVar10;
    if (*pcVar6 == '\0') break;
    uVar20 = uVar20 + 1;
    uVar10 = (ulonglong)uVar20;
    pcVar6 = pcVar6 + 1;
  } while (uVar20 != 0xffffffff);
  local_1e0 = uVar20;
  local_1dc = uVar20;
  if (uVar20 == 0) {
    local_1e8 = (char *)0x0;
  }
  else {
    local_1e8 = malloc((ulonglong)(uVar20 + 1));
    memcpy(local_1e8,&DAT_1800195b4,(ulonglong)uVar20);
    local_1e8[local_1e0] = '\0';
  }
  pcVar6 = "uv_compression";
  uVar10 = uVar19;
  do {
    uVar20 = (uint)uVar10;
    if (*pcVar6 == '\0') break;
    uVar20 = uVar20 + 1;
    uVar10 = (ulonglong)uVar20;
    pcVar6 = pcVar6 + 1;
  } while (uVar20 != 0xffffffff);
  local_230 = uVar20;
  local_22c = uVar20;
  if (uVar20 == 0) {
    local_238 = (char *)0x0;
  }
  else {
    local_238 = malloc((ulonglong)(uVar20 + 1));
    memcpy(local_238,"uv_compression",(ulonglong)uVar20);
    local_238[local_230] = '\0';
  }
  ppcVar24 = &local_1e8;
  (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,&local_238);
  free(local_238);
  pcVar6 = "";
  if (local_1e8 != (char *)0x0) {
    pcVar6 = local_1e8;
  }
  iVar2 = atoi(pcVar6);
  if (iVar2 == 0) {
    local_178 = local_178 | 0x800;
    FUN_1800018d0(plVar14,"   --> option: Uv compression disabled\n",ppcVar24,param_4);
  }
  pcVar6 = "1";
  uVar10 = uVar19;
  do {
    uVar20 = (uint)uVar10;
    if (*pcVar6 == '\0') break;
    uVar20 = uVar20 + 1;
    uVar10 = (ulonglong)uVar20;
    pcVar6 = pcVar6 + 1;
  } while (uVar20 != 0xffffffff);
  local_1d0 = uVar20;
  local_1cc = uVar20;
  if (uVar20 == 0) {
    local_1d8 = (char *)0x0;
  }
  else {
    local_1d8 = malloc((ulonglong)(uVar20 + 1));
    memcpy(local_1d8,&DAT_1800195b4,(ulonglong)uVar20);
    local_1d8[local_1d0] = '\0';
  }
  pcVar6 = "morphtargets";
  uVar10 = uVar19;
  do {
    uVar20 = (uint)uVar10;
    if (*pcVar6 == '\0') break;
    uVar20 = uVar20 + 1;
    uVar10 = (ulonglong)uVar20;
    pcVar6 = pcVar6 + 1;
  } while (uVar20 != 0xffffffff);
  local_230 = uVar20;
  local_22c = uVar20;
  if (uVar20 == 0) {
    local_238 = (char *)0x0;
  }
  else {
    local_238 = malloc((ulonglong)(uVar20 + 1));
    memcpy(local_238,"morphtargets",(ulonglong)uVar20);
    local_238[local_230] = '\0';
  }
  ppcVar24 = &local_1d8;
  (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,&local_238);
  free(local_238);
  pcVar6 = "";
  if (local_1d8 != (char *)0x0) {
    pcVar6 = local_1d8;
  }
  iVar2 = atoi(pcVar6);
  if (iVar2 == 0) {
    local_178 = local_178 | 0x20;
    FUN_1800018d0(plVar14,"   --> option: Morph targets disabled\n",ppcVar24,param_4);
  }
  pcVar6 = "0";
  uVar10 = uVar19;
  do {
    uVar20 = (uint)uVar10;
    if (*pcVar6 == '\0') break;
    uVar20 = uVar20 + 1;
    uVar10 = (ulonglong)uVar20;
    pcVar6 = pcVar6 + 1;
  } while (uVar20 != 0xffffffff);
  local_1b0 = uVar20;
  local_1ac = uVar20;
  if (uVar20 == 0) {
    local_1b8 = (char *)0x0;
  }
  else {
    local_1b8 = malloc((ulonglong)(uVar20 + 1));
    memcpy(local_1b8,&DAT_18001c86c,(ulonglong)uVar20);
    local_1b8[local_1b0] = '\0';
  }
  pcVar6 = "agressive_vtx_optimization";
  uVar10 = uVar19;
  do {
    uVar20 = (uint)uVar10;
    if (*pcVar6 == '\0') break;
    uVar20 = uVar20 + 1;
    uVar10 = (ulonglong)uVar20;
    pcVar6 = pcVar6 + 1;
  } while (uVar20 != 0xffffffff);
  local_230 = uVar20;
  local_22c = uVar20;
  if (uVar20 == 0) {
    local_238 = (char *)0x0;
  }
  else {
    local_238 = malloc((ulonglong)(uVar20 + 1));
    memcpy(local_238,"agressive_vtx_optimization",(ulonglong)uVar20);
    local_238[local_230] = '\0';
  }
  ppcVar24 = &local_1b8;
  (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,&local_238);
  free(local_238);
  pcVar6 = "";
  if (local_1b8 != (char *)0x0) {
    pcVar6 = local_1b8;
  }
  iVar2 = atoi(pcVar6);
  if (iVar2 != 0) {
    local_178 = local_178 | 4;
    FUN_1800018d0(plVar14,"   --> option: Agressive vertex streams optimizations enabled\n",ppcVar24
                  ,param_4);
  }
  pcVar6 = "1";
  uVar10 = uVar19;
  do {
    uVar20 = (uint)uVar10;
    if (*pcVar6 == '\0') break;
    uVar20 = uVar20 + 1;
    uVar10 = (ulonglong)uVar20;
    pcVar6 = pcVar6 + 1;
  } while (uVar20 != 0xffffffff);
  local_1a0 = uVar20;
  local_19c = uVar20;
  if (uVar20 == 0) {
    local_1a8 = (char *)0x0;
  }
  else {
    local_1a8 = malloc((ulonglong)(uVar20 + 1));
    memcpy(local_1a8,&DAT_1800195b4,(ulonglong)uVar20);
    local_1a8[local_1a0] = '\0';
  }
  pcVar6 = "instances_limit";
  uVar10 = uVar19;
  do {
    uVar20 = (uint)uVar10;
    if (*pcVar6 == '\0') break;
    uVar20 = uVar20 + 1;
    uVar10 = (ulonglong)uVar20;
    pcVar6 = pcVar6 + 1;
  } while (uVar20 != 0xffffffff);
  local_230 = uVar20;
  local_22c = uVar20;
  if (uVar20 == 0) {
    local_238 = (char *)0x0;
  }
  else {
    local_238 = malloc((ulonglong)(uVar20 + 1));
    memcpy(local_238,"instances_limit",(ulonglong)uVar20);
    local_238[local_230] = '\0';
  }
  iVar2 = (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,&local_238,&local_1a8);
  free(local_238);
  if (iVar2 == 0) {
    pcVar6 = "";
    if (local_1a8 != (char *)0x0) {
      pcVar6 = local_1a8;
    }
    local_160 = atoi(pcVar6);
    if ((int)local_160 < 1) {
      local_160 = 1;
    }
    param_4 = local_198;
    FUN_1800018d0(plVar14,"   --> option: Instances Limit set to %d for mesh \'%s\'.\n",
                  (ulonglong)local_160,local_198);
  }
  else {
    local_160 = *(uint *)(param_1 + 4);
  }
  if ((int)param_1[3] == 5) {
    pcVar6 = "0";
    uVar10 = uVar19;
    do {
      uVar20 = (uint)uVar10;
      if (*pcVar6 == '\0') break;
      uVar20 = uVar20 + 1;
      uVar10 = (ulonglong)uVar20;
      pcVar6 = pcVar6 + 1;
    } while (uVar20 != 0xffffffff);
    local_230 = uVar20;
    local_22c = uVar20;
    if (uVar20 == 0) {
      local_238 = (char *)0x0;
    }
    else {
      local_238 = malloc((ulonglong)(uVar20 + 1));
      memcpy(local_238,&DAT_18001c86c,(ulonglong)uVar20);
      local_238[local_230] = '\0';
    }
    pcVar6 = "spu_compatible";
    uVar10 = uVar19;
    do {
      uVar20 = (uint)uVar10;
      if (*pcVar6 == '\0') break;
      uVar20 = uVar20 + 1;
      uVar10 = (ulonglong)uVar20;
      pcVar6 = pcVar6 + 1;
    } while (uVar20 != 0xffffffff);
    local_220 = uVar20;
    local_21c = uVar20;
    if (uVar20 == 0) {
      local_228 = (void *)0x0;
    }
    else {
      local_228 = malloc((ulonglong)(uVar20 + 1));
      memcpy(local_228,"spu_compatible",(ulonglong)uVar20);
      *(undefined1 *)((ulonglong)local_220 + (longlong)local_228) = 0;
    }
    (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,&local_228,&local_238);
    free(local_228);
    pcVar6 = "0";
    uVar10 = uVar19;
    do {
      uVar20 = (uint)uVar10;
      if (*pcVar6 == '\0') break;
      uVar20 = uVar20 + 1;
      uVar10 = (ulonglong)uVar20;
      pcVar6 = pcVar6 + 1;
    } while (uVar20 != 0xffffffff);
    local_120 = uVar20;
    local_11c = uVar20;
    if (uVar20 == 0) {
      local_128 = (char *)0x0;
    }
    else {
      local_128 = malloc((ulonglong)(uVar20 + 1));
      memcpy(local_128,&DAT_18001c86c,(ulonglong)uVar20);
      local_128[local_120] = '\0';
    }
    pcVar6 = "static_only";
    uVar10 = uVar19;
    do {
      uVar20 = (uint)uVar10;
      if (*pcVar6 == '\0') break;
      uVar20 = uVar20 + 1;
      uVar10 = (ulonglong)uVar20;
      pcVar6 = pcVar6 + 1;
    } while (uVar20 != 0xffffffff);
    local_220 = uVar20;
    local_21c = uVar20;
    if (uVar20 == 0) {
      local_228 = (void *)0x0;
    }
    else {
      local_228 = malloc((ulonglong)(uVar20 + 1));
      memcpy(local_228,"static_only",(ulonglong)uVar20);
      *(undefined1 *)((ulonglong)local_220 + (longlong)local_228) = 0;
    }
    (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,&local_228,&local_128);
    free(local_228);
    pcVar6 = "";
    if (local_238 != (char *)0x0) {
      pcVar6 = local_238;
    }
    iVar2 = atoi(pcVar6);
    if (iVar2 == 1) {
      pcVar6 = "";
      if (local_128 != (char *)0x0) {
        pcVar6 = local_128;
      }
      iVar2 = atoi(pcVar6);
      if (iVar2 == 1) {
        local_178 = local_178 | 0xc0;
      }
    }
    free(local_128);
    local_128 = (char *)0x0;
    free(local_238);
  }
  pcVar6 = "1";
  uVar10 = uVar19;
  do {
    uVar20 = (uint)uVar10;
    if (*pcVar6 == '\0') break;
    uVar20 = uVar20 + 1;
    uVar10 = (ulonglong)uVar20;
    pcVar6 = pcVar6 + 1;
  } while (uVar20 != 0xffffffff);
  local_1f0 = uVar20;
  local_1ec = uVar20;
  if (uVar20 == 0) {
    local_1f8 = (char *)0x0;
  }
  else {
    local_1f8 = malloc((ulonglong)(uVar20 + 1));
    memcpy(local_1f8,&DAT_1800195b4,(ulonglong)uVar20);
    local_1f8[local_1f0] = '\0';
  }
  pcVar6 = "index_set_optimizations";
  uVar10 = uVar19;
  do {
    uVar20 = (uint)uVar10;
    if (*pcVar6 == '\0') break;
    uVar20 = uVar20 + 1;
    uVar10 = (ulonglong)uVar20;
    pcVar6 = pcVar6 + 1;
  } while (uVar20 != 0xffffffff);
  local_220 = uVar20;
  local_21c = uVar20;
  if (uVar20 == 0) {
    local_228 = (void *)0x0;
  }
  else {
    local_228 = malloc((ulonglong)(uVar20 + 1));
    memcpy(local_228,"index_set_optimizations",(ulonglong)uVar20);
    *(undefined1 *)((ulonglong)local_220 + (longlong)local_228) = 0;
  }
  ppcVar24 = &local_1f8;
  iVar2 = (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,&local_228);
  free(local_228);
  if (iVar2 == 0) {
    pcVar6 = "";
    if (local_1f8 != (char *)0x0) {
      pcVar6 = local_1f8;
    }
    iVar2 = atoi(pcVar6);
    if (iVar2 == 0) {
      local_178 = local_178 | 0x8000;
      FUN_1800018d0(plVar14,"   --> option: IndexSet optimizations disabled\n",ppcVar24,param_4);
    }
  }
  if ((*(byte *)((longlong)param_1 + 0x24) & 1) != 0) {
    local_178 = local_178 | 0x100;
    FUN_1800018d0(plVar14,"   --> option: Generating mesh LoDs.\n",ppcVar24,param_4);
  }
  if ((*(byte *)((longlong)param_1 + 0x24) & 8) != 0) {
    local_178 = local_178 | 2;
    FUN_1800018d0(plVar14,"   --> option: Exporting all mesh skins.\n",ppcVar24,param_4);
  }
  if ((*(byte *)((longlong)param_1 + 0x24) & 0x10) != 0) {
    local_178 = local_178 | 0x1000;
    FUN_1800018d0(plVar14,
                  "   --> option: Using packed geometry (Geometry resource instead of Vertex + Index resources)\n"
                  ,ppcVar24,param_4);
  }
  if ((*(byte *)((longlong)param_1 + 0x24) & 0x20) != 0) {
    local_178 = local_178 | 0x2000;
    FUN_1800018d0(plVar14,
                  "   --> option: LODs will be stored separately (Geometry or Vertex+Index for one LOD)"
                  ,ppcVar24,param_4);
  }
  if ((*(byte *)((longlong)param_1 + 0x24) & 0x40) != 0) {
    local_178 = local_178 | 0x4000;
    FUN_1800018d0(plVar14,"   --> option: Mesh geometry will not be optimized\n",ppcVar24,param_4);
  }
  if ((*(byte *)((longlong)param_1 + 0x24) & 4) != 0) {
    local_178 = local_178 | 1;
  }
  FUN_1800087f0((longlong *)&local_148,param_1 + 6);
  local_12e = *(undefined2 *)((longlong)param_1 + 0x4a);
  local_130 = (undefined2)param_1[9];
  local_12c = *(undefined1 *)((longlong)param_1 + 0x4c);
  local_12b = *(undefined2 *)((longlong)param_1 + 0x4d);
  local_129 = *(undefined1 *)((longlong)param_1 + 0x4f);
  if (local_150 != 0) {
    if (local_150 == 1) {
      pcVar6 = "trace hull";
    }
    else if (local_150 == 2) {
      pcVar6 = "collision hull";
    }
    else if (local_150 == 3) {
      pcVar6 = "both hulls";
    }
    else if (local_150 == 5) {
      pcVar6 = "trace hull if collision hull exists";
    }
    else {
      pcVar6 = "?";
    }
    FUN_1800018d0(plVar14,"   --> option: Removing geometry collision tree mode: %s\n",pcVar6,
                  param_4);
  }
  puVar7 = (ulonglong *)
           (**(code **)(*(longlong *)param_1[1] + 0x10))((longlong *)param_1[1],&local_198);
  if (puVar7 == (ulonglong *)0x0) {
    free(local_1f8);
    local_1f8 = (char *)0x0;
    free(local_1a8);
    local_1a8 = (char *)0x0;
    free(local_1b8);
    local_1b8 = (char *)0x0;
    free(local_1d8);
    local_1d8 = (char *)0x0;
    free(local_1e8);
    local_1e8 = (char *)0x0;
    free(local_1c8);
    local_1c8 = (char *)0x0;
    free(local_208);
    local_208 = (char *)0x0;
    free(local_218);
    local_218 = (char *)0x0;
    free(local_98[0]);
    local_98[0] = (char *)0x0;
    local_140 = local_140 & 0xffffffff00000000;
    free(local_148);
    puVar21 = (undefined8 *)((ulonglong)((int)local_188 - 1) * 0x10 + (longlong)local_190);
    for (iVar2 = (int)local_188; iVar2 != 0; iVar2 = iVar2 + -1) {
      free((void *)*puVar21);
      *puVar21 = 0;
      puVar21 = puVar21 + -2;
    }
    local_188 = local_188 & 0xffffffff00000000;
    free(local_190);
    uVar19 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    fs::path::path((path *)local_88,local_198,true);
    memset(local_118,0,0x78);
    FUN_180003200(local_118,"");
    FUN_180003200(local_108,"");
    pppppcVar18 = local_68;
    if ((local_48 & 2) != 0) {
      pppppcVar18 = (char *****)local_68[0];
    }
    FUN_180003200(local_118,(char *)pppppcVar18);
    pppppcVar18 = local_88;
    if ((local_48 & 1) != 0) {
      pppppcVar18 = (char *****)local_88[0];
    }
    FUN_180003200(local_108,(char *)pppppcVar18);
    local_a8 = *(undefined1 *)(*param_1 + 0x24);
    (**(code **)(*puVar7 + 0x2a8))(puVar7,*(undefined8 *)(*param_1 + 0x38));
    puVar21 = (undefined8 *)param_1[10];
    bVar25 = ~(byte)(*(uint *)((longlong)param_1 + 0x24) >> 1) & 1;
    puVar8 = malloc(0x38);
    puVar9 = (undefined8 *)(puVar8 + 10);
    *(undefined8 *)(puVar8 + 0xc) = puVar21[1];
    *puVar9 = 0;
    if ((undefined8 *)puVar21[1] == (undefined8 *)0x0) {
      *puVar21 = puVar9;
    }
    else {
      *(undefined8 *)puVar21[1] = puVar9;
    }
    *(int *)(puVar21 + 2) = *(int *)(puVar21 + 2) + 1;
    puVar21[1] = puVar9;
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = 0;
      *(undefined8 *)(puVar8 + 2) = 0;
      *(undefined8 *)(puVar8 + 4) = 0;
      puVar8[6] = 0x3d;
      puVar8[8] = 0;
      *(undefined2 *)(puVar8 + 9) = 0;
    }
    *puVar8 = 0x10;
    uVar10 = uVar19;
    if (bVar25 != 0) {
      uVar10 = FUN_1800045b0((undefined8 *)param_1[10],0x12);
    }
    puVar21 = (undefined8 *)param_1[10];
    puVar11 = malloc(0x38);
    puVar9 = (undefined8 *)(puVar11 + 10);
    *(undefined8 *)(puVar11 + 0xc) = puVar21[1];
    *puVar9 = 0;
    if ((undefined8 *)puVar21[1] == (undefined8 *)0x0) {
      *puVar21 = puVar9;
    }
    else {
      *(undefined8 *)puVar21[1] = puVar9;
    }
    *(int *)(puVar21 + 2) = *(int *)(puVar21 + 2) + 1;
    puVar21[1] = puVar9;
    if (puVar11 != (undefined4 *)0x0) {
      *puVar11 = 0;
      *(undefined8 *)(puVar11 + 2) = 0;
      *(undefined8 *)(puVar11 + 4) = 0;
      puVar11[6] = 0x3d;
      puVar11[8] = 0;
      *(undefined2 *)(puVar11 + 9) = 0;
    }
    *puVar11 = 0x11;
    puVar11 = puVar11 + 2;
    (**(code **)(*(longlong *)param_1[1] + 0x20))((longlong *)param_1[1],puVar7,puVar8 + 2);
    local_d0 = *(undefined4 *)((longlong)puVar7 + 0x344);
    local_d4 = puVar8[4];
    if (bVar25 == 0) {
      FUN_180002e70((longlong *)(puVar8 + 2),(void *)puVar7[0x96],(uint)puVar7[0x97]);
    }
    else {
      uVar20 = (uint)puVar7[0x97];
      pvVar13 = (void *)puVar7[0x96];
      uVar16 = uVar20 + *(int *)(uVar10 + 0x10);
      if (*(uint *)(uVar10 + 0x14) < uVar16) {
        uVar3 = (*(uint *)(uVar10 + 0x14) * 10 >> 3) + 0x10 & 0xfffffff0;
        if (uVar3 < uVar16) {
          uVar3 = uVar16;
        }
        *(uint *)(uVar10 + 0x14) = uVar3;
        pvVar12 = realloc(*(void **)(uVar10 + 8),(ulonglong)uVar3);
        *(void **)(uVar10 + 8) = pvVar12;
      }
      memcpy((void *)((ulonglong)*(uint *)(uVar10 + 0x10) + *(longlong *)(uVar10 + 8)),pvVar13,
             (ulonglong)uVar20);
      *(int *)(uVar10 + 0x10) = *(int *)(uVar10 + 0x10) + uVar20;
    }
    local_cc = (undefined4)puVar7[0x97];
    local_c8 = (**(code **)(*puVar7 + 0x78))(puVar7);
    local_c4 = (**(code **)(*puVar7 + 0xd8))(puVar7);
    uVar20 = (**(code **)(*puVar7 + 0x78))(puVar7);
    uVar10 = uVar19;
    uVar23 = uVar19;
    if (uVar20 != 0) {
      do {
        uVar4 = (**(code **)(*puVar7 + 0xb8))(puVar7,uVar10);
        if ((int)uVar4 < (int)(uint)uVar23) {
          uVar4 = (uint)uVar23;
        }
        uVar16 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar16;
        uVar23 = (ulonglong)uVar4;
      } while (uVar16 < uVar20);
    }
    local_f8 = uVar4;
    if ((local_178 & 0x1000) == 0) {
      uVar10 = uVar19;
      puVar22 = local_f4;
      do {
        puVar21 = (undefined8 *)
                  (**(code **)(*(longlong *)param_1[1] + 0x28))
                            ((longlong *)param_1[1],puVar7,uVar10);
        puVar26 = puVar22;
        if (*(int *)(puVar21 + 1) != 0) {
          puVar1 = (undefined8 *)param_1[10];
          puVar8 = malloc(0x38);
          puVar9 = (undefined8 *)(puVar8 + 10);
          *(undefined8 *)(puVar8 + 0xc) = puVar1[1];
          *puVar9 = 0;
          if ((undefined8 *)puVar1[1] == (undefined8 *)0x0) {
            *puVar1 = puVar9;
          }
          else {
            *(undefined8 *)puVar1[1] = puVar9;
          }
          *(int *)(puVar1 + 2) = *(int *)(puVar1 + 2) + 1;
          puVar1[1] = puVar9;
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = 0;
            *(undefined8 *)(puVar8 + 2) = 0;
            *(undefined8 *)(puVar8 + 4) = 0;
            puVar8[6] = 0x3d;
            puVar8[8] = 0;
            *(undefined2 *)(puVar8 + 9) = 0;
          }
          *puVar8 = 0xf0;
          FUN_180010c30(puVar21,(longlong *)(puVar8 + 2));
          puVar26 = puVar22 + 2;
          *puVar22 = *(uint *)(puVar21 + 1);
        }
        uVar4 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar4;
        puVar22 = puVar26;
      } while ((int)uVar4 < 4);
      puVar22 = local_f4 + 1;
      do {
        uVar10 = uVar19;
        iVar2 = (int)uVar10;
        puVar21 = (undefined8 *)
                  (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],puVar7);
        puVar26 = puVar22;
        if (*(int *)(puVar21 + 1) != 0) {
          puVar1 = (undefined8 *)param_1[10];
          puVar8 = malloc(0x38);
          puVar9 = (undefined8 *)(puVar8 + 10);
          *(undefined8 *)(puVar8 + 0xc) = puVar1[1];
          *puVar9 = 0;
          if ((undefined8 *)puVar1[1] == (undefined8 *)0x0) {
            *puVar1 = puVar9;
          }
          else {
            *(undefined8 *)puVar1[1] = puVar9;
          }
          *(int *)(puVar1 + 2) = *(int *)(puVar1 + 2) + 1;
          puVar1[1] = puVar9;
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = 0;
            *(undefined8 *)(puVar8 + 2) = 0;
            *(undefined8 *)(puVar8 + 4) = 0;
            puVar8[6] = 0x3d;
            puVar8[8] = 0;
            *(undefined2 *)(puVar8 + 9) = 0;
          }
          *puVar8 = 0xf1;
          uVar4 = *(uint *)(puVar21 + 1);
          if ((uint)puVar8[4] <= uVar4) {
            if ((uint)puVar8[5] < uVar4) {
              puVar8[5] = uVar4;
              pvVar13 = realloc(*(void **)(puVar8 + 2),(ulonglong)uVar4);
              *(void **)(puVar8 + 2) = pvVar13;
            }
            uVar20 = puVar8[4];
            puVar17 = (undefined1 *)((ulonglong)uVar20 + *(longlong *)(puVar8 + 2));
            if (uVar20 < uVar4) {
              uVar19 = (ulonglong)(uVar4 - uVar20);
              do {
                if (puVar17 != (undefined1 *)0x0) {
                  *puVar17 = 0;
                }
                puVar17 = puVar17 + 1;
                uVar19 = uVar19 - 1;
              } while (uVar19 != 0);
            }
          }
          puVar8[4] = uVar4;
          if (*(uint *)(puVar21 + 1) != 0) {
            uVar10 = (ulonglong)*(uint *)(puVar21 + 1);
            memcpy(*(void **)(puVar8 + 2),(void *)*puVar21,uVar10);
          }
          puVar26 = puVar22 + 2;
          *puVar22 = puVar8[4];
        }
        uVar4 = iVar2 + 1;
        uVar19 = (ulonglong)uVar4;
        puVar22 = puVar26;
      } while ((int)uVar4 < 4);
    }
    else {
      puVar22 = local_f4 + 1;
      do {
        iVar2 = (int)uVar19;
        puVar21 = (undefined8 *)
                  (**(code **)(*(longlong *)param_1[1] + 0x28))((longlong *)param_1[1],puVar7);
        uVar10 = uVar19;
        if (*(int *)(puVar21 + 1) != 0) {
          puVar1 = (undefined8 *)param_1[10];
          puVar8 = malloc(0x38);
          puVar9 = (undefined8 *)(puVar8 + 10);
          *(undefined8 *)(puVar8 + 0xc) = puVar1[1];
          *puVar9 = 0;
          if ((undefined8 *)puVar1[1] == (undefined8 *)0x0) {
            *puVar1 = puVar9;
          }
          else {
            *(undefined8 *)puVar1[1] = puVar9;
          }
          *(int *)(puVar1 + 2) = *(int *)(puVar1 + 2) + 1;
          puVar1[1] = puVar9;
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = 0;
            *(undefined8 *)(puVar8 + 2) = 0;
            *(undefined8 *)(puVar8 + 4) = 0;
            puVar8[6] = 0x3d;
            puVar8[8] = 0;
            *(undefined2 *)(puVar8 + 9) = 0;
          }
          *puVar8 = 0xf2;
          FUN_180010c30(puVar21,(longlong *)(puVar8 + 2));
          puVar22[-1] = 0;
          *puVar22 = *(uint *)(puVar21 + 1);
          puVar22 = puVar22 + 2;
          uVar10 = uVar19;
        }
        uVar4 = iVar2 + 1;
        uVar19 = (ulonglong)uVar4;
      } while ((int)uVar4 < 4);
    }
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    local_b8 = 0;
    local_c0 = 0;
    plVar14 = (longlong *)(**(code **)(*puVar7 + 0x60))(puVar7,1);
    if (plVar14 != (longlong *)0x0) {
      iVar2 = (**(code **)(*plVar14 + 0x60))(plVar14);
      local_b8 = local_b8 + iVar2;
      iVar2 = (**(code **)(*plVar14 + 0x58))(plVar14);
      local_c0._0_4_ = (int)local_c0 + iVar2;
      iVar2 = (**(code **)(*plVar14 + 0x50))(plVar14);
      local_c0 = CONCAT44(local_c0._4_4_ + iVar2,(int)local_c0);
    }
    local_res10[0] = (**(code **)(*puVar7 + 0x78))(puVar7);
    uVar20 = local_res10[0];
    if (local_res10[0] != 0) {
      do {
        uVar10 = *puVar7;
        puVar15 = (ulonglong *)(**(code **)(uVar10 + 0x250))(puVar7,uVar4);
        if (puVar15 != (ulonglong *)0x0) {
          uVar10 = *puVar15;
          uVar19 = 0;
          uVar16 = (**(code **)(uVar10 + 0x88))(puVar15,1);
          if (uVar16 != 0) {
            do {
              puVar11 = (undefined4 *)*puVar15;
              iVar2 = (int)uVar19;
              plVar14 = (longlong *)(**(code **)(puVar11 + 0x24))(puVar15,1);
              uVar10 = uVar19;
              if (plVar14 != (longlong *)0x0) {
                iVar5 = (**(code **)(*plVar14 + 0x60))(plVar14);
                local_b8 = local_b8 + iVar5;
                iVar5 = (**(code **)(*plVar14 + 0x58))(plVar14);
                local_c0._0_4_ = (int)local_c0 + iVar5;
                iVar5 = (**(code **)(*plVar14 + 0x50))(plVar14);
                local_c0 = CONCAT44(local_c0._4_4_ + iVar5,(int)local_c0);
                uVar10 = uVar19;
              }
              uVar3 = iVar2 + 1;
              uVar19 = (ulonglong)uVar3;
              uVar20 = local_res10[0];
            } while (uVar3 < uVar16);
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar20);
    }
    uVar4 = 0;
    local_ac = 0;
    local_b4 = 0;
    plVar14 = (longlong *)(**(code **)(*puVar7 + 0x60))(puVar7,0);
    if (plVar14 != (longlong *)0x0) {
      iVar2 = (**(code **)(*plVar14 + 0x60))(plVar14);
      local_ac = local_ac + iVar2;
      iVar2 = (**(code **)(*plVar14 + 0x58))(plVar14);
      local_b4._0_4_ = (int)local_b4 + iVar2;
      iVar2 = (**(code **)(*plVar14 + 0x50))(plVar14);
      local_b4 = CONCAT44(local_b4._4_4_ + iVar2,(int)local_b4);
    }
    uVar20 = (**(code **)(*puVar7 + 0x78))(puVar7);
    if (uVar20 != 0) {
      do {
        uVar19 = 0;
        uVar10 = *puVar7;
        puVar15 = (ulonglong *)(**(code **)(uVar10 + 0x250))(puVar7,uVar4);
        if (puVar15 != (ulonglong *)0x0) {
          uVar10 = *puVar15;
          uVar16 = (**(code **)(uVar10 + 0x88))(puVar15,0);
          if (uVar16 != 0) {
            do {
              puVar11 = (undefined4 *)*puVar15;
              iVar2 = (int)uVar19;
              plVar14 = (longlong *)(**(code **)(puVar11 + 0x24))(puVar15,0);
              uVar10 = uVar19;
              if (plVar14 != (longlong *)0x0) {
                iVar5 = (**(code **)(*plVar14 + 0x60))(plVar14);
                local_ac = local_ac + iVar5;
                iVar5 = (**(code **)(*plVar14 + 0x58))(plVar14);
                local_b4._0_4_ = (int)local_b4 + iVar5;
                iVar5 = (**(code **)(*plVar14 + 0x50))(plVar14);
                local_b4 = CONCAT44(local_b4._4_4_ + iVar5,(int)local_b4);
                uVar10 = uVar19;
              }
              uVar3 = iVar2 + 1;
              uVar19 = (ulonglong)uVar3;
            } while (uVar3 < uVar16);
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar20);
    }
    plVar14 = local_res18;
    if ((local_f4[2] != 0) && (local_f4[2] < local_f4[0])) {
      FUN_1800018d0(local_res18,"-- vertices lods strange\n",uVar10,puVar11);
    }
    if ((local_f4[3] != 0) && (local_f4[3] < local_f4[1])) {
      FUN_1800018d0(plVar14,"-- indices lods strange\n",uVar10,puVar11);
    }
    (**(code **)(*plVar14 + 0x30))(plVar14,local_118);
    (**(code **)(*puVar7 + 0x2b8))(puVar7,param_1 + 0xc);
    (**(code **)(*(longlong *)param_1[1] + 0x18))((longlong *)param_1[1],puVar7);
    free(local_108[0]);
    local_108[0] = (void *)0x0;
    free(local_118[0]);
    local_118[0] = (void *)0x0;
    fs::path::~path((path *)local_88);
    free(local_1f8);
    local_1f8 = (char *)0x0;
    free(local_1a8);
    local_1a8 = (char *)0x0;
    free(local_1b8);
    local_1b8 = (char *)0x0;
    free(local_1d8);
    local_1d8 = (char *)0x0;
    free(local_1e8);
    local_1e8 = (char *)0x0;
    free(local_1c8);
    local_1c8 = (char *)0x0;
    free(local_208);
    local_208 = (char *)0x0;
    free(local_218);
    local_218 = (char *)0x0;
    free(local_98[0]);
    local_98[0] = (char *)0x0;
    local_140 = local_140 & 0xffffffff00000000;
    free(local_148);
    puVar21 = (undefined8 *)((ulonglong)((int)local_188 - 1) * 0x10 + (longlong)local_190);
    for (iVar2 = (int)local_188; iVar2 != 0; iVar2 = iVar2 + -1) {
      free((void *)*puVar21);
      *puVar21 = 0;
      puVar21 = puVar21 + -2;
    }
    local_188 = local_188 & 0xffffffff00000000;
    free(local_190);
    uVar19 = CONCAT71((int7)((ulonglong)extraout_RAX_00 >> 8),1);
  }
  return uVar19;
}



// WARNING: Removing unreachable block (ram,0x00018000d0b3)
// WARNING: Removing unreachable block (ram,0x00018000cff7)
// WARNING: Removing unreachable block (ram,0x00018000cee0)
// WARNING: Removing unreachable block (ram,0x00018000cdd0)
// WARNING: Removing unreachable block (ram,0x00018000ce30)
// WARNING: Removing unreachable block (ram,0x00018000cf40)
// WARNING: Removing unreachable block (ram,0x00018000d055)
// WARNING: Removing unreachable block (ram,0x00018000d131)

void FUN_18000ccc0(longlong *param_1,longlong *param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  longlong *plVar9;
  longlong *plVar10;
  void *pvVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined4 local_res18 [4];
  char *local_128;
  uint local_120;
  uint local_11c;
  char *local_118;
  uint local_110;
  uint local_10c;
  char *local_108;
  uint local_100;
  uint local_fc;
  longlong *local_f8;
  uint local_f0;
  uint local_ec;
  undefined4 local_e8;
  char *local_e0;
  uint local_d8;
  uint local_d4;
  void *local_d0;
  uint local_c8;
  uint local_c4;
  undefined1 *local_b8;
  void *local_b0;
  ulonglong local_a8;
  undefined4 local_a0;
  uint local_98;
  int local_94;
  undefined4 local_90;
  undefined8 local_88;
  int local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 *local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined2 local_50;
  undefined2 local_4e;
  undefined1 local_4c;
  undefined2 local_4b;
  undefined1 local_49;
  undefined1 *local_48 [2];
  
  uVar14 = 0;
  local_78 = param_1[6];
  local_res18[0] = 0;
  local_50 = 0x500;
  local_b8 = (undefined1 *)0x0;
  local_b0 = (void *)0x0;
  local_a8 = 0;
  local_4e = 0x2d0;
  local_a0 = 0x3d;
  local_98 = 0;
  local_90 = 0;
  local_80 = 8;
  local_70 = 0;
  local_68 = (undefined4 *)0x0;
  local_60 = 0;
  local_58 = 0x3d;
  local_49 = 0;
  local_4c = 0x2d;
  local_94 = param_3;
  local_88 = param_4;
  FUN_180008080((longlong *)&local_68,local_res18);
  *local_68 = 0x40b00000;
  local_68[1] = 0x41080000;
  local_4b = 0xc14;
  (**(code **)(*param_1 + 0x10))(param_1,local_48);
  local_b8 = &DAT_1800198fb;
  if (local_48[0] != (undefined1 *)0x0) {
    local_b8 = local_48[0];
  }
  FUN_18000b450(param_1,(longlong *)&local_b0);
  local_98 = 0x10;
  pcVar8 = "1";
  uVar13 = uVar14;
  do {
    if (*pcVar8 == '\0') break;
    uVar13 = uVar13 + 1;
    pcVar8 = pcVar8 + 1;
  } while (uVar13 != 0xffffffff);
  local_110 = uVar13;
  local_10c = uVar13;
  if (uVar13 == 0) {
    local_118 = (char *)0x0;
  }
  else {
    local_118 = malloc((ulonglong)(uVar13 + 1));
    memcpy(local_118,&DAT_1800195b4,(ulonglong)uVar13);
    local_118[local_110] = '\0';
  }
  pcVar8 = "instances_limit";
  uVar13 = uVar14;
  do {
    if (*pcVar8 == '\0') break;
    uVar13 = uVar13 + 1;
    pcVar8 = pcVar8 + 1;
  } while (uVar13 != 0xffffffff);
  local_120 = uVar13;
  local_11c = uVar13;
  if (uVar13 == 0) {
    local_128 = (char *)0x0;
  }
  else {
    local_128 = malloc((ulonglong)(uVar13 + 1));
    memcpy(local_128,"instances_limit",(ulonglong)uVar13);
    local_128[local_120] = '\0';
  }
  iVar7 = (**(code **)(*param_1 + 0x38))(param_1,&local_128,&local_118);
  free(local_128);
  if (iVar7 == 0) {
    pcVar8 = "";
    if (local_118 != (char *)0x0) {
      pcVar8 = local_118;
    }
    local_80 = atoi(pcVar8);
    if (local_80 < 1) {
      local_80 = 1;
    }
  }
  pcVar8 = "0";
  uVar13 = uVar14;
  do {
    if (*pcVar8 == '\0') break;
    uVar13 = uVar13 + 1;
    pcVar8 = pcVar8 + 1;
  } while (uVar13 != 0xffffffff);
  local_d8 = uVar13;
  local_d4 = uVar13;
  if (uVar13 == 0) {
    local_e0 = (char *)0x0;
  }
  else {
    local_e0 = malloc((ulonglong)(uVar13 + 1));
    memcpy(local_e0,&DAT_18001c86c,(ulonglong)uVar13);
    local_e0[local_d8] = '\0';
  }
  pcVar8 = "force_all_skins";
  uVar13 = uVar14;
  do {
    if (*pcVar8 == '\0') break;
    uVar13 = uVar13 + 1;
    pcVar8 = pcVar8 + 1;
  } while (uVar13 != 0xffffffff);
  local_120 = uVar13;
  local_11c = uVar13;
  if (uVar13 == 0) {
    local_128 = (char *)0x0;
  }
  else {
    local_128 = malloc((ulonglong)(uVar13 + 1));
    memcpy(local_128,"force_all_skins",(ulonglong)uVar13);
    local_128[local_120] = '\0';
  }
  iVar7 = (**(code **)(*param_1 + 0x38))(param_1,&local_128,&local_e0);
  if (iVar7 == 0) {
    pcVar8 = "";
    if (local_e0 != (char *)0x0) {
      pcVar8 = local_e0;
    }
    iVar7 = atoi(pcVar8);
    if (iVar7 != 1) goto LAB_18000cfbf;
    bVar5 = true;
  }
  else {
LAB_18000cfbf:
    bVar5 = false;
  }
  free(local_128);
  if (bVar5) {
    local_98 = local_98 | 2;
  }
  if (param_3 != 5) goto LAB_18000d222;
  pcVar8 = "0";
  uVar13 = uVar14;
  do {
    if (*pcVar8 == '\0') break;
    uVar13 = uVar13 + 1;
    pcVar8 = pcVar8 + 1;
  } while (uVar13 != 0xffffffff);
  local_120 = uVar13;
  local_11c = uVar13;
  if (uVar13 == 0) {
    local_128 = (char *)0x0;
  }
  else {
    local_128 = malloc((ulonglong)(uVar13 + 1));
    memcpy(local_128,&DAT_18001c86c,(ulonglong)uVar13);
    local_128[local_120] = '\0';
  }
  pcVar8 = "0";
  uVar13 = uVar14;
  do {
    if (*pcVar8 == '\0') break;
    uVar13 = uVar13 + 1;
    pcVar8 = pcVar8 + 1;
  } while (uVar13 != 0xffffffff);
  local_100 = uVar13;
  local_fc = uVar13;
  if (uVar13 == 0) {
    local_108 = (char *)0x0;
  }
  else {
    local_108 = malloc((ulonglong)(uVar13 + 1));
    memcpy(local_108,&DAT_18001c86c,(ulonglong)uVar13);
    local_108[local_100] = '\0';
  }
  pcVar8 = "spu_compatible";
  uVar13 = uVar14;
  do {
    if (*pcVar8 == '\0') break;
    uVar13 = uVar13 + 1;
    pcVar8 = pcVar8 + 1;
  } while (uVar13 != 0xffffffff);
  local_f0 = uVar13;
  local_ec = uVar13;
  if (uVar13 == 0) {
    local_f8 = (longlong *)0x0;
  }
  else {
    local_f8 = malloc((ulonglong)(uVar13 + 1));
    memcpy(local_f8,"spu_compatible",(ulonglong)uVar13);
    *(undefined1 *)((ulonglong)local_f0 + (longlong)local_f8) = 0;
  }
  bVar5 = false;
  iVar7 = (**(code **)(*param_1 + 0x38))(param_1,&local_f8,&local_128);
  if (iVar7 == 0) {
    pcVar8 = "static_only";
    do {
      if (*pcVar8 == '\0') break;
      uVar14 = uVar14 + 1;
      pcVar8 = pcVar8 + 1;
    } while (uVar14 != 0xffffffff);
    local_c8 = uVar14;
    local_c4 = uVar14;
    if (uVar14 == 0) {
      local_d0 = (void *)0x0;
    }
    else {
      local_d0 = malloc((ulonglong)(uVar14 + 1));
      memcpy(local_d0,"static_only",(ulonglong)uVar14);
      *(undefined1 *)((ulonglong)local_c8 + (longlong)local_d0) = 0;
    }
    bVar5 = true;
    iVar7 = (**(code **)(*param_1 + 0x38))(param_1,&local_d0,&local_108);
    if (iVar7 != 0) goto LAB_18000d1d0;
    pcVar8 = "";
    if (local_128 != (char *)0x0) {
      pcVar8 = local_128;
    }
    iVar7 = atoi(pcVar8);
    if (iVar7 != 1) goto LAB_18000d1d0;
    pcVar8 = "";
    if (local_108 != (char *)0x0) {
      pcVar8 = local_108;
    }
    iVar7 = atoi(pcVar8);
    if (iVar7 != 1) goto LAB_18000d1d0;
    bVar6 = true;
  }
  else {
LAB_18000d1d0:
    bVar6 = false;
  }
  if (bVar5) {
    free(local_d0);
    local_d0 = (void *)0x0;
  }
  free(local_f8);
  if (bVar6) {
    local_98 = local_98 | 0xc0;
  }
  free(local_108);
  local_108 = (char *)0x0;
  free(local_128);
LAB_18000d222:
  plVar9 = (longlong *)
           (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],&local_b8);
  if (plVar9 != (longlong *)0x0) {
    local_f8 = (longlong *)0x0;
    local_f0 = 0;
    local_e8 = 0x3d;
    (**(code **)(*plVar9 + 0x2b0))(plVar9,&local_f8);
    if (local_f8 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)*local_f8;
      plVar4 = local_f8;
      while (plVar15 = plVar10, plVar15 != (longlong *)0x0) {
        plVar4 = plVar15;
        plVar10 = (longlong *)*plVar15;
      }
    }
joined_r0x00018000d286:
    if (plVar4 != (longlong *)0x0) {
      lVar1 = param_1[7];
      lVar2 = param_1[6];
      lVar3 = param_1[5];
      plVar10 = malloc(0x68);
      if (plVar10 != (longlong *)0x0) {
        plVar10[1] = 0;
        *(undefined4 *)(plVar10 + 2) = 0;
        *(undefined4 *)(plVar10 + 3) = 0x3d;
        plVar10[6] = lVar2;
        *(undefined4 *)(plVar10 + 4) = 0x30;
        plVar10[5] = lVar3;
        plVar10[7] = lVar1;
        *plVar10 = (longlong)CMaterials_FrontEnd::vftable;
        plVar10[8] = 0;
        plVar10[9] = 0;
        plVar10[10] = 0;
        plVar10[0xb] = 0;
        puVar12 = &DAT_1800198fb;
        if ((undefined1 *)plVar4[-2] != (undefined1 *)0x0) {
          puVar12 = (undefined1 *)plVar4[-2];
        }
        (**(code **)(*plVar10 + 8))(plVar10,puVar12,1);
        uVar14 = (int)param_2[1] + 1;
        if (*(uint *)((longlong)param_2 + 0xc) < uVar14) {
          uVar13 = (*(uint *)((longlong)param_2 + 0xc) * 10 >> 3) + 0x10 & 0xfffffff0;
          if (uVar13 < uVar14) {
            uVar13 = uVar14;
          }
          *(uint *)((longlong)param_2 + 0xc) = uVar13;
          pvVar11 = realloc((void *)*param_2,(ulonglong)(uVar13 << 3));
          *param_2 = (longlong)pvVar11;
        }
        puVar16 = (undefined8 *)(*param_2 + (ulonglong)*(uint *)(param_2 + 1) * 8);
        if (puVar16 != (undefined8 *)0x0) {
          *puVar16 = plVar10;
        }
        *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      }
      plVar10 = (longlong *)plVar4[2];
      if (plVar10 == (longlong *)0x0) {
        plVar10 = plVar4;
        plVar15 = (longlong *)plVar4[1];
        if ((longlong *)plVar4[1] == (longlong *)0x0) goto LAB_18000d3b4;
        do {
          plVar4 = plVar15;
          if (plVar10 != (longlong *)plVar15[2]) break;
          plVar4 = (longlong *)plVar15[1];
          plVar10 = plVar15;
          plVar15 = plVar4;
        } while (plVar4 != (longlong *)0x0);
      }
      else {
        for (plVar15 = (longlong *)*plVar10; plVar4 = plVar10, plVar15 != (longlong *)0x0;
            plVar15 = (longlong *)*plVar15) {
          plVar10 = plVar15;
        }
      }
      goto joined_r0x00018000d286;
    }
LAB_18000d3b4:
    (**(code **)(*(longlong *)param_1[5] + 0x18))((longlong *)param_1[5],plVar9);
    plVar9 = local_f8;
    while (plVar9 != (longlong *)0x0) {
      FUN_180003f00(&local_f8,(undefined8 *)plVar9[2]);
      plVar4 = (longlong *)*plVar9;
      free((void *)plVar9[-2]);
      plVar9[-2] = 0;
      free(plVar9 + -2);
      plVar9 = plVar4;
    }
  }
  free(local_e0);
  local_e0 = (char *)0x0;
  free(local_118);
  local_118 = (char *)0x0;
  free(local_48[0]);
  local_48[0] = (undefined1 *)0x0;
  local_60 = local_60 & 0xffffffff00000000;
  free(local_68);
  puVar16 = (undefined8 *)((ulonglong)((int)local_a8 - 1) * 0x10 + (longlong)local_b0);
  for (iVar7 = (int)local_a8; iVar7 != 0; iVar7 = iVar7 + -1) {
    free((void *)*puVar16);
    *puVar16 = 0;
    puVar16 = puVar16 + -2;
  }
  local_a8 = local_a8 & 0xffffffff00000000;
  free(local_b0);
  return;
}



// WARNING: Removing unreachable block (ram,0x00018000d4d9)
// WARNING: Removing unreachable block (ram,0x00018000d51e)

longlong * FUN_18000d490(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  void *_Dst;
  undefined1 *puVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  longlong local_28 [2];
  
  _Dst = (void *)0x0;
  pcVar1 = "Mesh ";
  pvVar3 = _Dst;
  do {
    if (*pcVar1 == '\0') break;
    uVar5 = (int)pvVar3 + 1;
    pvVar3 = (void *)(ulonglong)uVar5;
    pcVar1 = pcVar1 + 1;
  } while (uVar5 != 0xffffffff);
  uVar5 = (uint)pvVar3;
  if (uVar5 != 0) {
    _Dst = malloc((ulonglong)(uVar5 + 1));
    memcpy(_Dst,&DAT_18001da04,(size_t)pvVar3);
    *(undefined1 *)((longlong)pvVar3 + (longlong)_Dst) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x48);
  *param_2 = 0;
  param_2[1] = 0;
  iVar4 = uVar5 + iVar4;
  if (iVar4 != 0) {
    puVar2 = malloc((ulonglong)(iVar4 + 1));
    *puVar2 = 0;
    free((void *)0x0);
    *param_2 = (longlong)puVar2;
    *(int *)((longlong)param_2 + 0xc) = iVar4;
  }
  if (param_2 != local_28) {
    pvVar3 = (void *)*param_2;
    if (uVar5 == 0) {
      free(pvVar3);
      *param_2 = 0;
      param_2[1] = 0;
    }
    else if (*(uint *)((longlong)param_2 + 0xc) < uVar5) {
      free(pvVar3);
      *(uint *)(param_2 + 1) = uVar5;
      *(uint *)((longlong)param_2 + 0xc) = uVar5;
      pvVar3 = malloc((ulonglong)(uVar5 + 1));
      *param_2 = (longlong)pvVar3;
      memcpy(pvVar3,_Dst,(ulonglong)(uVar5 + 1));
    }
    else {
      *(uint *)(param_2 + 1) = uVar5;
      memcpy(pvVar3,_Dst,(ulonglong)(uVar5 + 1));
    }
  }
  FUN_1800035a0(param_2,(undefined8 *)(param_1 + 0x40));
  free(_Dst);
  return param_2;
}



undefined8 * FUN_18000d5e0(undefined8 *param_1,ulonglong param_2)

{
  free((void *)param_1[8]);
  param_1[8] = 0;
  *param_1 = ICompilationFrontEnd::vftable;
  FUN_18000aa30(param_1 + 1,(undefined8 *)param_1[1]);
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



char * FUN_18000d650(longlong param_1,char *param_2)

{
  fs::root_path(param_2);
  return param_2;
}



undefined8 FUN_18000d680(longlong param_1,char *param_2)

{
  FUN_180003200((undefined8 *)(param_1 + 0x40),param_2);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00018000d6e9)
// WARNING: Removing unreachable block (ram,0x00018000d72e)

longlong * FUN_18000d6a0(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  void *_Dst;
  undefined1 *puVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  longlong local_28 [2];
  
  _Dst = (void *)0x0;
  pcVar1 = "Sound ";
  pvVar3 = _Dst;
  do {
    if (*pcVar1 == '\0') break;
    uVar5 = (int)pvVar3 + 1;
    pvVar3 = (void *)(ulonglong)uVar5;
    pcVar1 = pcVar1 + 1;
  } while (uVar5 != 0xffffffff);
  uVar5 = (uint)pvVar3;
  if (uVar5 != 0) {
    _Dst = malloc((ulonglong)(uVar5 + 1));
    memcpy(_Dst,"Sound ",(size_t)pvVar3);
    *(undefined1 *)((longlong)pvVar3 + (longlong)_Dst) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x48);
  *param_2 = 0;
  param_2[1] = 0;
  iVar4 = uVar5 + iVar4;
  if (iVar4 != 0) {
    puVar2 = malloc((ulonglong)(iVar4 + 1));
    *puVar2 = 0;
    free((void *)0x0);
    *param_2 = (longlong)puVar2;
    *(int *)((longlong)param_2 + 0xc) = iVar4;
  }
  if (param_2 != local_28) {
    pvVar3 = (void *)*param_2;
    if (uVar5 == 0) {
      free(pvVar3);
      *param_2 = 0;
      param_2[1] = 0;
    }
    else if (*(uint *)((longlong)param_2 + 0xc) < uVar5) {
      free(pvVar3);
      *(uint *)(param_2 + 1) = uVar5;
      *(uint *)((longlong)param_2 + 0xc) = uVar5;
      pvVar3 = malloc((ulonglong)(uVar5 + 1));
      *param_2 = (longlong)pvVar3;
      memcpy(pvVar3,_Dst,(ulonglong)(uVar5 + 1));
    }
    else {
      *(uint *)(param_2 + 1) = uVar5;
      memcpy(pvVar3,_Dst,(ulonglong)(uVar5 + 1));
    }
  }
  FUN_1800035a0(param_2,(undefined8 *)(param_1 + 0x40));
  free(_Dst);
  return param_2;
}



undefined8 * FUN_18000d7f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CPassThru_FrontEnd::vftable;
  free((void *)param_1[8]);
  param_1[8] = 0;
  *param_1 = ICompilationFrontEnd::vftable;
  FUN_18000aa30(param_1 + 1,(undefined8 *)param_1[1]);
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



undefined8 *
FUN_18000d870(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  switch(param_1) {
  case 0x10:
    puVar1 = malloc(0x50);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined4 *)(puVar1 + 3) = 0x3d;
      *(undefined4 *)(puVar1 + 4) = 0x10;
      puVar1[5] = param_2;
      puVar1[6] = param_3;
      puVar1[7] = param_4;
      *puVar1 = CMeshes_FrontEnd::vftable;
      puVar1[8] = 0;
      puVar1[9] = 0;
      return puVar1;
    }
    break;
  default:
    return (undefined8 *)0x0;
  case 0x20:
    puVar1 = malloc(0x58);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined4 *)(puVar1 + 3) = 0x3d;
      *(undefined4 *)(puVar1 + 4) = 0x20;
      puVar1[5] = param_2;
      puVar1[6] = param_3;
      puVar1[7] = param_4;
      *puVar1 = CTextures_FrontEnd::vftable;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      return puVar1;
    }
    break;
  case 0x30:
    puVar1 = malloc(0x68);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined4 *)(puVar1 + 3) = 0x3d;
      *(undefined4 *)(puVar1 + 4) = 0x30;
      puVar1[5] = param_2;
      puVar1[6] = param_3;
      puVar1[7] = param_4;
      *puVar1 = CMaterials_FrontEnd::vftable;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      return puVar1;
    }
    break;
  case 0x40:
    puVar1 = malloc(0x50);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined4 *)(puVar1 + 3) = 0x3d;
      *(undefined4 *)(puVar1 + 4) = 0x40;
      puVar1[5] = param_2;
      puVar1[6] = param_3;
      puVar1[7] = param_4;
      *puVar1 = CAnimation_FrontEnd::vftable;
      puVar1[8] = 0;
      puVar1[9] = 0;
      return puVar1;
    }
    break;
  case 0x42:
    puVar1 = malloc(0x50);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined4 *)(puVar1 + 3) = 0x3d;
      *(undefined4 *)(puVar1 + 4) = 0x42;
      puVar1[5] = param_2;
      puVar1[6] = param_3;
      puVar1[7] = param_4;
      *puVar1 = CAnimationScr_FrontEnd::vftable;
      puVar1[8] = 0;
      puVar1[9] = 0;
      return puVar1;
    }
    break;
  case 0x50:
    puVar1 = malloc(0xd0);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined4 *)(puVar1 + 3) = 0x3d;
      *(undefined4 *)(puVar1 + 4) = 0x50;
      puVar1[5] = param_2;
      puVar1[6] = param_3;
      puVar1[7] = param_4;
      *puVar1 = CFX_FrontEnd::vftable;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      *(undefined4 *)(puVar1 + 0xc) = 0;
      *(undefined4 *)(puVar1 + 0xd) = 0x3d;
      puVar1[0xe] = 0;
      puVar1[0xf] = 0;
      *(undefined4 *)(puVar1 + 0x10) = 0;
      *(undefined4 *)(puVar1 + 0x11) = 0x3d;
      puVar1[0x12] = 0;
      puVar1[0x13] = 0;
      *(undefined4 *)(puVar1 + 0x14) = 0;
      *(undefined4 *)(puVar1 + 0x15) = 0x3d;
      puVar1[0x16] = 0;
      puVar1[0x17] = 0;
      *(undefined4 *)(puVar1 + 0x18) = 0;
      *(undefined4 *)(puVar1 + 0x19) = 0x3d;
      return puVar1;
    }
    break;
  case 0x61:
    puVar1 = malloc(0x58);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined4 *)(puVar1 + 3) = 0x3d;
      *(undefined4 *)(puVar1 + 4) = 0x61;
      puVar1[5] = param_2;
      puVar1[6] = param_3;
      puVar1[7] = param_4;
      *puVar1 = CFlash_FrontEnd::vftable;
      puVar1[8] = 0;
      puVar1[9] = 0;
      *(undefined4 *)(puVar1 + 10) = 0x3d;
      return puVar1;
    }
    break;
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
    puVar1 = malloc(0x50);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined4 *)(puVar1 + 3) = 0x3d;
      *(undefined4 *)(puVar1 + 4) = 0x65;
      puVar1[5] = param_2;
      puVar1[6] = param_3;
      puVar1[7] = param_4;
      *puVar1 = CPassThru_FrontEnd::vftable;
      puVar1[8] = 0;
      puVar1[9] = 0;
      return puVar1;
    }
    break;
  case 0xf8:
    puVar1 = malloc(0x50);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined4 *)(puVar1 + 3) = 0x3d;
      *(undefined4 *)(puVar1 + 4) = 0xf8;
      puVar1[5] = param_2;
      puVar1[6] = param_3;
      puVar1[7] = param_4;
      *puVar1 = CTinyObjects_FrontEnd::vftable;
      puVar1[8] = 0;
      puVar1[9] = 0;
      return puVar1;
    }
  }
  return (undefined8 *)0x0;
}



void FUN_18000dd80(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  uVar3 = *(int *)(param_1 + 0x50) + 1;
  if (*(uint *)(param_1 + 0x54) < uVar3) {
    uVar1 = (*(uint *)(param_1 + 0x54) * 10 >> 3) + 0x10 & 0xfffffff0;
    if (uVar1 < uVar3) {
      uVar1 = uVar3;
    }
    *(uint *)(param_1 + 0x54) = uVar1;
    pvVar2 = realloc(*(void **)(param_1 + 0x48),(ulonglong)(uVar1 * 0x50));
    *(void **)(param_1 + 0x48) = pvVar2;
  }
  puVar4 = (undefined8 *)
           ((ulonglong)*(uint *)(param_1 + 0x50) * 0x50 + *(longlong *)(param_1 + 0x48));
  if (puVar4 != (undefined8 *)0x0) {
    FUN_18000dfb0(puVar4,param_2);
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  return;
}



void FUN_18000ddf0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  uVar3 = *(int *)(param_1 + 0x68) + 1;
  if (*(uint *)(param_1 + 0x6c) < uVar3) {
    uVar1 = (*(uint *)(param_1 + 0x6c) * 10 >> 3) + 0x10 & 0xfffffff0;
    if (uVar1 < uVar3) {
      uVar1 = uVar3;
    }
    *(uint *)(param_1 + 0x6c) = uVar1;
    pvVar2 = realloc(*(void **)(param_1 + 0x60),(ulonglong)(uVar1 * 0x78));
    *(void **)(param_1 + 0x60) = pvVar2;
  }
  puVar4 = (undefined8 *)
           ((ulonglong)*(uint *)(param_1 + 0x68) * 0x78 + *(longlong *)(param_1 + 0x60));
  if (puVar4 != (undefined8 *)0x0) {
    FUN_18000e0b0(puVar4,param_2);
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  return;
}



void FUN_18000de60(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  char *_Src;
  char *pcVar2;
  ulonglong uVar3;
  char *local_res8;
  undefined8 local_18 [2];
  
  _Src = (char *)*param_2;
  if ((_Src == (char *)0x0) || (*_Src == '\0')) {
    pcVar2 = (char *)0x0;
  }
  else {
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
  }
  local_res8 = pcVar2;
  FUN_18000e1d0((longlong *)(param_1 + 0x78),local_18,(longlong *)&local_res8);
                    // WARNING: Could not recover jumptable at 0x00018000dee2. Too many branches
                    // WARNING: Treating indirect jump as call
  operator_delete__(pcVar2);
  return;
}



void FUN_18000def0(longlong param_1,char *param_2,char *param_3)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  longlong *plVar4;
  
  uVar3 = *(int *)(param_1 + 0x98) + 1;
  if (*(uint *)(param_1 + 0x9c) < uVar3) {
    uVar1 = (*(uint *)(param_1 + 0x9c) * 10 >> 3) + 0x10 & 0xfffffff0;
    if (uVar1 < uVar3) {
      uVar1 = uVar3;
    }
    *(uint *)(param_1 + 0x9c) = uVar1;
    pvVar2 = realloc(*(void **)(param_1 + 0x90),(ulonglong)(uVar1 << 4));
    *(void **)(param_1 + 0x90) = pvVar2;
  }
  plVar4 = (longlong *)((ulonglong)*(uint *)(param_1 + 0x98) * 0x10 + *(longlong *)(param_1 + 0x90))
  ;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = 0;
    plVar4[1] = 0;
  }
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  if ((char *)*plVar4 != param_2) {
    FUN_18000a240(plVar4,param_2);
  }
  if ((char *)plVar4[1] != param_3) {
    FUN_18000a240(plVar4 + 1,param_3);
  }
  return;
}



undefined8 * FUN_18000dfb0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  byte bVar3;
  
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
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  *(byte *)(param_1 + 9) =
       *(byte *)(param_1 + 9) ^ (*(byte *)(param_1 + 9) ^ *(byte *)(param_2 + 9)) & 1;
  bVar3 = (*(byte *)(param_2 + 9) ^ *(byte *)(param_1 + 9)) & 2 ^ *(byte *)(param_1 + 9);
  *(byte *)(param_1 + 9) = bVar3;
  *(byte *)(param_1 + 9) = (*(byte *)(param_2 + 9) ^ bVar3) & 4 ^ bVar3;
  return param_1;
}



undefined8 * FUN_18000e0b0(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  return param_1;
}



undefined8 * FUN_18000e1d0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  byte *pbVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  
  plVar9 = (longlong *)0x0;
  bVar13 = false;
  if ((longlong *)*param_1 != (longlong *)0x0) {
    pbVar2 = (byte *)*param_3;
    plVar12 = (longlong *)*param_1;
    do {
      plVar9 = plVar12;
      if (pbVar2 == (byte *)0x0) {
LAB_18000e244:
        bVar13 = true;
LAB_18000e249:
        if (((char *)plVar9[-1] == (char *)0x0) || (*(char *)plVar9[-1] == '\0')) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        iVar10 = (uint)!bVar13 - (uint)!bVar4;
      }
      else {
        if (plVar9[-1] == 0) {
          if (*pbVar2 == 0) goto LAB_18000e244;
          bVar13 = false;
          goto LAB_18000e249;
        }
        pbVar6 = pbVar2;
        do {
          bVar1 = *pbVar6;
          if (bVar1 != pbVar6[plVar9[-1] - (longlong)pbVar2]) {
            uVar3 = (uint)(bVar1 < pbVar6[plVar9[-1] - (longlong)pbVar2]);
            iVar10 = (1 - uVar3) - (uint)(uVar3 != 0);
            goto LAB_18000e270;
          }
          pbVar6 = pbVar6 + 1;
        } while (bVar1 != 0);
        iVar10 = 0;
      }
LAB_18000e270:
      bVar13 = iVar10 < 0;
      if (bVar13) {
        plVar12 = (longlong *)*plVar9;
      }
      else {
        plVar12 = (longlong *)plVar9[2];
      }
    } while (plVar12 != (longlong *)0x0);
  }
  plVar12 = plVar9;
  if (bVar13 != false) {
    plVar12 = (longlong *)*plVar9;
    if (plVar12 == (longlong *)0x0) {
      plVar7 = plVar9;
      plVar11 = (longlong *)plVar9[1];
      if ((longlong *)plVar9[1] == (longlong *)0x0) goto LAB_18000e2f6;
      do {
        plVar12 = plVar11;
        if (plVar7 != (longlong *)*plVar11) break;
        plVar12 = (longlong *)plVar11[1];
        plVar7 = plVar11;
        plVar11 = plVar12;
      } while (plVar12 != (longlong *)0x0);
    }
    else {
      for (plVar7 = (longlong *)plVar12[2]; plVar7 != (longlong *)0x0;
          plVar7 = (longlong *)plVar7[2]) {
        plVar12 = plVar7;
      }
    }
  }
  if ((plVar12 != (longlong *)0x0) &&
     (uVar5 = FUN_18000e3d0(plVar12 + -1,param_3), (char)uVar5 == '\0')) {
    *param_2 = plVar12;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_18000e2f6:
  puVar8 = malloc(0x28);
  if (puVar8 != (undefined8 *)0x0) {
    FUN_18000e350(puVar8,param_3);
  }
  plVar9 = FUN_180003f70(param_1,puVar8 + 1,bVar13,plVar9);
  *(undefined1 *)(param_2 + 1) = 1;
  *param_2 = plVar9;
  return param_2;
}



undefined8 * FUN_18000e350(undefined8 *param_1,undefined8 *param_2)

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



undefined4 FUN_18000e3d0(undefined8 *param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  longlong lVar7;
  
  pbVar6 = (byte *)*param_1;
  bVar3 = true;
  bVar4 = false;
  if (pbVar6 != (byte *)0x0) {
    if (*param_2 != 0) {
      lVar7 = *param_2 - (longlong)pbVar6;
      do {
        bVar1 = *pbVar6;
        if (bVar1 != pbVar6[lVar7]) {
          uVar2 = (uint)(bVar1 < pbVar6[lVar7]);
          iVar5 = (1 - uVar2) - (uint)(uVar2 != 0);
          return CONCAT31((int3)((uint)iVar5 >> 8),iVar5 < 0);
        }
        pbVar6 = pbVar6 + 1;
      } while (bVar1 != 0);
      return 0;
    }
    if (*pbVar6 != 0) goto LAB_18000e422;
  }
  bVar4 = true;
LAB_18000e422:
  if (((char *)*param_2 != (char *)0x0) && (*(char *)*param_2 != '\0')) {
    bVar3 = false;
  }
  return CONCAT31((int3)((uint)!bVar4 - (uint)!bVar3 >> 8),(int)((uint)!bVar4 - (uint)!bVar3) < 0);
}



// WARNING: Removing unreachable block (ram,0x00018000e499)
// WARNING: Removing unreachable block (ram,0x00018000e4de)

longlong * FUN_18000e450(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  void *_Dst;
  undefined1 *puVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  longlong local_28 [2];
  
  _Dst = (void *)0x0;
  pcVar1 = "Texture ";
  pvVar3 = _Dst;
  do {
    if (*pcVar1 == '\0') break;
    uVar5 = (int)pvVar3 + 1;
    pvVar3 = (void *)(ulonglong)uVar5;
    pcVar1 = pcVar1 + 1;
  } while (uVar5 != 0xffffffff);
  uVar5 = (uint)pvVar3;
  if (uVar5 != 0) {
    _Dst = malloc((ulonglong)(uVar5 + 1));
    memcpy(_Dst,"Texture ",(size_t)pvVar3);
    *(undefined1 *)((longlong)pvVar3 + (longlong)_Dst) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x48);
  *param_2 = 0;
  param_2[1] = 0;
  iVar4 = uVar5 + iVar4;
  if (iVar4 != 0) {
    puVar2 = malloc((ulonglong)(iVar4 + 1));
    *puVar2 = 0;
    free((void *)0x0);
    *param_2 = (longlong)puVar2;
    *(int *)((longlong)param_2 + 0xc) = iVar4;
  }
  if (param_2 != local_28) {
    pvVar3 = (void *)*param_2;
    if (uVar5 == 0) {
      free(pvVar3);
      *param_2 = 0;
      param_2[1] = 0;
    }
    else if (*(uint *)((longlong)param_2 + 0xc) < uVar5) {
      free(pvVar3);
      *(uint *)(param_2 + 1) = uVar5;
      *(uint *)((longlong)param_2 + 0xc) = uVar5;
      pvVar3 = malloc((ulonglong)(uVar5 + 1));
      *param_2 = (longlong)pvVar3;
      memcpy(pvVar3,_Dst,(ulonglong)(uVar5 + 1));
    }
    else {
      *(uint *)(param_2 + 1) = uVar5;
      memcpy(pvVar3,_Dst,(ulonglong)(uVar5 + 1));
    }
  }
  FUN_1800035a0(param_2,(undefined8 *)(param_1 + 0x40));
  free(_Dst);
  return param_2;
}



void FUN_18000e5a0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  if (param_2 != '\0') {
    uVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  return;
}



undefined8 * FUN_18000e5c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CTextures_FrontEnd::vftable;
  IL_DestroyImage();
  free((void *)param_1[8]);
  param_1[8] = 0;
  *param_1 = ICompilationFrontEnd::vftable;
  FUN_18000aa30(param_1 + 1,(undefined8 *)param_1[1]);
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



bool FUN_18000e650(longlong param_1,char *param_2,uint param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  
  FUN_180003200((undefined8 *)(param_1 + 0x40),param_2);
  if ((param_3 & 5) == 0) {
    if ((param_3 & 8) != 0) {
      bVar1 = fs::exists(param_2);
      return !bVar1;
    }
    lVar2 = IL_LoadImage(param_2,1);
    *(longlong *)(param_1 + 0x50) = lVar2;
    if (lVar2 == 0) {
      FUN_1800018d0(*(longlong **)(param_1 + 0x30),"Cannot load image file (%s)!\n",param_2,param_4)
      ;
      return true;
    }
  }
  return false;
}



void FUN_18000e6f0(undefined8 param_1,undefined8 param_2)

{
                    // WARNING: Could not recover jumptable at 0x00018000e6f3. Too many branches
                    // WARNING: Treating indirect jump as call
  IL_FormatFromStr(param_2);
  return;
}



// WARNING: Removing unreachable block (ram,0x00018000e749)
// WARNING: Removing unreachable block (ram,0x00018000e7aa)

int FUN_18000e700(longlong *param_1,int param_2)

{
  int iVar1;
  char *_Src;
  undefined1 *puVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 *local_28;
  uint local_20;
  uint local_1c;
  void *local_18;
  uint local_10;
  uint local_c;
  
  _Src = (char *)IL_FormatStr(0xffff);
  uVar3 = 0;
  pcVar4 = _Src;
  do {
    if (*pcVar4 == '\0') break;
    uVar3 = uVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (uVar3 != 0xffffffff);
  local_20 = uVar3;
  local_1c = uVar3;
  if (uVar3 == 0) {
    local_28 = (undefined1 *)0x0;
  }
  else {
    local_28 = malloc((ulonglong)(uVar3 + 1));
    memcpy(local_28,_Src,(ulonglong)uVar3);
    local_28[local_20] = 0;
  }
  uVar3 = 0;
  pcVar4 = "format";
  do {
    if (*pcVar4 == '\0') break;
    uVar3 = uVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (uVar3 != 0xffffffff);
  local_10 = uVar3;
  local_c = uVar3;
  if (uVar3 == 0) {
    local_18 = (void *)0x0;
  }
  else {
    local_18 = malloc((ulonglong)(uVar3 + 1));
    memcpy(local_18,"format",(ulonglong)uVar3);
    *(undefined1 *)((ulonglong)local_10 + (longlong)local_18) = 0;
  }
  iVar1 = (**(code **)(*param_1 + 0x38))(param_1,&local_18,&local_28);
  free(local_18);
  if (iVar1 != 0) {
    if (param_2 != 0xffff) {
      free(local_28);
      return param_2;
    }
    if (param_1[10] != 0) {
      iVar1 = (**(code **)(*(longlong *)param_1[10] + 0x68))();
      goto LAB_18000e861;
    }
  }
  puVar2 = &DAT_1800198fb;
  if (local_28 != (undefined1 *)0x0) {
    puVar2 = local_28;
  }
  iVar1 = (**(code **)(*param_1 + 0x60))(param_1,puVar2);
LAB_18000e861:
  free(local_28);
  return iVar1;
}



undefined8 FUN_18000e890(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
                    // WARNING: Could not recover jumptable at 0x00018000e89e. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x68))();
    return uVar1;
  }
  return 0xffff;
}



undefined8 FUN_18000e8b0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
                    // WARNING: Could not recover jumptable at 0x00018000e8b9. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = IL_CreateImageFromImage();
    return uVar1;
  }
  return 0;
}



undefined8 * FUN_18000e8d0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != 0) {
    *(int *)(param_2 + 1) = iVar1;
    *(int *)((longlong)param_2 + 0xc) = iVar1;
    _Dst = malloc((ulonglong)(iVar1 + 1U));
    _Src = *(void **)(param_1 + 0x40);
    *param_2 = _Dst;
    memcpy(_Dst,_Src,(ulonglong)(iVar1 + 1U));
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



undefined8 * FUN_18000e940(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 != 0) {
    *(int *)(param_2 + 1) = iVar1;
    *(int *)((longlong)param_2 + 0xc) = iVar1;
    _Dst = malloc((ulonglong)(iVar1 + 1U));
    _Src = *(void **)(param_1 + 0x50);
    *param_2 = _Dst;
    memcpy(_Dst,_Src,(ulonglong)(iVar1 + 1U));
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// WARNING: Removing unreachable block (ram,0x00018000e9f9)
// WARNING: Removing unreachable block (ram,0x00018000ea3e)

longlong * FUN_18000e9b0(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  void *_Dst;
  undefined1 *puVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  longlong local_28 [2];
  
  _Dst = (void *)0x0;
  pcVar1 = "Material ";
  pvVar3 = _Dst;
  do {
    if (*pcVar1 == '\0') break;
    uVar5 = (int)pvVar3 + 1;
    pvVar3 = (void *)(ulonglong)uVar5;
    pcVar1 = pcVar1 + 1;
  } while (uVar5 != 0xffffffff);
  uVar5 = (uint)pvVar3;
  if (uVar5 != 0) {
    _Dst = malloc((ulonglong)(uVar5 + 1));
    memcpy(_Dst,"Material ",(size_t)pvVar3);
    *(undefined1 *)((longlong)pvVar3 + (longlong)_Dst) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x48);
  *param_2 = 0;
  param_2[1] = 0;
  iVar4 = uVar5 + iVar4;
  if (iVar4 != 0) {
    puVar2 = malloc((ulonglong)(iVar4 + 1));
    *puVar2 = 0;
    free((void *)0x0);
    *param_2 = (longlong)puVar2;
    *(int *)((longlong)param_2 + 0xc) = iVar4;
  }
  if (param_2 != local_28) {
    pvVar3 = (void *)*param_2;
    if (uVar5 == 0) {
      free(pvVar3);
      *param_2 = 0;
      param_2[1] = 0;
    }
    else if (*(uint *)((longlong)param_2 + 0xc) < uVar5) {
      free(pvVar3);
      *(uint *)(param_2 + 1) = uVar5;
      *(uint *)((longlong)param_2 + 0xc) = uVar5;
      pvVar3 = malloc((ulonglong)(uVar5 + 1));
      *param_2 = (longlong)pvVar3;
      memcpy(pvVar3,_Dst,(ulonglong)(uVar5 + 1));
    }
    else {
      *(uint *)(param_2 + 1) = uVar5;
      memcpy(pvVar3,_Dst,(ulonglong)(uVar5 + 1));
    }
  }
  FUN_1800035a0(param_2,(undefined8 *)(param_1 + 0x40));
  free(_Dst);
  return param_2;
}



undefined8 * FUN_18000eb00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CMaterials_FrontEnd::vftable;
  free((void *)param_1[10]);
  param_1[10] = 0;
  free((void *)param_1[8]);
  param_1[8] = 0;
  *param_1 = ICompilationFrontEnd::vftable;
  FUN_18000aa30(param_1 + 1,(undefined8 *)param_1[1]);
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



undefined8 FUN_18000eb90(longlong param_1,char *param_2,ulonglong param_3)

{
  string_base<char> *psVar1;
  bool bVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  void *local_38 [2];
  void *local_28 [2];
  
  if ((param_3 & 1) == 0) {
    bVar2 = fs::exists(param_2);
    psVar1 = (string_base<char> *)(param_1 + 0x40);
    if (bVar2) {
      FUN_180003200((undefined8 *)psVar1,param_2);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else {
      fs::unmangle_file_name(param_2,psVar1,(uint *)(param_1 + 0x60));
      pcVar4 = "";
      if (*(char **)psVar1 != (char *)0x0) {
        pcVar4 = *(char **)psVar1;
      }
      bVar2 = fs::exists(pcVar4);
      if (!bVar2) {
        return 1;
      }
    }
  }
  else {
    fs::unmangle_file_name(param_2,(string_base<char> *)(param_1 + 0x40),(uint *)(param_1 + 0x60));
  }
  puVar3 = (undefined8 *)fs::root_path((char *)local_28);
  puVar6 = &DAT_1800198fb;
  if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)*puVar3;
  }
  puVar3 = (undefined8 *)fs::mangle_file_name((char *)local_38,(uint)puVar6);
  puVar5 = (undefined8 *)(param_1 + 0x50);
  if (puVar5 != puVar3) {
    free((void *)*puVar5);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *puVar5 = 0;
    *puVar5 = *puVar3;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(puVar3 + 1);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)((longlong)puVar3 + 0xc);
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  free(local_38[0]);
  local_38[0] = (void *)0x0;
  free(local_28[0]);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00018000ed19)
// WARNING: Removing unreachable block (ram,0x00018000ed5e)

longlong * FUN_18000ecd0(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  void *_Dst;
  undefined1 *puVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  longlong local_28 [2];
  
  _Dst = (void *)0x0;
  pcVar1 = "FX ";
  pvVar3 = _Dst;
  do {
    if (*pcVar1 == '\0') break;
    uVar5 = (int)pvVar3 + 1;
    pvVar3 = (void *)(ulonglong)uVar5;
    pcVar1 = pcVar1 + 1;
  } while (uVar5 != 0xffffffff);
  uVar5 = (uint)pvVar3;
  if (uVar5 != 0) {
    _Dst = malloc((ulonglong)(uVar5 + 1));
    memcpy(_Dst,&DAT_18001dd18,(size_t)pvVar3);
    *(undefined1 *)((longlong)pvVar3 + (longlong)_Dst) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x48);
  *param_2 = 0;
  param_2[1] = 0;
  iVar4 = uVar5 + iVar4;
  if (iVar4 != 0) {
    puVar2 = malloc((ulonglong)(iVar4 + 1));
    *puVar2 = 0;
    free((void *)0x0);
    *param_2 = (longlong)puVar2;
    *(int *)((longlong)param_2 + 0xc) = iVar4;
  }
  if (param_2 != local_28) {
    pvVar3 = (void *)*param_2;
    if (uVar5 == 0) {
      free(pvVar3);
      *param_2 = 0;
      param_2[1] = 0;
    }
    else if (*(uint *)((longlong)param_2 + 0xc) < uVar5) {
      free(pvVar3);
      *(uint *)(param_2 + 1) = uVar5;
      *(uint *)((longlong)param_2 + 0xc) = uVar5;
      pvVar3 = malloc((ulonglong)(uVar5 + 1));
      *param_2 = (longlong)pvVar3;
      memcpy(pvVar3,_Dst,(ulonglong)(uVar5 + 1));
    }
    else {
      *(uint *)(param_2 + 1) = uVar5;
      memcpy(pvVar3,_Dst,(ulonglong)(uVar5 + 1));
    }
  }
  FUN_1800035a0(param_2,(undefined8 *)(param_1 + 0x40));
  free(_Dst);
  return param_2;
}



undefined8 * FUN_18000ee20(undefined8 *param_1,uint param_2)

{
  FUN_18000ee50(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



void FUN_18000ee50(undefined8 *param_1)

{
  FUN_180003df0(param_1 + 0x16);
  FUN_180003df0(param_1 + 0x12);
  FUN_180003df0(param_1 + 0xe);
  FUN_180003df0(param_1 + 10);
  free((void *)param_1[8]);
  param_1[8] = 0;
  *param_1 = ICompilationFrontEnd::vftable;
  FUN_18000aa30(param_1 + 1,(undefined8 *)param_1[1]);
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe

ulonglong FUN_18000eed0(longlong *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  LPCSTR pCVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  __uint64 _Var6;
  LPCSTR pCVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined4 local_res10 [2];
  undefined8 auStack_50 [5];
  code *local_28;
  undefined8 local_20;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    auStack_50[0] = 0x18000f14e;
    FUN_1800018d0((longlong *)param_1[6],"[CFX_FrontEnd::ProcessResourceFromFile] no file name\n",
                  param_3,param_4);
  }
  else {
    auStack_50[0] = 0x18000ef0c;
    bVar4 = fs::exists(param_2);
    if (bVar4) {
      auStack_50[0] = 0x18000ef37;
      FUN_180003200(param_1 + 8,param_2);
      uVar10 = 0;
      local_28 = _vftable__exref;
      local_20 = 0;
      auStack_50[0] = 0x18000ef5d;
      bVar4 = fs::file::open((file *)&local_28,param_2,0,0);
      if (bVar4) {
        auStack_50[0] = 0x18000ef8d;
        _Var6 = fs::file::length((file *)&local_28);
        if (_Var6 != 0) {
          uVar9 = _Var6 + 0x10;
          if (uVar9 <= _Var6 + 1) {
            uVar9 = 0xffffffffffffff0;
          }
          auStack_50[0] = 0x18000efde;
          lVar3 = -(uVar9 & 0xfffffffffffffff0);
          pCVar1 = (LPCSTR)((longlong)&local_28 + lVar3);
          *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18000eff6;
          fs::file::read((file *)&local_28,pCVar1,_Var6);
          pCVar1[_Var6] = '\0';
          *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18000f007;
          uVar9 = FUN_18000afe0(param_2,local_res10);
          uVar11 = uVar9 & 0xffffffff;
          if ((int)uVar9 == 0) {
            switch(local_res10[0]) {
            case 0:
              *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18000f03f;
              FUN_18000f1a0(param_1,pCVar1);
              break;
            case 1:
              *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18000f04f;
              FUN_18000f2a0((longlong)param_1,pCVar1);
              break;
            case 2:
              *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18000f05f;
              FUN_18000f460(param_1,pCVar1);
              break;
            case 3:
              *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18000f06f;
              FUN_18000f7a0((longlong)param_1,pCVar1);
              break;
            case 4:
              *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18000f07f;
              FUN_18000f970((longlong)param_1,pCVar1);
              break;
            default:
              uVar11 = 2;
              break;
            case 6:
              *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18000f08f;
              FUN_18000fe60(param_1,pCVar1);
              break;
            case 7:
              *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18000f09f;
              FUN_18000ff50((longlong)param_1,pCVar1);
              break;
            case 8:
              *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18000f0af;
              FUN_1800101f0((longlong)param_1,pCVar1);
              break;
            case 9:
              *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18000f0bc;
              FUN_180010580((longlong)param_1,pCVar1);
              break;
            case 10:
              *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18000f0c9;
              FUN_18000fca0((longlong)param_1,pCVar1);
              break;
            case 0xb:
              plVar8 = (longlong *)param_1[5];
              pcVar2 = *(code **)(*plVar8 + 0xf8);
              *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18000f0dd;
              pCVar7 = (LPCSTR)(*pcVar2)(plVar8,10);
              *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18000f0e8;
              plVar8 = FUN_180010cb0(pCVar1,pCVar7);
              if (plVar8 != (longlong *)0x0) {
                *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18000f101;
                iVar5 = _stricmp((char *)(plVar8 + 1),"CameraShakeDef");
                if (iVar5 == 0) {
                  pcVar2 = *(code **)(*plVar8 + 8);
                  *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18000f114;
                  (*pcVar2)();
                }
                else {
                  pcVar2 = *(code **)(*plVar8 + 8);
                  *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18000f11c;
                  (*pcVar2)(plVar8,1);
                }
              }
            }
          }
          *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18000f12e;
          fs::file::~file((file *)&local_28);
          *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18000f139;
          FUN_180003200(param_1 + 8,param_2);
          return uVar11;
        }
        auStack_50[0] = 0x18000efa8;
        FUN_1800018d0((longlong *)param_1[6],
                      "[CFX_FrontEnd::ProcessResourceFromFile] empty file: %s\n",param_2,uVar10);
        auStack_50[0] = 0x18000efb2;
        fs::file::~file((file *)&local_28);
        return 2;
      }
      auStack_50[0] = 0x18000ef74;
      FUN_1800018d0((longlong *)param_1[6],
                    "[CFX_FrontEnd::ProcessResourceFromFile] unable to open file: %s\n",param_2,
                    uVar10);
      auStack_50[0] = 0x18000ef7e;
      fs::file::~file((file *)&local_28);
    }
    else {
      auStack_50[0] = 0x18000ef23;
      FUN_1800018d0((longlong *)param_1[6],
                    "[CFX_FrontEnd::ProcessResourceFromFile] file not found: %s\n",param_2,param_4);
    }
  }
  return 1;
}



undefined8 FUN_18000f1a0(longlong *param_1,LPCSTR param_2)

{
  longlong lVar1;
  int iVar2;
  LPCSTR pCVar3;
  longlong *plVar4;
  char *_Str1;
  
  pCVar3 = (LPCSTR)(**(code **)(*(longlong *)param_1[5] + 0xf8))((longlong *)param_1[5],8);
  plVar4 = FUN_180010cb0(param_2,pCVar3);
  if (plVar4 != (longlong *)0x0) {
    iVar2 = _stricmp((char *)(plVar4 + 1),"EmiterDef");
    if (iVar2 == 0) {
      for (lVar1 = plVar4[0x10]; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x78)) {
        iVar2 = _stricmp((char *)(lVar1 + 8),"CollisionAction");
        if (iVar2 == 0) {
          if (*(int *)(*(longlong *)(lVar1 + 0x70) + 0x10) == 2) {
            _Str1 = *(char **)(*(longlong *)(lVar1 + 0x70) + 0x28);
          }
          else {
            _Str1 = (char *)0x0;
          }
          iVar2 = _stricmp(_Str1,"spawn_fx");
          if ((iVar2 == 0) && (*(longlong *)(lVar1 + 0x80) != 0)) {
            FUN_180010750(param_1,*(longlong *)(lVar1 + 0x80));
          }
        }
      }
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return 0;
    }
    (**(code **)(*plVar4 + 8))(plVar4,1);
  }
  return 2;
}



// WARNING: Removing unreachable block (ram,0x00018000f366)

undefined8 FUN_18000f2a0(longlong param_1,LPCSTR param_2)

{
  undefined8 *puVar1;
  int iVar2;
  LPCSTR pCVar3;
  longlong *plVar4;
  char *pcVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  char *_Src;
  char *pcVar9;
  char *_Size;
  
  pCVar3 = (LPCSTR)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))
                             (*(longlong **)(param_1 + 0x28),0);
  plVar4 = FUN_180010cb0(param_2,pCVar3);
  if (plVar4 != (longlong *)0x0) {
    iVar2 = _stricmp((char *)(plVar4 + 1),"StandardDef");
    if (iVar2 == 0) {
      lVar7 = plVar4[0x10];
      if (lVar7 != 0) {
        pcVar9 = (char *)0x0;
        do {
          iVar2 = _stricmp((char *)(lVar7 + 8),"Material");
          if (iVar2 == 0) {
            pcVar5 = pcVar9;
            _Size = pcVar9;
            _Src = pcVar9;
            if (*(int *)(*(longlong *)(lVar7 + 0x70) + 0x10) == 2) {
              pcVar5 = *(char **)(*(longlong *)(lVar7 + 0x70) + 0x28);
              _Src = pcVar5;
            }
            do {
              if (*pcVar5 == '\0') break;
              uVar8 = (int)_Size + 1;
              _Size = (char *)(ulonglong)uVar8;
              pcVar5 = pcVar5 + 1;
            } while (uVar8 != 0xffffffff);
            iVar2 = (int)_Size;
            pcVar5 = pcVar9;
            if (iVar2 != 0) {
              pcVar5 = malloc((ulonglong)(iVar2 + 1));
              memcpy(pcVar5,_Src,(size_t)_Size);
              _Size[(longlong)pcVar5] = '\0';
            }
            puVar6 = malloc(0x20);
            if (puVar6 != (undefined8 *)0x0) {
              *puVar6 = pcVar5;
              *(int *)(puVar6 + 1) = iVar2;
              *(int *)((longlong)puVar6 + 0xc) = iVar2;
              pcVar5 = pcVar9;
            }
            puVar1 = puVar6 + 2;
            puVar6[3] = *(undefined8 *)(param_1 + 0x58);
            *puVar1 = 0;
            if (*(undefined8 **)(param_1 + 0x58) == (undefined8 *)0x0) {
              *(undefined8 **)(param_1 + 0x50) = puVar1;
            }
            else {
              **(undefined8 **)(param_1 + 0x58) = puVar1;
            }
            *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
            *(undefined8 **)(param_1 + 0x58) = puVar1;
            free(pcVar5);
            puVar6 = *(undefined8 **)(param_1 + 0x38);
            if (puVar6 != (undefined8 *)0x0) {
              pcVar5 = pcVar9;
              if (*(int *)(*(longlong *)(lVar7 + 0x70) + 0x10) == 2) {
                pcVar5 = *(char **)(*(longlong *)(lVar7 + 0x70) + 0x28);
              }
              (**(code **)*puVar6)(puVar6,pcVar5);
            }
          }
          lVar7 = *(longlong *)(lVar7 + 0x78);
        } while (lVar7 != 0);
      }
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return 0;
    }
    (**(code **)(*plVar4 + 8))(plVar4,1);
  }
  return 2;
}



// WARNING: Removing unreachable block (ram,0x00018000f558)
// WARNING: Removing unreachable block (ram,0x00018000f654)

int FUN_18000f460(longlong *param_1,LPCSTR param_2)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  LPCSTR pCVar6;
  longlong *plVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 *puVar10;
  void *pvVar11;
  void *pvVar12;
  longlong lVar13;
  undefined8 *puVar14;
  char *_Src;
  uint uVar15;
  char *_Src_00;
  char *_Size;
  
  pCVar6 = (LPCSTR)(**(code **)(*(longlong *)param_1[5] + 0xf8))((longlong *)param_1[5],1);
  plVar7 = FUN_180010cb0(param_2,pCVar6);
  if (plVar7 != (longlong *)0x0) {
    iVar5 = _stricmp((char *)(plVar7 + 1),"ParticleDef");
    if (iVar5 == 0) {
      puVar3 = (undefined8 *)param_1[7];
      lVar4 = plVar7[0x10];
      do {
        if (lVar4 == 0) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
          return 0;
        }
        pcVar9 = (char *)0x0;
        iVar5 = _stricmp((char *)(lVar4 + 8),"Material");
        if (iVar5 == 0) {
          lVar13 = *(longlong *)(lVar4 + 0x70);
          _Src = pcVar9;
          if (*(int *)(lVar13 + 0x10) == 2) {
            _Src = *(char **)(lVar13 + 0x28);
          }
          iVar5 = 1;
          do {
            lVar13 = *(longlong *)(lVar13 + 8);
            iVar5 = iVar5 + -1;
            pcVar8 = _Src;
            _Size = pcVar9;
            _Src_00 = pcVar9;
            if (lVar13 == 0) goto LAB_18000f544;
          } while (iVar5 != 0);
          if (*(int *)(lVar13 + 0x10) == 2) {
            _Src_00 = *(char **)(lVar13 + 0x28);
          }
LAB_18000f544:
          do {
            if (*pcVar8 == '\0') break;
            uVar15 = (int)_Size + 1;
            _Size = (char *)(ulonglong)uVar15;
            pcVar8 = pcVar8 + 1;
          } while (uVar15 != 0xffffffff);
          iVar5 = (int)_Size;
          if (iVar5 != 0) {
            pcVar9 = malloc((ulonglong)(iVar5 + 1));
            memcpy(pcVar9,_Src,(size_t)_Size);
            _Size[(longlong)pcVar9] = '\0';
          }
          puVar10 = malloc(0x20);
          if (puVar10 != (undefined8 *)0x0) {
            if (iVar5 == 0) {
              *puVar10 = 0;
              puVar10[1] = 0;
            }
            else {
              *(int *)(puVar10 + 1) = iVar5;
              *(int *)((longlong)puVar10 + 0xc) = iVar5;
              pvVar11 = malloc((ulonglong)(iVar5 + 1U));
              *puVar10 = pvVar11;
              memcpy(pvVar11,pcVar9,(ulonglong)(iVar5 + 1U));
            }
          }
          pvVar11 = (void *)0x0;
          puVar14 = puVar10 + 2;
          puVar10[3] = param_1[0xb];
          *puVar14 = 0;
          if ((undefined8 *)param_1[0xb] == (undefined8 *)0x0) {
            param_1[10] = (longlong)puVar14;
          }
          else {
            *(undefined8 *)param_1[0xb] = puVar14;
          }
          *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
          param_1[0xb] = (longlong)puVar14;
          free(pcVar9);
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,_Src);
          }
          lVar13 = (longlong)_Src_00 - (longlong)_Src;
          do {
            cVar1 = *_Src;
            cVar2 = _Src[lVar13];
            if (cVar1 != cVar2) break;
            _Src = _Src + 1;
          } while (cVar2 != '\0');
          pcVar9 = _Src_00;
          pvVar12 = pvVar11;
          if (cVar1 != cVar2) {
            do {
              if (*pcVar9 == '\0') break;
              uVar15 = (int)pvVar12 + 1;
              pvVar12 = (void *)(ulonglong)uVar15;
              pcVar9 = pcVar9 + 1;
            } while (uVar15 != 0xffffffff);
            iVar5 = (int)pvVar12;
            if (iVar5 != 0) {
              pvVar11 = malloc((ulonglong)(iVar5 + 1));
              memcpy(pvVar11,_Src_00,(size_t)pvVar12);
              *(undefined1 *)((longlong)pvVar12 + (longlong)pvVar11) = 0;
            }
            puVar10 = malloc(0x20);
            if (puVar10 != (undefined8 *)0x0) {
              if (iVar5 == 0) {
                *puVar10 = 0;
                puVar10[1] = 0;
              }
              else {
                *(int *)(puVar10 + 1) = iVar5;
                *(int *)((longlong)puVar10 + 0xc) = iVar5;
                pvVar12 = malloc((ulonglong)(iVar5 + 1U));
                *puVar10 = pvVar12;
                memcpy(pvVar12,pvVar11,(ulonglong)(iVar5 + 1U));
              }
            }
            puVar14 = puVar10 + 2;
            puVar10[3] = param_1[0xb];
            *puVar14 = 0;
            if ((undefined8 *)param_1[0xb] == (undefined8 *)0x0) {
              param_1[10] = (longlong)puVar14;
            }
            else {
              *(undefined8 *)param_1[0xb] = puVar14;
            }
            *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
            param_1[0xb] = (longlong)puVar14;
            free(pvVar11);
            if (puVar3 != (undefined8 *)0x0) {
              (**(code **)*puVar3)(puVar3,_Src_00);
            }
          }
        }
        else {
          iVar5 = FUN_180010750(param_1,lVar4);
          if (iVar5 != 0) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
            return iVar5;
          }
        }
        lVar4 = *(longlong *)(lVar4 + 0x78);
      } while( true );
    }
    (**(code **)(*plVar7 + 8))(plVar7,1);
  }
  return 2;
}



// WARNING: Removing unreachable block (ram,0x00018000f866)

undefined8 FUN_18000f7a0(longlong param_1,LPCSTR param_2)

{
  undefined8 *puVar1;
  int iVar2;
  LPCSTR pCVar3;
  longlong *plVar4;
  char *pcVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  char *_Src;
  char *pcVar9;
  char *_Size;
  
  pCVar3 = (LPCSTR)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))
                             (*(longlong **)(param_1 + 0x28),2);
  plVar4 = FUN_180010cb0(param_2,pCVar3);
  if (plVar4 != (longlong *)0x0) {
    iVar2 = _stricmp((char *)(plVar4 + 1),"TraceDef");
    if (iVar2 == 0) {
      lVar7 = plVar4[0x10];
      if (lVar7 != 0) {
        pcVar9 = (char *)0x0;
        do {
          iVar2 = _stricmp((char *)(lVar7 + 8),"Material");
          if (iVar2 == 0) {
            pcVar5 = pcVar9;
            _Size = pcVar9;
            _Src = pcVar9;
            if (*(int *)(*(longlong *)(lVar7 + 0x70) + 0x10) == 2) {
              pcVar5 = *(char **)(*(longlong *)(lVar7 + 0x70) + 0x28);
              _Src = pcVar5;
            }
            do {
              if (*pcVar5 == '\0') break;
              uVar8 = (int)_Size + 1;
              _Size = (char *)(ulonglong)uVar8;
              pcVar5 = pcVar5 + 1;
            } while (uVar8 != 0xffffffff);
            iVar2 = (int)_Size;
            pcVar5 = pcVar9;
            if (iVar2 != 0) {
              pcVar5 = malloc((ulonglong)(iVar2 + 1));
              memcpy(pcVar5,_Src,(size_t)_Size);
              _Size[(longlong)pcVar5] = '\0';
            }
            puVar6 = malloc(0x20);
            if (puVar6 != (undefined8 *)0x0) {
              *puVar6 = pcVar5;
              *(int *)(puVar6 + 1) = iVar2;
              *(int *)((longlong)puVar6 + 0xc) = iVar2;
              pcVar5 = pcVar9;
            }
            puVar1 = puVar6 + 2;
            puVar6[3] = *(undefined8 *)(param_1 + 0x58);
            *puVar1 = 0;
            if (*(undefined8 **)(param_1 + 0x58) == (undefined8 *)0x0) {
              *(undefined8 **)(param_1 + 0x50) = puVar1;
            }
            else {
              **(undefined8 **)(param_1 + 0x58) = puVar1;
            }
            *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
            *(undefined8 **)(param_1 + 0x58) = puVar1;
            free(pcVar5);
            puVar6 = *(undefined8 **)(param_1 + 0x38);
            if (puVar6 != (undefined8 *)0x0) {
              pcVar5 = pcVar9;
              if (*(int *)(*(longlong *)(lVar7 + 0x70) + 0x10) == 2) {
                pcVar5 = *(char **)(*(longlong *)(lVar7 + 0x70) + 0x28);
              }
              (**(code **)*puVar6)(puVar6,pcVar5);
            }
          }
          lVar7 = *(longlong *)(lVar7 + 0x78);
        } while (lVar7 != 0);
      }
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return 0;
    }
    (**(code **)(*plVar4 + 8))(plVar4,1);
  }
  return 2;
}



// WARNING: Removing unreachable block (ram,0x00018000faea)
// WARNING: Removing unreachable block (ram,0x00018000fba4)
// WARNING: Removing unreachable block (ram,0x00018000fa36)

undefined8 FUN_18000f970(longlong param_1,LPCSTR param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  LPCSTR pCVar4;
  longlong *plVar5;
  char *pcVar6;
  void *_Dst;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  uint uVar11;
  size_t sVar12;
  
  pCVar4 = (LPCSTR)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))
                             (*(longlong **)(param_1 + 0x28),3);
  plVar5 = FUN_180010cb0(param_2,pCVar4);
  if (plVar5 != (longlong *)0x0) {
    iVar3 = _stricmp((char *)(plVar5 + 1),"FlareDef");
    if (iVar3 == 0) {
      lVar1 = plVar5[0x10];
      puVar2 = *(undefined8 **)(param_1 + 0x38);
      do {
        if (lVar1 == 0) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
          return 0;
        }
        iVar3 = _stricmp((char *)(lVar1 + 8),"FlareMaterial");
        if (iVar3 == 0) {
          if (*(int *)(*(longlong *)(lVar1 + 0x70) + 0x10) == 2) {
            pcVar10 = *(char **)(*(longlong *)(lVar1 + 0x70) + 0x28);
          }
          else {
            pcVar10 = (char *)0x0;
          }
          sVar12 = 0;
          pcVar6 = pcVar10;
          do {
            if (*pcVar6 == '\0') break;
            uVar11 = (int)sVar12 + 1;
            sVar12 = (size_t)uVar11;
            pcVar6 = pcVar6 + 1;
          } while (uVar11 != 0xffffffff);
          iVar3 = (int)sVar12;
          if (iVar3 == 0) {
            _Dst = (void *)0x0;
          }
          else {
            _Dst = malloc((ulonglong)(iVar3 + 1));
            memcpy(_Dst,pcVar10,sVar12);
            *(undefined1 *)(sVar12 + (longlong)_Dst) = 0;
          }
          puVar7 = malloc(0x20);
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = _Dst;
            *(int *)(puVar7 + 1) = iVar3;
            *(int *)((longlong)puVar7 + 0xc) = iVar3;
            _Dst = (void *)0x0;
          }
          puVar8 = puVar7 + 2;
          puVar7[3] = *(undefined8 *)(param_1 + 0x58);
          *puVar8 = 0;
          if (*(undefined8 **)(param_1 + 0x58) == (undefined8 *)0x0) {
LAB_18000fc0b:
            *(undefined8 **)(param_1 + 0x50) = puVar8;
          }
          else {
            **(undefined8 **)(param_1 + 0x58) = puVar8;
          }
LAB_18000fc0f:
          *(undefined8 **)(param_1 + 0x58) = puVar8;
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
          free(_Dst);
          if (puVar2 != (undefined8 *)0x0) {
            if (*(int *)(*(longlong *)(lVar1 + 0x70) + 0x10) == 2) {
              uVar9 = *(undefined8 *)(*(longlong *)(lVar1 + 0x70) + 0x28);
            }
            else {
              uVar9 = 0;
            }
            (**(code **)*puVar2)(puVar2,uVar9);
          }
        }
        else {
          iVar3 = _stricmp((char *)(lVar1 + 8),"GlowMaterial");
          if (iVar3 == 0) {
            if (*(int *)(*(longlong *)(lVar1 + 0x70) + 0x10) == 2) {
              pcVar10 = *(char **)(*(longlong *)(lVar1 + 0x70) + 0x28);
            }
            else {
              pcVar10 = (char *)0x0;
            }
            sVar12 = 0;
            pcVar6 = pcVar10;
            do {
              if (*pcVar6 == '\0') break;
              uVar11 = (int)sVar12 + 1;
              sVar12 = (size_t)uVar11;
              pcVar6 = pcVar6 + 1;
            } while (uVar11 != 0xffffffff);
            iVar3 = (int)sVar12;
            if (iVar3 == 0) {
              _Dst = (void *)0x0;
            }
            else {
              _Dst = malloc((ulonglong)(iVar3 + 1));
              memcpy(_Dst,pcVar10,sVar12);
              *(undefined1 *)((longlong)_Dst + sVar12) = 0;
            }
            puVar7 = malloc(0x20);
            if (puVar7 != (undefined8 *)0x0) {
              *puVar7 = _Dst;
              *(int *)(puVar7 + 1) = iVar3;
              *(int *)((longlong)puVar7 + 0xc) = iVar3;
              _Dst = (void *)0x0;
            }
            puVar8 = puVar7 + 2;
            puVar7[3] = *(undefined8 *)(param_1 + 0x58);
            *puVar8 = 0;
            if (*(undefined8 **)(param_1 + 0x58) == (undefined8 *)0x0) goto LAB_18000fc0b;
            **(undefined8 **)(param_1 + 0x58) = puVar8;
            goto LAB_18000fc0f;
          }
          iVar3 = _stricmp((char *)(lVar1 + 8),"LensMaterial");
          if (iVar3 == 0) {
            if (*(int *)(*(longlong *)(lVar1 + 0x70) + 0x10) == 2) {
              pcVar10 = *(char **)(*(longlong *)(lVar1 + 0x70) + 0x28);
            }
            else {
              pcVar10 = (char *)0x0;
            }
            sVar12 = 0;
            pcVar6 = pcVar10;
            do {
              if (*pcVar6 == '\0') break;
              uVar11 = (int)sVar12 + 1;
              sVar12 = (size_t)uVar11;
              pcVar6 = pcVar6 + 1;
            } while (uVar11 != 0xffffffff);
            iVar3 = (int)sVar12;
            if (iVar3 == 0) {
              _Dst = (void *)0x0;
            }
            else {
              _Dst = malloc((ulonglong)(iVar3 + 1));
              memcpy(_Dst,pcVar10,sVar12);
              *(undefined1 *)((longlong)_Dst + sVar12) = 0;
            }
            puVar7 = malloc(0x20);
            if (puVar7 != (undefined8 *)0x0) {
              *puVar7 = _Dst;
              *(int *)(puVar7 + 1) = iVar3;
              *(int *)((longlong)puVar7 + 0xc) = iVar3;
              _Dst = (void *)0x0;
            }
            puVar8 = puVar7 + 2;
            puVar7[3] = *(undefined8 *)(param_1 + 0x58);
            *puVar8 = 0;
            if (*(undefined8 **)(param_1 + 0x58) == (undefined8 *)0x0) goto LAB_18000fc0b;
            **(undefined8 **)(param_1 + 0x58) = puVar8;
            goto LAB_18000fc0f;
          }
        }
        lVar1 = *(longlong *)(lVar1 + 0x78);
      } while( true );
    }
    (**(code **)(*plVar5 + 8))(plVar5,1);
  }
  return 2;
}



// WARNING: Removing unreachable block (ram,0x00018000fd66)

undefined8 FUN_18000fca0(longlong param_1,LPCSTR param_2)

{
  undefined8 *puVar1;
  int iVar2;
  LPCSTR pCVar3;
  longlong *plVar4;
  char *pcVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  char *_Src;
  char *pcVar9;
  char *_Size;
  
  pCVar3 = (LPCSTR)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))
                             (*(longlong **)(param_1 + 0x28),9);
  plVar4 = FUN_180010cb0(param_2,pCVar3);
  if (plVar4 != (longlong *)0x0) {
    iVar2 = _stricmp((char *)(plVar4 + 1),"BlurTrailDef");
    if (iVar2 == 0) {
      lVar7 = plVar4[0x10];
      if (lVar7 != 0) {
        pcVar9 = (char *)0x0;
        do {
          iVar2 = _stricmp((char *)(lVar7 + 8),"Material");
          if (iVar2 == 0) {
            pcVar5 = pcVar9;
            _Size = pcVar9;
            _Src = pcVar9;
            if (*(int *)(*(longlong *)(lVar7 + 0x70) + 0x10) == 2) {
              pcVar5 = *(char **)(*(longlong *)(lVar7 + 0x70) + 0x28);
              _Src = pcVar5;
            }
            do {
              if (*pcVar5 == '\0') break;
              uVar8 = (int)_Size + 1;
              _Size = (char *)(ulonglong)uVar8;
              pcVar5 = pcVar5 + 1;
            } while (uVar8 != 0xffffffff);
            iVar2 = (int)_Size;
            pcVar5 = pcVar9;
            if (iVar2 != 0) {
              pcVar5 = malloc((ulonglong)(iVar2 + 1));
              memcpy(pcVar5,_Src,(size_t)_Size);
              _Size[(longlong)pcVar5] = '\0';
            }
            puVar6 = malloc(0x20);
            if (puVar6 != (undefined8 *)0x0) {
              *puVar6 = pcVar5;
              *(int *)(puVar6 + 1) = iVar2;
              *(int *)((longlong)puVar6 + 0xc) = iVar2;
              pcVar5 = pcVar9;
            }
            puVar1 = puVar6 + 2;
            puVar6[3] = *(undefined8 *)(param_1 + 0x58);
            *puVar1 = 0;
            if (*(undefined8 **)(param_1 + 0x58) == (undefined8 *)0x0) {
              *(undefined8 **)(param_1 + 0x50) = puVar1;
            }
            else {
              **(undefined8 **)(param_1 + 0x58) = puVar1;
            }
            *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
            *(undefined8 **)(param_1 + 0x58) = puVar1;
            free(pcVar5);
            puVar6 = *(undefined8 **)(param_1 + 0x38);
            if (puVar6 != (undefined8 *)0x0) {
              pcVar5 = pcVar9;
              if (*(int *)(*(longlong *)(lVar7 + 0x70) + 0x10) == 2) {
                pcVar5 = *(char **)(*(longlong *)(lVar7 + 0x70) + 0x28);
              }
              (**(code **)*puVar6)(puVar6,pcVar5);
            }
          }
          lVar7 = *(longlong *)(lVar7 + 0x78);
        } while (lVar7 != 0);
      }
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return 0;
    }
    (**(code **)(*plVar4 + 8))(plVar4,1);
  }
  return 2;
}



undefined8 FUN_18000fe60(longlong *param_1,LPCSTR param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  LPCSTR pCVar4;
  longlong *plVar5;
  
  pCVar4 = (LPCSTR)(**(code **)(*(longlong *)param_1[5] + 0xf8))((longlong *)param_1[5],4);
  plVar5 = FUN_180010cb0(param_2,pCVar4);
  if (plVar5 != (longlong *)0x0) {
    iVar3 = _stricmp((char *)(plVar5 + 1),"SequenceDef");
    if (iVar3 == 0) {
      for (lVar1 = plVar5[0x10]; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x78)) {
        iVar3 = _stricmp((char *)(lVar1 + 8),"Spawn");
        if (iVar3 == 0) {
          for (lVar2 = *(longlong *)(lVar1 + 0x80); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x78))
          {
            FUN_180010750(param_1,lVar2);
          }
        }
      }
      (**(code **)(*plVar5 + 8))(plVar5,1);
      return 0;
    }
    (**(code **)(*plVar5 + 8))(plVar5,1);
  }
  return 2;
}



// WARNING: Removing unreachable block (ram,0x0001800100e4)
// WARNING: Removing unreachable block (ram,0x000180010018)

undefined8 FUN_18000ff50(longlong param_1,LPCSTR param_2)

{
  undefined8 *puVar1;
  int iVar2;
  LPCSTR pCVar3;
  longlong *plVar4;
  char *pcVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  longlong lVar11;
  char *pcVar12;
  char *pcVar10;
  
  pCVar3 = (LPCSTR)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))
                             (*(longlong **)(param_1 + 0x28),5);
  plVar4 = FUN_180010cb0(param_2,pCVar3);
  if (plVar4 != (longlong *)0x0) {
    iVar2 = _stricmp((char *)(plVar4 + 1),"FloatingTextDef");
    if (iVar2 == 0) {
      lVar11 = plVar4[0x10];
      if (lVar11 != 0) {
        pcVar12 = (char *)0x0;
        do {
          iVar2 = _stricmp((char *)(lVar11 + 8),"Material");
          pcVar5 = pcVar12;
          if (iVar2 == 0) {
            pcVar7 = pcVar12;
            pcVar10 = pcVar12;
            pcVar8 = pcVar12;
            if (*(int *)(*(longlong *)(lVar11 + 0x70) + 0x10) == 2) {
              pcVar7 = *(char **)(*(longlong *)(lVar11 + 0x70) + 0x28);
              pcVar8 = pcVar7;
            }
            do {
              if (*pcVar7 == '\0') break;
              uVar9 = (int)pcVar10 + 1;
              pcVar10 = (char *)(ulonglong)uVar9;
              pcVar7 = pcVar7 + 1;
            } while (uVar9 != 0xffffffff);
            iVar2 = (int)pcVar10;
            if (iVar2 != 0) {
              pcVar5 = malloc((ulonglong)(iVar2 + 1));
              memcpy(pcVar5,pcVar8,(size_t)pcVar10);
              pcVar10[(longlong)pcVar5] = '\0';
            }
            puVar6 = malloc(0x20);
            if (puVar6 != (undefined8 *)0x0) {
              *puVar6 = pcVar5;
              *(int *)(puVar6 + 1) = iVar2;
              *(int *)((longlong)puVar6 + 0xc) = iVar2;
              pcVar5 = pcVar12;
            }
            puVar1 = puVar6 + 2;
            puVar6[3] = *(undefined8 *)(param_1 + 0x58);
            *puVar1 = 0;
            if (*(undefined8 **)(param_1 + 0x58) == (undefined8 *)0x0) {
              *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
              *(undefined8 **)(param_1 + 0x50) = puVar1;
              *(undefined8 **)(param_1 + 0x58) = puVar1;
            }
            else {
              **(undefined8 **)(param_1 + 0x58) = puVar1;
              *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
              *(undefined8 **)(param_1 + 0x58) = puVar1;
            }
LAB_180010166:
            free(pcVar5);
            puVar6 = *(undefined8 **)(param_1 + 0x38);
            if (puVar6 != (undefined8 *)0x0) {
              pcVar5 = pcVar12;
              if (*(int *)(*(longlong *)(lVar11 + 0x70) + 0x10) == 2) {
                pcVar5 = *(char **)(*(longlong *)(lVar11 + 0x70) + 0x28);
              }
              (**(code **)*puVar6)(puVar6,pcVar5);
            }
          }
          else {
            iVar2 = _stricmp((char *)(lVar11 + 8),"TextFont");
            if (iVar2 == 0) {
              pcVar7 = pcVar12;
              pcVar10 = pcVar12;
              pcVar8 = pcVar12;
              if (*(int *)(*(longlong *)(lVar11 + 0x70) + 0x10) == 2) {
                pcVar7 = *(char **)(*(longlong *)(lVar11 + 0x70) + 0x28);
                pcVar8 = pcVar7;
              }
              do {
                if (*pcVar7 == '\0') break;
                uVar9 = (int)pcVar10 + 1;
                pcVar10 = (char *)(ulonglong)uVar9;
                pcVar7 = pcVar7 + 1;
              } while (uVar9 != 0xffffffff);
              iVar2 = (int)pcVar10;
              if (iVar2 != 0) {
                pcVar5 = malloc((ulonglong)(iVar2 + 1));
                memcpy(pcVar5,pcVar8,(size_t)pcVar10);
                pcVar10[(longlong)pcVar5] = '\0';
              }
              puVar6 = malloc(0x20);
              if (puVar6 != (undefined8 *)0x0) {
                *puVar6 = pcVar5;
                *(int *)(puVar6 + 1) = iVar2;
                *(int *)((longlong)puVar6 + 0xc) = iVar2;
                pcVar5 = pcVar12;
              }
              puVar1 = puVar6 + 2;
              puVar6[3] = *(undefined8 *)(param_1 + 0x98);
              *puVar1 = 0;
              if (*(undefined8 **)(param_1 + 0x98) == (undefined8 *)0x0) {
                *(undefined8 **)(param_1 + 0x90) = puVar1;
              }
              else {
                **(undefined8 **)(param_1 + 0x98) = puVar1;
              }
              *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
              *(undefined8 **)(param_1 + 0x98) = puVar1;
              goto LAB_180010166;
            }
          }
          lVar11 = *(longlong *)(lVar11 + 0x78);
        } while (lVar11 != 0);
      }
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return 0;
    }
    (**(code **)(*plVar4 + 8))(plVar4,1);
  }
  return 2;
}



// WARNING: Removing unreachable block (ram,0x000180010286)
// WARNING: Removing unreachable block (ram,0x000180010357)

undefined8 FUN_1800101f0(longlong param_1,LPCSTR param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  LPCSTR pCVar5;
  longlong *plVar6;
  char *pcVar7;
  void *_Dst;
  undefined8 *puVar8;
  void *pvVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  char *_Src;
  undefined1 *local_58;
  uint local_50;
  uint local_4c;
  longlong *local_48;
  longlong *local_40;
  int local_38;
  undefined4 local_30;
  
  pCVar5 = (LPCSTR)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))
                             (*(longlong **)(param_1 + 0x28),6);
  plVar6 = FUN_180010cb0(param_2,pCVar5);
  if (plVar6 != (longlong *)0x0) {
    iVar4 = _stricmp((char *)(plVar6 + 1),"SoundDef");
    if (iVar4 == 0) {
      if (*(int *)(plVar6[0xe] + 0x10) == 2) {
        pcVar13 = *(char **)(plVar6[0xe] + 0x28);
      }
      else {
        pcVar13 = (char *)0x0;
      }
      uVar11 = 0;
      pcVar7 = pcVar13;
      do {
        if (*pcVar7 == '\0') break;
        uVar11 = uVar11 + 1;
        pcVar7 = pcVar7 + 1;
      } while (uVar11 != 0xffffffff);
      local_50 = uVar11;
      local_4c = uVar11;
      if (uVar11 == 0) {
        local_58 = (undefined1 *)0x0;
      }
      else {
        local_58 = malloc((ulonglong)(uVar11 + 1));
        memcpy(local_58,pcVar13,(ulonglong)uVar11);
        local_58[local_50] = 0;
      }
      cVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x160))
                        (*(longlong **)(param_1 + 0x28),&local_58);
      if (cVar3 == '\0') {
        puVar8 = malloc(0x20);
        if (puVar8 != (undefined8 *)0x0) {
          if (local_50 == 0) {
            *puVar8 = 0;
            puVar8[1] = 0;
          }
          else {
            *(uint *)(puVar8 + 1) = local_50;
            *(uint *)((longlong)puVar8 + 0xc) = local_50;
            pvVar9 = malloc((ulonglong)(local_50 + 1));
            *puVar8 = pvVar9;
            memcpy(pvVar9,local_58,(ulonglong)(*(int *)(puVar8 + 1) + 1));
          }
        }
        puVar12 = puVar8 + 2;
        puVar8[3] = *(undefined8 *)(param_1 + 0x78);
        *puVar12 = 0;
        if (*(undefined8 **)(param_1 + 0x78) == (undefined8 *)0x0) {
          *(undefined8 **)(param_1 + 0x70) = puVar12;
        }
        else {
          **(undefined8 **)(param_1 + 0x78) = puVar12;
        }
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
        *(undefined8 **)(param_1 + 0x78) = puVar12;
        puVar8 = *(undefined8 **)(param_1 + 0x38);
        if (puVar8 != (undefined8 *)0x0) {
          puVar10 = &DAT_1800198fb;
          if (local_58 != (undefined1 *)0x0) {
            puVar10 = local_58;
          }
          (**(code **)*puVar8)(puVar8,puVar10);
        }
      }
      else {
        local_48 = (longlong *)0x0;
        local_40 = (longlong *)0x0;
        local_38 = 0;
        local_30 = 0x3d;
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x158))
                  (*(longlong **)(param_1 + 0x28),&local_58,&local_48);
        for (plVar1 = local_48; plVar2 = local_40, plVar1 != (longlong *)0x0;
            plVar1 = (longlong *)*plVar1) {
          _Dst = (void *)0x0;
          pcVar13 = (char *)plVar1[-2];
          pcVar7 = "";
          pvVar9 = _Dst;
          _Src = "";
          if (pcVar13 != (char *)0x0) {
            pcVar7 = pcVar13;
            _Src = pcVar13;
          }
          do {
            if (*pcVar7 == '\0') break;
            uVar11 = (int)pvVar9 + 1;
            pvVar9 = (void *)(ulonglong)uVar11;
            pcVar7 = pcVar7 + 1;
          } while (uVar11 != 0xffffffff);
          iVar4 = (int)pvVar9;
          if (iVar4 != 0) {
            _Dst = malloc((ulonglong)(iVar4 + 1));
            memcpy(_Dst,_Src,(size_t)pvVar9);
            *(undefined1 *)((longlong)pvVar9 + (longlong)_Dst) = 0;
          }
          puVar8 = malloc(0x20);
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = _Dst;
            *(int *)(puVar8 + 1) = iVar4;
            *(int *)((longlong)puVar8 + 0xc) = iVar4;
            _Dst = (void *)0x0;
          }
          puVar12 = puVar8 + 2;
          puVar8[3] = *(undefined8 *)(param_1 + 0x78);
          *puVar12 = 0;
          if (*(undefined8 **)(param_1 + 0x78) == (undefined8 *)0x0) {
            *(undefined8 **)(param_1 + 0x70) = puVar12;
          }
          else {
            **(undefined8 **)(param_1 + 0x78) = puVar12;
          }
          *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
          *(undefined8 **)(param_1 + 0x78) = puVar12;
          free(_Dst);
          puVar8 = *(undefined8 **)(param_1 + 0x38);
          if (puVar8 != (undefined8 *)0x0) {
            puVar10 = &DAT_1800198fb;
            if ((undefined1 *)plVar1[-2] != (undefined1 *)0x0) {
              puVar10 = (undefined1 *)plVar1[-2];
            }
            (**(code **)*puVar8)(puVar8,puVar10);
          }
        }
        while (local_40 = plVar2, local_38 != 0) {
          free((void *)plVar2[-2]);
          plVar2[-2] = 0;
          if (local_48 == local_40) {
            local_48 = (longlong *)0x0;
            local_40 = (longlong *)0x0;
          }
          else {
            *(undefined8 *)local_40[1] = 0;
            local_40 = (longlong *)local_40[1];
          }
          local_38 = local_38 + -1;
          free(plVar2 + -2);
          plVar2 = local_40;
        }
      }
      free(local_58);
      local_58 = (undefined1 *)0x0;
      (**(code **)(*plVar6 + 8))(plVar6,1);
      return 0;
    }
    (**(code **)(*plVar6 + 8))(plVar6,1);
  }
  return 2;
}



// WARNING: Removing unreachable block (ram,0x000180010646)

undefined8 FUN_180010580(longlong param_1,LPCSTR param_2)

{
  undefined8 *puVar1;
  int iVar2;
  LPCSTR pCVar3;
  longlong *plVar4;
  char *pcVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  char *_Src;
  char *pcVar9;
  char *_Size;
  
  pCVar3 = (LPCSTR)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))
                             (*(longlong **)(param_1 + 0x28),7);
  plVar4 = FUN_180010cb0(param_2,pCVar3);
  if (plVar4 != (longlong *)0x0) {
    iVar2 = _stricmp((char *)(plVar4 + 1),"LightDef");
    if (iVar2 == 0) {
      lVar7 = plVar4[0x10];
      if (lVar7 != 0) {
        pcVar9 = (char *)0x0;
        do {
          iVar2 = _stricmp((char *)(lVar7 + 8),"ProjectorTexture");
          if (iVar2 == 0) {
            pcVar5 = pcVar9;
            _Size = pcVar9;
            _Src = pcVar9;
            if (*(int *)(*(longlong *)(lVar7 + 0x70) + 0x10) == 2) {
              pcVar5 = *(char **)(*(longlong *)(lVar7 + 0x70) + 0x28);
              _Src = pcVar5;
            }
            do {
              if (*pcVar5 == '\0') break;
              uVar8 = (int)_Size + 1;
              _Size = (char *)(ulonglong)uVar8;
              pcVar5 = pcVar5 + 1;
            } while (uVar8 != 0xffffffff);
            iVar2 = (int)_Size;
            pcVar5 = pcVar9;
            if (iVar2 != 0) {
              pcVar5 = malloc((ulonglong)(iVar2 + 1));
              memcpy(pcVar5,_Src,(size_t)_Size);
              _Size[(longlong)pcVar5] = '\0';
            }
            puVar6 = malloc(0x20);
            if (puVar6 != (undefined8 *)0x0) {
              *puVar6 = pcVar5;
              *(int *)(puVar6 + 1) = iVar2;
              *(int *)((longlong)puVar6 + 0xc) = iVar2;
              pcVar5 = pcVar9;
            }
            puVar1 = puVar6 + 2;
            puVar6[3] = *(undefined8 *)(param_1 + 0x98);
            *puVar1 = 0;
            if (*(undefined8 **)(param_1 + 0x98) == (undefined8 *)0x0) {
              *(undefined8 **)(param_1 + 0x90) = puVar1;
            }
            else {
              **(undefined8 **)(param_1 + 0x98) = puVar1;
            }
            *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
            *(undefined8 **)(param_1 + 0x98) = puVar1;
            free(pcVar5);
            puVar6 = *(undefined8 **)(param_1 + 0x38);
            if (puVar6 != (undefined8 *)0x0) {
              pcVar5 = pcVar9;
              if (*(int *)(*(longlong *)(lVar7 + 0x70) + 0x10) == 2) {
                pcVar5 = *(char **)(*(longlong *)(lVar7 + 0x70) + 0x28);
              }
              (**(code **)*puVar6)(puVar6,pcVar5);
            }
          }
          lVar7 = *(longlong *)(lVar7 + 0x78);
        } while (lVar7 != 0);
      }
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return 0;
    }
    (**(code **)(*plVar4 + 8))(plVar4,1);
  }
  return 2;
}



// WARNING: Removing unreachable block (ram,0x000180010ab2)
// WARNING: Removing unreachable block (ram,0x0001800107c0)

int FUN_180010750(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined8 *puVar5;
  void *pvVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  char *local_38;
  uint local_30;
  uint local_2c;
  
  pcVar8 = (char *)0x0;
  iVar2 = _stricmp((char *)(param_2 + 8),"ParticleEmiter");
  if (iVar2 == 0) {
    pcVar4 = pcVar8;
    pcVar9 = pcVar8;
    pcVar11 = pcVar8;
    if (*(int *)(*(longlong *)(param_2 + 0x70) + 0x10) == 2) {
      pcVar4 = *(char **)(*(longlong *)(param_2 + 0x70) + 0x28);
      pcVar11 = pcVar4;
    }
    do {
      uVar10 = (uint)pcVar9;
      if (*pcVar4 == '\0') break;
      uVar10 = uVar10 + 1;
      pcVar4 = pcVar4 + 1;
      pcVar9 = (char *)(ulonglong)uVar10;
    } while (uVar10 != 0xffffffff);
    local_30 = uVar10;
    local_2c = uVar10;
    if (uVar10 == 0) {
      local_38 = (char *)0x0;
      pcVar4 = pcVar8;
    }
    else {
      pcVar4 = malloc((ulonglong)(uVar10 + 1));
      local_38 = pcVar4;
      memcpy(pcVar4,pcVar11,(ulonglong)uVar10);
      pcVar4[uVar10] = '\0';
    }
    plVar1 = (longlong *)param_1[7];
    if (plVar1 != (longlong *)0x0) {
      pcVar9 = "";
      if (pcVar4 != (char *)0x0) {
        pcVar9 = pcVar4;
      }
      (**(code **)(*plVar1 + 8))(plVar1,pcVar9);
    }
    pcVar9 = "";
    if (pcVar4 != (char *)0x0) {
      pcVar9 = pcVar4;
    }
    iVar2 = (**(code **)(*param_1 + 8))(param_1,pcVar9,0);
    if (iVar2 == 0) {
      puVar5 = malloc(0x20);
      if (puVar5 != (undefined8 *)0x0) {
        if (uVar10 == 0) {
          *puVar5 = 0;
          puVar5[1] = 0;
        }
        else {
          *(uint *)(puVar5 + 1) = uVar10;
          *(uint *)((longlong)puVar5 + 0xc) = uVar10;
          pvVar6 = malloc((ulonglong)(uVar10 + 1));
          *puVar5 = pvVar6;
          memcpy(pvVar6,pcVar4,(ulonglong)(uVar10 + 1));
        }
      }
      puVar12 = puVar5 + 2;
      puVar5[3] = param_1[0x17];
      *puVar12 = 0;
      if ((undefined8 *)param_1[0x17] == (undefined8 *)0x0) {
        param_1[0x16] = (longlong)puVar12;
      }
      else {
        *(undefined8 *)param_1[0x17] = puVar12;
      }
      *(int *)(param_1 + 0x18) = (int)param_1[0x18] + 1;
      param_1[0x17] = (longlong)puVar12;
      lVar7 = *(longlong *)(param_2 + 0x70);
      iVar2 = 1;
      do {
        lVar7 = *(longlong *)(lVar7 + 8);
        iVar2 = iVar2 + -1;
        if (lVar7 == 0) goto LAB_1800108de;
      } while (iVar2 != 0);
      if (*(int *)(lVar7 + 0x10) == 2) {
        pcVar8 = *(char **)(lVar7 + 0x28);
      }
LAB_1800108de:
      FUN_180003200(&local_38,pcVar8);
      pcVar4 = local_38;
      plVar1 = (longlong *)param_1[7];
      if (plVar1 != (longlong *)0x0) {
        pcVar8 = "";
        if (local_38 != (char *)0x0) {
          pcVar8 = local_38;
        }
        (**(code **)(*plVar1 + 8))(plVar1,pcVar8);
      }
      pcVar8 = "";
      if (pcVar4 != (char *)0x0) {
        pcVar8 = pcVar4;
      }
      iVar2 = (**(code **)(*param_1 + 8))(param_1,pcVar8,0);
      if (iVar2 == 0) {
        puVar5 = malloc(0x20);
        if (puVar5 != (undefined8 *)0x0) {
          if (local_30 == 0) {
            *puVar5 = 0;
            puVar5[1] = 0;
          }
          else {
            *(uint *)(puVar5 + 1) = local_30;
            *(uint *)((longlong)puVar5 + 0xc) = local_30;
            uVar10 = local_30 + 1;
            pvVar6 = malloc((ulonglong)uVar10);
            *puVar5 = pvVar6;
            memcpy(pvVar6,pcVar4,(ulonglong)uVar10);
          }
        }
        puVar12 = puVar5 + 2;
        puVar5[3] = param_1[0x17];
        *puVar12 = 0;
        if ((undefined8 *)param_1[0x17] == (undefined8 *)0x0) {
          param_1[0x16] = (longlong)puVar12;
        }
        else {
          *(undefined8 *)param_1[0x17] = puVar12;
        }
        *(int *)(param_1 + 0x18) = (int)param_1[0x18] + 1;
        param_1[0x17] = (longlong)puVar12;
      }
    }
    free(pcVar4);
  }
  else {
    iVar3 = _stricmp((char *)(param_2 + 8),"Standard");
    iVar2 = 0;
    if ((((((iVar3 == 0) || (iVar3 = _stricmp((char *)(param_2 + 8),"Sequence"), iVar3 == 0)) ||
          (iVar3 = _stricmp((char *)(param_2 + 8),"Trace"), iVar3 == 0)) ||
         ((iVar3 = _stricmp((char *)(param_2 + 8),"Flare"), iVar3 == 0 ||
          (iVar3 = _stricmp((char *)(param_2 + 8),"FloatingText"), iVar3 == 0)))) ||
        ((iVar3 = _stricmp((char *)(param_2 + 8),"Sound"), iVar3 == 0 ||
         ((iVar3 = _stricmp((char *)(param_2 + 8),"Light"), iVar3 == 0 ||
          (iVar3 = _stricmp((char *)(param_2 + 8),"VarList"), iVar3 == 0)))))) ||
       (iVar3 = _stricmp((char *)(param_2 + 8),"CameraShake"), iVar3 == 0)) {
      pcVar4 = pcVar8;
      pcVar9 = pcVar8;
      pcVar11 = pcVar8;
      if (*(int *)(*(longlong *)(param_2 + 0x70) + 0x10) == 2) {
        pcVar4 = *(char **)(*(longlong *)(param_2 + 0x70) + 0x28);
        pcVar11 = pcVar4;
      }
      do {
        if (*pcVar4 == '\0') break;
        uVar10 = (int)pcVar9 + 1;
        pcVar9 = (char *)(ulonglong)uVar10;
        pcVar4 = pcVar4 + 1;
      } while (uVar10 != 0xffffffff);
      iVar3 = (int)pcVar9;
      if (iVar3 != 0) {
        pcVar8 = malloc((ulonglong)(iVar3 + 1));
        memcpy(pcVar8,pcVar11,(size_t)pcVar9);
        pcVar8[(longlong)pcVar9] = '\0';
      }
      plVar1 = (longlong *)param_1[7];
      if (plVar1 != (longlong *)0x0) {
        pcVar4 = "";
        if (pcVar8 != (char *)0x0) {
          pcVar4 = pcVar8;
        }
        (**(code **)(*plVar1 + 8))(plVar1,pcVar4);
      }
      pcVar4 = "";
      if (pcVar8 != (char *)0x0) {
        pcVar4 = pcVar8;
      }
      iVar2 = (**(code **)(*param_1 + 8))(param_1,pcVar4,0);
      if (iVar2 == 0) {
        puVar5 = malloc(0x20);
        if (puVar5 != (undefined8 *)0x0) {
          if (iVar3 == 0) {
            *puVar5 = 0;
            puVar5[1] = 0;
          }
          else {
            *(int *)(puVar5 + 1) = iVar3;
            *(int *)((longlong)puVar5 + 0xc) = iVar3;
            pvVar6 = malloc((ulonglong)(iVar3 + 1U));
            *puVar5 = pvVar6;
            memcpy(pvVar6,pcVar8,(ulonglong)(iVar3 + 1U));
          }
        }
        puVar12 = puVar5 + 2;
        puVar5[3] = param_1[0x17];
        *puVar12 = 0;
        if ((undefined8 *)param_1[0x17] == (undefined8 *)0x0) {
          param_1[0x16] = (longlong)puVar12;
        }
        else {
          *(undefined8 *)param_1[0x17] = puVar12;
        }
        *(int *)(param_1 + 0x18) = (int)param_1[0x18] + 1;
        param_1[0x17] = (longlong)puVar12;
      }
      free(pcVar8);
    }
  }
  return iVar2;
}



undefined8 FUN_180010bc0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
    return 0;
  case 4:
    return 1;
  case 5:
    return 2;
  case 6:
    return 3;
  case 7:
    return 4;
  case 8:
    return 5;
  case 9:
    return 6;
  default:
    return 0xffffffff;
  }
}



void FUN_180010c30(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (*(uint *)(param_2 + 1) <= uVar1) {
    if (*(uint *)((longlong)param_2 + 0xc) < uVar1) {
      *(uint *)((longlong)param_2 + 0xc) = uVar1;
      pvVar3 = realloc((void *)*param_2,(ulonglong)uVar1);
      *param_2 = (longlong)pvVar3;
    }
    uVar2 = *(uint *)(param_2 + 1);
    puVar4 = (undefined1 *)((ulonglong)uVar2 + *param_2);
    if (uVar2 < uVar1) {
      uVar5 = (ulonglong)(uVar1 - uVar2);
      do {
        if (puVar4 != (undefined1 *)0x0) {
          *puVar4 = 0;
        }
        puVar4 = puVar4 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  *(uint *)(param_2 + 1) = uVar1;
  if (*(uint *)(param_1 + 1) != 0) {
    memcpy((void *)*param_2,(void *)*param_1,(ulonglong)*(uint *)(param_1 + 1));
  }
  return;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe

longlong * FUN_180010cb0(LPCSTR param_1,LPCSTR param_2)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  ulonglong uVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  short *psVar12;
  LPCSTR pCVar13;
  short *psVar14;
  undefined *puVar15;
  undefined8 uVar16;
  int iVar17;
  undefined8 auStack_60 [5];
  undefined8 uStack_38;
  uint auStack_30 [2];
  short *local_28;
  undefined8 local_20;
  
  if ((param_1 == (LPCSTR)0x0) || (param_2 == (LPCSTR)0x0)) {
    return (longlong *)0x0;
  }
  lVar9 = -1;
  pCVar13 = param_1;
  do {
    if (lVar9 == 0) break;
    lVar9 = lVar9 + -1;
    cVar2 = *pCVar13;
    pCVar13 = pCVar13 + 1;
  } while (cVar2 != '\0');
  lVar10 = -1;
  pCVar13 = param_2;
  do {
    if (lVar10 == 0) break;
    lVar10 = lVar10 + -1;
    cVar2 = *pCVar13;
    pCVar13 = pCVar13 + 1;
  } while (cVar2 != '\0');
  iVar17 = ~(uint)lVar9 + 3 + ~(uint)lVar10;
  uVar4 = (longlong)iVar17 * 2;
  uVar11 = uVar4 + 0xf;
  if (uVar11 <= uVar4) {
    uVar11 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x180010d2f;
  lVar9 = -(uVar11 & 0xfffffffffffffff0);
  psVar1 = (short *)((longlong)&local_28 + lVar9);
  *(undefined8 *)((longlong)auStack_60 + lVar9) = 0x180010d43;
  FUN_180003b00(&local_28,param_2);
  psVar6 = local_28;
  psVar7 = &DAT_18001c880;
  if (local_28 != (short *)0x0) {
    psVar7 = local_28;
  }
  psVar12 = psVar7;
  do {
    sVar3 = *psVar12;
    psVar12 = psVar12 + 1;
    *(short *)((longlong)psVar1 + (-2 - (longlong)psVar7) + (longlong)psVar12) = sVar3;
  } while (sVar3 != 0);
  *(undefined8 *)((longlong)auStack_60 + lVar9) = 0x180010d7a;
  free(psVar6);
  *(undefined4 *)((longlong)auStack_30 + lVar9) = 0;
  *(undefined8 *)((longlong)&uStack_38 + lVar9) = 0;
  *(undefined8 *)((longlong)auStack_60 + lVar9) = 0x180010d9a;
  uVar5 = MultiByteToWideChar(0,0,"\r\n",2,*(LPWSTR *)((longlong)&uStack_38 + lVar9),
                              *(int *)((longlong)auStack_30 + lVar9));
  psVar6 = (short *)0x0;
  if (uVar5 == 0xffffffff) {
LAB_180010e00:
    psVar7 = &DAT_18001c880;
  }
  else {
    local_28 = (short *)0x0;
    local_20 = 0;
    *(undefined8 *)((longlong)auStack_60 + lVar9) = 0x180010db8;
    FUN_180003d20((longlong *)&local_28,(ulonglong)uVar5);
    psVar6 = local_28;
    if (local_28 == (short *)0x0) {
      *(undefined8 *)((longlong)auStack_60 + lVar9) = 0x180010dca;
      psVar6 = malloc(2);
      *psVar6 = 0;
    }
    *(uint *)((longlong)auStack_30 + lVar9) = uVar5;
    *(short **)((longlong)&uStack_38 + lVar9) = psVar6;
    *(undefined8 *)((longlong)auStack_60 + lVar9) = 0x180010df0;
    MultiByteToWideChar(0,0,"\r\n",2,*(LPWSTR *)((longlong)&uStack_38 + lVar9),
                        *(int *)((longlong)auStack_30 + lVar9));
    *(undefined8 *)((longlong)auStack_60 + lVar9) = 0x180010df8;
    free((void *)0x0);
    psVar7 = psVar6;
    if (psVar6 == (short *)0x0) goto LAB_180010e00;
  }
  lVar10 = -1;
  psVar12 = psVar1;
  do {
    psVar14 = psVar12;
    if (lVar10 == 0) break;
    lVar10 = lVar10 + -1;
    psVar14 = psVar12 + 1;
    sVar3 = *psVar12;
    psVar12 = psVar14;
  } while (sVar3 != 0);
  lVar10 = 0;
  do {
    sVar3 = *(short *)((longlong)psVar7 + lVar10);
    *(short *)((longlong)psVar14 + lVar10 + -2) = sVar3;
    lVar10 = lVar10 + 2;
  } while (sVar3 != 0);
  *(undefined8 *)((longlong)auStack_60 + lVar9) = 0x180010e3c;
  free(psVar6);
  *(undefined8 *)((longlong)auStack_60 + lVar9) = 0x180010e48;
  FUN_180003b00(&local_28,param_1);
  psVar6 = local_28;
  psVar7 = &DAT_18001c880;
  if (local_28 != (short *)0x0) {
    psVar7 = local_28;
  }
  lVar10 = -1;
  psVar12 = psVar1;
  do {
    psVar14 = psVar12;
    if (lVar10 == 0) break;
    lVar10 = lVar10 + -1;
    psVar14 = psVar12 + 1;
    sVar3 = *psVar12;
    psVar12 = psVar14;
  } while (sVar3 != 0);
  lVar10 = 0;
  do {
    sVar3 = *(short *)((longlong)psVar7 + lVar10);
    *(short *)((longlong)psVar14 + lVar10 + -2) = sVar3;
    lVar10 = lVar10 + 2;
  } while (sVar3 != 0);
  *(undefined8 *)((longlong)auStack_60 + lVar9) = 0x180010e8c;
  free(psVar6);
  puVar15 = &DAT_18001e000;
  uVar16 = 2;
  *(undefined4 *)((longlong)auStack_30 + lVar9) = 0;
  *(undefined8 *)((longlong)&uStack_38 + lVar9) = 0;
  *(undefined8 *)((longlong)auStack_60 + lVar9) = 0x180010eac;
  uVar5 = MultiByteToWideChar(0,0,"\r\n",2,*(LPWSTR *)((longlong)&uStack_38 + lVar9),
                              *(int *)((longlong)auStack_30 + lVar9));
  psVar6 = (short *)0x0;
  if (uVar5 != 0xffffffff) {
    local_28 = (short *)0x0;
    local_20 = 0;
    *(undefined8 *)((longlong)auStack_60 + lVar9) = 0x180010ec6;
    FUN_180003d20((longlong *)&local_28,(ulonglong)uVar5);
    psVar7 = local_28;
    if (local_28 == (short *)0x0) {
      *(undefined8 *)((longlong)auStack_60 + lVar9) = 0x180010ed8;
      psVar7 = malloc(2);
      *psVar7 = 0;
    }
    puVar15 = &DAT_18001e000;
    uVar16 = 2;
    *(uint *)((longlong)auStack_30 + lVar9) = uVar5;
    *(short **)((longlong)&uStack_38 + lVar9) = psVar7;
    *(undefined8 *)((longlong)auStack_60 + lVar9) = 0x180010efe;
    MultiByteToWideChar(0,0,"\r\n",2,*(LPWSTR *)((longlong)&uStack_38 + lVar9),
                        *(int *)((longlong)auStack_30 + lVar9));
    *(undefined8 *)((longlong)auStack_60 + lVar9) = 0x180010f09;
    free((void *)0x0);
    psVar6 = psVar7;
    if (psVar7 != (short *)0x0) goto LAB_180010f15;
  }
  psVar7 = &DAT_18001c880;
LAB_180010f15:
  lVar10 = -1;
  psVar12 = psVar1;
  do {
    psVar14 = psVar12;
    if (lVar10 == 0) break;
    lVar10 = lVar10 + -1;
    psVar14 = psVar12 + 1;
    sVar3 = *psVar12;
    psVar12 = psVar14;
  } while (sVar3 != 0);
  lVar10 = 0;
  do {
    sVar3 = *(short *)((longlong)psVar7 + lVar10);
    *(short *)((longlong)psVar14 + lVar10 + -2) = sVar3;
    lVar10 = lVar10 + 2;
  } while (sVar3 != 0);
  *(undefined8 *)((longlong)auStack_60 + lVar9) = 0x180010f4b;
  free(psVar6);
  *(undefined8 *)((longlong)auStack_60 + lVar9) = 0x180010f57;
  plVar8 = FUN_180010f80(psVar1,iVar17 - 1,puVar15,uVar16);
  return plVar8;
}



longlong * FUN_180010f80(void *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  TYPE TVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  Settings *this;
  longlong lVar5;
  char *pcVar6;
  int local_res18 [4];
  undefined1 local_58 [4];
  undefined4 local_54;
  char *local_50;
  char *local_48;
  undefined4 local_40;
  char *local_38;
  void *local_30;
  undefined8 local_28;
  
  local_res18[0] = 0;
  puVar2 = malloc(0x290);
  if (puVar2 == (undefined8 *)0x0) {
    return (longlong *)0x0;
  }
  plVar3 = FUN_180011fc0(puVar2,param_1,param_2);
  if (plVar3 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  plVar3[0x4c] = 0;
  plVar3[0x4d] = 0;
  plVar3[0x4e] = 0;
  plVar3[0x4f] = 0;
  plVar3[0x50] = 0;
  plVar4 = FUN_180016260(plVar3,local_res18);
  if (plVar4 == (longlong *)0x0) {
    if (local_res18[0] == 0) goto LAB_1800110ee;
  }
  else if (local_res18[0] == 0) {
    if (plVar3[0x42] != 0) {
      (**(code **)*plVar3)(plVar3,1);
      return plVar4;
    }
    goto LAB_1800110ee;
  }
  this = Log::Settings::Instance();
  TVar1 = Log::Settings::GetCategoryLevel(this,"CTCParse");
  if (1 < (int)TVar1) {
    pcVar6 = "Parser_GetTreeFromMemory";
    local_54 = 2;
    local_48 = "F:\\PERFORCE\\dkoziol_ce6_dw_modding_2015\\src\\engine\\kernel\\ParserWrapper.cpp";
    local_38 = "Parser_GetTreeFromMemory";
    local_50 = "CTCParse";
    local_58[0] = 1;
    local_40 = 0xf0;
    local_30 = (void *)0x0;
    local_28 = 0;
    lVar5 = FUN_180003460((longlong)local_58,"[%s] ","Parser_GetTreeFromMemory",param_4);
    FUN_1800034b0(lVar5,"Cannot parse memory buffer!\n",pcVar6,param_4);
    free(local_30);
  }
LAB_1800110ee:
  (**(code **)*plVar3)(plVar3,1);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4,1);
  }
  return (longlong *)0x0;
}



undefined8 *
FUN_180011120(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             char *param_5)

{
  FUN_180017170(param_1,3,param_5,0);
  *param_1 = CTCPARSE_VEC3::vftable;
  *(undefined4 *)(param_1 + 5) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = param_3;
  *(undefined4 *)(param_1 + 6) = param_4;
  return param_1;
}



undefined8 *
FUN_180011190(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,char *param_6)

{
  FUN_180017170(param_1,4,param_6,0);
  *param_1 = CTCPARSE_VEC4::vftable;
  *(undefined4 *)(param_1 + 5) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = param_3;
  *(undefined4 *)(param_1 + 6) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_5;
  return param_1;
}



int FUN_180011210(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x88) == -1) {
    iVar1 = FUN_180013700((char *)(param_1 + 8));
    *(int *)(param_1 + 0x88) = iVar1;
    return iVar1;
  }
  return *(int *)(param_1 + 0x88);
}



char * FUN_180011250(char *param_1)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  
  pcVar2 = (char *)0x0;
  if (param_1 != (char *)0x0) {
    lVar3 = -1;
    pcVar2 = param_1;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = malloc((ulonglong)~(uint)lVar3);
    strcpy_s(pcVar2,(ulonglong)~(uint)lVar3,param_1);
  }
  return pcVar2;
}



wchar_t * FUN_1800112b0(wchar_t *param_1)

{
  wchar_t wVar1;
  undefined1 auVar2 [16];
  size_t _Size;
  wchar_t *pwVar3;
  longlong lVar4;
  ulonglong _SizeInWords;
  
  pwVar3 = (wchar_t *)0x0;
  if (param_1 != (wchar_t *)0x0) {
    lVar4 = -1;
    pwVar3 = param_1;
    do {
      if (lVar4 == 0) break;
      lVar4 = lVar4 + -1;
      wVar1 = *pwVar3;
      pwVar3 = pwVar3 + 1;
    } while (wVar1 != L'\0');
    _SizeInWords = CONCAT44(0,~(uint)lVar4);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = _SizeInWords;
    _Size = SUB168(ZEXT816(2) * auVar2,0);
    if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
      _Size = 0xffffffffffffffff;
    }
    pwVar3 = malloc(_Size);
    wcscpy_s(pwVar3,_SizeInWords,param_1);
  }
  return pwVar3;
}



undefined8 * FUN_180011320(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  FUN_180017170(param_1,0,*(char **)(param_2 + 0x18),0);
  *param_1 = CTCPARSE_INT::vftable;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  lVar2 = *(longlong *)(param_2 + 8);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x10);
    if (iVar1 == 0) {
      puVar3 = malloc(0x30);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3 = FUN_180011320(puVar3,lVar2);
        param_1[1] = puVar3;
        return param_1;
      }
    }
    else if (iVar1 == 1) {
      puVar3 = malloc(0x30);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3 = FUN_180011480(puVar3,lVar2);
        param_1[1] = puVar3;
        return param_1;
      }
    }
    else if (iVar1 == 2) {
      puVar3 = malloc(0x38);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3 = FUN_1800118c0(puVar3,lVar2);
        param_1[1] = puVar3;
        return param_1;
      }
    }
    else if (iVar1 == 3) {
      puVar3 = malloc(0x38);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3 = FUN_1800115e0(puVar3,lVar2);
        param_1[1] = puVar3;
        return param_1;
      }
    }
    else {
      if (iVar1 != 4) {
        return param_1;
      }
      puVar3 = malloc(0x38);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3 = FUN_180011750(puVar3,lVar2);
        param_1[1] = puVar3;
        return param_1;
      }
    }
    param_1[1] = 0;
  }
  return param_1;
}



undefined8 * FUN_180011480(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  FUN_180017170(param_1,1,*(char **)(param_2 + 0x18),0);
  *param_1 = CTCPARSE_FLOAT::vftable;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  lVar2 = *(longlong *)(param_2 + 8);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x10);
    if (iVar1 == 0) {
      puVar3 = malloc(0x30);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3 = FUN_180011320(puVar3,lVar2);
        param_1[1] = puVar3;
        return param_1;
      }
    }
    else if (iVar1 == 1) {
      puVar3 = malloc(0x30);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3 = FUN_180011480(puVar3,lVar2);
        param_1[1] = puVar3;
        return param_1;
      }
    }
    else if (iVar1 == 2) {
      puVar3 = malloc(0x38);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3 = FUN_1800118c0(puVar3,lVar2);
        param_1[1] = puVar3;
        return param_1;
      }
    }
    else if (iVar1 == 3) {
      puVar3 = malloc(0x38);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3 = FUN_1800115e0(puVar3,lVar2);
        param_1[1] = puVar3;
        return param_1;
      }
    }
    else {
      if (iVar1 != 4) {
        return param_1;
      }
      puVar3 = malloc(0x38);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3 = FUN_180011750(puVar3,lVar2);
        param_1[1] = puVar3;
        return param_1;
      }
    }
    param_1[1] = 0;
  }
  return param_1;
}



undefined8 * FUN_1800115e0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  FUN_180017170(param_1,3,*(char **)(param_2 + 0x18),0);
  *param_1 = CTCPARSE_VEC3::vftable;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  lVar2 = *(longlong *)(param_2 + 8);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x10);
    if (iVar1 == 0) {
      puVar3 = malloc(0x30);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3 = FUN_180011320(puVar3,lVar2);
        param_1[1] = puVar3;
        return param_1;
      }
    }
    else if (iVar1 == 1) {
      puVar3 = malloc(0x30);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3 = FUN_180011480(puVar3,lVar2);
        param_1[1] = puVar3;
        return param_1;
      }
    }
    else if (iVar1 == 2) {
      puVar3 = malloc(0x38);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3 = FUN_1800118c0(puVar3,lVar2);
        param_1[1] = puVar3;
        return param_1;
      }
    }
    else if (iVar1 == 3) {
      puVar3 = malloc(0x38);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3 = FUN_1800115e0(puVar3,lVar2);
        param_1[1] = puVar3;
        return param_1;
      }
    }
    else {
      if (iVar1 != 4) {
        return param_1;
      }
      puVar3 = malloc(0x38);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3 = FUN_180011750(puVar3,lVar2);
        param_1[1] = puVar3;
        return param_1;
      }
    }
    param_1[1] = 0;
  }
  return param_1;
}



undefined8 * FUN_180011750(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  FUN_180017170(param_1,4,*(char **)(param_2 + 0x18),0);
  *param_1 = CTCPARSE_VEC4::vftable;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  lVar2 = *(longlong *)(param_2 + 8);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x10);
    if (iVar1 == 0) {
      puVar3 = malloc(0x30);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3 = FUN_180011320(puVar3,lVar2);
        param_1[1] = puVar3;
        return param_1;
      }
    }
    else if (iVar1 == 1) {
      puVar3 = malloc(0x30);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3 = FUN_180011480(puVar3,lVar2);
        param_1[1] = puVar3;
        return param_1;
      }
    }
    else if (iVar1 == 2) {
      puVar3 = malloc(0x38);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3 = FUN_1800118c0(puVar3,lVar2);
        param_1[1] = puVar3;
        return param_1;
      }
    }
    else if (iVar1 == 3) {
      puVar3 = malloc(0x38);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3 = FUN_1800115e0(puVar3,lVar2);
        param_1[1] = puVar3;
        return param_1;
      }
    }
    else {
      if (iVar1 != 4) {
        return param_1;
      }
      puVar3 = malloc(0x38);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3 = FUN_180011750(puVar3,lVar2);
        param_1[1] = puVar3;
        return param_1;
      }
    }
    param_1[1] = 0;
  }
  return param_1;
}



undefined8 * FUN_1800118c0(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined1 auVar4 [16];
  size_t _Size;
  wchar_t *pwVar5;
  undefined8 *puVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  char *pcVar10;
  short *psVar11;
  ulonglong _SizeInWords;
  wchar_t *pwVar9;
  
  FUN_180017170(param_1,2,*(char **)(param_2 + 0x18),0);
  *param_1 = CTCPARSE_STRING::vftable;
  pwVar9 = (wchar_t *)0x0;
  pwVar8 = (wchar_t *)0x0;
  pwVar5 = pwVar9;
  if (*(char **)(param_2 + 0x28) != (char *)0x0) {
    lVar7 = -1;
    pcVar10 = *(char **)(param_2 + 0x28);
    do {
      if (lVar7 == 0) break;
      lVar7 = lVar7 + -1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    pwVar5 = malloc((ulonglong)~(uint)lVar7);
    strcpy_s((char *)pwVar5,(ulonglong)~(uint)lVar7,*(char **)(param_2 + 0x28));
  }
  param_1[5] = pwVar5;
  pwVar5 = pwVar9;
  if (*(short **)(param_2 + 0x30) != (short *)0x0) {
    lVar7 = -1;
    psVar11 = *(short **)(param_2 + 0x30);
    do {
      if (lVar7 == 0) break;
      lVar7 = lVar7 + -1;
      sVar2 = *psVar11;
      psVar11 = psVar11 + 1;
    } while (sVar2 != 0);
    _SizeInWords = CONCAT44(0,~(uint)lVar7);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = _SizeInWords;
    _Size = SUB168(ZEXT816(2) * auVar4,0);
    if (SUB168(ZEXT816(2) * auVar4,8) != 0) {
      _Size = 0xffffffffffffffff;
    }
    pwVar5 = malloc(_Size);
    wcscpy_s(pwVar5,_SizeInWords,*(wchar_t **)(param_2 + 0x30));
  }
  param_1[6] = pwVar5;
  lVar7 = *(longlong *)(param_2 + 8);
  if (lVar7 != 0) {
    iVar3 = *(int *)(lVar7 + 0x10);
    if (iVar3 == 0) {
      puVar6 = malloc(0x30);
      if (puVar6 != (undefined8 *)0x0) {
        pwVar8 = (wchar_t *)FUN_180011320(puVar6,lVar7);
      }
    }
    else if (iVar3 == 1) {
      puVar6 = malloc(0x30);
      if (puVar6 != (undefined8 *)0x0) {
        pwVar8 = (wchar_t *)FUN_180011480(puVar6,lVar7);
      }
    }
    else if (iVar3 == 2) {
      puVar6 = malloc(0x38);
      if (puVar6 != (undefined8 *)0x0) {
        pwVar8 = (wchar_t *)FUN_1800118c0(puVar6,lVar7);
      }
    }
    else {
      pwVar8 = pwVar9;
      if (iVar3 == 3) {
        puVar6 = malloc(0x38);
        if (puVar6 != (undefined8 *)0x0) {
          pwVar8 = (wchar_t *)FUN_1800115e0(puVar6,lVar7);
        }
      }
      else {
        if (iVar3 != 4) {
          return param_1;
        }
        puVar6 = malloc(0x38);
        if (puVar6 != (undefined8 *)0x0) {
          pwVar8 = (wchar_t *)FUN_180011750(puVar6,lVar7);
        }
      }
    }
    param_1[1] = pwVar8;
  }
  return param_1;
}



undefined8 * FUN_180011a70(undefined8 *param_1,uint param_2)

{
  *param_1 = CTCPARSE_STRING::vftable;
  operator_delete__((void *)param_1[5]);
  param_1[5] = 0;
  operator_delete__((void *)param_1[6]);
  *param_1 = CTCPARSE_PARAM::vftable;
  param_1[6] = 0;
  operator_delete__((void *)param_1[3]);
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



undefined8 * FUN_180011af0(undefined8 *param_1,LPCSTR param_2,char *param_3)

{
  char cVar1;
  char *_Dst;
  wchar_t *pwVar2;
  longlong lVar3;
  LPCSTR pCVar4;
  wchar_t *local_18 [2];
  
  FUN_180017170(param_1,2,param_3,0);
  *param_1 = CTCPARSE_STRING::vftable;
  if (param_2 == (LPCSTR)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    return param_1;
  }
  lVar3 = -1;
  pCVar4 = param_2;
  do {
    if (lVar3 == 0) break;
    lVar3 = lVar3 + -1;
    cVar1 = *pCVar4;
    pCVar4 = pCVar4 + 1;
  } while (cVar1 != '\0');
  _Dst = malloc((ulonglong)~(uint)lVar3);
  strcpy_s(_Dst,(ulonglong)~(uint)lVar3,param_2);
  param_1[5] = _Dst;
  FUN_180003b00(local_18,param_2);
  pwVar2 = L"";
  if (local_18[0] != (wchar_t *)0x0) {
    pwVar2 = local_18[0];
  }
  pwVar2 = FUN_1800112b0(pwVar2);
  param_1[6] = pwVar2;
  free(local_18[0]);
  return param_1;
}



undefined8 * FUN_180011bc0(undefined8 *param_1,wchar_t *param_2)

{
  char cVar1;
  char *pcVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  char *_Src;
  char *local_18 [2];
  
  FUN_180017170(param_1,2,(char *)0x0,0);
  *param_1 = CTCPARSE_STRING::vftable;
  if (param_2 == (wchar_t *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    return param_1;
  }
  FUN_180003c00(local_18,param_2);
  _Src = "";
  if (local_18[0] != (char *)0x0) {
    _Src = local_18[0];
  }
  lVar4 = -1;
  pcVar2 = _Src;
  do {
    if (lVar4 == 0) break;
    lVar4 = lVar4 + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = malloc((ulonglong)~(uint)lVar4);
  strcpy_s(pcVar2,(ulonglong)~(uint)lVar4,_Src);
  param_1[5] = pcVar2;
  free(local_18[0]);
  pwVar3 = FUN_1800112b0(param_2);
  param_1[6] = pwVar3;
  return param_1;
}



undefined8 *
FUN_180011cb0(undefined8 *param_1,undefined1 param_2,char *param_3,undefined8 param_4,
             undefined1 param_5)

{
  wchar_t wVar1;
  char cVar2;
  undefined1 auVar3 [16];
  int iVar4;
  TYPE TVar5;
  wchar_t *_Src;
  size_t sVar6;
  void *_Dst;
  void *pvVar7;
  undefined8 *puVar8;
  Settings *this;
  ulonglong uVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  wchar_t *pwVar13;
  void *local_78 [2];
  undefined1 local_68 [4];
  undefined4 local_64;
  char *local_60;
  char *local_58;
  undefined4 local_50;
  char *local_48;
  void *local_40;
  undefined8 local_38;
  
  *param_1 = CTCParse::vftable;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0x39;
  *(undefined1 *)(param_1 + 0x47) = param_5;
  *(undefined1 *)(param_1 + 1) = param_2;
  param_1[0x51] = param_4;
  param_1[0x48] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 1;
  _Src = fs::load_wide_string(param_3);
  if (_Src == (wchar_t *)0x0) {
    this = Log::Settings::Instance();
    TVar5 = Log::Settings::GetCategoryLevel(this,"CTCParse");
    if (3 < (int)TVar5) {
      local_58 = "F:\\PERFORCE\\dkoziol_ce6_dw_modding_2015\\src\\engine\\kernel\\ctcparse.cpp";
      local_64 = 4;
      local_60 = "CTCParse";
      local_48 = "CTCParse::CTCParse";
      local_68[0] = 1;
      local_50 = 0x126;
      local_40 = (void *)0x0;
      local_38 = 0;
      FUN_1800034b0((longlong)local_68,"Cannot open %s\n",param_3,param_4);
      free(local_40);
    }
  }
  else {
    uVar9 = 0xffffffffffffffff;
    pwVar13 = _Src;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      wVar1 = *pwVar13;
      pwVar13 = pwVar13 + 1;
    } while (wVar1 != L'\0');
    iVar4 = (int)~uVar9;
    uVar12 = iVar4 + 1;
    *(uint *)(param_1 + 0x44) = uVar12;
    auVar3 = ZEXT816(2) * ZEXT416(iVar4 + 2);
    sVar6 = auVar3._0_8_;
    if (auVar3._8_8_ != 0) {
      sVar6 = 0xffffffffffffffff;
    }
    _Dst = malloc(sVar6);
    param_1[0x42] = _Dst;
    auVar3 = ZEXT816(2) * ZEXT416(uVar12);
    sVar6 = auVar3._0_8_;
    if (auVar3._8_8_ != 0) {
      sVar6 = 0xffffffffffffffff;
    }
    pvVar7 = malloc(sVar6);
    param_1[0x43] = pvVar7;
    memcpy(_Dst,_Src,(~uVar9 - 1 & 0xffffffff) * 2);
    *(undefined2 *)(param_1[0x42] + (ulonglong)(*(int *)(param_1 + 0x44) - 2) * 2) = 0xd;
    *(undefined2 *)(param_1[0x42] + (ulonglong)(*(int *)(param_1 + 0x44) - 1) * 2) = 10;
    *(undefined2 *)(param_1[0x42] + (ulonglong)*(uint *)(param_1 + 0x44) * 2) = 0;
    operator_delete__(_Src);
    pcVar10 = param_3;
    do {
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar10[(longlong)param_1 + (0x108 - (longlong)param_3)] = cVar2;
    } while (cVar2 != '\0');
    puVar8 = (undefined8 *)fs::root_path((char *)local_78);
    pcVar10 = "";
    if ((char *)*puVar8 != (char *)0x0) {
      pcVar10 = (char *)*puVar8;
    }
    pcVar11 = pcVar10;
    do {
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar11[(longlong)param_1 + (8 - (longlong)pcVar10)] = cVar2;
    } while (cVar2 != '\0');
    free(local_78[0]);
    pcVar11 = strrchr((char *)((longlong)param_1 + 9),0x2f);
    pcVar10 = strrchr((char *)((longlong)param_1 + 9),0x5c);
    if (pcVar10 < pcVar11) {
      pcVar10 = pcVar11;
    }
    if (pcVar10 != (char *)0x0) {
      pcVar10[1] = '\0';
    }
    param_1[0x46] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x50] = 0;
  }
  return param_1;
}



undefined8 * FUN_180011f90(undefined8 *param_1,uint param_2)

{
  FUN_180012110(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



undefined8 * FUN_180011fc0(undefined8 *param_1,void *param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  size_t sVar3;
  void *_Dst;
  void *pvVar4;
  ulonglong uVar5;
  
  *param_1 = CTCParse::vftable;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0x39;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  *(uint *)(param_1 + 0x44) = param_3;
  uVar5 = CONCAT44(0,param_3 + 1);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar5;
  sVar3 = SUB168(ZEXT816(2) * auVar1,0);
  if (SUB168(ZEXT816(2) * auVar1,8) != 0) {
    sVar3 = 0xffffffffffffffff;
  }
  _Dst = malloc(sVar3);
  param_1[0x42] = _Dst;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar5;
  sVar3 = SUB168(ZEXT816(2) * auVar2,0);
  if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
    sVar3 = 0xffffffffffffffff;
  }
  pvVar4 = malloc(sVar3);
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  param_1[0x43] = pvVar4;
  *(undefined4 *)(param_1 + 0x45) = 1;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x109) = 0;
  memcpy(_Dst,param_2,(ulonglong)param_3 * 2);
  *(undefined2 *)((ulonglong)param_3 * 2 + param_1[0x42]) = 0;
  param_1[0x46] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  return param_1;
}



void FUN_180012110(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = CTCParse::vftable;
  operator_delete__((void *)param_1[0x43]);
  param_1[0x43] = 0;
  operator_delete__((void *)param_1[0x42]);
  plVar1 = (longlong *)param_1[0x48];
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
  }
  param_1[0x48] = 0;
  FUN_180017410(param_1 + 0x49);
  return;
}



undefined2 FUN_180012190(longlong param_1)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x224);
  if (uVar2 < *(uint *)(param_1 + 0x220)) {
    if (*(short *)(*(longlong *)(param_1 + 0x210) + (ulonglong)uVar2 * 2) == 10) {
      *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
    }
    uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0x210) + (ulonglong)uVar2 * 2);
    *(uint *)(param_1 + 0x224) = uVar2 + 1;
    return uVar1;
  }
  return 0xffff;
}



undefined8 FUN_1800121d0(longlong param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x224) != 0) {
    uVar1 = *(int *)(param_1 + 0x224) - 1;
    *(uint *)(param_1 + 0x224) = uVar1;
    if (*(short *)(*(longlong *)(param_1 + 0x210) + (ulonglong)uVar1 * 2) == 10) {
      *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + -1;
    }
    return 0;
  }
  return 0xffffffff;
}



undefined8 FUN_180012200(longlong param_1)

{
  short sVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  while( true ) {
    uVar4 = *(uint *)(param_1 + 0x224);
    if (*(uint *)(param_1 + 0x220) <= uVar4) {
      return 0xffffffff;
    }
    lVar2 = *(longlong *)(param_1 + 0x210);
    if (*(short *)(lVar2 + (ulonglong)uVar4 * 2) == 10) {
      *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
    }
    sVar1 = *(short *)(lVar2 + (ulonglong)uVar4 * 2);
    uVar3 = uVar4 + 1;
    *(uint *)(param_1 + 0x224) = uVar3;
    if (sVar1 == -1) break;
    if (sVar1 == 0x2a) {
      if (uVar3 < *(uint *)(param_1 + 0x220)) {
        if (*(short *)(lVar2 + (ulonglong)uVar3 * 2) == 10) {
          *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
        }
        sVar1 = *(short *)(lVar2 + (ulonglong)uVar3 * 2);
        *(uint *)(param_1 + 0x224) = uVar4 + 2;
        if (sVar1 == 0x2f) {
          return 0;
        }
      }
      if ((*(int *)(param_1 + 0x224) != 0) &&
         (uVar4 = *(int *)(param_1 + 0x224) - 1, *(uint *)(param_1 + 0x224) = uVar4,
         *(short *)(lVar2 + (ulonglong)uVar4 * 2) == 10)) {
        *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + -1;
      }
    }
  }
  return 0xffffffff;
}



int FUN_1800122a0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  short sVar5;
  ushort uVar6;
  
  if (*(uint *)(param_1 + 0x224) < *(uint *)(param_1 + 0x220)) {
    do {
      uVar3 = *(uint *)(param_1 + 0x224);
      lVar2 = *(longlong *)(param_1 + 0x210);
      sVar5 = *(short *)(lVar2 + (ulonglong)uVar3 * 2);
      if ((((sVar5 != 0x20) && (sVar5 != 0xd)) && (sVar5 != 10)) &&
         ((sVar5 != 9 && (sVar5 != 0x2f)))) break;
      uVar1 = *(uint *)(param_1 + 0x220);
      if (uVar3 < uVar1) {
        if (sVar5 == 10) {
          *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
        }
        sVar5 = *(short *)(lVar2 + (ulonglong)uVar3 * 2);
        *(uint *)(param_1 + 0x224) = uVar3 + 1;
      }
      else {
        sVar5 = -1;
      }
      if ((sVar5 != 10) && (sVar5 == 0x2f)) {
        uVar3 = *(uint *)(param_1 + 0x224);
        if (uVar3 < uVar1) {
          if (*(short *)(lVar2 + (ulonglong)uVar3 * 2) == 10) {
            *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
          }
          uVar6 = *(ushort *)(lVar2 + (ulonglong)uVar3 * 2);
          *(uint *)(param_1 + 0x224) = uVar3 + 1;
        }
        else {
          uVar6 = 0xffff;
        }
        if (uVar6 == 0x2f) {
          while( true ) {
            uVar3 = *(uint *)(param_1 + 0x224);
            if (uVar1 <= uVar3) break;
            if (*(short *)(lVar2 + (ulonglong)uVar3 * 2) == 10) {
              *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
            }
            sVar5 = *(short *)(lVar2 + (ulonglong)uVar3 * 2);
            *(uint *)(param_1 + 0x224) = uVar3 + 1;
            if ((sVar5 == -1) || (sVar5 == 10)) break;
          }
        }
        else {
          if (uVar6 != 0x2a) {
            if (((uVar6 != 0xffffffff) && (*(int *)(param_1 + 0x224) != 0)) &&
               (uVar3 = *(int *)(param_1 + 0x224) - 1, *(uint *)(param_1 + 0x224) = uVar3,
               *(short *)(lVar2 + (ulonglong)uVar3 * 2) == 10)) {
              *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + -1;
            }
            if ((*(int *)(param_1 + 0x224) != 0) &&
               (uVar3 = *(int *)(param_1 + 0x224) - 1, *(uint *)(param_1 + 0x224) = uVar3,
               *(short *)(lVar2 + (ulonglong)uVar3 * 2) == 10)) {
              *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + -1;
            }
            break;
          }
          uVar4 = FUN_180012200(param_1);
          if ((int)uVar4 == -1) break;
        }
      }
    } while (*(uint *)(param_1 + 0x224) < *(uint *)(param_1 + 0x220));
  }
  return (*(int *)(param_1 + 0x224) != *(int *)(param_1 + 0x220)) - 1;
}



int FUN_180012450(longlong param_1)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x224);
  uVar3 = 0xffff;
  if (uVar1 < *(uint *)(param_1 + 0x220)) {
    if (*(short *)(*(longlong *)(param_1 + 0x210) + (ulonglong)uVar1 * 2) == 10) {
      *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
    }
    uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x210) + (ulonglong)uVar1 * 2);
    *(uint *)(param_1 + 0x224) = uVar1 + 1;
  }
  else {
    uVar2 = 0xffff;
  }
  if (uVar2 != 0xffffffff) {
    uVar1 = *(uint *)(param_1 + 0x224);
    if (uVar1 < *(uint *)(param_1 + 0x220)) {
      if (*(short *)(*(longlong *)(param_1 + 0x210) + (ulonglong)uVar1 * 2) == 10) {
        *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
      }
      uVar3 = *(ushort *)(*(longlong *)(param_1 + 0x210) + (ulonglong)uVar1 * 2);
      *(uint *)(param_1 + 0x224) = uVar1 + 1;
    }
    if (uVar3 != 0xffffffff) {
      if (uVar2 == 0x21) {
        if (uVar3 == 0x3d) {
          return uVar2 - 0x1f;
        }
      }
      else if (uVar2 == 0x3d) {
        if (uVar3 == 0x3d) {
          return 1;
        }
      }
      else {
        if (uVar2 == 0x3c) {
          if (uVar3 == 0x3d) {
            return 6;
          }
          FUN_1800121d0(param_1);
          return 4;
        }
        if (uVar2 == 0x3e) {
          if (uVar3 == 0x3d) {
            return 5;
          }
          FUN_1800121d0(param_1);
          return 3;
        }
      }
    }
  }
  return 0;
}



int FUN_180012550(longlong *param_1,undefined1 *param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x224);
  iVar3 = 100;
  if (uVar1 < *(uint *)(param_1 + 0x44)) {
    if (*(short *)(param_1[0x42] + (ulonglong)uVar1 * 2) == 10) {
      *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
    }
    uVar2 = *(ushort *)(param_1[0x42] + (ulonglong)uVar1 * 2);
    *(uint *)((longlong)param_1 + 0x224) = uVar1 + 1;
  }
  else {
    uVar2 = 0xffff;
  }
  while ((((0x60 < uVar2 && (uVar2 < 0x7b)) || ((0x40 < uVar2 && (uVar2 < 0x5b)))) ||
         (((0x2f < uVar2 && (uVar2 < 0x3a)) || (uVar2 == 0x5f))))) {
    if (iVar3 < 2) {
      (**(code **)(*param_1 + 8))(param_1,"word limit (%d) exceeded",100);
      if ((*(int *)((longlong)param_1 + 0x224) != 0) &&
         (uVar1 = *(int *)((longlong)param_1 + 0x224) - 1,
         *(uint *)((longlong)param_1 + 0x224) = uVar1,
         *(short *)(param_1[0x42] + (ulonglong)uVar1 * 2) == 10)) {
        *(int *)(param_1 + 0x45) = (int)param_1[0x45] + -1;
      }
      *param_2 = 0;
      return 1;
    }
    *param_2 = (char)uVar2;
    uVar1 = *(uint *)((longlong)param_1 + 0x224);
    param_2 = param_2 + 1;
    iVar3 = iVar3 + -1;
    if (uVar1 < *(uint *)(param_1 + 0x44)) {
      if (*(short *)(param_1[0x42] + (ulonglong)uVar1 * 2) == 10) {
        *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
      }
      uVar2 = *(ushort *)(param_1[0x42] + (ulonglong)uVar1 * 2);
      *(uint *)((longlong)param_1 + 0x224) = uVar1 + 1;
    }
    else {
      uVar2 = 0xffff;
    }
  }
  if (((uVar2 != 0xffff) && (*(int *)((longlong)param_1 + 0x224) != 0)) &&
     (uVar1 = *(int *)((longlong)param_1 + 0x224) - 1, *(uint *)((longlong)param_1 + 0x224) = uVar1,
     *(short *)(param_1[0x42] + (ulonglong)uVar1 * 2) == 10)) {
    *(int *)(param_1 + 0x45) = (int)param_1[0x45] + -1;
  }
  *param_2 = 0;
  return (uVar2 != 0xffff) - 1;
}



int FUN_1800126b0(longlong *param_1,undefined1 *param_2)

{
  short sVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  
  uVar4 = *(uint *)((longlong)param_1 + 0x224);
  uVar2 = *(uint *)(param_1 + 0x44);
  iVar7 = 100;
  if (uVar4 < uVar2) {
    puVar3 = (undefined2 *)param_1[0x42];
    if (puVar3[uVar4] == 10) {
      *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
    }
    sVar1 = puVar3[uVar4];
    uVar6 = uVar4 + 1;
    *(uint *)((longlong)param_1 + 0x224) = uVar6;
    if (sVar1 == 0x2e) {
      if (uVar6 < uVar2) {
        if (puVar3[uVar6] == 10) {
          *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
        }
        uVar5 = puVar3[uVar6];
        *(uint *)((longlong)param_1 + 0x224) = uVar4 + 2;
      }
      else {
        uVar5 = 0xffff;
      }
      while ((((0x60 < uVar5 && (uVar5 < 0x7b)) || ((0x40 < uVar5 && (uVar5 < 0x5b)))) ||
             (((0x2f < uVar5 && (uVar5 < 0x3a)) || (uVar5 == 0x5f))))) {
        if (iVar7 < 2) {
          (**(code **)(*param_1 + 8))(param_1,"word limit (%d) exceeded",100);
          if ((*(int *)((longlong)param_1 + 0x224) != 0) &&
             (uVar4 = *(int *)((longlong)param_1 + 0x224) - 1,
             *(uint *)((longlong)param_1 + 0x224) = uVar4,
             *(short *)(param_1[0x42] + (ulonglong)uVar4 * 2) == 10)) {
            *(int *)(param_1 + 0x45) = (int)param_1[0x45] + -1;
          }
          *param_2 = 0;
          return 1;
        }
        uVar4 = *(uint *)((longlong)param_1 + 0x224);
        iVar7 = iVar7 + -1;
        *param_2 = (char)uVar5;
        if (uVar4 < uVar2) {
          if (puVar3[uVar4] == 10) {
            *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
          }
          uVar5 = puVar3[uVar4];
          *(uint *)((longlong)param_1 + 0x224) = uVar4 + 1;
        }
        else {
          uVar5 = 0xffff;
        }
      }
      if (((uVar5 != 0xffff) && (*(int *)((longlong)param_1 + 0x224) != 0)) &&
         (uVar4 = *(int *)((longlong)param_1 + 0x224) - 1,
         *(uint *)((longlong)param_1 + 0x224) = uVar4, puVar3[uVar4] == 10)) {
        *(int *)(param_1 + 0x45) = (int)param_1[0x45] + -1;
      }
      *puVar3 = 0;
      return (uVar5 != 0xffff) - 1;
    }
  }
  if ((*(int *)((longlong)param_1 + 0x224) != 0) &&
     (uVar4 = *(int *)((longlong)param_1 + 0x224) - 1, *(uint *)((longlong)param_1 + 0x224) = uVar4,
     *(short *)(param_1[0x42] + (ulonglong)uVar4 * 2) == 10)) {
    *(int *)(param_1 + 0x45) = (int)param_1[0x45] + -1;
  }
  *param_2 = 0;
  return 0;
}



void FUN_180012870(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  TYPE TVar4;
  int iVar5;
  Settings *this;
  char *pcVar6;
  char *pcVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint *puVar12;
  longlong lVar13;
  uint local_res8 [2];
  undefined1 local_178 [4];
  undefined4 local_174;
  char *local_170;
  char *local_168;
  undefined4 local_160;
  char *local_158;
  void *local_150;
  undefined8 local_148;
  char local_138 [272];
  
  plVar11 = (longlong *)0x0;
  local_res8[0] = 0;
  if (*(char *)(param_1 + 8) != '\0') {
    puVar8 = param_4;
    this = Log::Settings::Instance();
    TVar4 = Log::Settings::GetCategoryLevel(this,"CTCParse");
    if (4 < (int)TVar4) {
      local_168 = "F:\\PERFORCE\\dkoziol_ce6_dw_modding_2015\\src\\engine\\kernel\\ctcparse.cpp";
      local_174 = 5;
      local_170 = "CTCParse";
      local_158 = "CTCParse::Include";
      local_160 = 0x2c4;
      local_150 = (void *)0x0;
      local_178[0] = 1;
      local_148 = 0;
      FUN_1800034b0((longlong)local_178,"[parser debug] including file: %s\n",
                    *(undefined8 *)(param_2 + 0x28),puVar8);
      free(local_150);
    }
  }
  pcVar7 = *(char **)(param_2 + 0x28);
  pcVar6 = strrchr(pcVar7,0x2f);
  if ((pcVar6 == (char *)0x0) && (pcVar7 = strrchr(pcVar7,0x5c), pcVar7 == (char *)0x0)) {
    pcVar7 = *(char **)(param_2 + 0x28);
    pcVar6 = pcVar7;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar6[(longlong)(local_138 + (-1 - (longlong)pcVar7))] = cVar2;
    } while (cVar2 != '\0');
  }
  else {
    pcVar7 = (char *)(param_1 + 9);
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar7[(longlong)(local_138 + (-1 - (param_1 + 9)))] = cVar2;
    } while (cVar2 != '\0');
    lVar3 = *(longlong *)(param_2 + 0x28);
    lVar13 = -1;
    pcVar7 = local_138;
    do {
      pcVar6 = pcVar7;
      if (lVar13 == 0) break;
      lVar13 = lVar13 + -1;
      pcVar6 = pcVar7 + 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar2 != '\0');
    lVar13 = 0;
    do {
      cVar2 = *(char *)(lVar3 + lVar13);
      pcVar6[lVar13 + -1] = cVar2;
      lVar13 = lVar13 + 1;
    } while (cVar2 != '\0');
  }
  puVar8 = malloc(0x290);
  plVar9 = plVar11;
  if (puVar8 != (undefined8 *)0x0) {
    plVar9 = FUN_180011cb0(puVar8,*(undefined1 *)(param_1 + 8),local_138,
                           *(undefined8 *)(param_1 + 0x288),*(undefined1 *)(param_1 + 0x238));
  }
  *param_3 = 0;
  plVar9[0x46] = param_1;
  plVar9[0x4c] = *(longlong *)(param_1 + 0x260);
  plVar1 = (longlong *)(param_1 + 0x248);
  plVar9[0x4d] = *(longlong *)(param_1 + 0x268);
  plVar10 = plVar9 + 0x49;
  plVar9[0x4e] = *(longlong *)(param_1 + 0x270);
  plVar9[0x4f] = *(longlong *)(param_1 + 0x278);
  plVar9[0x50] = *(longlong *)(param_1 + 0x280);
  plVar9[0x48] = *(longlong *)(param_1 + 0x240);
  if (plVar1 != plVar10) {
    FUN_180017410(plVar10);
    puVar8 = FUN_180017530(plVar10,(undefined8 *)*plVar1,0);
    *plVar10 = (longlong)puVar8;
    *(undefined4 *)(plVar9 + 0x4a) = *(undefined4 *)(param_1 + 0x250);
  }
  *(undefined8 *)(param_1 + 0x240) = 0;
  FUN_180017410(plVar1);
  plVar10 = FUN_180016330(plVar9,param_5,param_3,0);
  *param_4 = plVar10;
  plVar10 = *(longlong **)(param_1 + 0x240);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 8))(plVar10,1);
  }
  *(undefined8 *)(param_1 + 0x240) = 0;
  FUN_180017410(plVar1);
  lVar3 = plVar9[0x48];
  if (lVar3 != 0) {
    puVar8 = malloc(0x90);
    if (puVar8 != (undefined8 *)0x0) {
      plVar11 = FUN_180016bd0(puVar8,lVar3);
    }
    lVar3 = plVar11[0xf];
    plVar10 = plVar11;
    while (lVar3 != 0) {
      plVar10 = (longlong *)plVar10[0xf];
      lVar3 = plVar10[0xf];
    }
    plVar10[0xf] = *(longlong *)(param_1 + 0x240);
    *(longlong **)(param_1 + 0x240) = plVar11;
    do {
      if ((int)plVar11[0x11] == -1) {
        iVar5 = FUN_180013700((char *)(plVar11 + 1));
        *(int *)(plVar11 + 0x11) = iVar5;
      }
      local_res8[0] = *(uint *)(plVar11 + 0x11);
      puVar12 = FUN_180017300(plVar1,local_res8);
      *(longlong **)puVar12 = plVar11;
      plVar11 = (longlong *)plVar11[0xf];
    } while (plVar11 != (longlong *)0x0);
  }
  (**(code **)*plVar9)(plVar9,1);
  return;
}



void FUN_180012ba0(longlong *param_1,undefined4 *param_2,undefined8 *param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  short sVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  char *pcVar19;
  longlong *plVar20;
  uint uVar21;
  bool bVar22;
  int local_38 [4];
  
  plVar11 = malloc(0x90);
  plVar20 = (longlong *)0x0;
  plVar18 = plVar20;
  if (plVar11 != (longlong *)0x0) {
    plVar11[0xe] = 0;
    plVar11[0xf] = 0;
    plVar11[0x10] = 0;
    *(undefined1 *)(plVar11 + 1) = 0;
    *(undefined4 *)(plVar11 + 0x11) = 0xffffffff;
    *plVar11 = (longlong)CTCPARSE_KEYWORD::vftable;
    plVar18 = plVar11;
  }
  plVar11 = plVar18 + 1;
  iVar10 = FUN_180012550(param_1,(undefined1 *)plVar11);
  if (iVar10 != 0) {
    (**(code **)(*param_1 + 8))(param_1,"error in typedef");
    *param_2 = 1;
    if (plVar18 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar18 + 8))(plVar18,1);
    return;
  }
  lVar16 = -1;
  plVar17 = plVar11;
  do {
    if (lVar16 == 0) break;
    lVar16 = lVar16 + -1;
    lVar7 = *plVar17;
    plVar17 = (longlong *)((longlong)plVar17 + 1);
  } while ((char)lVar7 != '\0');
  if ((plVar11 != (longlong *)0x0) && (plVar17 = plVar11, ~(uint)lVar16 != 1)) {
    do {
      cVar8 = (char)*plVar17;
      if (cVar8 == '\0') break;
      if ((byte)(cVar8 + 0xbfU) < 0x1a) {
        cVar8 = cVar8 + ' ';
      }
      uVar21 = (int)plVar20 + 1;
      plVar20 = (longlong *)(ulonglong)uVar21;
      *(char *)plVar17 = cVar8;
      plVar17 = (longlong *)((longlong)plVar17 + 1);
    } while (uVar21 < ~(uint)lVar16 - 1);
  }
  FUN_1800122a0((longlong)param_1);
  uVar21 = *(uint *)((longlong)param_1 + 0x224);
  bVar22 = uVar21 == *(uint *)(param_1 + 0x44);
  if (uVar21 < *(uint *)(param_1 + 0x44)) {
    if (*(short *)(param_1[0x42] + (ulonglong)uVar21 * 2) == 10) {
      *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
    }
    sVar9 = *(short *)(param_1[0x42] + (ulonglong)uVar21 * 2);
    bVar22 = uVar21 + 1 == 0;
    *(uint *)((longlong)param_1 + 0x224) = uVar21 + 1;
  }
  else {
    sVar9 = -1;
  }
  lVar16 = 8;
  plVar20 = plVar11;
  pcVar19 = "include";
  do {
    if (lVar16 == 0) break;
    lVar16 = lVar16 + -1;
    bVar22 = (char)*plVar20 == *pcVar19;
    plVar20 = (longlong *)((longlong)plVar20 + 1);
    pcVar19 = pcVar19 + 1;
  } while (bVar22);
  if (bVar22) {
    if (plVar18 != (longlong *)0x0) {
      (**(code **)(*plVar18 + 8))(plVar18,1);
    }
    if (sVar9 != 0x28) {
      (**(code **)(*param_1 + 8))(param_1,"left bracket expected in include");
      *param_2 = 1;
      return;
    }
    FUN_1800122a0((longlong)param_1);
    local_38[0] = 0;
    puVar12 = FUN_180014fd0(param_1,local_38);
    if (local_38[0] != 0) {
      if (puVar12 == (undefined8 *)0x0) {
        return;
      }
      (**(code **)*puVar12)(puVar12,1);
      return;
    }
    FUN_1800122a0((longlong)param_1);
    sVar9 = FUN_180012190((longlong)param_1);
    if (sVar9 != 0x29) {
      (**(code **)(*param_1 + 8))(param_1,"right bracket expected in include");
      if (puVar12 != (undefined8 *)0x0) {
        (**(code **)*puVar12)(puVar12,1);
      }
      *param_2 = 1;
      return;
    }
    lVar16 = -1;
    pcVar19 = (char *)puVar12[5];
    do {
      if (lVar16 == 0) break;
      lVar16 = lVar16 + -1;
      cVar8 = *pcVar19;
      pcVar19 = pcVar19 + 1;
    } while (cVar8 != '\0');
    if (lVar16 != -2) {
      FUN_180012870((longlong)param_1,(longlong)puVar12,param_2,param_3,param_4);
    }
    (**(code **)*puVar12)(puVar12,1);
    return;
  }
  lVar16 = 0xf;
  bVar22 = false;
  plVar20 = plVar11;
  pcVar19 = "include_if_int";
  do {
    if (lVar16 == 0) break;
    lVar16 = lVar16 + -1;
    bVar22 = (char)*plVar20 == *pcVar19;
    plVar20 = (longlong *)((longlong)plVar20 + 1);
    pcVar19 = pcVar19 + 1;
  } while (bVar22);
  if (bVar22) {
    if (plVar18 != (longlong *)0x0) {
      (**(code **)(*plVar18 + 8))(plVar18,1);
    }
    if (sVar9 != 0x28) {
      (**(code **)(*param_1 + 8))(param_1,"left bracket expected in \'include_if_int\'");
      *param_2 = 1;
      return;
    }
    FUN_1800122a0((longlong)param_1);
    local_38[0] = 0;
    puVar12 = FUN_180013e80(param_1,local_38);
    if (local_38[0] != 0) {
LAB_180012e64:
      (**(code **)(*param_1 + 8))();
      *param_2 = 1;
LAB_180012e71:
      if (puVar12 == (undefined8 *)0x0) {
        return;
      }
      (**(code **)*puVar12)(puVar12,1);
      return;
    }
    FUN_1800122a0((longlong)param_1);
    plVar18 = param_1;
    iVar10 = FUN_180012450((longlong)param_1);
    if (iVar10 == 0) goto LAB_180012e64;
    FUN_1800122a0((longlong)plVar18);
    local_38[0] = 0;
    puVar13 = FUN_180013e80(param_1,local_38);
    if (local_38[0] != 0) {
      pcVar19 = "int expected in \'include_if_int\'";
LAB_180012ed4:
      (**(code **)(*param_1 + 8))(param_1,pcVar19);
      *param_2 = 1;
      if (puVar13 != (undefined8 *)0x0) {
        (**(code **)*puVar13)(puVar13,1);
      }
      goto LAB_180012e71;
    }
    FUN_1800122a0((longlong)param_1);
    sVar9 = FUN_180012190((longlong)param_1);
    if (sVar9 != 0x2c) {
      pcVar19 = "comma expected in \'include_if_int\'";
      goto LAB_180012ed4;
    }
    FUN_1800122a0((longlong)param_1);
    local_38[0] = 0;
    puVar14 = FUN_180014fd0(param_1,local_38);
    if (local_38[0] != 0) {
      pcVar19 = "string expected in \'include_if_int\'";
LAB_18001311f:
      (**(code **)(*param_1 + 8))(param_1,pcVar19);
      *param_2 = 1;
      if (puVar13 != (undefined8 *)0x0) {
        (**(code **)*puVar13)(puVar13,1);
      }
      if (puVar12 != (undefined8 *)0x0) {
        (**(code **)*puVar12)(puVar12,1);
      }
      if (puVar14 == (undefined8 *)0x0) {
        return;
      }
      (**(code **)*puVar14)(puVar14,1);
      return;
    }
    FUN_1800122a0((longlong)param_1);
    sVar9 = FUN_180012190((longlong)param_1);
    if (sVar9 != 0x29) {
      pcVar19 = "right bracket expected in \'include_if_int\'";
      goto LAB_18001311f;
    }
    lVar16 = -1;
    pcVar19 = (char *)puVar14[5];
    do {
      if (lVar16 == 0) break;
      lVar16 = lVar16 + -1;
      cVar8 = *pcVar19;
      pcVar19 = pcVar19 + 1;
    } while (cVar8 != '\0');
    if (lVar16 == -2) goto LAB_180013182;
    iVar1 = *(int *)(puVar13 + 5);
    iVar2 = *(int *)(puVar12 + 5);
    switch(iVar10) {
    case 1:
      cVar8 = iVar2 == iVar1;
      break;
    case 2:
      cVar8 = iVar2 != iVar1;
      break;
    case 3:
      cVar8 = iVar1 < iVar2;
      break;
    case 4:
      cVar8 = iVar2 < iVar1;
      break;
    case 5:
      cVar8 = iVar1 <= iVar2;
      break;
    case 6:
      cVar8 = iVar2 <= iVar1;
      break;
    default:
      goto switchD_180012fa6_default;
    }
LAB_1800131ae:
    if (cVar8 != '\0') {
      FUN_180012870((longlong)param_1,(longlong)puVar14,param_2,param_3,param_4);
    }
switchD_180012fa6_default:
    (**(code **)*puVar13)(puVar13,1);
  }
  else {
    lVar16 = 0x11;
    pcVar19 = "include_if_float";
    do {
      if (lVar16 == 0) break;
      lVar16 = lVar16 + -1;
      bVar22 = (char)*plVar11 == *pcVar19;
      plVar11 = (longlong *)((longlong)plVar11 + 1);
      pcVar19 = pcVar19 + 1;
    } while (bVar22);
    if (!bVar22) {
      if (sVar9 == 0x28) {
        bVar4 = true;
        bVar6 = true;
        bVar3 = false;
        bVar22 = false;
        puVar12 = (undefined8 *)0x0;
LAB_180013225:
        while( true ) {
          FUN_1800122a0((longlong)param_1);
          uVar21 = *(uint *)((longlong)param_1 + 0x224);
          if (uVar21 < *(uint *)(param_1 + 0x44)) {
            if (*(short *)(param_1[0x42] + (ulonglong)uVar21 * 2) == 10) {
              *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
            }
            sVar9 = *(short *)(param_1[0x42] + (ulonglong)uVar21 * 2);
            *(uint *)((longlong)param_1 + 0x224) = uVar21 + 1;
          }
          else {
            sVar9 = -1;
          }
          if (!bVar22) break;
          if (sVar9 == 0x29) goto switchD_1800132ac_caseD_29;
          if (sVar9 == 0x2c) {
switchD_1800132ac_caseD_2c:
            if (!bVar3) goto switchD_1800132ac_caseD_2a;
            bVar4 = false;
            bVar6 = true;
            bVar3 = false;
            bVar22 = false;
          }
        }
        puVar13 = puVar12;
        switch(sVar9) {
        case 0x29:
          goto switchD_1800132ac_caseD_29;
        default:
          goto switchD_1800132ac_caseD_2a;
        case 0x2c:
          goto switchD_1800132ac_caseD_2c;
        case 0x46:
        case 0x66:
          if (!bVar6) goto switchD_1800132ac_caseD_2a;
          puVar14 = malloc(0x28);
          if (puVar14 != (undefined8 *)0x0) {
            *puVar14 = CTCPARSE_PARAM::vftable;
            puVar14[3] = 0;
            puVar14[1] = 0;
            *(undefined4 *)(puVar14 + 2) = 1;
            *(undefined1 *)(puVar14 + 4) = 0;
            puVar13 = puVar14;
          }
          lVar16 = plVar18[0xe];
          if (lVar16 != 0) {
            lVar7 = lVar16;
            for (lVar5 = *(longlong *)(lVar16 + 8); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 8)) {
              lVar7 = lVar5;
            }
            *(undefined8 **)(lVar7 + 8) = puVar13;
            plVar18[0xe] = lVar16;
            bVar4 = true;
            bVar6 = false;
            bVar3 = true;
            bVar22 = true;
            goto LAB_180013225;
          }
          break;
        case 0x49:
        case 0x4e:
        case 0x69:
        case 0x6e:
          if (!bVar6) goto switchD_1800132ac_caseD_2a;
          puVar14 = malloc(0x28);
          if (puVar14 != (undefined8 *)0x0) {
            *puVar14 = CTCPARSE_PARAM::vftable;
            puVar14[3] = 0;
            puVar14[1] = 0;
            *(undefined4 *)(puVar14 + 2) = 0;
            *(undefined1 *)(puVar14 + 4) = 0;
            puVar13 = puVar14;
          }
          lVar16 = plVar18[0xe];
          if (lVar16 != 0) {
            lVar7 = lVar16;
            for (lVar5 = *(longlong *)(lVar16 + 8); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 8)) {
              lVar7 = lVar5;
            }
            *(undefined8 **)(lVar7 + 8) = puVar13;
            plVar18[0xe] = lVar16;
            bVar4 = true;
            bVar6 = false;
            bVar3 = true;
            bVar22 = true;
            goto LAB_180013225;
          }
          break;
        case 0x53:
        case 0x73:
          if (!bVar6) goto switchD_1800132ac_caseD_2a;
          puVar14 = malloc(0x28);
          if (puVar14 != (undefined8 *)0x0) {
            *puVar14 = CTCPARSE_PARAM::vftable;
            puVar14[3] = 0;
            puVar14[1] = 0;
            *(undefined4 *)(puVar14 + 2) = 2;
            *(undefined1 *)(puVar14 + 4) = 0;
            puVar13 = puVar14;
          }
          lVar16 = plVar18[0xe];
          if (lVar16 != 0) {
            lVar7 = lVar16;
            for (lVar5 = *(longlong *)(lVar16 + 8); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 8)) {
              lVar7 = lVar5;
            }
            *(undefined8 **)(lVar7 + 8) = puVar13;
            plVar18[0xe] = lVar16;
            bVar4 = true;
            bVar6 = false;
            bVar3 = true;
            bVar22 = true;
            goto LAB_180013225;
          }
          break;
        case 0x56:
        case 0x76:
          if (!bVar6) goto switchD_1800132ac_caseD_2a;
          sVar9 = FUN_180012190((longlong)param_1);
          if (sVar9 == 0x33) {
            puVar14 = malloc(0x28);
            if (puVar14 != (undefined8 *)0x0) {
              *puVar14 = CTCPARSE_PARAM::vftable;
              puVar14[3] = 0;
              puVar14[1] = 0;
              *(undefined4 *)(puVar14 + 2) = 3;
              *(undefined1 *)(puVar14 + 4) = 0;
              puVar13 = puVar14;
            }
            lVar16 = plVar18[0xe];
            if (lVar16 == 0) break;
            lVar7 = lVar16;
            for (lVar5 = *(longlong *)(lVar16 + 8); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 8)) {
              lVar7 = lVar5;
            }
            *(undefined8 **)(lVar7 + 8) = puVar13;
            plVar18[0xe] = lVar16;
            bVar4 = true;
            bVar6 = false;
            bVar3 = true;
            bVar22 = true;
          }
          else {
            if (sVar9 != 0x34) goto switchD_1800132ac_caseD_2a;
            puVar14 = malloc(0x28);
            if (puVar14 != (undefined8 *)0x0) {
              *puVar14 = CTCPARSE_PARAM::vftable;
              puVar14[3] = 0;
              puVar14[1] = 0;
              *(undefined4 *)(puVar14 + 2) = 4;
              *(undefined1 *)(puVar14 + 4) = 0;
              puVar13 = puVar14;
            }
            lVar16 = plVar18[0xe];
            if (lVar16 == 0) break;
            lVar7 = lVar16;
            for (lVar5 = *(longlong *)(lVar16 + 8); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 8)) {
              lVar7 = lVar5;
            }
            *(undefined8 **)(lVar7 + 8) = puVar13;
            plVar18[0xe] = lVar16;
            bVar4 = true;
            bVar6 = false;
            bVar3 = true;
            bVar22 = true;
          }
          goto LAB_180013225;
        }
        plVar18[0xe] = (longlong)puVar13;
        bVar4 = true;
        bVar6 = false;
        bVar3 = true;
        bVar22 = true;
        goto LAB_180013225;
      }
      pcVar19 = "left bracket expected in typedef";
      goto LAB_18001351f;
    }
    if (plVar18 != (longlong *)0x0) {
      (**(code **)(*plVar18 + 8))(plVar18,1);
    }
    if (sVar9 != 0x28) {
      (**(code **)(*param_1 + 8))(param_1,"left bracket expected in \'include_if_float\'");
      *param_2 = 1;
      return;
    }
    FUN_1800122a0((longlong)param_1);
    local_38[0] = 0;
    puVar12 = FUN_180014230(param_1,local_38);
    if (local_38[0] != 0) goto LAB_180012e64;
    FUN_1800122a0((longlong)param_1);
    plVar18 = param_1;
    iVar10 = FUN_180012450((longlong)param_1);
    if (iVar10 == 0) goto LAB_180012e64;
    FUN_1800122a0((longlong)plVar18);
    local_38[0] = 0;
    puVar13 = FUN_180014230(param_1,local_38);
    if (local_38[0] != 0) {
      pcVar19 = "int expected in \'include_if_float\'";
      goto LAB_180012ed4;
    }
    FUN_1800122a0((longlong)param_1);
    sVar9 = FUN_180012190((longlong)param_1);
    if (sVar9 != 0x2c) {
      pcVar19 = "comma expected in \'include_if_float\'";
      goto LAB_180012ed4;
    }
    FUN_1800122a0((longlong)param_1);
    local_38[0] = 0;
    puVar14 = FUN_180014fd0(param_1,local_38);
    if (local_38[0] != 0) {
      pcVar19 = "string expected in \'include_if_float\'";
      goto LAB_18001311f;
    }
    FUN_1800122a0((longlong)param_1);
    sVar9 = FUN_180012190((longlong)param_1);
    if (sVar9 != 0x29) {
      pcVar19 = "right bracket expected in \'include_if_float\'";
      goto LAB_18001311f;
    }
    lVar16 = -1;
    pcVar19 = (char *)puVar14[5];
    do {
      if (lVar16 == 0) break;
      lVar16 = lVar16 + -1;
      cVar8 = *pcVar19;
      pcVar19 = pcVar19 + 1;
    } while (cVar8 != '\0');
    if (lVar16 != -2) {
      uVar15 = FUN_180017760(iVar10,*(float *)(puVar12 + 5),*(float *)(puVar13 + 5));
      cVar8 = (char)uVar15;
      goto LAB_1800131ae;
    }
LAB_180013182:
    if (puVar13 != (undefined8 *)0x0) {
      (**(code **)*puVar13)(puVar13,1);
    }
    if (puVar12 == (undefined8 *)0x0) goto LAB_1800131eb;
  }
  (**(code **)*puVar12)(puVar12,1);
LAB_1800131eb:
  (**(code **)*puVar14)(puVar14,1);
  return;
switchD_1800132ac_caseD_29:
  if (bVar4) {
    plVar18[0xf] = *param_4;
    *param_4 = (longlong)plVar18;
    return;
  }
switchD_1800132ac_caseD_2a:
  pcVar19 = "unexpected character in typedef";
LAB_18001351f:
  (**(code **)(*param_1 + 8))(param_1,pcVar19);
  *param_2 = 1;
  if (plVar18 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar18 + 8))(plVar18,1);
  return;
}



longlong FUN_1800135f0(longlong *param_1,char *param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  uVar2 = FUN_180013700(param_2);
  puVar9 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)param_1[0x49];
  if ((undefined8 *)param_1[0x49] != (undefined8 *)0x0) {
    do {
      if (*(uint *)(puVar7 + -2) < uVar2) {
        puVar8 = (undefined8 *)puVar7[2];
      }
      else {
        puVar8 = (undefined8 *)*puVar7;
        puVar9 = puVar7;
      }
      puVar7 = puVar8;
    } while (puVar8 != (undefined8 *)0x0);
    if ((puVar9 != (undefined8 *)0x0) && (*(uint *)(puVar9 + -2) <= uVar2)) {
      lVar1 = puVar9[-1];
      iVar3 = _stricmp(param_2,(char *)(lVar1 + 8));
      if (iVar3 == 0) {
        if (*(int *)(*(longlong *)(lVar1 + 0x70) + 0x10) == param_3) {
          return lVar1;
        }
        *param_4 = 1;
        lVar4 = *param_1;
        puVar6 = (&PTR_DAT_1800230f0)[param_3];
        pcVar5 = "\'%s\' const type != \'%s\'";
      }
      else {
        *param_4 = 1;
        lVar4 = *param_1;
        puVar6 = (undefined *)(lVar1 + 8);
        pcVar5 = "\'%s\' hash collision with \'%s\'";
      }
      (**(code **)(lVar4 + 8))(param_1,pcVar5,param_2,puVar6);
      return 0;
    }
  }
  (**(code **)(*param_1 + 8))(param_1,"WARNING unknown const name \'%s\'",param_2);
  return 0;
}



int FUN_180013700(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char local_408 [1032];
  
  if (param_1 == (char *)0x0) {
    return -1;
  }
  strcpy_s(local_408,0x400,param_1);
  iVar4 = 0;
  pcVar2 = local_408;
  uVar3 = 0;
  do {
    cVar1 = *pcVar2;
    if (cVar1 == '\0') break;
    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      cVar1 = cVar1 + ' ';
    }
    uVar3 = uVar3 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (uVar3 < 0x400);
  pcVar2 = local_408;
  while (local_408[0] != '\0') {
    pcVar2 = pcVar2 + 1;
    iVar4 = iVar4 * 0x29 + (int)local_408[0];
    local_408[0] = *pcVar2;
  }
  return iVar4;
}



void FUN_180013790(longlong *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  char *pcVar11;
  wchar_t *pwVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  uint *puVar15;
  undefined2 uVar16;
  short sVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong *plVar21;
  uint local_res18 [2];
  
  plVar9 = malloc(0x90);
  plVar21 = (longlong *)0x0;
  plVar20 = plVar21;
  if (plVar9 != (longlong *)0x0) {
    plVar9[0xe] = 0;
    plVar9[0xf] = 0;
    plVar9[0x10] = 0;
    *(undefined1 *)(plVar9 + 1) = 0;
    *(undefined4 *)(plVar9 + 0x11) = 0xffffffff;
    *plVar9 = (longlong)CTCPARSE_KEYWORD::vftable;
    plVar20 = plVar9;
  }
  plVar9 = plVar20 + 1;
  iVar8 = FUN_180012550(param_1,(undefined1 *)plVar9);
  if (iVar8 == 0) {
    lVar19 = -1;
    plVar14 = plVar9;
    do {
      if (lVar19 == 0) break;
      lVar19 = lVar19 + -1;
      lVar6 = *plVar14;
      plVar14 = (longlong *)((longlong)plVar14 + 1);
    } while ((char)lVar6 != '\0');
    if ((plVar9 != (longlong *)0x0) && (plVar14 = plVar21, ~(uint)lVar19 != 1)) {
      do {
        cVar7 = (char)*plVar9;
        if (cVar7 == '\0') break;
        if ((byte)(cVar7 + 0xbfU) < 0x1a) {
          cVar7 = cVar7 + ' ';
        }
        uVar18 = (int)plVar14 + 1;
        *(char *)plVar9 = cVar7;
        plVar9 = (longlong *)((longlong)plVar9 + 1);
        plVar14 = (longlong *)(ulonglong)uVar18;
      } while (uVar18 < ~(uint)lVar19 - 1);
    }
    FUN_1800122a0((longlong)param_1);
    uVar18 = *(uint *)((longlong)param_1 + 0x224);
    if (uVar18 < *(uint *)(param_1 + 0x44)) {
      if (*(short *)(param_1[0x42] + (ulonglong)uVar18 * 2) == 10) {
        *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
      }
      sVar17 = *(short *)(param_1[0x42] + (ulonglong)uVar18 * 2);
      *(uint *)((longlong)param_1 + 0x224) = uVar18 + 1;
      if (sVar17 == 0x28) {
        bVar2 = false;
        bVar5 = true;
        bVar1 = false;
LAB_180013902:
        bVar3 = false;
        if (bVar1) {
          FUN_1800122a0((longlong)param_1);
          lVar19 = plVar20[0xe];
          iVar8 = *(int *)(lVar19 + 0x10);
          if (iVar8 == 0) {
            puVar10 = FUN_180013e80(param_1,param_2);
LAB_1800139d8:
            *(undefined4 *)(lVar19 + 0x28) = *(undefined4 *)(puVar10 + 5);
LAB_1800139e1:
            puVar13 = (undefined8 *)*puVar10;
LAB_1800139e4:
            (*(code *)*puVar13)(puVar10,1);
          }
          else {
            if (iVar8 == 1) {
              puVar10 = FUN_180014230(param_1,param_2);
              goto LAB_1800139d8;
            }
            if (iVar8 == 2) {
              puVar10 = FUN_180014fd0(param_1,param_2);
              pcVar11 = FUN_180011250((char *)puVar10[5]);
              *(char **)(lVar19 + 0x28) = pcVar11;
              pwVar12 = FUN_1800112b0((wchar_t *)puVar10[6]);
              *(wchar_t **)(lVar19 + 0x30) = pwVar12;
              puVar13 = (undefined8 *)*puVar10;
              goto LAB_1800139e4;
            }
            if (iVar8 == 3) {
              puVar10 = FUN_1800146b0(param_1,param_2);
              *(undefined4 *)(lVar19 + 0x28) = *(undefined4 *)(puVar10 + 5);
              *(undefined4 *)(lVar19 + 0x2c) = *(undefined4 *)((longlong)puVar10 + 0x2c);
              *(undefined4 *)(lVar19 + 0x30) = *(undefined4 *)(puVar10 + 6);
              if (puVar10 == (undefined8 *)0x0) goto LAB_1800139ee;
              goto LAB_1800139e1;
            }
            if (iVar8 == 4) {
              puVar10 = FUN_180014af0(param_1,param_2);
              *(undefined4 *)(lVar19 + 0x28) = *(undefined4 *)(puVar10 + 5);
              *(undefined4 *)(lVar19 + 0x2c) = *(undefined4 *)((longlong)puVar10 + 0x2c);
              *(undefined4 *)(lVar19 + 0x30) = *(undefined4 *)(puVar10 + 6);
              *(undefined4 *)(lVar19 + 0x34) = *(undefined4 *)((longlong)puVar10 + 0x34);
              if (puVar10 != (undefined8 *)0x0) goto LAB_1800139e1;
            }
          }
LAB_1800139ee:
          if (*param_2 != 0) goto LAB_180013dd5;
          bVar3 = true;
          bVar2 = false;
          bVar5 = false;
        }
        FUN_1800122a0((longlong)param_1);
        uVar18 = *(uint *)((longlong)param_1 + 0x224);
        if (uVar18 < *(uint *)(param_1 + 0x44)) {
          if (*(short *)(param_1[0x42] + (ulonglong)uVar18 * 2) == 10) {
            *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
          }
          uVar16 = *(undefined2 *)(param_1[0x42] + (ulonglong)uVar18 * 2);
          *(uint *)((longlong)param_1 + 0x224) = uVar18 + 1;
        }
        else {
          uVar16 = 0xffff;
        }
        plVar9 = plVar21;
        switch(uVar16) {
        case 0x29:
          if (bVar3) {
            plVar20[0xf] = param_1[0x48];
            param_1[0x48] = (longlong)plVar20;
            local_res18[0] = FUN_180011210((longlong)plVar20);
            puVar10 = (undefined8 *)param_1[0x49];
            while (puVar10 != (undefined8 *)0x0) {
              if (*(uint *)(puVar10 + -2) < local_res18[0]) {
                puVar10 = (undefined8 *)puVar10[2];
              }
              else {
                puVar10 = (undefined8 *)*puVar10;
              }
            }
            puVar15 = FUN_180017300(param_1 + 0x49,local_res18);
            *(longlong **)puVar15 = plVar20;
            return;
          }
switchD_180013a6d_caseD_2a:
          (**(code **)(*param_1 + 8))(param_1,"unexpected character in typedef");
          *param_2 = 1;
          if (plVar20 == (longlong *)0x0) {
            return;
          }
LAB_180013dd5:
          (**(code **)(*plVar20 + 8))(plVar20,1);
          return;
        default:
          goto switchD_180013a6d_caseD_2a;
        case 0x2c:
          if (!bVar2) goto switchD_180013a6d_caseD_2a;
          bVar2 = false;
          bVar5 = false;
          bVar1 = true;
          goto LAB_180013902;
        case 0x46:
        case 0x66:
          if (!bVar5) goto switchD_180013a6d_caseD_2a;
          plVar14 = malloc(0x30);
          if (plVar14 != (longlong *)0x0) {
            plVar14[3] = 0;
            plVar14[1] = 0;
            *(undefined4 *)(plVar14 + 2) = 1;
            *(undefined1 *)(plVar14 + 4) = 0;
            *plVar14 = (longlong)CTCPARSE_FLOAT::vftable;
            *(undefined4 *)(plVar14 + 5) = 0;
            plVar9 = plVar14;
          }
          lVar19 = plVar20[0xe];
          if (lVar19 != 0) {
            lVar6 = lVar19;
            for (lVar4 = *(longlong *)(lVar19 + 8); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 8)) {
              lVar6 = lVar4;
            }
            *(longlong **)(lVar6 + 8) = plVar9;
            plVar20[0xe] = lVar19;
            bVar2 = true;
            bVar5 = false;
            bVar1 = false;
            goto LAB_180013902;
          }
          break;
        case 0x49:
        case 0x4e:
        case 0x69:
        case 0x6e:
          if (!bVar5) goto switchD_180013a6d_caseD_2a;
          plVar14 = malloc(0x30);
          if (plVar14 != (longlong *)0x0) {
            plVar14[3] = 0;
            plVar14[1] = 0;
            *(undefined4 *)(plVar14 + 2) = 0;
            *(undefined1 *)(plVar14 + 4) = 0;
            *plVar14 = (longlong)CTCPARSE_INT::vftable;
            *(undefined4 *)(plVar14 + 5) = 0;
            plVar9 = plVar14;
          }
          lVar19 = plVar20[0xe];
          if (lVar19 != 0) {
            lVar6 = lVar19;
            for (lVar4 = *(longlong *)(lVar19 + 8); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 8)) {
              lVar6 = lVar4;
            }
            *(longlong **)(lVar6 + 8) = plVar9;
            plVar20[0xe] = lVar19;
            bVar2 = true;
            bVar5 = false;
            bVar1 = false;
            goto LAB_180013902;
          }
          break;
        case 0x53:
        case 0x73:
          if (!bVar5) goto switchD_180013a6d_caseD_2a;
          plVar14 = malloc(0x38);
          if (plVar14 != (longlong *)0x0) {
            plVar14[3] = 0;
            plVar14[1] = 0;
            *(undefined4 *)(plVar14 + 2) = 2;
            *(undefined1 *)(plVar14 + 4) = 0;
            plVar14[5] = 0;
            *plVar14 = (longlong)CTCPARSE_STRING::vftable;
            plVar14[6] = 0;
            plVar9 = plVar14;
          }
          lVar19 = plVar20[0xe];
          if (lVar19 != 0) {
            lVar6 = lVar19;
            for (lVar4 = *(longlong *)(lVar19 + 8); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 8)) {
              lVar6 = lVar4;
            }
            *(longlong **)(lVar6 + 8) = plVar9;
            plVar20[0xe] = lVar19;
            bVar2 = true;
            bVar5 = false;
            bVar1 = false;
            goto LAB_180013902;
          }
          break;
        case 0x56:
        case 0x76:
          if (!bVar5) goto switchD_180013a6d_caseD_2a;
          uVar18 = *(uint *)((longlong)param_1 + 0x224);
          if (uVar18 < *(uint *)(param_1 + 0x44)) {
            if (*(short *)(param_1[0x42] + (ulonglong)uVar18 * 2) == 10) {
              *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
            }
            sVar17 = *(short *)(param_1[0x42] + (ulonglong)uVar18 * 2);
            *(uint *)((longlong)param_1 + 0x224) = uVar18 + 1;
          }
          else {
            sVar17 = -1;
          }
          if (sVar17 == 0x33) {
            puVar10 = malloc(0x38);
            if (puVar10 != (undefined8 *)0x0) {
              plVar9 = FUN_180011120(puVar10,0,0,0,(char *)0x0);
            }
            lVar19 = plVar20[0xe];
            if (lVar19 == 0) {
LAB_180013cfe:
              bVar2 = true;
              bVar5 = false;
              bVar1 = false;
              plVar20[0xe] = (longlong)plVar9;
            }
            else {
              lVar6 = lVar19;
              for (lVar4 = *(longlong *)(lVar19 + 8); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 8))
              {
                lVar6 = lVar4;
              }
              *(longlong **)(lVar6 + 8) = plVar9;
              plVar20[0xe] = lVar19;
              bVar2 = true;
              bVar5 = false;
              bVar1 = false;
            }
          }
          else {
            if (sVar17 != 0x34) goto switchD_180013a6d_caseD_2a;
            puVar10 = malloc(0x38);
            if (puVar10 != (undefined8 *)0x0) {
              plVar9 = FUN_180011190(puVar10,0,0,0,0x3f800000,(char *)0x0);
            }
            lVar19 = plVar20[0xe];
            if (lVar19 == 0) goto LAB_180013cfe;
            lVar6 = lVar19;
            for (lVar4 = *(longlong *)(lVar19 + 8); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 8)) {
              lVar6 = lVar4;
            }
            *(longlong **)(lVar6 + 8) = plVar9;
            plVar20[0xe] = lVar19;
            bVar2 = true;
            bVar5 = false;
            bVar1 = false;
          }
          goto LAB_180013902;
        }
        plVar20[0xe] = (longlong)plVar9;
        bVar2 = true;
        bVar5 = false;
        bVar1 = false;
        goto LAB_180013902;
      }
    }
    (**(code **)(*param_1 + 8))(param_1,"left bracket expected in const def");
    *param_2 = 1;
    if (plVar20 != (longlong *)0x0) {
      (**(code **)(*plVar20 + 8))(plVar20,1);
    }
  }
  else {
    (**(code **)(*param_1 + 8))(param_1,"error in const def");
    *param_2 = 1;
    if (plVar20 != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x000180013830. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*plVar20 + 8))(plVar20,1);
      return;
    }
  }
  return;
}



undefined8 * FUN_180013e80(longlong *param_1,int *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  ushort uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined4 local_res8 [2];
  char local_88 [112];
  
  uVar5 = *(uint *)((longlong)param_1 + 0x224);
  bVar2 = false;
  bVar3 = false;
  if (uVar5 < *(uint *)(param_1 + 0x44)) {
    if (*(short *)(param_1[0x42] + (ulonglong)uVar5 * 2) == 10) {
      *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
    }
    uVar8 = *(ushort *)(param_1[0x42] + (ulonglong)uVar5 * 2);
    *(uint *)((longlong)param_1 + 0x224) = uVar5 + 1;
  }
  else {
    uVar8 = 0xffff;
  }
  if (uVar8 == 0x2d) {
    bVar3 = true;
    FUN_1800122a0((longlong)param_1);
  }
  else {
    if (uVar8 == 0x25) {
      iVar10 = FUN_180012550(param_1,local_88);
      *param_2 = iVar10;
      if (iVar10 == 0) {
        if ((code *)param_1[0x4c] != (code *)0x0) {
          if (param_1[0x51] == 0) {
            *param_2 = 1;
            (**(code **)(*param_1 + 8))(param_1,"using empty varlist set to get value");
            return (undefined8 *)0x0;
          }
          cVar4 = (*(code *)param_1[0x4c])(local_res8,local_88);
          if (cVar4 == '\0') {
            *param_2 = 1;
            (**(code **)(*param_1 + 8))(param_1,"int variable \'%s\' not found!\n",local_88);
            return (undefined8 *)0x0;
          }
          puVar7 = malloc(0x30);
          if (puVar7 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          lVar9 = -1;
          *puVar7 = CTCPARSE_PARAM::vftable;
          pcVar6 = local_88;
          do {
            if (lVar9 == 0) break;
            lVar9 = lVar9 + -1;
            cVar4 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar4 != '\0');
          pcVar6 = malloc((ulonglong)~(uint)lVar9);
          strcpy_s(pcVar6,(ulonglong)~(uint)lVar9,local_88);
          puVar7[3] = pcVar6;
          *puVar7 = CTCPARSE_INT::vftable;
          puVar7[1] = 0;
          *(undefined4 *)(puVar7 + 2) = 0;
          *(undefined1 *)(puVar7 + 4) = 0;
          *(undefined4 *)(puVar7 + 5) = local_res8[0];
          return puVar7;
        }
        *param_2 = 1;
        (**(code **)(*param_1 + 8))
                  (param_1,"variable callback not specified: unable to read \'%s\' variable!\n",
                   local_88);
      }
      return (undefined8 *)0x0;
    }
    if ((uVar8 < 0x30) || (0x39 < uVar8)) {
      bVar2 = true;
    }
    if ((*(int *)((longlong)param_1 + 0x224) != 0) &&
       (uVar5 = *(int *)((longlong)param_1 + 0x224) - 1,
       *(uint *)((longlong)param_1 + 0x224) = uVar5,
       *(short *)(param_1[0x42] + (ulonglong)uVar5 * 2) == 10)) {
      *(int *)(param_1 + 0x45) = (int)param_1[0x45] + -1;
    }
    if (bVar2) {
      iVar10 = FUN_180012550(param_1,local_88);
      *param_2 = iVar10;
      if (iVar10 != 0) {
        return (undefined8 *)0x0;
      }
      lVar9 = FUN_1800135f0(param_1,local_88,0,param_2);
      if (lVar9 == 0) {
        puVar7 = malloc(0x30);
        if (puVar7 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        *(undefined1 *)(puVar7 + 4) = 0;
        *(undefined4 *)(puVar7 + 5) = 0;
      }
      else {
        puVar7 = malloc(0x30);
        if (puVar7 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        uVar1 = *(undefined4 *)(*(longlong *)(lVar9 + 0x70) + 0x28);
        *(undefined1 *)(puVar7 + 4) = 0;
        *(undefined4 *)(puVar7 + 5) = uVar1;
      }
      goto LAB_1800141ed;
    }
  }
  iVar10 = 0;
  iVar11 = 1;
  while( true ) {
    uVar5 = *(uint *)((longlong)param_1 + 0x224);
    if (uVar5 < *(uint *)(param_1 + 0x44)) {
      if (*(short *)(param_1[0x42] + (ulonglong)uVar5 * 2) == 10) {
        *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
      }
      uVar8 = *(ushort *)(param_1[0x42] + (ulonglong)uVar5 * 2);
      *(uint *)((longlong)param_1 + 0x224) = uVar5 + 1;
    }
    else {
      uVar8 = 0xffff;
    }
    uVar5 = (uint)uVar8;
    if (9 < uVar8 - 0x30) break;
    iVar10 = (uVar5 - 0x30) + iVar10 * 10;
    iVar11 = 0;
  }
  if (iVar11 != 0) {
    *param_2 = 1;
    (**(code **)(*param_1 + 8))(param_1,"expected number");
    return (undefined8 *)0x0;
  }
  if (((((uVar5 != 0x20) && (uVar5 != 10)) && (uVar5 != 0xd)) && ((uVar5 != 9 && (uVar5 != 0x2c))))
     && ((uVar5 != 0x29 && (uVar5 != 0x5d)))) {
    *param_2 = 1;
    (**(code **)(*param_1 + 8))(param_1,"invalid termination of integer");
    return (undefined8 *)0x0;
  }
  if ((*(int *)((longlong)param_1 + 0x224) != 0) &&
     (uVar5 = *(int *)((longlong)param_1 + 0x224) - 1, *(uint *)((longlong)param_1 + 0x224) = uVar5,
     *(short *)(param_1[0x42] + (ulonglong)uVar5 * 2) == 10)) {
    *(int *)(param_1 + 0x45) = (int)param_1[0x45] + -1;
  }
  if (bVar3) {
    iVar10 = -iVar10;
  }
  puVar7 = malloc(0x30);
  if (puVar7 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined1 *)(puVar7 + 4) = 0;
  *(int *)(puVar7 + 5) = iVar10;
LAB_1800141ed:
  *puVar7 = CTCPARSE_INT::vftable;
  *(undefined4 *)(puVar7 + 2) = 0;
  puVar7[1] = 0;
  puVar7[3] = 0;
  return puVar7;
}



undefined8 * FUN_180014230(longlong *param_1,int *param_2)

{
  double dVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ushort uVar9;
  longlong lVar10;
  bool bVar11;
  float fVar12;
  double dVar13;
  undefined1 local_res8 [8];
  undefined4 local_res18 [2];
  char local_98 [128];
  
  uVar6 = *(uint *)((longlong)param_1 + 0x224);
  bVar2 = false;
  if (uVar6 < *(uint *)(param_1 + 0x44)) {
    if (*(short *)(param_1[0x42] + (ulonglong)uVar6 * 2) == 10) {
      *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
    }
    uVar9 = *(ushort *)(param_1[0x42] + (ulonglong)uVar6 * 2);
    *(uint *)((longlong)param_1 + 0x224) = uVar6 + 1;
  }
  else {
    uVar9 = 0xffff;
  }
  if (uVar9 == 0x2d) {
    bVar2 = true;
    FUN_1800122a0((longlong)param_1);
LAB_1800142a4:
    dVar1 = 0.0;
    bVar11 = true;
    while( true ) {
      uVar6 = *(uint *)((longlong)param_1 + 0x224);
      if (uVar6 < *(uint *)(param_1 + 0x44)) {
        if (*(short *)(param_1[0x42] + (ulonglong)uVar6 * 2) == 10) {
          *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
        }
        uVar9 = *(ushort *)(param_1[0x42] + (ulonglong)uVar6 * 2);
        *(uint *)((longlong)param_1 + 0x224) = uVar6 + 1;
      }
      else {
        uVar9 = 0xffff;
      }
      if (9 < uVar9 - 0x30) break;
      dVar1 = dVar1 * 10.0 + (double)(int)(uVar9 - 0x30);
      bVar11 = false;
    }
    if (bVar11) {
      *param_2 = 1;
      (**(code **)(*param_1 + 8))(param_1,"expected number");
      return (undefined8 *)0x0;
    }
    if (uVar9 == 0x2e) {
      dVar13 = 1.0;
      while( true ) {
        uVar6 = *(uint *)((longlong)param_1 + 0x224);
        if (uVar6 < *(uint *)(param_1 + 0x44)) {
          if (*(short *)(param_1[0x42] + (ulonglong)uVar6 * 2) == 10) {
            *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
          }
          uVar9 = *(ushort *)(param_1[0x42] + (ulonglong)uVar6 * 2);
          *(uint *)((longlong)param_1 + 0x224) = uVar6 + 1;
        }
        else {
          uVar9 = 0xffff;
        }
        if (9 < uVar9 - 0x30) break;
        dVar13 = dVar13 * 10.0;
        dVar1 = dVar1 * 10.0 + (double)(int)(uVar9 - 0x30);
      }
      if ((((uVar9 == 0x20) || (uVar9 == 10)) ||
          ((uVar9 == 0xd || (((uVar9 == 9 || (uVar9 == 0x2c)) || (uVar9 == 0x29)))))) ||
         (uVar9 == 0x5d)) {
        FUN_1800121d0((longlong)param_1);
        dVar1 = dVar1 / dVar13;
LAB_180014641:
        if (bVar2) {
          dVar1 = -dVar1;
        }
        puVar8 = malloc(0x30);
        if (puVar8 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        fVar12 = (float)dVar1;
        *(undefined1 *)(puVar8 + 4) = 0;
LAB_180014665:
        *(float *)(puVar8 + 5) = fVar12;
        goto LAB_18001466a;
      }
    }
    else if ((((uVar9 == 0x20) || (uVar9 == 10)) || (uVar9 == 0xd)) ||
            (((uVar9 == 9 || (uVar9 == 0x2c)) || ((uVar9 == 0x29 || (uVar9 == 0x5d)))))) {
      FUN_1800121d0((longlong)param_1);
      goto LAB_180014641;
    }
    *param_2 = 1;
    (**(code **)(*param_1 + 8))(param_1,"invalid termination of float");
    puVar8 = (undefined8 *)0x0;
  }
  else {
    if (uVar9 == 0x25) {
      iVar5 = FUN_180012550(param_1,local_98);
      *param_2 = iVar5;
      if (iVar5 == 0) {
        iVar5 = FUN_1800126b0(param_1,local_res8);
        *param_2 = iVar5;
        if (iVar5 == 0) {
          if ((code *)param_1[0x4d] != (code *)0x0) {
            if (param_1[0x51] == 0) {
              *param_2 = 1;
              (**(code **)(*param_1 + 8))(param_1,"using empty varlist set to get value");
              return (undefined8 *)0x0;
            }
            local_res18[0] = 0;
            cVar4 = (*(code *)param_1[0x4d])(local_res18,local_98,local_res8[0]);
            if (cVar4 == '\0') {
              (**(code **)(*param_1 + 8))(param_1,"float variable \'%s\' not found!\n",local_98);
            }
            puVar8 = malloc(0x30);
            uVar3 = local_res18[0];
            if (puVar8 == (undefined8 *)0x0) {
              return (undefined8 *)0x0;
            }
            lVar10 = -1;
            *puVar8 = CTCPARSE_PARAM::vftable;
            pcVar7 = local_98;
            do {
              if (lVar10 == 0) break;
              lVar10 = lVar10 + -1;
              cVar4 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar4 != '\0');
            pcVar7 = malloc((ulonglong)~(uint)lVar10);
            strcpy_s(pcVar7,(ulonglong)~(uint)lVar10,local_98);
            *(undefined1 *)(puVar8 + 4) = local_res8[0];
            *(undefined4 *)(puVar8 + 5) = uVar3;
            *puVar8 = CTCPARSE_FLOAT::vftable;
            puVar8[3] = pcVar7;
            puVar8[1] = 0;
            *(undefined4 *)(puVar8 + 2) = 1;
            return puVar8;
          }
          *param_2 = 1;
          (**(code **)(*param_1 + 8))
                    (param_1,"variable callback not specified: unable to read \'%s\' variable!\n",
                     local_98);
        }
      }
      return (undefined8 *)0x0;
    }
    if ((uVar9 < 0x30) || (bVar11 = bVar2, 0x39 < uVar9)) {
      bVar11 = true;
    }
    if ((*(int *)((longlong)param_1 + 0x224) != 0) &&
       (uVar6 = *(int *)((longlong)param_1 + 0x224) - 1,
       *(uint *)((longlong)param_1 + 0x224) = uVar6,
       *(short *)(param_1[0x42] + (ulonglong)uVar6 * 2) == 10)) {
      *(int *)(param_1 + 0x45) = (int)param_1[0x45] + -1;
    }
    if (!bVar11) goto LAB_1800142a4;
    iVar5 = FUN_180012550(param_1,local_98);
    *param_2 = iVar5;
    if (iVar5 != 0) {
      return (undefined8 *)0x0;
    }
    lVar10 = FUN_1800135f0(param_1,local_98,1,param_2);
    if (lVar10 != 0) {
      puVar8 = malloc(0x30);
      if (puVar8 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      fVar12 = *(float *)(*(longlong *)(lVar10 + 0x70) + 0x28);
      *(undefined1 *)(puVar8 + 4) = 0;
      goto LAB_180014665;
    }
    puVar8 = malloc(0x30);
    if (puVar8 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *(undefined1 *)(puVar8 + 4) = 0;
    *(undefined4 *)(puVar8 + 5) = 0;
LAB_18001466a:
    *puVar8 = CTCPARSE_FLOAT::vftable;
    *(undefined4 *)(puVar8 + 2) = 1;
    puVar8[1] = 0;
    puVar8[3] = 0;
  }
  return puVar8;
}



undefined8 * FUN_1800146b0(longlong *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  char *pcVar10;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  char local_a8 [160];
  
  FUN_1800122a0((longlong)param_1);
  uVar7 = *(uint *)((longlong)param_1 + 0x224);
  if (uVar7 < *(uint *)(param_1 + 0x44)) {
    if (*(short *)(param_1[0x42] + (ulonglong)uVar7 * 2) == 10) {
      *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
    }
    sVar5 = *(short *)(param_1[0x42] + (ulonglong)uVar7 * 2);
    *(uint *)((longlong)param_1 + 0x224) = uVar7 + 1;
  }
  else {
    sVar5 = -1;
  }
  if (sVar5 == 0x5b) {
    FUN_1800122a0((longlong)param_1);
    puVar8 = FUN_180014230(param_1,param_2);
    if ((puVar8 == (undefined8 *)0x0) || (*param_2 != 0)) {
      pcVar10 = "invalid 1st float in vec3";
    }
    else {
      uVar1 = *(undefined4 *)(puVar8 + 5);
      (**(code **)*puVar8)(puVar8,1);
      FUN_1800122a0((longlong)param_1);
      uVar7 = *(uint *)((longlong)param_1 + 0x224);
      if (uVar7 < *(uint *)(param_1 + 0x44)) {
        if (*(short *)(param_1[0x42] + (ulonglong)uVar7 * 2) == 10) {
          *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
        }
        sVar5 = *(short *)(param_1[0x42] + (ulonglong)uVar7 * 2);
        *(uint *)((longlong)param_1 + 0x224) = uVar7 + 1;
        if (sVar5 == 0x2c) {
          FUN_1800122a0((longlong)param_1);
          puVar8 = FUN_180014230(param_1,param_2);
          if ((puVar8 == (undefined8 *)0x0) || (*param_2 != 0)) {
            pcVar10 = "invalid 2nd float in vec3";
          }
          else {
            uVar2 = *(undefined4 *)(puVar8 + 5);
            (**(code **)*puVar8)(puVar8,1);
            FUN_1800122a0((longlong)param_1);
            sVar5 = FUN_180012190((longlong)param_1);
            if (sVar5 == 0x2c) {
              FUN_1800122a0((longlong)param_1);
              puVar8 = FUN_180014230(param_1,param_2);
              if ((puVar8 == (undefined8 *)0x0) || (*param_2 != 0)) {
                pcVar10 = "invalid 3rd float in vec3";
              }
              else {
                uVar3 = *(undefined4 *)(puVar8 + 5);
                (**(code **)*puVar8)(puVar8,1);
                FUN_1800122a0((longlong)param_1);
                sVar5 = FUN_180012190((longlong)param_1);
                if (sVar5 == 0x5d) {
                  puVar8 = malloc(0x38);
                  if (puVar8 == (undefined8 *)0x0) {
                    return (undefined8 *)0x0;
                  }
                  puVar8 = FUN_180011120(puVar8,uVar1,uVar2,uVar3,(char *)0x0);
                  return puVar8;
                }
                *param_2 = 1;
                pcVar10 = "right closing bracket missed in vec3";
              }
            }
            else {
              *param_2 = 1;
              pcVar10 = "comma after 2nd float missed in vec3";
            }
          }
          goto LAB_180014ab1;
        }
      }
      *param_2 = 1;
      pcVar10 = "comma after 1st float missed in vec3";
    }
  }
  else if (sVar5 == 0x25) {
    iVar6 = FUN_180012550(param_1,local_a8);
    *param_2 = iVar6;
    if (iVar6 != 0) {
      return (undefined8 *)0x0;
    }
    if ((code *)param_1[0x4e] == (code *)0x0) {
      *param_2 = 1;
      (**(code **)(*param_1 + 8))
                (param_1,"variable callback not specified: unable to read \'%s\' variable!\n",
                 local_a8);
      return (undefined8 *)0x0;
    }
    if (param_1[0x51] != 0) {
      local_b8 = 0;
      local_b4 = 0;
      local_b0 = 0;
      cVar4 = (*(code *)param_1[0x4e])(&local_b8,local_a8);
      if (cVar4 == '\0') {
        (**(code **)(*param_1 + 8))(param_1,"vec3 variable \'%s\' not found!\n",local_a8);
      }
      puVar8 = malloc(0x38);
      uVar3 = local_b0;
      uVar2 = local_b4;
      uVar1 = local_b8;
      if (puVar8 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      lVar9 = -1;
      *puVar8 = CTCPARSE_PARAM::vftable;
      pcVar10 = local_a8;
      do {
        if (lVar9 == 0) break;
        lVar9 = lVar9 + -1;
        cVar4 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar4 != '\0');
      pcVar10 = malloc((ulonglong)~(uint)lVar9);
      strcpy_s(pcVar10,(ulonglong)~(uint)lVar9,local_a8);
      puVar8[3] = pcVar10;
      puVar8[1] = 0;
      *(undefined1 *)(puVar8 + 4) = 0;
      *(undefined4 *)(puVar8 + 2) = 3;
      *puVar8 = CTCPARSE_VEC3::vftable;
      *(undefined4 *)(puVar8 + 5) = uVar1;
      *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar2;
      *(undefined4 *)(puVar8 + 6) = uVar3;
      return puVar8;
    }
    *param_2 = 1;
    pcVar10 = "using empty varlist set to get value";
  }
  else {
    if ((*(int *)((longlong)param_1 + 0x224) != 0) &&
       (uVar7 = *(int *)((longlong)param_1 + 0x224) - 1,
       *(uint *)((longlong)param_1 + 0x224) = uVar7,
       *(short *)(param_1[0x42] + (ulonglong)uVar7 * 2) == 10)) {
      *(int *)(param_1 + 0x45) = (int)param_1[0x45] + -1;
    }
    iVar6 = FUN_180012550(param_1,local_a8);
    *param_2 = iVar6;
    if (iVar6 != 0) {
      return (undefined8 *)0x0;
    }
    lVar9 = FUN_1800135f0(param_1,local_a8,3,param_2);
    if (lVar9 != 0) {
      puVar8 = malloc(0x38);
      if (puVar8 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      lVar9 = *(longlong *)(lVar9 + 0x70);
      puVar8 = FUN_180011120(puVar8,*(undefined4 *)(lVar9 + 0x28),*(undefined4 *)(lVar9 + 0x2c),
                             *(undefined4 *)(lVar9 + 0x30),(char *)0x0);
      return puVar8;
    }
    pcVar10 = "vec3 wrong syntax or const name";
  }
LAB_180014ab1:
  (**(code **)(*param_1 + 8))(param_1,pcVar10);
  return (undefined8 *)0x0;
}



undefined8 * FUN_180014af0(longlong *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  char *pcVar11;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  char local_b8 [176];
  
  FUN_1800122a0((longlong)param_1);
  uVar8 = *(uint *)((longlong)param_1 + 0x224);
  if (uVar8 < *(uint *)(param_1 + 0x44)) {
    if (*(short *)(param_1[0x42] + (ulonglong)uVar8 * 2) == 10) {
      *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
    }
    sVar6 = *(short *)(param_1[0x42] + (ulonglong)uVar8 * 2);
    *(uint *)((longlong)param_1 + 0x224) = uVar8 + 1;
  }
  else {
    sVar6 = -1;
  }
  if (sVar6 == 0x5b) {
    FUN_1800122a0((longlong)param_1);
    puVar9 = FUN_180014230(param_1,param_2);
    if ((puVar9 == (undefined8 *)0x0) || (*param_2 != 0)) {
      pcVar11 = "invalid 1st float in vec4";
    }
    else {
      uVar1 = *(undefined4 *)(puVar9 + 5);
      (**(code **)*puVar9)(puVar9,1);
      FUN_1800122a0((longlong)param_1);
      uVar8 = *(uint *)((longlong)param_1 + 0x224);
      if (uVar8 < *(uint *)(param_1 + 0x44)) {
        if (*(short *)(param_1[0x42] + (ulonglong)uVar8 * 2) == 10) {
          *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
        }
        sVar6 = *(short *)(param_1[0x42] + (ulonglong)uVar8 * 2);
        *(uint *)((longlong)param_1 + 0x224) = uVar8 + 1;
        if (sVar6 == 0x2c) {
          FUN_1800122a0((longlong)param_1);
          puVar9 = FUN_180014230(param_1,param_2);
          if ((puVar9 == (undefined8 *)0x0) || (*param_2 != 0)) {
            pcVar11 = "invalid 2nd float in vec4";
          }
          else {
            uVar2 = *(undefined4 *)(puVar9 + 5);
            (**(code **)*puVar9)(puVar9,1);
            FUN_1800122a0((longlong)param_1);
            sVar6 = FUN_180012190((longlong)param_1);
            if (sVar6 == 0x2c) {
              FUN_1800122a0((longlong)param_1);
              puVar9 = FUN_180014230(param_1,param_2);
              if ((puVar9 == (undefined8 *)0x0) || (*param_2 != 0)) {
                pcVar11 = "invalid 3rd float in vec4";
              }
              else {
                uVar3 = *(undefined4 *)(puVar9 + 5);
                (**(code **)*puVar9)(puVar9,1);
                FUN_1800122a0((longlong)param_1);
                sVar6 = FUN_180012190((longlong)param_1);
                if (sVar6 == 0x2c) {
                  FUN_1800122a0((longlong)param_1);
                  puVar9 = FUN_180014230(param_1,param_2);
                  if ((puVar9 == (undefined8 *)0x0) || (*param_2 != 0)) {
                    pcVar11 = "invalid 4th float in vec4";
                  }
                  else {
                    uVar4 = *(undefined4 *)(puVar9 + 5);
                    (**(code **)*puVar9)(puVar9,1);
                    FUN_1800122a0((longlong)param_1);
                    sVar6 = FUN_180012190((longlong)param_1);
                    if (sVar6 == 0x5d) {
                      puVar9 = malloc(0x38);
                      if (puVar9 == (undefined8 *)0x0) {
                        return (undefined8 *)0x0;
                      }
                      puVar9 = FUN_180011190(puVar9,uVar1,uVar2,uVar3,uVar4,(char *)0x0);
                      return puVar9;
                    }
                    *param_2 = 1;
                    pcVar11 = "right closing bracket in vec4 missed";
                  }
                }
                else {
                  *param_2 = 1;
                  pcVar11 = "comma after 3rd float missed in vec4";
                }
              }
            }
            else {
              *param_2 = 1;
              pcVar11 = "comma after 2nd float missed in vec4";
            }
          }
          goto LAB_180014f8b;
        }
      }
      *param_2 = 1;
      pcVar11 = "comma after 1st float missed in vec4";
    }
  }
  else if (sVar6 == 0x25) {
    iVar7 = FUN_180012550(param_1,local_b8);
    *param_2 = iVar7;
    if (iVar7 != 0) {
      return (undefined8 *)0x0;
    }
    if ((code *)param_1[0x4f] == (code *)0x0) {
      *param_2 = 1;
      (**(code **)(*param_1 + 8))
                (param_1,"variable callback not specified: unable to read \'%s\' variable!\n",
                 local_b8);
      return (undefined8 *)0x0;
    }
    if (param_1[0x51] != 0) {
      local_c8 = 0;
      local_c4 = 0;
      local_c0 = 0;
      local_bc = 0;
      cVar5 = (*(code *)param_1[0x4f])(&local_c8,local_b8);
      if (cVar5 == '\0') {
        (**(code **)(*param_1 + 8))(param_1,"vec4 variable \'%s\' not found!\n",local_b8);
      }
      puVar9 = malloc(0x38);
      uVar4 = local_bc;
      uVar3 = local_c0;
      uVar2 = local_c4;
      uVar1 = local_c8;
      if (puVar9 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      lVar10 = -1;
      *puVar9 = CTCPARSE_PARAM::vftable;
      pcVar11 = local_b8;
      do {
        if (lVar10 == 0) break;
        lVar10 = lVar10 + -1;
        cVar5 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar5 != '\0');
      pcVar11 = malloc((ulonglong)~(uint)lVar10);
      strcpy_s(pcVar11,(ulonglong)~(uint)lVar10,local_b8);
      puVar9[3] = pcVar11;
      *(undefined4 *)(puVar9 + 2) = 4;
      puVar9[1] = 0;
      *(undefined1 *)(puVar9 + 4) = 0;
      *puVar9 = CTCPARSE_VEC4::vftable;
      *(undefined4 *)(puVar9 + 5) = uVar1;
      *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar2;
      *(undefined4 *)(puVar9 + 6) = uVar3;
      *(undefined4 *)((longlong)puVar9 + 0x34) = uVar4;
      return puVar9;
    }
    *param_2 = 1;
    pcVar11 = "using empty varlist set to get value";
  }
  else {
    if ((*(int *)((longlong)param_1 + 0x224) != 0) &&
       (uVar8 = *(int *)((longlong)param_1 + 0x224) - 1,
       *(uint *)((longlong)param_1 + 0x224) = uVar8,
       *(short *)(param_1[0x42] + (ulonglong)uVar8 * 2) == 10)) {
      *(int *)(param_1 + 0x45) = (int)param_1[0x45] + -1;
    }
    iVar7 = FUN_180012550(param_1,local_b8);
    *param_2 = iVar7;
    if (iVar7 != 0) {
      return (undefined8 *)0x0;
    }
    lVar10 = FUN_1800135f0(param_1,local_b8,4,param_2);
    if (lVar10 != 0) {
      puVar9 = malloc(0x38);
      if (puVar9 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      lVar10 = *(longlong *)(lVar10 + 0x70);
      puVar9 = FUN_180011190(puVar9,*(undefined4 *)(lVar10 + 0x28),*(undefined4 *)(lVar10 + 0x2c),
                             *(undefined4 *)(lVar10 + 0x30),*(undefined4 *)(lVar10 + 0x34),
                             (char *)0x0);
      return puVar9;
    }
    pcVar11 = "vec4 wrong syntax or const name";
  }
LAB_180014f8b:
  (**(code **)(*param_1 + 8))(param_1,pcVar11);
  return (undefined8 *)0x0;
}



undefined8 * FUN_180014fd0(longlong *param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  short sVar9;
  ulonglong uVar10;
  char local_188 [112];
  CHAR local_118 [256];
  
  uVar5 = *(uint *)((longlong)param_1 + 0x224);
  if (uVar5 < *(uint *)(param_1 + 0x44)) {
    if (*(short *)(param_1[0x42] + (ulonglong)uVar5 * 2) == 10) {
      *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
    }
    sVar9 = *(short *)(param_1[0x42] + (ulonglong)uVar5 * 2);
    *(uint *)((longlong)param_1 + 0x224) = uVar5 + 1;
    if (sVar9 == 0x25) {
      iVar3 = FUN_180012550(param_1,local_188);
      *param_2 = iVar3;
      if (iVar3 != 0) {
        return (undefined8 *)0x0;
      }
      if ((code *)param_1[0x50] == (code *)0x0) {
        *param_2 = 1;
        (**(code **)(*param_1 + 8))
                  (param_1,"variable callback not specified: unable to read \'%s\' variable!\n",
                   local_188);
        return (undefined8 *)0x0;
      }
      if (param_1[0x51] == 0) {
        *param_2 = 1;
        (**(code **)(*param_1 + 8))(param_1,"using empty varlist set to get value");
        return (undefined8 *)0x0;
      }
      cVar2 = (*(code *)param_1[0x50])(local_118,local_188);
      if (cVar2 != '\0') {
        puVar6 = malloc(0x38);
        if (puVar6 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar6 = FUN_180011af0(puVar6,local_118,local_188);
        return puVar6;
      }
      *param_2 = 1;
      (**(code **)(*param_1 + 8))(param_1,"string variable \'%s\' not found!\n",local_188);
      return (undefined8 *)0x0;
    }
    if (sVar9 == 0x22) {
      uVar7 = 0;
      uVar10 = uVar7;
      while( true ) {
        uVar5 = *(uint *)((longlong)param_1 + 0x224);
        uVar1 = *(uint *)(param_1 + 0x44);
        iVar3 = (int)uVar7;
        if (uVar1 <= uVar5) break;
        lVar8 = param_1[0x42];
        if (*(short *)(lVar8 + (ulonglong)uVar5 * 2) == 10) {
          *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
        }
        sVar9 = *(short *)(lVar8 + (ulonglong)uVar5 * 2);
        uVar4 = uVar5 + 1;
        *(uint *)((longlong)param_1 + 0x224) = uVar4;
        if (sVar9 == 0x5c) {
          if (uVar1 <= uVar4) {
            sVar9 = -1;
            goto LAB_180015297;
          }
          if (*(short *)(lVar8 + (ulonglong)uVar4 * 2) == 10) {
            *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
          }
          sVar9 = *(short *)(lVar8 + (ulonglong)uVar4 * 2);
          uVar4 = uVar5 + 2;
          uVar7 = (ulonglong)uVar4;
          *(uint *)((longlong)param_1 + 0x224) = uVar4;
          if (sVar9 == 0xd) {
            if (uVar4 < uVar1) {
              if (*(short *)(lVar8 + uVar7 * 2) == 10) {
                *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
              }
              sVar9 = *(short *)(lVar8 + uVar7 * 2);
              *(uint *)((longlong)param_1 + 0x224) = uVar5 + 3;
              if (sVar9 == 10) goto LAB_180015239;
            }
            else {
              sVar9 = -1;
            }
LAB_18001521a:
            if ((*(int *)((longlong)param_1 + 0x224) != 0) &&
               (uVar5 = *(int *)((longlong)param_1 + 0x224) - 1,
               *(uint *)((longlong)param_1 + 0x224) = uVar5,
               *(short *)(lVar8 + (ulonglong)uVar5 * 2) == 10)) {
              *(int *)(param_1 + 0x45) = (int)param_1[0x45] + -1;
            }
          }
          else if (sVar9 == 10) {
            if (uVar4 < uVar1) {
              if (*(short *)(lVar8 + uVar7 * 2) == 10) {
                *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
              }
              sVar9 = *(short *)(lVar8 + uVar7 * 2);
              *(uint *)((longlong)param_1 + 0x224) = uVar5 + 3;
              if (sVar9 == 0xd) goto LAB_180015239;
            }
            else {
              sVar9 = -1;
            }
            goto LAB_18001521a;
          }
LAB_180015239:
          if (sVar9 == 0x6e) {
            uVar7 = (ulonglong)(iVar3 + 2);
            *(undefined2 *)(uVar10 + param_1[0x43]) = 0xd;
            *(undefined2 *)(uVar10 + param_1[0x43] + 2) = 10;
            uVar10 = uVar10 + 4;
          }
          else {
            if (sVar9 != 0x74) goto LAB_180015297;
            uVar7 = (ulonglong)(iVar3 + 1);
            *(undefined2 *)(uVar10 + param_1[0x43]) = 9;
            uVar10 = uVar10 + 2;
          }
        }
        else {
          if (sVar9 == 0x22) {
            *(undefined2 *)(param_1[0x43] + uVar7 * 2) = 0;
            puVar6 = malloc(0x38);
            if (puVar6 == (undefined8 *)0x0) {
              return (undefined8 *)0x0;
            }
            puVar6 = FUN_180011bc0(puVar6,(wchar_t *)param_1[0x43]);
            return puVar6;
          }
          if (sVar9 == -1) break;
LAB_180015297:
          uVar7 = (ulonglong)(iVar3 + 1);
          *(short *)(uVar10 + param_1[0x43]) = sVar9;
          uVar10 = uVar10 + 2;
        }
      }
      *(undefined2 *)(param_1[0x43] + uVar7 * 2) = 0;
      *param_2 = 1;
      (**(code **)(*param_1 + 8))(param_1,"expected ending \"");
      return (undefined8 *)0x0;
    }
  }
  if ((*(int *)((longlong)param_1 + 0x224) != 0) &&
     (uVar5 = *(int *)((longlong)param_1 + 0x224) - 1, *(uint *)((longlong)param_1 + 0x224) = uVar5,
     *(short *)(param_1[0x42] + (ulonglong)uVar5 * 2) == 10)) {
    *(int *)(param_1 + 0x45) = (int)param_1[0x45] + -1;
  }
  iVar3 = FUN_180012550(param_1,local_188);
  *param_2 = iVar3;
  if (iVar3 != 0) {
    return (undefined8 *)0x0;
  }
  lVar8 = FUN_1800135f0(param_1,local_188,2,param_2);
  if (lVar8 == 0) {
    puVar6 = malloc(0x38);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6 = FUN_180011af0(puVar6,"???parser error???",(char *)0x0);
      return puVar6;
    }
  }
  else {
    puVar6 = malloc(0x38);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6 = FUN_180011af0(puVar6,*(LPCSTR *)(*(longlong *)(lVar8 + 0x70) + 0x28),(char *)0x0);
      return puVar6;
    }
  }
  return (undefined8 *)0x0;
}



undefined8 * FUN_1800153f0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  FUN_1800122a0(param_1);
  uVar1 = *(uint *)(param_1 + 0x224);
  uVar6 = (ulonglong)uVar1;
  if (uVar1 < *(uint *)(param_1 + 0x220)) {
    if (*(short *)(*(longlong *)(param_1 + 0x210) + uVar6 * 2) == 10) {
      *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
    }
    uVar5 = *(ushort *)(*(longlong *)(param_1 + 0x210) + uVar6 * 2);
    *(uint *)(param_1 + 0x224) = uVar1 + 1;
  }
  else {
    uVar5 = 0xffff;
  }
  while (((0x2f < uVar5 && (uVar5 < 0x3a)) ||
         ((uVar1 == *(int *)(param_1 + 0x224) - 1U && ((uVar5 == 0x2d || (uVar5 == 0x2b))))))) {
    uVar2 = *(uint *)(param_1 + 0x224);
    if (uVar2 < *(uint *)(param_1 + 0x220)) {
      if (*(short *)(*(longlong *)(param_1 + 0x210) + (ulonglong)uVar2 * 2) == 10) {
        *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
      }
      uVar5 = *(ushort *)(*(longlong *)(param_1 + 0x210) + (ulonglong)uVar2 * 2);
      *(uint *)(param_1 + 0x224) = uVar2 + 1;
    }
    else {
      uVar5 = 0xffff;
    }
  }
  if ((uVar5 != 0x20) &&
     (((((uVar5 != 10 && (uVar5 != 0xd)) && (uVar5 != 9)) && ((uVar5 != 0x2c && (uVar5 != 0x29))))
      && (uVar5 != 0x5d)))) {
    *(uint *)(param_1 + 0x224) = uVar1;
    return (undefined8 *)0x0;
  }
  if ((*(int *)(param_1 + 0x224) != 0) &&
     (uVar2 = *(int *)(param_1 + 0x224) - 1, *(uint *)(param_1 + 0x224) = uVar2,
     *(short *)(*(longlong *)(param_1 + 0x210) + (ulonglong)uVar2 * 2) == 10)) {
    *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + -1;
  }
  iVar3 = swscanf((wchar_t *)(*(longlong *)(param_1 + 0x210) + uVar6 * 2),L"%d");
  if (iVar3 == 1) {
    puVar4 = malloc(0x30);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[3] = 0;
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 2) = 0;
      *(undefined1 *)(puVar4 + 4) = 0;
      *(undefined4 *)(puVar4 + 5) = 0;
      *puVar4 = CTCPARSE_INT::vftable;
      return puVar4;
    }
    return (undefined8 *)0x0;
  }
  *(uint *)(param_1 + 0x224) = uVar1;
  return (undefined8 *)0x0;
}



undefined8 * FUN_180015590(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  FUN_1800122a0(param_1);
  uVar1 = *(uint *)(param_1 + 0x224);
  uVar6 = (ulonglong)uVar1;
  if (uVar1 < *(uint *)(param_1 + 0x220)) {
    if (*(short *)(*(longlong *)(param_1 + 0x210) + uVar6 * 2) == 10) {
      *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
    }
    uVar5 = *(ushort *)(*(longlong *)(param_1 + 0x210) + uVar6 * 2);
    *(uint *)(param_1 + 0x224) = uVar1 + 1;
  }
  else {
    uVar5 = 0xffff;
  }
  while ((((0x2f < uVar5 && (uVar5 < 0x3a)) || (uVar5 == 0x2e)) ||
         ((uVar1 == *(int *)(param_1 + 0x224) - 1U && ((uVar5 == 0x2d || (uVar5 == 0x2b))))))) {
    uVar2 = *(uint *)(param_1 + 0x224);
    if (uVar2 < *(uint *)(param_1 + 0x220)) {
      if (*(short *)(*(longlong *)(param_1 + 0x210) + (ulonglong)uVar2 * 2) == 10) {
        *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
      }
      uVar5 = *(ushort *)(*(longlong *)(param_1 + 0x210) + (ulonglong)uVar2 * 2);
      *(uint *)(param_1 + 0x224) = uVar2 + 1;
    }
    else {
      uVar5 = 0xffff;
    }
  }
  if (((uVar5 == 0x20) || (uVar5 == 10)) ||
     ((uVar5 == 0xd || ((((uVar5 == 9 || (uVar5 == 0x2c)) || (uVar5 == 0x29)) || (uVar5 == 0x5d)))))
     ) {
    if ((*(int *)(param_1 + 0x224) != 0) &&
       (uVar2 = *(int *)(param_1 + 0x224) - 1, *(uint *)(param_1 + 0x224) = uVar2,
       *(short *)(*(longlong *)(param_1 + 0x210) + (ulonglong)uVar2 * 2) == 10)) {
      *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + -1;
    }
    iVar3 = swscanf((wchar_t *)(*(longlong *)(param_1 + 0x210) + uVar6 * 2),L"%f");
    if (iVar3 == 1) {
      puVar4 = malloc(0x30);
      if (puVar4 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      puVar4[3] = 0;
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 2) = 1;
      *(undefined1 *)(puVar4 + 4) = 0;
      *(undefined4 *)(puVar4 + 5) = 0;
      *puVar4 = CTCPARSE_FLOAT::vftable;
      return puVar4;
    }
  }
  *(uint *)(param_1 + 0x224) = uVar1;
  return (undefined8 *)0x0;
}



undefined8 * FUN_180015720(longlong *param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_1800122a0((longlong)param_1);
  uVar3 = *(uint *)((longlong)param_1 + 0x224);
  if (uVar3 < *(uint *)(param_1 + 0x44)) {
    if (*(short *)(param_1[0x42] + (ulonglong)uVar3 * 2) == 10) {
      *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
    }
    sVar1 = *(short *)(param_1[0x42] + (ulonglong)uVar3 * 2);
    *(uint *)((longlong)param_1 + 0x224) = uVar3 + 1;
    if (sVar1 == 0x5b) {
      iVar8 = 0;
      do {
        FUN_1800122a0((longlong)param_1);
        iVar4 = *(int *)((longlong)param_1 + 0x224);
        do {
          uVar6 = *(uint *)((longlong)param_1 + 0x224);
          if (*(uint *)(param_1 + 0x44) <= uVar6) break;
          if (*(short *)(param_1[0x42] + (ulonglong)uVar6 * 2) == 10) {
            *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
          }
          uVar2 = *(ushort *)(param_1[0x42] + (ulonglong)uVar6 * 2);
          *(uint *)((longlong)param_1 + 0x224) = uVar6 + 1;
        } while ((((0x2f < uVar2) && (uVar2 < 0x3a)) || (uVar2 == 0x2e)) ||
                ((uVar2 == 0x2d || (uVar2 == 0x2b))));
        if ((*(int *)((longlong)param_1 + 0x224) != 0) &&
           (uVar6 = *(int *)((longlong)param_1 + 0x224) - 1,
           *(uint *)((longlong)param_1 + 0x224) = uVar6,
           *(short *)(param_1[0x42] + (ulonglong)uVar6 * 2) == 10)) {
          *(int *)(param_1 + 0x45) = (int)param_1[0x45] + -1;
        }
        FUN_1800122a0((longlong)param_1);
        uVar6 = *(uint *)((longlong)param_1 + 0x224);
        if (*(uint *)(param_1 + 0x44) <= uVar6) {
LAB_180015856:
          (**(code **)(*param_1 + 8))(param_1,"Invalid Vec3 value (%d)",iVar8);
          *(uint *)((longlong)param_1 + 0x224) = uVar3;
          goto LAB_18001586f;
        }
        lVar5 = param_1[0x42];
        if (*(short *)(lVar5 + (ulonglong)uVar6 * 2) == 10) {
          *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
        }
        sVar1 = *(short *)(lVar5 + (ulonglong)uVar6 * 2);
        *(uint *)((longlong)param_1 + 0x224) = uVar6 + 1;
        if (sVar1 != 0x2c) {
          if ((sVar1 == 0x5d) && (iVar8 == 2)) goto LAB_180015891;
          goto LAB_180015856;
        }
        if (1 < iVar8) goto LAB_180015856;
LAB_180015891:
        swscanf((wchar_t *)(lVar5 + (longlong)iVar4 * 2),L"%f");
        iVar8 = iVar8 + 1;
      } while (iVar8 < 3);
      puVar7 = malloc(0x38);
      if (puVar7 == (undefined8 *)0x0) {
LAB_18001586f:
        puVar7 = (undefined8 *)0x0;
      }
      else {
        puVar7[3] = 0;
        puVar7[1] = 0;
        *(undefined4 *)(puVar7 + 2) = 3;
        *(undefined1 *)(puVar7 + 4) = 0;
        *puVar7 = CTCPARSE_VEC3::vftable;
        *(undefined4 *)(puVar7 + 5) = local_18;
        *(undefined4 *)((longlong)puVar7 + 0x2c) = local_14;
        *(undefined4 *)(puVar7 + 6) = local_10;
      }
      return puVar7;
    }
  }
  *(uint *)((longlong)param_1 + 0x224) = uVar3;
  return (undefined8 *)0x0;
}



undefined8 * FUN_180015930(longlong *param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_1800122a0((longlong)param_1);
  uVar3 = *(uint *)((longlong)param_1 + 0x224);
  if (uVar3 < *(uint *)(param_1 + 0x44)) {
    if (*(short *)(param_1[0x42] + (ulonglong)uVar3 * 2) == 10) {
      *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
    }
    sVar1 = *(short *)(param_1[0x42] + (ulonglong)uVar3 * 2);
    *(uint *)((longlong)param_1 + 0x224) = uVar3 + 1;
    if (sVar1 == 0x5b) {
      iVar8 = 0;
      do {
        FUN_1800122a0((longlong)param_1);
        iVar4 = *(int *)((longlong)param_1 + 0x224);
        do {
          uVar6 = *(uint *)((longlong)param_1 + 0x224);
          if (*(uint *)(param_1 + 0x44) <= uVar6) break;
          if (*(short *)(param_1[0x42] + (ulonglong)uVar6 * 2) == 10) {
            *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
          }
          uVar2 = *(ushort *)(param_1[0x42] + (ulonglong)uVar6 * 2);
          *(uint *)((longlong)param_1 + 0x224) = uVar6 + 1;
        } while ((((0x2f < uVar2) && (uVar2 < 0x3a)) || (uVar2 == 0x2e)) ||
                ((uVar2 == 0x2d || (uVar2 == 0x2b))));
        if ((*(int *)((longlong)param_1 + 0x224) != 0) &&
           (uVar6 = *(int *)((longlong)param_1 + 0x224) - 1,
           *(uint *)((longlong)param_1 + 0x224) = uVar6,
           *(short *)(param_1[0x42] + (ulonglong)uVar6 * 2) == 10)) {
          *(int *)(param_1 + 0x45) = (int)param_1[0x45] + -1;
        }
        FUN_1800122a0((longlong)param_1);
        uVar6 = *(uint *)((longlong)param_1 + 0x224);
        if (*(uint *)(param_1 + 0x44) <= uVar6) {
LAB_180015b26:
          (**(code **)(*param_1 + 8))(param_1,"Invalid Vec4 value (%d)",iVar8);
LAB_180015b39:
          *(uint *)((longlong)param_1 + 0x224) = uVar3;
          goto LAB_180015b3f;
        }
        lVar5 = param_1[0x42];
        if (*(short *)(lVar5 + (ulonglong)uVar6 * 2) == 10) {
          *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
        }
        sVar1 = *(short *)(lVar5 + (ulonglong)uVar6 * 2);
        *(uint *)((longlong)param_1 + 0x224) = uVar6 + 1;
        if (sVar1 != 0x2c) {
          if (sVar1 != 0x5d) goto LAB_180015b26;
          if (iVar8 == 3) goto LAB_180015a83;
          if (iVar8 != 2) goto LAB_180015b26;
          goto LAB_180015b39;
        }
        if (2 < iVar8) goto LAB_180015b26;
LAB_180015a83:
        swscanf((wchar_t *)(lVar5 + (longlong)iVar4 * 2),L"%f");
        iVar8 = iVar8 + 1;
      } while (iVar8 < 4);
      puVar7 = malloc(0x38);
      if (puVar7 == (undefined8 *)0x0) {
LAB_180015b3f:
        puVar7 = (undefined8 *)0x0;
      }
      else {
        *puVar7 = CTCPARSE_VEC4::vftable;
        puVar7[3] = 0;
        puVar7[1] = 0;
        *(undefined4 *)(puVar7 + 2) = 4;
        *(undefined1 *)(puVar7 + 4) = 0;
        *(undefined4 *)(puVar7 + 5) = local_18;
        *(undefined4 *)((longlong)puVar7 + 0x2c) = local_14;
        *(undefined4 *)(puVar7 + 6) = local_10;
        *(undefined4 *)((longlong)puVar7 + 0x34) = local_c;
      }
      return puVar7;
    }
  }
  *(uint *)((longlong)param_1 + 0x224) = uVar3;
  return (undefined8 *)0x0;
}



// WARNING: Removing unreachable block (ram,0x000180015c0a)

wchar_t * FUN_180015b60(longlong param_1)

{
  short *_Src;
  short sVar1;
  longlong lVar2;
  short *psVar3;
  wchar_t *_Dst;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  uint uVar6;
  uint uVar7;
  wchar_t *pwVar9;
  uint uVar10;
  ulonglong uVar8;
  
  FUN_1800122a0(param_1);
  uVar6 = *(uint *)(param_1 + 0x224);
  if (uVar6 < *(uint *)(param_1 + 0x220)) {
    lVar2 = *(longlong *)(param_1 + 0x210);
    if (*(short *)(lVar2 + (ulonglong)uVar6 * 2) == 10) {
      *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
    }
    sVar1 = *(short *)(lVar2 + (ulonglong)uVar6 * 2);
    uVar6 = uVar6 + 1;
    uVar8 = (ulonglong)uVar6;
    *(uint *)(param_1 + 0x224) = uVar6;
    if (sVar1 == 0x22) {
      do {
        do {
        } while (*(uint *)(param_1 + 0x220) <= (uint)uVar8);
        if (*(short *)(lVar2 + uVar8 * 2) == 10) {
          *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
        }
        sVar1 = *(short *)(lVar2 + uVar8 * 2);
        uVar7 = (uint)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        *(uint *)(param_1 + 0x224) = uVar7;
      } while (sVar1 != 0x22);
      pwVar5 = (wchar_t *)0x0;
      _Src = (short *)(lVar2 + (longlong)(int)uVar6 * 2);
      psVar3 = _Src;
      pwVar9 = pwVar5;
      _Dst = pwVar5;
      if (uVar7 - uVar6 != 1) {
        do {
          uVar10 = (uint)pwVar9;
          if (*psVar3 == 0) break;
          uVar10 = uVar10 + 1;
          psVar3 = psVar3 + 1;
          pwVar9 = (wchar_t *)(ulonglong)uVar10;
        } while (uVar10 < (uVar7 - uVar6) - 1);
        if (uVar10 != 0) {
          _Dst = malloc((ulonglong)(uVar10 + 1) * 2);
          memcpy(_Dst,_Src,(ulonglong)uVar10 * 2);
          _Dst[uVar10] = L'\0';
        }
      }
      puVar4 = malloc(0x38);
      if (puVar4 != (undefined8 *)0x0) {
        pwVar9 = L"";
        if (_Dst != (wchar_t *)0x0) {
          pwVar9 = _Dst;
        }
        pwVar5 = (wchar_t *)FUN_180011bc0(puVar4,pwVar9);
      }
      free(_Dst);
      return pwVar5;
    }
  }
  if ((*(int *)(param_1 + 0x224) != 0) &&
     (uVar6 = *(int *)(param_1 + 0x224) - 1, *(uint *)(param_1 + 0x224) = uVar6,
     *(short *)(*(longlong *)(param_1 + 0x210) + (ulonglong)uVar6 * 2) == 10)) {
    *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + -1;
  }
  return (wchar_t *)0x0;
}



longlong * FUN_180015cc0(longlong *param_1,longlong param_2,int *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  longlong *plVar11;
  char *pcVar12;
  undefined8 *puVar13;
  wchar_t *pwVar14;
  short sVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  longlong *plVar19;
  longlong *plVar20;
  
  FUN_1800122a0((longlong)param_1);
  plVar11 = malloc(0x90);
  plVar19 = (longlong *)0x0;
  plVar20 = plVar19;
  if (plVar11 != (longlong *)0x0) {
    plVar11[0xe] = 0;
    plVar11[0xf] = 0;
    plVar11[0x10] = 0;
    *(undefined1 *)(plVar11 + 1) = 0;
    *(undefined4 *)(plVar11 + 0x11) = 0xffffffff;
    *plVar11 = (longlong)CTCPARSE_KEYWORD::vftable;
    plVar20 = plVar11;
  }
  plVar11 = plVar20 + 1;
  iVar10 = FUN_180012550(param_1,(undefined1 *)plVar11);
  if (iVar10 != 0) {
    (**(code **)(*param_1 + 8))(param_1,"error in call");
    *param_3 = 1;
    if (plVar20 != (longlong *)0x0) {
      (**(code **)(*plVar20 + 8))(plVar20,1);
    }
    return (longlong *)0x0;
  }
  lVar16 = -1;
  plVar17 = plVar11;
  do {
    if (lVar16 == 0) break;
    lVar16 = lVar16 + -1;
    lVar8 = *plVar17;
    plVar17 = (longlong *)((longlong)plVar17 + 1);
  } while ((char)lVar8 != '\0');
  if ((plVar11 != (longlong *)0x0) && (plVar17 = plVar11, ~(uint)lVar16 != 1)) {
    do {
      cVar9 = (char)*plVar17;
      if (cVar9 == '\0') break;
      if ((byte)(cVar9 + 0xbfU) < 0x1a) {
        cVar9 = cVar9 + ' ';
      }
      uVar18 = (int)plVar19 + 1;
      plVar19 = (longlong *)(ulonglong)uVar18;
      *(char *)plVar17 = cVar9;
      plVar17 = (longlong *)((longlong)plVar17 + 1);
    } while (uVar18 < ~(uint)lVar16 - 1);
  }
  do {
    if (param_2 == 0) break;
    pcVar12 = (char *)(param_2 + 8);
    lVar16 = (longlong)plVar11 - (longlong)pcVar12;
    do {
      cVar9 = *pcVar12;
      cVar1 = pcVar12[lVar16];
      if (cVar9 != cVar1) break;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    if (cVar9 == cVar1) {
      if (param_2 != 0) goto LAB_180015e17;
      break;
    }
    param_2 = *(longlong *)(param_2 + 0x78);
  } while( true );
  if ((char)param_1[0x47] == '\0') {
    (**(code **)(*param_1 + 8))(param_1,"unknown keyword %s",plVar11);
    goto LAB_18001621a;
  }
LAB_180015e17:
  FUN_1800122a0((longlong)param_1);
  uVar18 = *(uint *)((longlong)param_1 + 0x224);
  if (uVar18 < *(uint *)(param_1 + 0x44)) {
    if (*(short *)(param_1[0x42] + (ulonglong)uVar18 * 2) == 10) {
      *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
    }
    sVar15 = *(short *)(param_1[0x42] + (ulonglong)uVar18 * 2);
    *(uint *)((longlong)param_1 + 0x224) = uVar18 + 1;
    if (sVar15 != 0x28) goto LAB_18001620a;
    if (param_2 == 0) {
      do {
        FUN_1800122a0((longlong)param_1);
        pwVar14 = FUN_180015b60((longlong)param_1);
        if ((((pwVar14 == (wchar_t *)0x0) &&
             (pwVar14 = (wchar_t *)FUN_180015930(param_1), pwVar14 == (wchar_t *)0x0)) &&
            (pwVar14 = (wchar_t *)FUN_180015720(param_1), pwVar14 == (wchar_t *)0x0)) &&
           ((pwVar14 = (wchar_t *)FUN_1800153f0((longlong)param_1), pwVar14 == (wchar_t *)0x0 &&
            (pwVar14 = (wchar_t *)FUN_180015590((longlong)param_1), pwVar14 == (wchar_t *)0x0)))) {
          uVar18 = *(uint *)((longlong)param_1 + 0x224);
          if (uVar18 < *(uint *)(param_1 + 0x44)) {
            lVar16 = param_1[0x42];
            if (*(short *)(lVar16 + (ulonglong)uVar18 * 2) == 10) {
              *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
            }
            sVar15 = *(short *)(lVar16 + (ulonglong)uVar18 * 2);
            *(uint *)((longlong)param_1 + 0x224) = uVar18 + 1;
            if (sVar15 == 0x29) {
              if (uVar18 + 1 == 0) goto LAB_180016155;
              *(uint *)((longlong)param_1 + 0x224) = uVar18;
              sVar15 = *(short *)(lVar16 + (ulonglong)uVar18 * 2);
              goto LAB_18001614d;
            }
          }
          *param_3 = 1;
          (**(code **)(*param_1 + 8))(param_1,"cannot try parameter!");
          goto LAB_180016221;
        }
        pwVar3 = (wchar_t *)plVar20[0xe];
        if (pwVar3 != (wchar_t *)0x0) {
          pwVar6 = pwVar3;
          for (pwVar7 = *(wchar_t **)(pwVar3 + 4); pwVar7 != (wchar_t *)0x0;
              pwVar7 = *(wchar_t **)(pwVar7 + 4)) {
            pwVar6 = pwVar7;
          }
          *(wchar_t **)(pwVar6 + 4) = pwVar14;
          pwVar14 = pwVar3;
        }
        plVar20[0xe] = (longlong)pwVar14;
        FUN_1800122a0((longlong)param_1);
        uVar18 = *(uint *)((longlong)param_1 + 0x224);
        if (uVar18 < *(uint *)(param_1 + 0x44)) {
          if (*(short *)(param_1[0x42] + (ulonglong)uVar18 * 2) == 10) {
            *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
          }
          sVar15 = *(short *)(param_1[0x42] + (ulonglong)uVar18 * 2);
          *(uint *)((longlong)param_1 + 0x224) = uVar18 + 1;
        }
        else {
          sVar15 = -1;
        }
      } while ((sVar15 == 0x2c) || (sVar15 != 0x29));
      if (*(int *)((longlong)param_1 + 0x224) != 0) {
        uVar18 = *(int *)((longlong)param_1 + 0x224) - 1;
        *(uint *)((longlong)param_1 + 0x224) = uVar18;
        sVar15 = *(short *)(param_1[0x42] + (ulonglong)uVar18 * 2);
LAB_18001614d:
        if (sVar15 == 10) {
          *(int *)(param_1 + 0x45) = (int)param_1[0x45] + -1;
        }
      }
    }
    else {
      for (lVar16 = *(longlong *)(param_2 + 0x70); lVar16 != 0; lVar16 = *(longlong *)(lVar16 + 8))
      {
        FUN_1800122a0((longlong)param_1);
        iVar10 = *(int *)(lVar16 + 0x10);
        if (iVar10 == 0) {
          puVar13 = FUN_180013e80(param_1,param_3);
          puVar2 = (undefined8 *)plVar20[0xe];
          if (puVar2 != (undefined8 *)0x0) {
            puVar4 = puVar2;
            for (puVar5 = (undefined8 *)puVar2[1]; puVar5 != (undefined8 *)0x0;
                puVar5 = (undefined8 *)puVar5[1]) {
              puVar4 = puVar5;
            }
            puVar4[1] = puVar13;
            puVar13 = puVar2;
          }
LAB_180015fe5:
          plVar20[0xe] = (longlong)puVar13;
        }
        else {
          if (iVar10 == 1) {
            puVar13 = FUN_180014230(param_1,param_3);
            puVar2 = (undefined8 *)plVar20[0xe];
            if (puVar2 != (undefined8 *)0x0) {
              puVar4 = puVar2;
              for (puVar5 = (undefined8 *)puVar2[1]; puVar5 != (undefined8 *)0x0;
                  puVar5 = (undefined8 *)puVar5[1]) {
                puVar4 = puVar5;
              }
              puVar4[1] = puVar13;
              puVar13 = puVar2;
            }
            goto LAB_180015fe5;
          }
          if (iVar10 == 2) {
            puVar13 = FUN_180014fd0(param_1,param_3);
            puVar2 = (undefined8 *)plVar20[0xe];
            if (puVar2 != (undefined8 *)0x0) {
              puVar4 = puVar2;
              for (puVar5 = (undefined8 *)puVar2[1]; puVar5 != (undefined8 *)0x0;
                  puVar5 = (undefined8 *)puVar5[1]) {
                puVar4 = puVar5;
              }
              puVar4[1] = puVar13;
              puVar13 = puVar2;
            }
            goto LAB_180015fe5;
          }
          if (iVar10 == 3) {
            puVar13 = FUN_1800146b0(param_1,param_3);
            puVar2 = (undefined8 *)plVar20[0xe];
            if (puVar2 != (undefined8 *)0x0) {
              puVar4 = puVar2;
              for (puVar5 = (undefined8 *)puVar2[1]; puVar5 != (undefined8 *)0x0;
                  puVar5 = (undefined8 *)puVar5[1]) {
                puVar4 = puVar5;
              }
              puVar4[1] = puVar13;
              puVar13 = puVar2;
            }
            goto LAB_180015fe5;
          }
          if (iVar10 == 4) {
            puVar13 = FUN_180014af0(param_1,param_3);
            puVar2 = (undefined8 *)plVar20[0xe];
            if (puVar2 != (undefined8 *)0x0) {
              puVar4 = puVar2;
              for (puVar5 = (undefined8 *)puVar2[1]; puVar5 != (undefined8 *)0x0;
                  puVar5 = (undefined8 *)puVar5[1]) {
                puVar4 = puVar5;
              }
              puVar4[1] = puVar13;
              puVar13 = puVar2;
            }
            goto LAB_180015fe5;
          }
        }
        if (*param_3 != 0) goto LAB_180016221;
        if (*(longlong *)(lVar16 + 8) != 0) {
          FUN_1800122a0((longlong)param_1);
          uVar18 = *(uint *)((longlong)param_1 + 0x224);
          if (uVar18 < *(uint *)(param_1 + 0x44)) {
            if (*(short *)(param_1[0x42] + (ulonglong)uVar18 * 2) == 10) {
              *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
            }
            sVar15 = *(short *)(param_1[0x42] + (ulonglong)uVar18 * 2);
            *(uint *)((longlong)param_1 + 0x224) = uVar18 + 1;
            if (sVar15 == 0x2c) goto LAB_180016036;
          }
          pcVar12 = "comma expected";
          goto LAB_180016211;
        }
LAB_180016036:
      }
    }
LAB_180016155:
    FUN_1800122a0((longlong)param_1);
    uVar18 = *(uint *)((longlong)param_1 + 0x224);
    if (uVar18 < *(uint *)(param_1 + 0x44)) {
      if (*(short *)(param_1[0x42] + (ulonglong)uVar18 * 2) == 10) {
        *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
      }
      sVar15 = *(short *)(param_1[0x42] + (ulonglong)uVar18 * 2);
      *(uint *)((longlong)param_1 + 0x224) = uVar18 + 1;
      if (sVar15 == 0x29) {
        return plVar20;
      }
    }
    pcVar12 = "closing bracket expected";
  }
  else {
LAB_18001620a:
    pcVar12 = "opening bracket expected";
  }
LAB_180016211:
  (**(code **)(*param_1 + 8))(param_1,pcVar12);
LAB_18001621a:
  *param_3 = 1;
LAB_180016221:
  if (plVar20 != (longlong *)0x0) {
    (**(code **)(*plVar20 + 8))(plVar20,1);
  }
  return (longlong *)0x0;
}



longlong * FUN_180016260(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *local_res10;
  
  if ((DAT_18002b910 & 1) == 0) {
    DAT_18002b910 = DAT_18002b910 | 1;
  }
  DAT_1800296f0 = 1;
  QueryPerformanceCounter((LARGE_INTEGER *)&DAT_1800296e0);
  *param_2 = 0;
  local_res10 = (longlong *)0x0;
  plVar3 = FUN_180016330(param_1,&local_res10,param_2,0);
  plVar2 = local_res10;
  while (plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar2[0xf];
    plVar2[0xf] = 0;
    (**(code **)(*plVar2 + 8))(plVar2,1);
    plVar2 = plVar1;
  }
  DAT_1800296f0 = 0;
  QueryPerformanceCounter((LARGE_INTEGER *)&DAT_1800296e8);
  uVar4 = FUN_1800178b0();
  DAT_180027c34 = DAT_180027c34 + (float)uVar4;
  return plVar3;
}



longlong * FUN_180016330(longlong *param_1,undefined8 *param_2,int *param_3,int param_4)

{
  longlong *plVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  longlong *local_res8;
  undefined8 *local_res10;
  longlong *local_28;
  longlong *local_20;
  
  plVar6 = (longlong *)*param_2;
  local_res8 = plVar6;
  local_res10 = param_2;
  local_20 = plVar6;
  FUN_1800122a0((longlong)param_1);
  bVar10 = *(int *)((longlong)param_1 + 0x224) == (int)param_1[0x44];
  plVar8 = (longlong *)0x0;
  while (plVar9 = plVar8, !bVar10) {
    uVar4 = *(uint *)((longlong)param_1 + 0x224);
    if (uVar4 < *(uint *)(param_1 + 0x44)) {
      if (*(short *)(param_1[0x42] + (ulonglong)uVar4 * 2) == 10) {
        *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
      }
      sVar2 = *(short *)(param_1[0x42] + (ulonglong)uVar4 * 2);
      *(uint *)((longlong)param_1 + 0x224) = uVar4 + 1;
      if (sVar2 == 0x24) {
        FUN_180013790(param_1,param_3);
        iVar3 = *param_3;
      }
      else {
        if (sVar2 != 0x21) {
          if (sVar2 != 0x7d) goto LAB_180016495;
          plVar1 = local_res8;
          plVar5 = local_20;
          if (param_4 == 0) {
            (**(code **)(*param_1 + 8))(param_1,"unexpected closing curly bracket");
            *param_3 = 1;
            *local_res10 = local_res8;
            return plVar8;
          }
          goto joined_r0x0001800163d1;
        }
        local_28 = (longlong *)0x0;
        FUN_180012ba0(param_1,param_3,&local_28,(longlong *)&local_res8);
        plVar9 = local_28;
        if (plVar8 != (longlong *)0x0) {
          plVar9 = (longlong *)plVar8[0xf];
          plVar6 = plVar8;
          while (plVar5 = plVar9, plVar5 != (longlong *)0x0) {
            plVar6 = plVar5;
            plVar9 = (longlong *)plVar5[0xf];
          }
          plVar6[0xf] = (longlong)local_28;
          plVar9 = plVar8;
        }
        iVar3 = *param_3;
      }
joined_r0x000180016480:
      plVar6 = local_res8;
      if (iVar3 != 0) break;
    }
    else {
LAB_180016495:
      if ((*(int *)((longlong)param_1 + 0x224) != 0) &&
         (uVar4 = *(int *)((longlong)param_1 + 0x224) - 1,
         *(uint *)((longlong)param_1 + 0x224) = uVar4,
         *(short *)(param_1[0x42] + (ulonglong)uVar4 * 2) == 10)) {
        *(int *)(param_1 + 0x45) = (int)param_1[0x45] + -1;
      }
      plVar5 = FUN_180015cc0(param_1,(longlong)plVar6,param_3);
      plVar9 = plVar5;
      if (plVar8 != (longlong *)0x0) {
        plVar9 = (longlong *)plVar8[0xf];
        plVar6 = plVar8;
        while (plVar1 = plVar9, plVar1 != (longlong *)0x0) {
          plVar6 = plVar1;
          plVar9 = (longlong *)plVar1[0xf];
        }
        plVar6[0xf] = (longlong)plVar5;
        plVar9 = plVar8;
      }
      plVar6 = local_res8;
      if (*param_3 != 0) break;
      FUN_1800122a0((longlong)param_1);
      uVar4 = *(uint *)((longlong)param_1 + 0x224);
      if (uVar4 < *(uint *)(param_1 + 0x44)) {
        if (*(short *)(param_1[0x42] + (ulonglong)uVar4 * 2) == 10) {
          *(int *)(param_1 + 0x45) = (int)param_1[0x45] + 1;
        }
        cVar7 = (char)*(undefined2 *)(param_1[0x42] + (ulonglong)uVar4 * 2);
        *(uint *)((longlong)param_1 + 0x224) = uVar4 + 1;
      }
      else {
        cVar7 = -1;
      }
      if (cVar7 == '{') {
        plVar6 = FUN_180016330(param_1,&local_res8,param_3,1);
        plVar5[0x10] = (longlong)plVar6;
        iVar3 = *param_3;
        goto joined_r0x000180016480;
      }
      if (cVar7 == ';') {
        (**(code **)(*param_1 + 8))(param_1,"unexpected semicolon");
      }
      else if ((*(int *)((longlong)param_1 + 0x224) != 0) &&
              (uVar4 = *(int *)((longlong)param_1 + 0x224) - 1,
              *(uint *)((longlong)param_1 + 0x224) = uVar4,
              *(short *)(param_1[0x42] + (ulonglong)uVar4 * 2) == 10)) {
        *(int *)(param_1 + 0x45) = (int)param_1[0x45] + -1;
      }
    }
    FUN_1800122a0((longlong)param_1);
    plVar8 = plVar9;
    plVar6 = local_res8;
    bVar10 = *(int *)((longlong)param_1 + 0x224) == (int)param_1[0x44];
  }
  plVar1 = local_res8;
  plVar5 = local_20;
  if (param_4 != 0) {
joined_r0x0001800163d1:
    while (local_res8 = plVar1, plVar8 = local_20, plVar6 != local_20) {
      plVar1 = plVar6 + 0xf;
      plVar6 = (longlong *)plVar6[0xf];
      *plVar1 = 0;
      plVar1 = plVar6;
      local_20 = plVar8;
      if (local_res8 != (longlong *)0x0) {
        local_20 = plVar5;
        (**(code **)(*local_res8 + 8))(local_res8,1);
        plVar5 = local_20;
        local_20 = plVar8;
      }
    }
  }
  *local_res10 = plVar6;
  return plVar9;
}



void FUN_180016610(int param_1,int param_2,longlong param_3)

{
  char *_Source;
  size_t _Count;
  char *local_818 [2];
  wchar_t local_808 [1024];
  
  if (0x400 < param_2) {
    param_2 = 0x400;
  }
  _Count = (size_t)param_2;
  wcsncpy(local_808,(wchar_t *)(param_3 + (longlong)param_1 * 2),_Count);
  local_808[_Count] = L'\0';
  FUN_180003c00(local_818,local_808);
  _Source = "";
  if (local_818[0] != (char *)0x0) {
    _Source = local_818[0];
  }
  strncpy(&DAT_180029710,_Source,_Count);
  free(local_818[0]);
  (&DAT_180029710)[_Count] = 0;
  return;
}



// WARNING: Removing unreachable block (ram,0x000180016952)
// WARNING: Removing unreachable block (ram,0x000180016880)
// WARNING: Removing unreachable block (ram,0x000180016916)
// WARNING: Removing unreachable block (ram,0x00018001696e)
// WARNING: Restarted to delay deadcode elimination for space: register

void FUN_1800166a0(longlong param_1,char *param_2,undefined8 param_3,undefined *param_4)

{
  longlong *plVar1;
  TYPE TVar2;
  Settings *pSVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  short *psVar8;
  undefined1 *puVar9;
  uint uVar10;
  size_t _Size;
  undefined1 *_Size_00;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  undefined8 local_res18;
  undefined *local_res20;
  undefined1 *local_f0;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [4];
  undefined4 local_c4;
  char *local_c0;
  char *local_b8;
  undefined4 local_b0;
  char *local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  uint local_88;
  longlong *local_80;
  undefined8 local_78;
  void *local_70 [2];
  void *local_60 [4];
  
  _Size = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  vsprintf(&DAT_180029710,param_2,(va_list)&local_res18);
  plVar1 = *(longlong **)(param_1 + 0x230);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&DAT_180029710);
  }
  pSVar3 = Log::Settings::Instance();
  TVar2 = Log::Settings::GetCategoryLevel(pSVar3,"CTCParse");
  if (1 < (int)TVar2) {
    local_b8 = "F:\\PERFORCE\\dkoziol_ce6_dw_modding_2015\\src\\engine\\kernel\\ctcparse.cpp";
    local_a8 = "CTCParse::Error";
    param_4 = (undefined *)(param_1 + 0x109);
    local_c4 = 2;
    local_c0 = "CTCParse";
    local_b0 = 0xa74;
    local_c8[0] = 1;
    local_a0 = (void *)0x0;
    local_98 = 0;
    FUN_1800034b0((longlong)local_c8,"%s: in file \'%s\' in line %d\n",&DAT_180029710,param_4);
    free(local_a0);
    local_a0 = (void *)0x0;
  }
  uVar13 = *(uint *)(param_1 + 0x224);
  uVar14 = (ulonglong)(int)uVar13;
  if (uVar13 == 0) {
    uVar12 = 0;
  }
  else {
    uVar11 = uVar13 - 1;
    uVar12 = (ulonglong)uVar11;
    lVar7 = (longlong)(int)uVar11;
    if (0 < (int)uVar11) {
      psVar8 = (short *)(*(longlong *)(param_1 + 0x210) + lVar7 * 2);
      do {
        if ((*psVar8 == 0xd) || (*psVar8 == 10)) {
          uVar12 = (ulonglong)((int)uVar12 + 1);
          break;
        }
        lVar7 = lVar7 + -1;
        uVar12 = (ulonglong)((int)uVar12 - 1);
        psVar8 = psVar8 + -1;
      } while (0 < lVar7);
    }
  }
  if (uVar13 < *(uint *)(param_1 + 0x220)) {
    psVar8 = (short *)(*(longlong *)(param_1 + 0x210) + uVar14 * 2);
    do {
      uVar13 = (uint)uVar14;
      if ((*psVar8 == 0xd) || (*psVar8 == 10)) break;
      uVar13 = uVar13 + 1;
      uVar14 = (ulonglong)uVar13;
      psVar8 = psVar8 + 1;
    } while (uVar13 < *(uint *)(param_1 + 0x220));
  }
  uVar11 = (uint)uVar12;
  uVar13 = uVar13 - uVar11;
  plVar1 = *(longlong **)g_StartupValidator_exref;
  local_80 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    sprintf_s(&DAT_18002b710,0x200,"%s, ln %d");
    pcVar4 = "CTCParse error";
    do {
      if (*pcVar4 == '\0') break;
      uVar10 = (int)_Size + 1;
      _Size = (size_t)uVar10;
      pcVar4 = pcVar4 + 1;
    } while (uVar10 != 0xffffffff);
    local_e8 = (uint)_Size;
    local_e4 = local_e8;
    if (local_e8 == 0) {
      local_f0 = (undefined1 *)0x0;
    }
    else {
      local_f0 = malloc((ulonglong)(local_e8 + 1));
      memcpy(local_f0,"CTCParse error",_Size);
      local_f0[local_e8] = 0;
    }
    puVar9 = (undefined1 *)0x0;
    local_78 = (**(code **)(*plVar1 + 200))(plVar1,&local_f0,1);
    free(local_f0);
    local_f0 = puVar9;
    FUN_180003c00(&local_90,*(LPCWSTR *)(param_1 + 0x210));
    puVar5 = puVar9;
    if (uVar11 < local_88) {
      uVar10 = uVar13;
      if (uVar13 == 0xffffffff) {
        uVar10 = local_88;
      }
      if (local_88 < uVar11 + uVar10) {
        uVar10 = local_88 - uVar11;
      }
      _Size_00 = (undefined1 *)(ulonglong)uVar10;
      puVar15 = puVar9;
      if (uVar10 != 0) {
        local_e0 = uVar10;
        puVar5 = malloc((ulonglong)(uVar10 + 1));
        *puVar5 = 0;
        free((void *)0x0);
        memcpy(puVar5,(void *)(uVar12 + (longlong)local_90),(size_t)_Size_00);
        puVar9 = (undefined1 *)(ulonglong)local_e0;
        _Size_00[(longlong)puVar5] = 0;
        puVar15 = _Size_00;
      }
      local_d0 = CONCAT44((int)puVar9,(int)puVar15);
      local_d8 = puVar5;
      free((void *)0x0);
    }
    else {
      local_d0 = 0;
      local_d8 = puVar9;
      free((void *)0x0);
    }
    puVar6 = FUN_180003870(&local_d8,local_60,": ");
    FUN_180003870(puVar6,local_70,&DAT_180029710);
    param_4 = &DAT_18002b710;
    (**(code **)(*local_80 + 0x48))(local_80,local_78,0);
    free(local_70[0]);
    local_70[0] = (void *)0x0;
    free(local_60[0]);
    local_60[0] = (void *)0x0;
    free(puVar5);
    free(local_90);
  }
  FUN_180016610(uVar11,uVar13,*(longlong *)(param_1 + 0x210));
  pSVar3 = Log::Settings::Instance();
  TVar2 = Log::Settings::GetCategoryLevel(pSVar3,"CTCParse");
  if (1 < (int)TVar2) {
    local_b8 = "F:\\PERFORCE\\dkoziol_ce6_dw_modding_2015\\src\\engine\\kernel\\ctcparse.cpp";
    local_c8[0] = 1;
    local_c4 = 2;
    local_a8 = "CTCParse::Error";
    local_c0 = "CTCParse";
    local_b0 = 0xa8c;
    local_98 = 0;
    local_a0 = (void *)0x0;
    FUN_1800034b0((longlong)local_c8,"%s\n",&DAT_180029710,param_4);
    free(local_a0);
  }
  return;
}



void FUN_180016b00(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = param_1[0xe];
  *param_1 = CTCPARSE_KEYWORD::vftable;
  while (lVar1 != 0) {
    puVar2 = (undefined8 *)param_1[0xe];
    lVar1 = puVar2[1];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    param_1[0xe] = lVar1;
  }
  plVar3 = (longlong *)param_1[0x10];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3,1);
    param_1[0x10] = 0;
  }
  plVar3 = (longlong *)param_1[0xf];
  while (plVar3 != (longlong *)0x0) {
    plVar4 = (longlong *)plVar3[0xf];
    plVar3[0xf] = 0;
    (**(code **)(*plVar3 + 8))(plVar3,1);
    plVar3 = plVar4;
  }
  return;
}



undefined8 * FUN_180016ba0(undefined8 *param_1,uint param_2)

{
  FUN_180016b00(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



undefined8 * FUN_180016bd0(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 *puVar6;
  
  *param_1 = CTCPARSE_KEYWORD::vftable;
  puVar6 = param_1;
  if (param_2 == 0) {
    return param_1;
  }
  do {
    if (puVar6 == (undefined8 *)0x0) {
      return param_1;
    }
    pcVar5 = (char *)(param_2 + 8);
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar5[(longlong)puVar6 + (7 - (param_2 + 8))] = cVar1;
    } while (cVar1 != '\0');
    *(undefined4 *)(puVar6 + 0x11) = *(undefined4 *)(param_2 + 0x88);
    lVar3 = *(longlong *)(param_2 + 0x70);
    if (lVar3 == 0) {
      puVar6[0xe] = 0;
    }
    else {
      iVar2 = *(int *)(lVar3 + 0x10);
      if (iVar2 == 0) {
        puVar4 = malloc(0x30);
        if (puVar4 == (undefined8 *)0x0) {
LAB_180016d12:
          puVar6[0xe] = 0;
        }
        else {
          puVar4 = FUN_180011320(puVar4,lVar3);
          puVar6[0xe] = puVar4;
        }
      }
      else if (iVar2 == 1) {
        puVar4 = malloc(0x30);
        if (puVar4 == (undefined8 *)0x0) goto LAB_180016d12;
        puVar4 = FUN_180011480(puVar4,lVar3);
        puVar6[0xe] = puVar4;
      }
      else if (iVar2 == 2) {
        puVar4 = malloc(0x38);
        if (puVar4 == (undefined8 *)0x0) goto LAB_180016d12;
        puVar4 = FUN_1800118c0(puVar4,lVar3);
        puVar6[0xe] = puVar4;
      }
      else if (iVar2 == 3) {
        puVar4 = malloc(0x38);
        if (puVar4 == (undefined8 *)0x0) goto LAB_180016d12;
        puVar4 = FUN_1800115e0(puVar4,lVar3);
        puVar6[0xe] = puVar4;
      }
      else if (iVar2 == 4) {
        puVar4 = malloc(0x38);
        if (puVar4 == (undefined8 *)0x0) goto LAB_180016d12;
        puVar4 = FUN_180011750(puVar4,lVar3);
        puVar6[0xe] = puVar4;
      }
    }
    lVar3 = *(longlong *)(param_2 + 0x80);
    if (lVar3 == 0) {
      puVar6[0x10] = 0;
    }
    else {
      puVar4 = malloc(0x90);
      if (puVar4 == (undefined8 *)0x0) {
        puVar6[0x10] = 0;
      }
      else {
        puVar4 = FUN_180016bd0(puVar4,lVar3);
        puVar6[0x10] = puVar4;
      }
    }
    if (*(longlong *)(param_2 + 0x78) == 0) {
      puVar6[0xf] = 0;
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = malloc(0x90);
      if (puVar4 == (undefined8 *)0x0) {
        puVar6[0xf] = 0;
        param_2 = *(longlong *)(param_2 + 0x78);
      }
      else {
        puVar4[0xe] = 0;
        puVar4[0xf] = 0;
        puVar4[0x10] = 0;
        *(undefined1 *)(puVar4 + 1) = 0;
        *(undefined4 *)(puVar4 + 0x11) = 0xffffffff;
        *puVar4 = CTCPARSE_KEYWORD::vftable;
        puVar6[0xf] = puVar4;
        param_2 = *(longlong *)(param_2 + 0x78);
      }
    }
    puVar6 = puVar4;
    if (param_2 == 0) {
      return param_1;
    }
  } while( true );
}



void FUN_180016e10(longlong param_1,FILE *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  void *_Str;
  longlong lVar4;
  char *pcVar5;
  size_t _Count;
  undefined4 local_res8 [4];
  uint local_res18 [2];
  int local_res20 [2];
  
  local_res8[0] = 0x10;
  fwrite(local_res8,4,1,param_2);
  lVar3 = -1;
  pcVar5 = (char *)(param_1 + 8);
  do {
    if (lVar3 == 0) break;
    lVar3 = lVar3 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  local_res18[0] = ~(uint)lVar3 - 1;
  fwrite(local_res18,4,1,param_2);
  fwrite((void *)(param_1 + 8),1,(ulonglong)local_res18[0],param_2);
  lVar3 = *(longlong *)(param_1 + 0x70);
  do {
    if (lVar3 == 0) {
      if (*(longlong *)(param_1 + 0x80) != 0) {
        local_res8[0] = 0x20;
        fwrite(local_res8,4,1,param_2);
        (**(code **)**(undefined8 **)(param_1 + 0x80))(*(undefined8 **)(param_1 + 0x80),param_2);
      }
      if (*(longlong *)(param_1 + 0x78) != 0) {
        (**(code **)**(undefined8 **)(param_1 + 0x78))(*(undefined8 **)(param_1 + 0x78),param_2);
        return;
      }
      local_res8[0] = 0xffffffff;
      fwrite(local_res8,4,1,param_2);
      return;
    }
    local_res8[0] = *(undefined4 *)(lVar3 + 0x10);
    fwrite(local_res8,4,1,param_2);
    iVar2 = *(int *)(lVar3 + 0x10);
    if ((iVar2 == 0) || (iVar2 == 1)) {
      _Str = (void *)(lVar3 + 0x28);
      goto LAB_180016f97;
    }
    if (iVar2 == 2) {
      lVar4 = -1;
      pcVar5 = *(char **)(lVar3 + 0x28);
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      local_res18[0] = ~(uint)lVar4 - 1;
      fwrite(local_res18,4,1,param_2);
      _Count = (size_t)local_res18[0];
      _Str = *(void **)(lVar3 + 0x28);
LAB_180016f9d:
      fwrite(_Str,1,_Count,param_2);
    }
    else {
      if (iVar2 == 3) {
        fwrite((void *)(lVar3 + 0x28),1,4,param_2);
        fwrite((void *)(lVar3 + 0x2c),1,4,param_2);
        _Str = (void *)(lVar3 + 0x30);
LAB_180016f97:
        _Count = 4;
        goto LAB_180016f9d;
      }
      if (iVar2 == 4) {
        fwrite((void *)(lVar3 + 0x28),1,4,param_2);
        fwrite((void *)(lVar3 + 0x2c),1,4,param_2);
        fwrite((void *)(lVar3 + 0x30),1,4,param_2);
        _Str = (void *)(lVar3 + 0x34);
        goto LAB_180016f97;
      }
    }
    local_res20[0] = 0;
    if (*(char **)(lVar3 + 0x18) != (char *)0x0) {
      lVar4 = -1;
      pcVar5 = *(char **)(lVar3 + 0x18);
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      local_res20[0] = ~(uint)lVar4 - 1;
    }
    fwrite(local_res20,4,1,param_2);
    if ((*(void **)(lVar3 + 0x18) != (void *)0x0) && (local_res20[0] != 0)) {
      fwrite(*(void **)(lVar3 + 0x18),(longlong)local_res20[0],1,param_2);
    }
    lVar3 = *(longlong *)(lVar3 + 8);
  } while( true );
}



void FUN_1800170a0(void)

{
  void *pvVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  
  plVar5 = (longlong *)&DAT_1800296c0;
  iVar4 = 0xff;
  do {
    plVar5 = plVar5 + -3;
    FUN_180017490(plVar5);
    puVar3 = DAT_1800296d0;
    LOCK();
    iVar2 = DAT_1800296d8 + -1;
    UNLOCK();
    iVar6 = DAT_1800296d8 + -1;
    DAT_1800296d8 = iVar2;
    if (iVar6 < 1) {
      if (DAT_1800296d0 != (undefined8 *)0x0) {
        pvVar1 = (void *)*DAT_1800296d0;
        if (pvVar1 != (void *)0x0) {
          if (*(void **)((longlong)pvVar1 + 0x2000) != (void *)0x0) {
            FUN_180017720(*(void **)((longlong)pvVar1 + 0x2000));
          }
          *(undefined8 *)((longlong)pvVar1 + 0x2000) = 0;
          operator_delete(pvVar1);
        }
        *puVar3 = 0;
        puVar3[1] = 0;
        *(undefined4 *)(puVar3 + 2) = 0;
        operator_delete(puVar3);
      }
      DAT_1800296d0 = (undefined8 *)0x0;
    }
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  return;
}



undefined8 * FUN_180017170(undefined8 *param_1,undefined4 param_2,char *param_3,undefined1 param_4)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  
  *param_1 = CTCPARSE_PARAM::vftable;
  if (param_3 == (char *)0x0) {
    pcVar2 = (char *)0x0;
  }
  else {
    lVar3 = -1;
    pcVar2 = param_3;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = malloc((ulonglong)~(uint)lVar3);
    strcpy_s(pcVar2,(ulonglong)~(uint)lVar3,param_3);
  }
  *(undefined1 *)(param_1 + 4) = param_4;
  param_1[3] = pcVar2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = param_2;
  return param_1;
}



undefined8 * FUN_180017210(undefined8 *param_1,uint param_2)

{
  *param_1 = CTCPARSE_PARAM::vftable;
  operator_delete__((void *)param_1[3]);
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180017260(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = 0xff;
  puVar2 = &DAT_180027ed0;
  do {
    *(undefined8 *)(puVar2 + -4) = 0;
    *(undefined8 *)(puVar2 + -2) = 0;
    *puVar2 = 0;
    LOCK();
    iVar1 = DAT_1800296d8 + 1;
    UNLOCK();
    bVar4 = DAT_1800296d8 == 0;
    DAT_1800296d8 = iVar1;
    if (bVar4) {
      DAT_1800296d0 = malloc(0x18);
      if (DAT_1800296d0 == (undefined8 *)0x0) {
        DAT_1800296d0 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)((longlong)DAT_1800296d0 + 0x14) = 0x46;
        *DAT_1800296d0 = 0;
        DAT_1800296d0[1] = 0;
        *(undefined4 *)(DAT_1800296d0 + 2) = 0;
      }
    }
    puVar2 = puVar2 + 6;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  _DAT_1800296c0 = 0;
  return &DAT_180027ec0;
}



uint * FUN_180017300(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar6 = (longlong *)0x0;
  bVar7 = false;
  if ((longlong *)*param_1 != (longlong *)0x0) {
    plVar2 = (longlong *)*param_1;
    do {
      plVar6 = plVar2;
      bVar7 = *param_2 < *(uint *)(plVar6 + -2);
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
      if ((longlong *)plVar6[1] == (longlong *)0x0) goto LAB_1800173aa;
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
  if ((plVar2 != (longlong *)0x0) && (*param_2 <= *(uint *)(plVar2 + -2))) {
    return (uint *)(plVar2 + -1);
  }
LAB_1800173aa:
  puVar4 = malloc(0x30);
  if (puVar4 != (uint *)0x0) {
    *puVar4 = *param_2;
  }
  puVar1 = puVar4 + 2;
  if (puVar1 != (uint *)0x0) {
    puVar1[0] = 0;
    puVar1[1] = 0;
  }
  FUN_180003f70(param_1,(longlong *)(puVar4 + 4),bVar7,plVar6);
  return puVar4 + 2;
}



void FUN_180017410(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  if ((longlong *)*param_1 != (longlong *)0x0) {
    do {
      FUN_1800175e0(param_1,(undefined8 *)plVar2[2]);
      plVar1 = (longlong *)*plVar2;
      free(plVar2 + -2);
      plVar2 = plVar1;
    } while (plVar1 != (longlong *)0x0);
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



void FUN_180017490(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  iVar2 = (int)param_1[2];
  while (0 < iVar2) {
    plVar3 = (longlong *)param_1[1];
    if (plVar3 != (longlong *)0x0) {
      operator_delete__((void *)plVar3[2]);
      plVar3[2] = 0;
      operator_delete__((void *)plVar3[3]);
      plVar3[3] = 0;
      if (*param_1 == param_1[1]) {
        *param_1 = 0;
        param_1[1] = 0;
      }
      else {
        *(undefined8 *)plVar3[1] = 0;
        param_1[1] = plVar3[1];
      }
      plVar4 = DAT_1800296d0;
      *plVar3 = DAT_1800296d0[1];
      plVar1 = plVar4 + 2;
      *(int *)plVar1 = (int)*plVar1 + -1;
      plVar4[1] = (longlong)plVar3;
      if ((int)*plVar1 == 0) {
        FUN_1800177e0(plVar4);
      }
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    }
    iVar2 = (int)param_1[2];
  }
  return;
}



undefined8 * FUN_180017530(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_2 != (undefined8 *)0x0) {
    puVar3 = malloc(0x30);
    puVar1 = puVar3 + 2;
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = param_2[-2];
      puVar3[1] = param_2[-1];
    }
    uVar2 = *(undefined4 *)(param_2 + 3);
    puVar3[3] = param_3;
    *(undefined4 *)(puVar3 + 5) = uVar2;
    puVar4 = FUN_180017530(param_1,(undefined8 *)*param_2,puVar1);
    *puVar1 = puVar4;
    puVar4 = FUN_180017530(param_1,(undefined8 *)param_2[2],puVar1);
    puVar3[4] = puVar4;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



void FUN_1800175e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  while (param_2 != (undefined8 *)0x0) {
    FUN_1800175e0(param_1,(undefined8 *)param_2[2]);
    puVar1 = (undefined8 *)*param_2;
    free(param_2 + -2);
    param_2 = puVar1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180017640(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_180027710;
  while (puVar2 != (undefined8 *)0x0) {
    FUN_1800176b0(&DAT_180027710,(undefined8 *)puVar2[2]);
    puVar1 = (undefined8 *)*puVar2;
    free((void *)puVar2[-3]);
    puVar2[-3] = 0;
    free(puVar2 + -3);
    puVar2 = puVar1;
  }
  _DAT_180027718 = 0;
  DAT_180027710 = (undefined8 *)0x0;
  return;
}



void FUN_1800176b0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  while (param_2 != (undefined8 *)0x0) {
    FUN_1800176b0(param_1,(undefined8 *)param_2[2]);
    puVar1 = (undefined8 *)*param_2;
    free((void *)param_2[-3]);
    param_2[-3] = 0;
    free(param_2 + -3);
    param_2 = puVar1;
  }
  return;
}



void * FUN_180017720(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x2000) != (void *)0x0) {
    FUN_180017720(*(void **)((longlong)param_1 + 0x2000));
  }
  *(undefined8 *)((longlong)param_1 + 0x2000) = 0;
  operator_delete(param_1);
  return param_1;
}



ulonglong FUN_180017760(undefined4 param_1,float param_2,float param_3)

{
  ulonglong in_RAX;
  
  switch(param_1) {
  case 1:
    if (param_2 == param_3) {
      return 1;
    }
    break;
  case 2:
    if (param_2 != param_3) {
      return 1;
    }
    break;
  case 3:
    if (param_3 < param_2) {
      return 1;
    }
    break;
  case 4:
    if (param_2 < param_3) {
      return 1;
    }
    break;
  case 5:
    if (param_3 <= param_2) {
      return 1;
    }
    break;
  case 6:
    if (param_2 <= param_3) {
      return 1;
    }
    break;
  default:
    return in_RAX & 0xffffffffffffff00;
  }
  return 0;
}



void FUN_1800177e0(longlong *param_1)

{
  void *pvVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  if (*param_1 != 0) {
    pvVar1 = *(void **)(*param_1 + 0x2000);
    iVar5 = 1;
    if (pvVar1 != (void *)0x0) {
      if (*(void **)((longlong)pvVar1 + 0x2000) != (void *)0x0) {
        FUN_180017720(*(void **)((longlong)pvVar1 + 0x2000));
      }
      *(undefined8 *)((longlong)pvVar1 + 0x2000) = 0;
      operator_delete(pvVar1);
    }
    lVar6 = 0xff;
    *(undefined8 *)(*param_1 + 0x2000) = 0;
    plVar2 = (longlong *)*param_1;
    plVar4 = plVar2;
    do {
      lVar3 = (longlong)iVar5;
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + -1;
      *plVar4 = (longlong)(plVar2 + lVar3 * 4);
      plVar4 = plVar4 + 4;
    } while (lVar6 != 0);
    plVar2[0x3fc] = 0;
    plVar2[0x401] = 0;
    plVar2[0x400] = 0;
    param_1[1] = *param_1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1800178b0(void)

{
  LARGE_INTEGER LVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  LARGE_INTEGER local_res8 [4];
  
  LVar1 = DAT_1800296e8;
  if (DAT_1800296f0 != '\0') {
    local_res8[0].QuadPart = 0;
    QueryPerformanceCounter(local_res8);
    LVar1 = local_res8[0];
  }
  lVar2 = LVar1.QuadPart - _DAT_1800296e0;
  if (DAT_180027c50 == 0) {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_180027c50);
  }
  auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar3._0_4_ = (float)lVar2 / (float)DAT_180027c50;
  return auVar3._0_8_;
}



void FUN_180017930(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  while (param_2 != (undefined8 *)0x0) {
    FUN_180017930(param_1,(undefined8 *)param_2[2]);
    puVar1 = (undefined8 *)*param_2;
    free(param_2 + -4);
    param_2 = puVar1;
  }
  return;
}



void __cdecl operator_delete(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000180017982. Too many branches
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
                    // WARNING: Could not recover jumptable at 0x0001800179f2. Too many branches
                    // WARNING: Treating indirect jump as call
  _purecall();
  return;
}



bool FUN_1800179f8(void)

{
  undefined8 *Ptr;
  
  Ptr = _malloc_crt(0x100);
  DAT_18002b920 = EncodePointer(Ptr);
  DAT_18002b928 = DAT_18002b920;
  if (Ptr != (undefined8 *)0x0) {
    *Ptr = 0;
    FUN_180017fb0();
    atexit(FUN_180017fe8);
    atexit((_func_5014 *)&LAB_180017fa4);
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
    if (DAT_180027bf0 < 1) {
      return 0;
    }
    DAT_180027bf0 = DAT_180027bf0 + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_18002b918 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_18002b918;
        pvVar3 = DAT_18002b918;
      }
      DAT_18002b918 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_180017ad2;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_180017ad2:
    if (DAT_18002b914 == 2) {
      _Memory = DecodePointer(DAT_18002b928);
      if (_Memory != (longlong *)0x0) {
        plVar7 = DecodePointer(DAT_18002b920);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = DecodePointer((PVOID)*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = DecodePointer(DAT_18002b928);
            plVar12 = DecodePointer(DAT_18002b920);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_18002b920 = (PVOID)_encoded_null();
        DAT_18002b928 = DAT_18002b920;
      }
      DAT_18002b914 = 0;
      if (!bVar2) {
        LOCK();
        DAT_18002b918 = (void *)0x0;
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
      bVar13 = DAT_18002b918 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_18002b918;
        pvVar3 = DAT_18002b918;
      }
      DAT_18002b918 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_180017bfb;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_180017bfb:
    if (DAT_18002b914 == 0) {
      DAT_18002b914 = 1;
      iVar4 = _initterm_e(&DAT_180019450,&DAT_180019460);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_180019338,&DAT_180019448);
      DAT_18002b914 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_18002b918 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_18002b930 != (code *)0x0) &&
       (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_18002b930), BVar5 != 0)) {
      (*DAT_18002b930)(param_1,2,param_3);
    }
    DAT_180027bf0 = DAT_180027bf0 + 1;
  }
  return 1;
}



// WARNING: Removing unreachable block (ram,0x000180017d78)
// WARNING: Removing unreachable block (ram,0x000180017d0b)
// WARNING: Removing unreachable block (ram,0x000180017db3)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __DllMainCRTStartup
// 
// Library: Visual Studio 2010 Release

uint __DllMainCRTStartup(HMODULE param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_180027bf0 == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_180023020 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) &&
       (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_180023020 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_180001550(param_1,param_2);
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_180001550(param_1,0);
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_180023020 = 0xffffffff;
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
  
  local_res10 = DecodePointer(DAT_18002b928);
  if (local_res10 == (PVOID)0xffffffffffffffff) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = DecodePointer(DAT_18002b928);
    local_res18[0] = DecodePointer(DAT_18002b920);
    pvVar2 = EncodePointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(pvVar2,&local_res10,local_res18);
    DAT_18002b928 = EncodePointer(local_res10);
    DAT_18002b920 = EncodePointer(local_res18[0]);
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



void FUN_180017fb0(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_18001f890; puVar1 < &DAT_18001f890; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



void FUN_180017fe8(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_18001f8a0; puVar1 < &DAT_18001f8a0; puVar1 = puVar1 + 1) {
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
                    // WARNING: Could not recover jumptable at 0x0001800180e2. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x0001800180e8. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



void __cdecl _amsg_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001800180ee. Too many branches
                    // WARNING: Treating indirect jump as call
  _amsg_exit(param_1);
  return;
}



int __cdecl __CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001800180fa. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = __CppXcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
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
  if (DAT_180023028 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_180023028 =
         (local_res10.QuadPart ^
         (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff
    ;
    if (DAT_180023028 == 0x2b992ddfa232) {
      DAT_180023028 = 0x2b992ddfa233;
    }
  }
  _DAT_180023030 = ~DAT_180023028;
  return;
}



void __cdecl _unlock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x0001800181b4. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock(_File);
  return;
}



void __dllonexit(void)

{
                    // WARNING: Could not recover jumptable at 0x0001800181ba. Too many branches
                    // WARNING: Treating indirect jump as call
  __dllonexit();
  return;
}



void __cdecl _lock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x0001800181c0. Too many branches
                    // WARNING: Treating indirect jump as call
  _lock(_File);
  return;
}



void __cdecl terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x0001800181c6. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



void __thiscall type_info::_type_info_dtor_internal_method(type_info *this)

{
                    // WARNING: Could not recover jumptable at 0x0001800181cc. Too many branches
                    // WARNING: Treating indirect jump as call
  _type_info_dtor_internal_method(this);
  return;
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



void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018001823e. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000180018244. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



void FUN_180018250(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180018280(void)

{
  _DAT_180023020 = 0xffffffff;
  return;
}



void FUN_18001829a(void)

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



bool FUN_180018330(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



void FUN_1800184b0(void)

{
  FUN_1800039e0((LPCRITICAL_SECTION)&DAT_180027dc0);
  atexit(FUN_180018600);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180018540(void)

{
  FUN_180004470();
  _DAT_180027e10 = EmptyLogger::vftable;
  atexit(FUN_180018800);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180018580(void)

{
  FUN_180017260();
  _DAT_1800296c8 = 1;
  atexit((_func_5014 *)&LAB_180018890);
  return;
}



void FUN_1800185e0(void)

{
  DAT_180024508 = 0;
                    // WARNING: Could not recover jumptable at 0x0001800185f1. Too many branches
                    // WARNING: Treating indirect jump as call
  free(DAT_180024500);
  return;
}



void FUN_180018600(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_180027dc0);
  return;
}



void FUN_180018620(void)

{
  free(DAT_180027de8);
  DAT_180027de8 = (void *)0x0;
  return;
}



void FUN_180018650(void)

{
  free(DAT_180027df8);
  DAT_180027df8 = (void *)0x0;
  return;
}



void FUN_180018680(void)

{
  longlong lVar1;
  
  lVar1 = DAT_180024520;
  while (DAT_180024528 != 0) {
    DAT_180024520 = lVar1;
    free(*(void **)(lVar1 + -0x10));
    *(undefined8 *)(lVar1 + -0x10) = 0;
    if (DAT_180024518 == DAT_180024520) {
      DAT_180024518 = 0;
      DAT_180024520 = 0;
    }
    else {
      **(undefined8 **)(DAT_180024520 + 8) = 0;
      DAT_180024520 = *(longlong *)(DAT_180024520 + 8);
    }
    DAT_180024528 = DAT_180024528 + -1;
    free((void *)(lVar1 + -0x10));
    lVar1 = DAT_180024520;
  }
  DAT_180024520 = lVar1;
  return;
}



void FUN_180018710(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)((ulonglong)(DAT_180024540 - 1) * 0x10 + (longlong)DAT_180024538);
  for (iVar2 = DAT_180024540; iVar2 != 0; iVar2 = iVar2 + -1) {
    free((void *)*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + -2;
  }
  DAT_180024540 = 0;
                    // WARNING: Could not recover jumptable at 0x000180018770. Too many branches
                    // WARNING: Treating indirect jump as call
  free(DAT_180024538);
  return;
}



void thunk_FUN_180003e70(void)

{
  FUN_180003e70();
  return;
}



void FUN_180018790(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)((ulonglong)(DAT_180024578 - 1) * 0x10 + (longlong)DAT_180024570);
  for (iVar2 = DAT_180024578; iVar2 != 0; iVar2 = iVar2 + -1) {
    free((void *)*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + -2;
  }
  DAT_180024578 = 0;
                    // WARNING: Could not recover jumptable at 0x0001800187f0. Too many branches
                    // WARNING: Treating indirect jump as call
  free(DAT_180024570);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180018800(void)

{
  _DAT_180027e10 = IResourceLogger::vftable;
  FUN_180008240((longlong *)&DAT_180027ea0);
  FUN_180008550((longlong *)&DAT_180027e88);
  FUN_1800084e0((longlong *)&DAT_180027e70);
  free(DAT_180027e70);
  FUN_180008470((longlong *)&DAT_180027e58);
  free(DAT_180027e58);
  FUN_180008170((longlong *)&DAT_180027e38);
  FUN_180008170((longlong *)&DAT_180027e18);
  return;
}



void thunk_FUN_180017640(void)

{
  FUN_180017640();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1800188a0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_180027728;
  while (puVar2 != (undefined8 *)0x0) {
    FUN_180003f00(&DAT_180027728,(undefined8 *)puVar2[2]);
    puVar1 = (undefined8 *)*puVar2;
    free((void *)puVar2[-2]);
    puVar2[-2] = 0;
    free(puVar2 + -2);
    puVar2 = puVar1;
  }
  _DAT_180027730 = 0;
  DAT_180027728 = (undefined8 *)0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180018910(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_180027740;
  while (puVar2 != (undefined8 *)0x0) {
    FUN_180003f00(&DAT_180027740,(undefined8 *)puVar2[2]);
    puVar1 = (undefined8 *)*puVar2;
    free((void *)puVar2[-2]);
    puVar2[-2] = 0;
    free(puVar2 + -2);
    puVar2 = puVar1;
  }
  _DAT_180027748 = 0;
  DAT_180027740 = (undefined8 *)0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180018980(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_180027758;
  while (puVar2 != (undefined8 *)0x0) {
    FUN_180017930(&DAT_180027758,(undefined8 *)puVar2[2]);
    puVar1 = (undefined8 *)*puVar2;
    free(puVar2 + -4);
    puVar2 = puVar1;
  }
  _DAT_180027760 = 0;
  DAT_180027758 = (undefined8 *)0x0;
  return;
}


