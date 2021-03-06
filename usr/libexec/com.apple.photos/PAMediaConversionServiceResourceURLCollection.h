//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PAMediaConversionServiceResourceURLCollection : NSObject
{
    NSMutableDictionary *_urlReferencesByRole;	// 8 = 0x8
}

+ (id)collectionForBookmarkDataDictionaryRepresentation:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000045f4
+ (id)collectionWithMainResourceURL:(id)arg1;	// IMP=0x000000010000459c
- (void).cxx_destruct;	// IMP=0x000000010000370c
@property(retain) NSMutableDictionary *urlReferencesByRole; // @synthesize urlReferencesByRole=_urlReferencesByRole;
- (_Bool)copyURL:(id)arg1 forRole:(id)arg2 toDirectory:(id)arg3 error:(id *)arg4;	// IMP=0x000000010000355c
- (id)urlForDebugDumpWithDirectoryName:(id)arg1 inExistingParentDirectory:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100002fc4
@property(readonly) unsigned long long urlCount;
- (void)enumerateResourceURLs:(CDUnknownBlockType)arg1;	// IMP=0x0000000100002f20
- (id)fileSizeSummary;	// IMP=0x0000000100002df0
- (id)logMessageSummary;	// IMP=0x0000000100002cc4
@property(readonly) _Bool allURLsAreReadable;
- (_Bool)removeExistingEmptyFilesWithError:(id *)arg1;	// IMP=0x0000000100002a50
- (_Bool)ensureFilesExistWithError:(id *)arg1;	// IMP=0x00000001000028cc
- (id)bookmarkDataDictionaryRepresentationWithError:(id *)arg1;	// IMP=0x0000000100002738
- (id)typeIdentifierForResourceURLWithRole:(id)arg1;	// IMP=0x00000001000023a0
- (_Bool)containsAnyRole:(id)arg1;	// IMP=0x0000000100002188
- (_Bool)containsAllRoles:(id)arg1;	// IMP=0x0000000100001f70
- (void)setShouldDeleteURLOnDeallocation:(_Bool)arg1 forRole:(id)arg2;	// IMP=0x0000000100001e38
- (id)resourceURLForRole:(id)arg1;	// IMP=0x0000000100001cf8
- (void)setResourceURL:(id)arg1 forRole:(id)arg2 deleteOnDeallocation:(_Bool)arg3;	// IMP=0x0000000100001c6c
- (void)setResourceURL:(id)arg1 forRole:(id)arg2;	// IMP=0x00000001000019b4
- (id)init;	// IMP=0x0000000100001940

@end

