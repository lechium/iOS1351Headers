//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BBObserverDelegate-Protocol.h"

@class BBObserver, CHManager, CNContactStore, DNDStateService, NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSString, TUCallCenter, VMVoicemailManager;
@protocol ANCAlertSourceDelegate, OS_dispatch_queue;

@interface ANCAlertSource : NSObject <BBObserverDelegate>
{
    id <ANCAlertSourceDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CNContactStore *_contactStore;	// 24 = 0x18
    NSMutableDictionary *_alerts;	// 32 = 0x20
    NSDictionary *_firstPartyAppIdentifierToCategoryMap;	// 40 = 0x28
    NSMutableDictionary *_appIdentifierToCategoryCache;	// 48 = 0x30
    NSMutableDictionary *_bbBulletinAlerts;	// 56 = 0x38
    BBObserver *_bbObserver;	// 64 = 0x40
    DNDStateService *_dndStateService;	// 72 = 0x48
    NSMutableArray *_tuIncomingCalls;	// 80 = 0x50
    NSMapTable *_tuIncomingCallAlerts;	// 88 = 0x58
    NSMutableArray *_tuActiveCalls;	// 96 = 0x60
    NSMapTable *_tuActiveCallAlerts;	// 104 = 0x68
    TUCallCenter *_tuCallCenter;	// 112 = 0x70
    NSMutableArray *_chUnreadMissedCalls;	// 120 = 0x78
    NSMutableDictionary *_chMissedCallAlerts;	// 128 = 0x80
    CHManager *_chManager;	// 136 = 0x88
    NSMutableArray *_vvUnreadVoicemails;	// 144 = 0x90
    NSMapTable *_vvVoicemailAlerts;	// 152 = 0x98
    VMVoicemailManager *_vvManager;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000010004042c
@property(retain, nonatomic) VMVoicemailManager *vvManager; // @synthesize vvManager=_vvManager;
@property(retain, nonatomic) NSMapTable *vvVoicemailAlerts; // @synthesize vvVoicemailAlerts=_vvVoicemailAlerts;
@property(retain, nonatomic) NSMutableArray *vvUnreadVoicemails; // @synthesize vvUnreadVoicemails=_vvUnreadVoicemails;
@property(retain, nonatomic) CHManager *chManager; // @synthesize chManager=_chManager;
@property(retain, nonatomic) NSMutableDictionary *chMissedCallAlerts; // @synthesize chMissedCallAlerts=_chMissedCallAlerts;
@property(retain, nonatomic) NSMutableArray *chUnreadMissedCalls; // @synthesize chUnreadMissedCalls=_chUnreadMissedCalls;
@property(retain, nonatomic) TUCallCenter *tuCallCenter; // @synthesize tuCallCenter=_tuCallCenter;
@property(retain, nonatomic) NSMapTable *tuActiveCallAlerts; // @synthesize tuActiveCallAlerts=_tuActiveCallAlerts;
@property(retain, nonatomic) NSMutableArray *tuActiveCalls; // @synthesize tuActiveCalls=_tuActiveCalls;
@property(retain, nonatomic) NSMapTable *tuIncomingCallAlerts; // @synthesize tuIncomingCallAlerts=_tuIncomingCallAlerts;
@property(retain, nonatomic) NSMutableArray *tuIncomingCalls; // @synthesize tuIncomingCalls=_tuIncomingCalls;
@property(retain, nonatomic) DNDStateService *dndStateService; // @synthesize dndStateService=_dndStateService;
@property(retain, nonatomic) BBObserver *bbObserver; // @synthesize bbObserver=_bbObserver;
@property(retain, nonatomic) NSMutableDictionary *bbBulletinAlerts; // @synthesize bbBulletinAlerts=_bbBulletinAlerts;
@property(retain, nonatomic) NSMutableDictionary *appIdentifierToCategoryCache; // @synthesize appIdentifierToCategoryCache=_appIdentifierToCategoryCache;
@property(retain, nonatomic) NSDictionary *firstPartyAppIdentifierToCategoryMap; // @synthesize firstPartyAppIdentifierToCategoryMap=_firstPartyAppIdentifierToCategoryMap;
@property(retain, nonatomic) NSMutableDictionary *alerts; // @synthesize alerts=_alerts;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <ANCAlertSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned char)categoryIDForGenreID:(unsigned long long)arg1;	// IMP=0x0000000100040230
- (unsigned long long)genreIDForGenre:(id)arg1;	// IMP=0x000000010003ff3c
- (void)combineCurrentArray:(id)arg1 withNewArray:(id)arg2 maxCount:(unsigned long long)arg3 objectRemoved:(CDUnknownBlockType)arg4 objectAdded:(CDUnknownBlockType)arg5;	// IMP=0x000000010003fd34
- (id)lazyContactStore;	// IMP=0x000000010003fcb8
- (void)voicemailsChanged:(_Bool)arg1;	// IMP=0x000000010003f918
- (void)voicemailsChangedNotification;	// IMP=0x000000010003f888
- (void)callHistoryChanged:(_Bool)arg1;	// IMP=0x000000010003f410
- (void)callHistoryChangedNotification;	// IMP=0x000000010003f380
- (void)callIdentificationChanged:(id)arg1;	// IMP=0x000000010003f1f8
- (void)callStatusChanged;	// IMP=0x000000010003eba8
- (unsigned char)categoryIDForAppIdentifier:(id)arg1;	// IMP=0x000000010003e808
- (_Bool)isSpecialSectionID:(id)arg1;	// IMP=0x000000010003e794
- (void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;	// IMP=0x000000010003e5ec
- (void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned long long)arg3;	// IMP=0x000000010003e4c4
- (void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned long long)arg3;	// IMP=0x000000010003e3ec
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3;	// IMP=0x000000010003e0dc
- (void)removeAlert:(id)arg1;	// IMP=0x000000010003df34
- (void)modifyAlert:(id)arg1;	// IMP=0x000000010003ddf4
- (void)addAlert:(id)arg1 isPreExisting:(_Bool)arg2;	// IMP=0x000000010003dc00
- (_Bool)isSilent;	// IMP=0x000000010003dbac
- (id)displayNameForAppIdentifier:(id)arg1;	// IMP=0x000000010003db50
- (id)alertsForCategoryID:(unsigned char)arg1;	// IMP=0x000000010003dabc
- (void)invalidate;	// IMP=0x000000010003d950
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000010003d0d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

