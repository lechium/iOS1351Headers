//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface MSDFileMetadata : NSObject
{
    NSDictionary *_dict;	// 8 = 0x8
}

+ (id)fileMetaDataWithMetadataDictionary:(id)arg1;	// IMP=0x0000000100007194
+ (id)fileMetadatatWithPath:(id)arg1;	// IMP=0x0000000100007140
+ (id)targetFileWithPath:(id)arg1;	// IMP=0x0000000100006b84
+ (id)extendedAttributesWithPath:(id)arg1;	// IMP=0x00000001000068f4
+ (id)valueForExtendedAttributesKey:(id)arg1 forPath:(id)arg2;	// IMP=0x00000001000066a8
+ (id)accessControlListWithPath:(id)arg1;	// IMP=0x00000001000063a8
+ (id)extendedAttributeKeysWithPath:(id)arg1;	// IMP=0x00000001000060c4
+ (id)fileAttributesWithPath:(id)arg1;	// IMP=0x0000000100005ec4
+ (id)fileHashWithPath:(id)arg1;	// IMP=0x0000000100005ca0
- (void).cxx_destruct;	// IMP=0x0000000100008f34
@property(readonly) NSDictionary *dict; // @synthesize dict=_dict;
@property(readonly, getter=getFileSize) long long fileSize;
@property(readonly, getter=getTargetFile) NSString *targetFile;
@property(readonly, getter=getFileType) NSString *fileType;
@property(readonly, getter=getAccessControlList) NSData *accessControlList;
@property(readonly, getter=getExtendedAttributes) NSDictionary *extendedAttributes;
@property(readonly, getter=getFileAttributes) NSDictionary *fileAttributes;
@property(readonly, getter=getHash) NSData *hash;
- (id)fileAttributesAllowSet:(id)arg1;	// IMP=0x00000001000089f0
- (int)compareWith:(id)arg1;	// IMP=0x000000010000816c
- (_Bool)restoreAttribuesToPath:(id)arg1;	// IMP=0x000000010000745c
- (_Bool)removeAllExtendedAttributes:(id)arg1;	// IMP=0x0000000100007234
- (void)dealloc;	// IMP=0x00000001000071e8
- (id)initWithPath:(id)arg1;	// IMP=0x0000000100006d70
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100006cf8

@end
