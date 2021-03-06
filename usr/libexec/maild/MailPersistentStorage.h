//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSString;

@interface MailPersistentStorage : NSObject
{
    NSString *_filePath;	// 8 = 0x8
    NSMutableDictionary *_groups;	// 16 = 0x10
    NSOperationQueue *_saveOperationQueue;	// 24 = 0x18
}

+ (void)wipePersistentStorage;	// IMP=0x0000000100041e08
+ (id)sharedStorage;	// IMP=0x0000000100041d54
+ (id)defaultFilePath;	// IMP=0x0000000100041ce8
- (void).cxx_destruct;	// IMP=0x0000000100042bf8
@property(retain, nonatomic) NSOperationQueue *saveOperationQueue; // @synthesize saveOperationQueue=_saveOperationQueue;
- (void)removeAllDataBelongingToAccount:(id)arg1;	// IMP=0x00000001000427e0
- (id)sceneRestorationDictionary;	// IMP=0x00000001000427c4
- (void)setSceneRestorationDictionary:(id)arg1;	// IMP=0x0000000100042798
- (id)searchedServerDate;	// IMP=0x000000010004277c
- (void)clearSearchedServer;	// IMP=0x000000010004275c
- (void)searchedServer;	// IMP=0x00000001000426e0
- (id)lastLoadOlder;	// IMP=0x00000001000426c4
- (void)clearLastLoadOlder;	// IMP=0x00000001000426a4
- (void)touchLastLoadOlder;	// IMP=0x0000000100042628
- (id)bodyBackfillDateForSource:(id)arg1;	// IMP=0x00000001000425a8
- (void)setBodyBackfillDate:(id)arg1 forSource:(id)arg2;	// IMP=0x0000000100042518
- (id)lastAdditionalMailboxesFetchDate;	// IMP=0x00000001000424fc
- (void)setLastAdditionalMailboxesFetchDate:(id)arg1;	// IMP=0x00000001000424d0
- (id)fetchDateForSource:(id)arg1;	// IMP=0x0000000100042450
- (void)setFetchDate:(id)arg1 forSource:(id)arg2;	// IMP=0x00000001000423c0
- (id)_objectForKey:(id)arg1 inGroup:(id)arg2;	// IMP=0x000000010004226c
- (void)_setObject:(id)arg1 forKey:(id)arg2 inGroup:(id)arg3;	// IMP=0x00000001000420c8
- (void)save;	// IMP=0x0000000100042008
- (id)init;	// IMP=0x0000000100041f80
- (id)initWithFilePath:(id)arg1;	// IMP=0x0000000100041e28

@end

