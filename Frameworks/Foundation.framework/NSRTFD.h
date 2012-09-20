/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableDictionary;

@interface NSRTFD : NSMutableDictionary  {
    NSMutableDictionary *dict;
}

+ (void)initialize;

- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)objectForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)copy;
- (unsigned int)count;
- (id)removeFile:(id)arg1;
- (id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithObjects:(id*)arg1 forKeys:(id*)arg2 count:(unsigned int)arg3;
- (id)keyEnumerator;
- (id)initWithDictionary:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)dataRepresentation;
- (BOOL)_isLink:(id)arg1;
- (id)pasteboardDataRepresentation;
- (id)initFromSerialized:(id)arg1;
- (id)freeSerialized:(void*)arg1 length:(unsigned int)arg2;
- (id)serialize:(void**)arg1 length:(unsigned int*)arg2;
- (unsigned int)insertItem:(id)arg1 path:(id)arg2 dirInfo:(id)arg3 zone:(struct _NSZone { }*)arg4 plist:(id)arg5;
- (unsigned int)realAddDirNamed:(id)arg1;
- (id)initFromElement:(id)arg1 ofDocument:(id)arg2;
- (int)validatePath:(id)arg1 ignore:(id)arg2;
- (id)addData:(id)arg1 name:(id)arg2;
- (id)copy:(id)arg1 into:(id)arg2;
- (id)dataForFile:(id)arg1;
- (id)addFile:(id)arg1;
- (id)replaceFile:(id)arg1 data:(id)arg2;
- (unsigned int)saveToDocument:(id)arg1 removeBackup:(BOOL)arg2 errorHandler:(id)arg3;
- (id)tmpNameFromPath:(id)arg1;
- (unsigned int)initUnixFile:(id)arg1;
- (id)setPackage:(BOOL)arg1;
- (id)replaceFile:(id)arg1 path:(id)arg2;
- (id)addCommon:(id)arg1 docInfo:(id)arg2 value:(id)arg3 zone:(struct _NSZone { }*)arg4;
- (id)uniqueKey:(id)arg1;
- (id)getDocument:(id)arg1 docInfo:(id)arg2;
- (id)createUniqueKey:(id)arg1;
- (id)createRandomKey:(id)arg1;
- (id)initWithPasteboardDataRepresentation:(id)arg1;
- (unsigned int)internalSaveTo:(id)arg1 removeBackup:(BOOL)arg2 errorHandler:(id)arg3;
- (unsigned int)internalSaveTo:(id)arg1 removeBackup:(BOOL)arg2 errorHandler:(id)arg3 temp:(id)arg4 backup:(id)arg5;
- (id)nameFromPath:(id)arg1 extra:(id)arg2;
- (id)tmpNameFromPath:(id)arg1 extension:(id)arg2;
- (unsigned int)internalWritePath:(id)arg1 errorHandler:(id)arg2 remapContents:(BOOL)arg3 hardLinkPath:(id)arg4;
- (unsigned int)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(BOOL)arg4 markBusy:(BOOL)arg5 hardLinkPath:(id)arg6;
- (unsigned int)addFileNamed:(id)arg1 fileAttributes:(id)arg2;
- (unsigned int)addDirNamed:(id)arg1 lazy:(BOOL)arg2;
- (unsigned int)initFromDocument:(id)arg1;
- (unsigned int)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(BOOL)arg4 hardLinkPath:(id)arg5;
- (id)getDirInfo:(BOOL)arg1;
- (id)_getDocInfoForKey:(id)arg1;
- (BOOL)isPackage;
- (id)initWithDataRepresentation:(id)arg1;
- (id)addLink:(id)arg1;

@end