//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MBCKModel.h"

#import "MBFileLike-Protocol.h"
#import "PQLValuable-Protocol.h"

@class CKAsset, MBCKDevice, MBCKKeyBag, MBCKManifest, MBDomain, MBFile, NSData, NSDate, NSNumber, NSString;

@interface MBCKFile : MBCKModel <PQLValuable, MBFileLike>
{
    NSString *_temporaryPath;	// 8 = 0x8
    NSString *_rsrcTemporaryPath;	// 16 = 0x10
    MBFile *_file;	// 24 = 0x18
    NSString *_domainName;	// 32 = 0x20
    unsigned long long _fileType;	// 40 = 0x28
    unsigned long long _changeType;	// 48 = 0x30
    _Bool _hasCachedIsSQLiteFile;	// 56 = 0x38
    _Bool _isSQLiteFile;	// 57 = 0x39
    _Bool _deleted;	// 58 = 0x3a
    _Bool _shouldCopy;	// 59 = 0x3b
    _Bool _stashedAssetIsDecrypted;	// 60 = 0x3c
    _Bool _downloaded;	// 61 = 0x3d
    _Bool _createdTemporarySQLiteArchive;	// 62 = 0x3e
    _Bool _isMMCSEncryptedOnly;	// 63 = 0x3f
    unsigned short _mode;	// 64 = 0x40
    unsigned int _groupID;	// 68 = 0x44
    unsigned int _userID;	// 72 = 0x48
    unsigned int _flags;	// 76 = 0x4c
    int _protectionClass;	// 80 = 0x50
    unsigned long long _size;	// 88 = 0x58
    unsigned long long _sizeBeforeCopy;	// 96 = 0x60
    NSString *_fileID;	// 104 = 0x68
    MBCKManifest *_manifest;	// 112 = 0x70
    NSString *_absolutePath;	// 120 = 0x78
    NSString *_relativePath;	// 128 = 0x80
    NSString *_extension;	// 136 = 0x88
    NSString *_linkTarget;	// 144 = 0x90
    NSData *_signature;	// 152 = 0x98
    unsigned long long _resourcesSize;	// 160 = 0xa0
    NSDate *_birth;	// 168 = 0xa8
    NSDate *_modified;	// 176 = 0xb0
    NSDate *_statusChanged;	// 184 = 0xb8
    NSData *_contents;	// 192 = 0xc0
    NSData *_resources;	// 200 = 0xc8
    NSData *_encryptionKey;	// 208 = 0xd0
    MBCKKeyBag *_keybag;	// 216 = 0xd8
    NSData *_sha256Signature;	// 224 = 0xe0
    unsigned long long _inode;	// 232 = 0xe8
    NSString *_subDomain;	// 240 = 0xf0
    NSString *_stashedAssetPath;	// 248 = 0xf8
    NSString *_stashedResourcePath;	// 256 = 0x100
    NSNumber *_contentEncodingMethod;	// 264 = 0x108
    NSString *_encodedAssetPath;	// 272 = 0x110
    NSString *_decodedAssetPath;	// 280 = 0x118
    double _progress;	// 288 = 0x120
    unsigned long long _priority;	// 296 = 0x128
    CKAsset *_contentAsset;	// 304 = 0x130
    CKAsset *_resourceAsset;	// 312 = 0x138
    unsigned long long _encryptedSize;	// 320 = 0x140
    MBDomain *_domain;	// 328 = 0x148
    MBCKDevice *_device;	// 336 = 0x150
    unsigned long long _sizeBeforeEncoding;	// 344 = 0x158
    NSNumber *_contentCompressionMethod;	// 352 = 0x160
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010008a0a0
+ (id)recordType;	// IMP=0x0000000100087384
+ (id)pathHMACForRecordName:(id)arg1;	// IMP=0x0000000100086b38
+ (id)fileWithRecord:(id)arg1 cache:(id)arg2 manifest:(id)arg3 domain:(id)arg4;	// IMP=0x0000000100078fa8
+ (id)fileWithRecord:(id)arg1 cache:(id)arg2 snapshot:(id)arg3;	// IMP=0x0000000100078f14
+ (id)fileWithRecord:(id)arg1 cache:(id)arg2 manifest:(id)arg3;	// IMP=0x0000000100078e7c
+ (id)fileWithFileChange:(id)arg1 manifest:(id)arg2;	// IMP=0x0000000100078e04
+ (id)fileWithMBFile:(id)arg1 cache:(id)arg2;	// IMP=0x0000000100078d8c
+ (id)fileWithMBFile:(id)arg1 manifest:(id)arg2;	// IMP=0x0000000100078d14
+ (id)fileIDFromRecordName:(id)arg1;	// IMP=0x0000000100078c90
+ (id)recordIDFromFileID:(id)arg1;	// IMP=0x0000000100078bfc
+ (id)keysToFetchWithoutAssets;	// IMP=0x0000000100078b5c
+ (id)stringFromFileType:(unsigned long long)arg1;	// IMP=0x0000000100078b20
+ (unsigned long long)fileTypeFromStat:(struct stat)arg1;	// IMP=0x0000000100078af0
+ (unsigned long long)fileTypeFromMBFile:(id)arg1;	// IMP=0x0000000100078a70
+ (_Bool)shouldRestoreFilesSparse;	// IMP=0x00000001000788b4
+ (id)newFromSqliteStatement:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2;	// IMP=0x000000010008c450
+ (_Bool)archiveSQLiteDatabaseAtPath:(id)arg1 protectionClass:(int)arg2 error:(id *)arg3;	// IMP=0x000000010008d400
+ (double)sqliteSpaceSavingsThreshold;	// IMP=0x000000010008c818
+ (_Bool)shouldValidateFileEnconding;	// IMP=0x000000010008c668
- (void).cxx_destruct;	// IMP=0x000000010008b29c
@property(nonatomic) _Bool isMMCSEncryptedOnly; // @synthesize isMMCSEncryptedOnly=_isMMCSEncryptedOnly;
@property(retain, nonatomic) NSNumber *contentCompressionMethod; // @synthesize contentCompressionMethod=_contentCompressionMethod;
@property(nonatomic) unsigned long long sizeBeforeEncoding; // @synthesize sizeBeforeEncoding=_sizeBeforeEncoding;
@property(nonatomic) _Bool createdTemporarySQLiteArchive; // @synthesize createdTemporarySQLiteArchive=_createdTemporarySQLiteArchive;
@property(retain, nonatomic) MBCKDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) MBDomain *domain; // @synthesize domain=_domain;
@property(nonatomic) unsigned long long encryptedSize; // @synthesize encryptedSize=_encryptedSize;
@property(retain, nonatomic) CKAsset *resourceAsset; // @synthesize resourceAsset=_resourceAsset;
@property(retain, nonatomic) CKAsset *contentAsset; // @synthesize contentAsset=_contentAsset;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly) _Bool downloaded; // @synthesize downloaded=_downloaded;
@property(retain, nonatomic) NSString *decodedAssetPath; // @synthesize decodedAssetPath=_decodedAssetPath;
@property(retain, nonatomic) NSString *encodedAssetPath; // @synthesize encodedAssetPath=_encodedAssetPath;
@property(retain, nonatomic) NSNumber *contentEncodingMethod; // @synthesize contentEncodingMethod=_contentEncodingMethod;
@property(nonatomic) _Bool stashedAssetIsDecrypted; // @synthesize stashedAssetIsDecrypted=_stashedAssetIsDecrypted;
@property(retain, nonatomic) NSString *stashedResourcePath; // @synthesize stashedResourcePath=_stashedResourcePath;
@property(retain, nonatomic) NSString *stashedAssetPath; // @synthesize stashedAssetPath=_stashedAssetPath;
@property(readonly, nonatomic) NSString *subDomain; // @synthesize subDomain=_subDomain;
@property(readonly, nonatomic) unsigned long long inode; // @synthesize inode=_inode;
@property(readonly, nonatomic) _Bool shouldCopy; // @synthesize shouldCopy=_shouldCopy;
@property(retain, nonatomic) NSData *sha256Signature; // @synthesize sha256Signature=_sha256Signature;
@property(readonly, nonatomic) MBCKKeyBag *keybag; // @synthesize keybag=_keybag;
@property(retain, nonatomic) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property(readonly, nonatomic) int protectionClass; // @synthesize protectionClass=_protectionClass;
@property(readonly, nonatomic) NSData *resources; // @synthesize resources=_resources;
@property(readonly, nonatomic) NSData *contents; // @synthesize contents=_contents;
@property(readonly, nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(readonly, nonatomic) unsigned short mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) unsigned int userID; // @synthesize userID=_userID;
@property(readonly, nonatomic) unsigned int groupID; // @synthesize groupID=_groupID;
@property(readonly, nonatomic) NSDate *statusChanged; // @synthesize statusChanged=_statusChanged;
@property(readonly, nonatomic) NSDate *modified; // @synthesize modified=_modified;
@property(readonly, nonatomic) NSDate *birth; // @synthesize birth=_birth;
@property(readonly, nonatomic) unsigned long long resourcesSize; // @synthesize resourcesSize=_resourcesSize;
@property(readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) NSString *linkTarget; // @synthesize linkTarget=_linkTarget;
@property(readonly, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(readonly, nonatomic) NSString *relativePath; // @synthesize relativePath=_relativePath;
@property(retain, nonatomic) MBCKManifest *manifest; // @synthesize manifest=_manifest;
@property(readonly, nonatomic) unsigned long long sizeBeforeCopy; // @synthesize sizeBeforeCopy=_sizeBeforeCopy;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) unsigned long long fileType; // @synthesize fileType=_fileType;
- (id)asArchiveData;	// IMP=0x000000010008a864
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010008a3c0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010008a0a8
- (long long)savePolicy;	// IMP=0x000000010008a098
- (id)recordRepresentation;	// IMP=0x0000000100089f74
- (void)updateRecord:(id)arg1;	// IMP=0x00000001000891ec
- (_Bool)refreshAttributesWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100089074
- (_Bool)refreshAttributesArchiveWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100088950
- (_Bool)refreshAttributesPlistWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100088554
- (id)attributeDataWithError:(id *)arg1;	// IMP=0x0000000100088548
- (id)attributeDataArchiveWithError:(id *)arg1;	// IMP=0x0000000100088060
- (id)attributeDataPlistWithError:(id *)arg1;	// IMP=0x0000000100087ff0
- (id)attributeDataTruncatedHashWithError:(id *)arg1;	// IMP=0x0000000100087eb0
- (id)attributeDataHashWithError:(id *)arg1;	// IMP=0x0000000100087e40
- (id)attributeDataHashWithAttributes:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000879e0
- (id)attributes;	// IMP=0x0000000100087398
- (unsigned long long)recordZone;	// IMP=0x0000000100087390
- (id)recordType;	// IMP=0x0000000100087370
- (id)_getRecordIDString;	// IMP=0x00000001000872ec
- (void)saveToCacheWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100087230
@property(readonly, nonatomic) NSString *keybagUUIDString;
- (id)keybagUUIDData;	// IMP=0x0000000100087000
- (unsigned long long)sizeFromFileIDWithDefaultValue:(unsigned long long)arg1;	// IMP=0x0000000100086eb4
- (unsigned long long)aggregateSize;	// IMP=0x0000000100086e2c
- (id)pathHMAC;	// IMP=0x0000000100086ce0
- (void)setFileID:(id)arg1;	// IMP=0x0000000100086c38
@property(readonly, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(readonly, nonatomic) NSString *domainName; // @synthesize domainName=_domainName;
- (unsigned long long)changeType;	// IMP=0x00000001000863a4
- (id)attributeHashToFindModificationsWithError:(id *)arg1;	// IMP=0x000000010008627c
@property(readonly) _Bool hasResources;
- (id)aggregateDictionaryGroup;	// IMP=0x0000000100085ec4
- (_Bool)isProtected;	// IMP=0x0000000100085e38
@property(readonly, nonatomic) _Bool shouldBeBackedUpIgnoringProtectionClass;
@property(readonly, nonatomic) _Bool hasDomain;
@property(readonly) _Bool isSymbolicLink;
@property(readonly) _Bool isDirectory;
@property(readonly) _Bool isRegularFile;
- (id)assetPath;	// IMP=0x00000001000859bc
@property(readonly, nonatomic) unsigned short permissions;
@property(readonly, nonatomic) _Bool hasDevice;
@property(retain, nonatomic) NSString *absolutePath; // @synthesize absolutePath=_absolutePath;
@property(readonly, nonatomic) _Bool hasAbsolutePath;
- (_Bool)restoreProtectionClassToDestination:(id)arg1 unspecifiedDirectoryProtectionClass:(int)arg2 withError:(id *)arg3;	// IMP=0x0000000100085460
- (_Bool)restoreProtectionClassToDestination:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000100085178
- (_Bool)restoreOwnershipToDestination:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000100084fd8
- (_Bool)restoreOwnershipToDestination:(id)arg1 withUserID:(unsigned int)arg2 withGroupID:(unsigned int)arg3 withError:(id *)arg4;	// IMP=0x0000000100084e60
- (_Bool)restoreAttributesToDestination:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000100084db4
- (_Bool)restoreAttributesToDestination:(id)arg1 withUserID:(unsigned int)arg2 groupID:(unsigned int)arg3 mode:(unsigned short)arg4 error:(id *)arg5;	// IMP=0x0000000100084b38
- (void)setTime:(struct timespec *)arg1 withDate:(id)arg2;	// IMP=0x0000000100084ae0
- (_Bool)restoreExtendedAttributesToDestination:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010008461c
- (_Bool)validateSignatureAtDestination:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000100084070
- (_Bool)decryptWithOperationTracker:(id)arg1 destination:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100083080
- (_Bool)restoreAssetWithOperationTracker:(id)arg1 destination:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000818bc
- (_Bool)stashAssetsToTemporaryDirectoryWithError:(id *)arg1;	// IMP=0x0000000100081094
- (_Bool)removeFailedAssetFromDestination:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000100080a68
- (void)downloadContentsWithOperationTracker:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100080610
- (void)_removeResourceCopy;	// IMP=0x00000001000805bc
- (_Bool)createResourceCopyWithError:(id *)arg1;	// IMP=0x000000010007fe68
- (void)_removeTemporaryCopy;	// IMP=0x000000010007fe14
- (_Bool)createTemporaryCopyWithError:(id *)arg1;	// IMP=0x000000010007f718
- (_Bool)createTemporarySQLiteCopyWithEngine:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010007f0e0
- (_Bool)hadTemporarySQLiteArchive;	// IMP=0x000000010007f0d0
- (_Bool)isSQLiteFile;	// IMP=0x000000010007efd0
- (_Bool)shouldCopyBeforeUploading;	// IMP=0x000000010007ed68
- (void)cleanupAfterUpload;	// IMP=0x000000010007ecdc
- (_Bool)prepareFileForUploadWithEngine:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010007dd08
- (_Bool)fetchEncryptionKeyWithError:(id *)arg1;	// IMP=0x000000010007c9f0
- (_Bool)validateEncryptionKeyWithError:(id *)arg1;	// IMP=0x000000010007c838
- (void)confirmFileWasModifiedOnDisk;	// IMP=0x000000010007c2dc
- (void)refreshWithDictionary:(id)arg1;	// IMP=0x000000010007bbe0
- (void)refreshWithMBFile:(id)arg1;	// IMP=0x000000010007b39c
- (void)refreshWithRecord:(id)arg1;	// IMP=0x000000010007ae44
- (_Bool)refreshFromCopyWithError:(id *)arg1;	// IMP=0x000000010007ab78
- (_Bool)refreshFromFilesystemWithError:(id *)arg1;	// IMP=0x000000010007a3e4
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010007a210
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000100079ef0
- (void)setupWithDomain:(id)arg1;	// IMP=0x0000000100079cc0
- (void)setupWithDevice:(id)arg1 manifest:(id)arg2;	// IMP=0x0000000100079bec
- (void)setupWithDevice:(id)arg1 domain:(id)arg2;	// IMP=0x0000000100079b3c
- (void)setupWithDevice:(id)arg1;	// IMP=0x0000000100079ad4
- (id)initWithRecord:(id)arg1 cache:(id)arg2 snapshot:(id)arg3;	// IMP=0x000000010007992c
- (id)initWithDictionary:(id)arg1 cache:(id)arg2;	// IMP=0x00000001000798a4
- (id)initWithRecord:(id)arg1 cache:(id)arg2 manifest:(id)arg3 domain:(id)arg4;	// IMP=0x0000000100079740
- (id)initWithRecord:(id)arg1 cache:(id)arg2;	// IMP=0x00000001000796dc
- (id)initWithFileChange:(id)arg1 manifest:(id)arg2;	// IMP=0x00000001000791fc
- (id)initWithMBFile:(id)arg1 cache:(id)arg2;	// IMP=0x0000000100079174
- (id)initWithMBFile:(id)arg1 manifest:(id)arg2;	// IMP=0x0000000100079060
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;	// IMP=0x000000010008c5e8
- (id)initFromPQLResultSet:(id)arg1 error:(id *)arg2;	// IMP=0x000000010008c35c
- (id)initFromArchiveData:(id)arg1;	// IMP=0x000000010008b50c
- (_Bool)decodeWithFileAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000010008d100
- (_Bool)encodeWithFileAtPath:(id)arg1 encodingMethod:(id)arg2 error:(id *)arg3;	// IMP=0x000000010008c994

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
