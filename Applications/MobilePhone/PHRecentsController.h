//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TUCallProviderManagerDelegate-Protocol.h"

@class CNContactFormatter, CNContactStore, NSArray, NSCache, NSMutableDictionary, NSNumberFormatter, NSString, TUCallHistoryController, TUCallProviderManager, TUMetadataCache;
@protocol OS_dispatch_queue;

@interface PHRecentsController : NSObject <TUCallProviderManagerDelegate>
{
    struct os_unfair_lock_s _accessorLock;	// 8 = 0x8
    int _callDirectoryManagerIdentificationEntriesChangedNotificationToken;	// 12 = 0xc
    TUCallHistoryController *_callHistoryController;	// 16 = 0x10
    NSCache *_callProviderCache;	// 24 = 0x18
    TUCallProviderManager *_callProviderManager;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_completionDispatchQueue;	// 40 = 0x28
    NSMutableDictionary *_contactCache;	// 48 = 0x30
    CNContactFormatter *_contactFormatter;	// 56 = 0x38
    CNContactStore *_contactStore;	// 64 = 0x40
    NSMutableDictionary *_itemCache;	// 72 = 0x48
    NSNumberFormatter *_numberFormatter;	// 80 = 0x50
    TUMetadataCache *_metadataCache;	// 88 = 0x58
    NSArray *_recentCalls;	// 96 = 0x60
    CNContactStore *_suggestedContactStore;	// 104 = 0x68
    unsigned long long _unreadCallCount;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_serialQueue;	// 120 = 0x78
}

