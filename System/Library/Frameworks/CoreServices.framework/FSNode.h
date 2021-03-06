/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface FSNode : NSObject <NSCopying, NSSecureCoding> {

	NSURL* _url;
	unsigned long long _cacheExpiration;
	unsigned _isDirectory : 2;
	unsigned _hasReferringAliasNode : 1;
	unsigned _canUseFileCache : 1;
	unsigned _isInitialized : 1;

}

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) FSNode * referringAliasNode; 
@property (getter=isDirectory,nonatomic,readonly) BOOL directory; 
@property (getter=isBusyDirectory,nonatomic,readonly) BOOL busyDirectory; 
@property (getter=isExecutable,nonatomic,readonly) BOOL executable; 
@property (getter=isResolvable,nonatomic,readonly) BOOL resolvable; 
@property (getter=isSymbolicLink,nonatomic,readonly) BOOL symbolicLink; 
@property (getter=isAliasFile,nonatomic,readonly) BOOL aliasFile; 
@property (getter=isSideFault,nonatomic,readonly) BOOL sideFault; 
@property (nonatomic,readonly) BOOL hasPackageBit; 
@property (getter=isRegularFile,nonatomic,readonly) BOOL regularFile; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) BOOL hasHiddenExtension; 
@property (getter=isVolume,nonatomic,readonly) BOOL volume; 
@property (getter=isMountTrigger,nonatomic,readonly) BOOL mountTrigger; 
@property (getter=isOnDiskImage,nonatomic,readonly) BOOL onDiskImage; 
@property (getter=isOnLocalVolume,nonatomic,readonly) BOOL onLocalVolume; 
+(BOOL)supportsSecureCoding;
+(id)pathForBookmarkData:(id)arg1 error:(id*)arg2 ;
+(id)rootVolumeNode;
+(id)_resolvedURLFromAliasFile:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
+(id)_resolvedNodeFromAliasFile:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
+(BOOL)canWriteURL:(id)arg1 fromSandboxWithAuditToken:(const SCD_Struct_LS11*)arg2 ;
+(BOOL)canReadMetadataOfURL:(id)arg1 fromSandboxWithAuditToken:(const SCD_Struct_LS11*)arg2 ;
+(BOOL)canAccessURL:(id)arg1 fromSandboxWithAuditToken:(const SCD_Struct_LS11*)arg2 operation:(const char*)arg3 ;
+(BOOL)getFileSystemRepresentation:(char)arg1 forBookmarkData:(id)arg2 ;
+(unsigned char)compareBookmarkData:(id)arg1 toBookmarkData:(id)arg2 ;
+(id)nameForBookmarkData:(id)arg1 error:(id*)arg2 ;
+(BOOL)getVolumeIdentifier:(unsigned long long*)arg1 forBookmarkData:(id)arg2 error:(id*)arg3 ;
+(BOOL)isBookmarkDataFull:(id)arg1 ;
+(id)systemDataVolumeNode;
+(BOOL)canReadURL:(id)arg1 fromSandboxWithAuditToken:(const SCD_Struct_LS11*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)removeCachedResourceValueForKey:(id)arg1 ;
-(void)setTemporaryResourceValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)checkResourceIsReachableAndReturnError:(id*)arg1 ;
-(BOOL)isDirectory;
-(NSURL *)URL;
-(BOOL)isRegularFile;
-(BOOL)isSymbolicLink;
-(BOOL)getFinderInfo:(/*function pointer*/void**)arg1 error:(id*)arg2 ;
-(BOOL)setFinderInfo:(const /*function pointer*/void**)arg1 error:(id*)arg2 ;
-(void)prepareForReuse;
-(id)nameWithError:(id*)arg1 ;
-(id)initWithURL:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)getContentModificationDate:(double*)arg1 error:(id*)arg2 ;
-(id)initTemporaryNodeOnVolume:(id)arg1 flags:(unsigned)arg2 fileDescriptor:(int*)arg3 error:(id*)arg4 ;
-(id)childNodeWithRelativePath:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(CFBundleRef)CFBundleWithError:(id*)arg1 ;
-(BOOL)setResourceValue:(id)arg1 forKey:(id)arg2 options:(unsigned char)arg3 error:(id*)arg4 ;
-(BOOL)getFileSystemRepresentation:(char)arg1 error:(id*)arg2 ;
-(id)canonicalPathWithError:(id*)arg1 ;
-(BOOL)isOnLocalVolume;
-(id)volumeNodeWithFlags:(unsigned)arg1 error:(id*)arg2 ;
-(id)resolvedNodeWithFlags:(unsigned)arg1 error:(id*)arg2 ;
-(void)setReferringAliasNode:(FSNode *)arg1 ;
-(FSNode *)referringAliasNode;
-(id)initWithFileSystemRepresentation:(const char*)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(id)temporaryDirectoryNodeWithFlags:(unsigned)arg1 error:(id*)arg2 ;
-(id)initWithDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 lastPathComponent:(id)arg3 createIntermediateDirectories:(BOOL)arg4 flags:(unsigned)arg5 error:(id*)arg6 ;
-(id)initWithConfigurationString:(int)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(void)clearURLPropertyCacheIfStale;
-(BOOL)getFileIdentifier:(unsigned long long*)arg1 error:(id*)arg2 ;
-(BOOL)getTemporaryResourceValue:(id*)arg1 forKey:(id)arg2 ;
-(id)sideFaultResourceValuesReturningError:(id*)arg1 ;
-(id)diskImageURLWithFlags:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)getHFSType:(unsigned*)arg1 creator:(unsigned*)arg2 error:(id*)arg3 ;
-(BOOL)getIsDirectory_NoIO:(BOOL*)arg1 ;
-(BOOL)isExecutable;
-(BOOL)isAliasFile;
-(BOOL)hasPackageBit;
-(BOOL)isHidden;
-(id)canonical:(BOOL)arg1 pathWithError:(id*)arg2 ;
-(BOOL)isMountTrigger;
-(BOOL)getVolumeIdentifier:(unsigned long long*)arg1 error:(id*)arg2 ;
-(BOOL)isOnDiskImage;
-(BOOL)getDeviceNumber:(int*)arg1 error:(id*)arg2 ;
-(BOOL)getInodeNumber:(unsigned long long*)arg1 error:(id*)arg2 ;
-(BOOL)getOwnerUID:(unsigned*)arg1 error:(id*)arg2 ;
-(BOOL)canReadFromSandboxWithAuditToken:(const SCD_Struct_LS11*)arg1 ;
-(id)bundleIdentifierWithContext:(LSContext*)arg1 error:(id*)arg2 ;
-(id)bundleIdentifierWithError:(id*)arg1 ;
-(BOOL)getCreationDate:(double*)arg1 error:(id*)arg2 ;
-(BOOL)getLength:(unsigned long long*)arg1 error:(id*)arg2 ;
-(BOOL)getWriterBundleIdentifier:(id*)arg1 error:(id*)arg2 ;
-(BOOL)canWriteFromSandboxWithAuditToken:(const SCD_Struct_LS11*)arg1 ;
-(BOOL)canReadMetadataFromSandboxWithAuditToken:(const SCD_Struct_LS11*)arg1 ;
-(id)extendedAttributeWithName:(id)arg1 options:(int)arg2 error:(id*)arg3 ;
-(BOOL)setExtendedAttribute:(id)arg1 name:(id)arg2 options:(int)arg3 error:(id*)arg4 ;
-(id)bookmarkDataWithOptions:(unsigned long long)arg1 relativeToNode:(id)arg2 error:(id*)arg3 ;
-(id)initByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToNode:(id)arg3 bookmarkDataIsStale:(BOOL*)arg4 error:(id*)arg5 ;
-(id)bookmarkDataRelativeToNode:(id)arg1 error:(id*)arg2 ;
-(id)initByResolvingBookmarkData:(id)arg1 relativeToNode:(id)arg2 bookmarkDataIsStale:(BOOL*)arg3 error:(id*)arg4 ;
-(id)pathWithError:(id*)arg1 ;
-(BOOL)isVolume;
-(BOOL)isBusyDirectory;
-(id)extensionWithError:(id*)arg1 ;
-(BOOL)getResourceValue:(id*)arg1 forKey:(id)arg2 options:(unsigned char)arg3 error:(id*)arg4 ;
-(id)bundleInfoDictionaryWithError:(id*)arg1 ;
-(BOOL)hasHiddenExtension;
-(BOOL)isResolvable;
-(BOOL)isSideFault;
-(id)initWithPath:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
@end

