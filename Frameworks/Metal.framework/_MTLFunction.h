/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <MTLDevice>, NSArray, NSString;

@interface _MTLFunction : NSObject <MTLFunctionSPI> {
    struct MTLFunctionOffsets { 
        unsigned long long publicArguments; 
        unsigned long long privateArguments; 
    struct MTLFunctionVersions { 
        unsigned short airMajorVersion; 
        unsigned short airMinorVersion; 
        unsigned short languageMajorVersion; 
        unsigned short languageMinorVersion; 
    struct { 
        unsigned char key[32]; 
    int _bitCodeOffset;
    } _bitcodeHash;
    <MTLDevice> *_device;
    NSString *_filePath;
    unsigned int _functionType;
    struct MTLLibraryData { int (**x1)(); int x2; id x3; } *_libraryData;
    int _lineNumber;
    NSString *_name;
    } _offsets;
    unsigned char _privateMetadataInitialized;
    id _vendorPrivate;
    } _versions;
    NSArray *_vertexAttributes;
    unsigned char _vertexAttributesInitialized;
}

@property int bitCodeOffset;
@property(readonly) struct { unsigned char x1[32]; } bitcodeHash;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) <MTLDevice> * device;
@property(copy) NSString * filePath;
@property(readonly) unsigned int functionType;
@property(readonly) const struct MTLFunctionVersions { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; }* functionVersions;
@property(readonly) unsigned int hash;
@property(readonly) struct MTLLibraryData { int (**x1)(); int x2; id x3; }* libraryData;
@property int lineNumber;
@property(readonly) NSString * name;
@property(readonly) Class superclass;
@property(readonly) id vendorPrivate;
@property(readonly) NSArray * vertexAttributes;

- (struct MTLLibraryData { int (**x1)(); int x2; id x3; }*)libraryData;
- (id).cxx_construct;
- (int)bitCodeOffset;
- (struct { unsigned char x1[32]; })bitcodeHash;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)filePath;
- (unsigned int)functionType;
- (const struct MTLFunctionVersions { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; }*)functionVersions;
- (id)initWithName:(id)arg1 bitcodeHash:(const struct { unsigned char x1[32]; }*)arg2 type:(unsigned int)arg3 libraryData:(struct MTLLibraryData { int (**x1)(); int x2; id x3; }*)arg4 offsets:(struct MTLFunctionOffsets { unsigned long long x1; unsigned long long x2; }*)arg5 versions:(struct MTLFunctionVersions { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; }*)arg6 device:(id)arg7;
- (void)initializePrivateMetadata;
- (int)lineNumber;
- (id)name;
- (void)setBitCodeOffset:(int)arg1;
- (void)setFilePath:(id)arg1;
- (void)setLineNumber:(int)arg1;
- (void)setVendorPrivate:(id)arg1;
- (id)vendorPrivate;
- (id)vertexAttributes;

@end