+ (id)indexPathsToInsertIntoCachedRecentCalls:(id)arg1 fromBackingRecentCalls:(id)arg2;	// IMP=0x00000001000ca200
- (void).cxx_destruct;	// IMP=0x00000001000d1838
@property(nonatomic) int callDirectoryManagerIdentificationEntriesChangedNotificationToken; // @synthesize callDirectoryManagerIdentificationEntriesChangedNotificationToken=_callDirectoryManagerIdentificationEntriesChangedNotificationToken;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, nonatomic) struct os_unfair_lock_s accessorLock; // @synthesize accessorLock=_accessorLock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue; // @synthesize completionDispatchQueue=_completionDispatchQueue;
- (void)providersChangedForProviderManager:(id)arg1;	// IMP=0x00000001000d15e8
- (void)performSynchronousBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d1554
- (void)handleUIApplicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x00000001000d13a0
- (void)handleUIApplicationSignificantTimeChangeNotification:(id)arg1;	// IMP=0x00000001000d10dc
- (void)handleTUMetadataCacheDidFinishUpdatingNotification:(id)arg1;	// IMP=0x00000001000d0e18
- (void)handleTUCallHistoryControllerUnreadCallCountDidChangeNotification:(id)arg1;	// IMP=0x00000001000d0cc4
- (void)handleTUCallHistoryControllerRecentCallsDidChangeNotification:(id)arg1;	// IMP=0x00000001000d0b10
- (void)handleNSCurrentLocaleDidChangeNotification:(id)arg1;	// IMP=0x00000001000d07dc
- (void)handleIDSServiceAvailabilityDidChangeNotification:(id)arg1;	// IMP=0x00000001000d0628
- (void)handleCNContactStoreDidChangeNotification:(id)arg1;	// IMP=0x00000001000d02f0
- (id)metadataItemsForRecentCall:(id)arg1;	// IMP=0x00000001000d0108
- (void)populateItemCacheForRecentCalls:(id)arg1;	// IMP=0x00000001000cff28
- (id)fetchRecentCalls;	// IMP=0x00000001000cfc68
- (id)fetchNumberFormatter;	// IMP=0x00000001000cfc20
- (void)fetchMetadataForRecentCalls:(id)arg1;	// IMP=0x00000001000cfa70
- (id)fetchItemForRecentCall:(id)arg1 numberOfOccurences:(unsigned long long)arg2;	// IMP=0x00000001000ce574
- (id)fetchItemForRecentCall:(id)arg1;	// IMP=0x00000001000ce4d8
- (id)fetchImageForRecentCall:(id)arg1;	// IMP=0x00000001000ce37c
- (id)fetchContactFormatter;	// IMP=0x00000001000ce31c
- (void)fetchContactsForHandles:(id)arg1;	// IMP=0x00000001000cdd9c
- (void)fetchContactsForRecentCalls:(id)arg1;	// IMP=0x00000001000cdc3c
- (id)fetchCallHistoryController;	// IMP=0x00000001000cdba8
- (id)fetchCallProviderForRecentCall:(id)arg1;	// IMP=0x00000001000cd8c8
- (id)formattedNameForHandle:(id)arg1 countryCode:(id)arg2;	// IMP=0x00000001000cd680
- (id)contactHandlesForRecentCalls:(id)arg1;	// IMP=0x00000001000cd42c
- (id)contactHandlesForHandle:(id)arg1;	// IMP=0x00000001000cd2d8
- (id)contactsByHandleForRecentCall:(id)arg1 keyDescriptors:(id)arg2;	// IMP=0x00000001000ccde0
- (id)contactForHandle:(id)arg1;	// IMP=0x00000001000ccb74
@property(nonatomic) unsigned long long unreadCallCount; // @synthesize unreadCallCount=_unreadCallCount;
@property(copy, nonatomic) NSArray *recentCalls; // @synthesize recentCalls=_recentCalls;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(readonly, nonatomic) NSMutableDictionary *itemCache; // @synthesize itemCache=_itemCache;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(readonly, nonatomic) NSMutableDictionary *contactCache; // @synthesize contactCache=_contactCache;
@property(readonly, nonatomic) NSCache *callProviderCache; // @synthesize callProviderCache=_callProviderCache;
@property(readonly, nonatomic) TUCallHistoryController *callHistoryController; // @synthesize callHistoryController=_callHistoryController;
- (void)performJoinRequestForRecentCall:(id)arg1;	// IMP=0x00000001000cc294
- (void)performDialRequestForRecentCall:(id)arg1;	// IMP=0x00000001000cc244
- (void)performDialRequest:(id)arg1;	// IMP=0x00000001000cc10c
- (id)dialRequestForRecentCall:(id)arg1;	// IMP=0x00000001000cbe08
- (id)contactByHandleForRecentCall:(id)arg1 keyDescriptors:(id)arg2;	// IMP=0x00000001000cbac4
- (id)contactForRecentCall:(id)arg1 keyDescriptors:(id)arg2;	// IMP=0x00000001000cb884
- (void)markRecentAudioCallsAsRead;	// IMP=0x00000001000cb7c4
- (void)markRecentCallsAsRead;	// IMP=0x00000001000cb704
- (void)deleteRecentCalls:(id)arg1;	// IMP=0x00000001000cb604
- (void)deleteAllRecentCalls;	// IMP=0x00000001000cb544
- (_Bool)coalesceRecentCall:(id)arg1 withRecentCall:(id)arg2;	// IMP=0x00000001000cb350
- (id)itemForRecentCall:(id)arg1 numberOfOccurences:(unsigned long long)arg2;	// IMP=0x00000001000cb1ac
- (id)itemForRecentCall:(id)arg1;	// IMP=0x00000001000cb13c
@property(readonly, nonatomic) TUMetadataCache *metadataCache; // @synthesize metadataCache=_metadataCache;
@property(readonly, nonatomic) CNContactStore *suggestedContactStore; // @synthesize suggestedContactStore=_suggestedContactStore;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(readonly, nonatomic) TUCallProviderManager *callProviderManager; // @synthesize callProviderManager=_callProviderManager;
- (void)dealloc;	// IMP=0x00000001000cab38
- (id)initWithCallProviderManager:(id)arg1 contactStore:(id)arg2 suggestedContactStore:(id)arg3 metadataCache:(id)arg4;	// IMP=0x00000001000ca40c
- (id)init;	// IMP=0x00000001000ca3d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
