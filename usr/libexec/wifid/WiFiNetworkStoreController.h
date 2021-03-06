//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AnalyticsWorkspace, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NetworkPerformanceFeed;
@protocol OS_dispatch_queue;

@interface WiFiNetworkStoreController : NSObject
{
    _Bool _isDataLoadedFromDB;	// 8 = 0x8
    CDUnknownBlockType _readyCallback;	// 16 = 0x10
    void *_readyCallbackContext;	// 24 = 0x18
    NSManagedObjectContext *_childMOC;	// 32 = 0x20
    NSManagedObjectContext *_rootMOC;	// 40 = 0x28
    NSManagedObjectModel *_managedObjectModel;	// 48 = 0x30
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 56 = 0x38
    AnalyticsWorkspace *_symptomsAnalyticsWorkspace;	// 64 = 0x40
    NetworkPerformanceFeed *_symptomsNetworkHistoryFeed;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_serialQForNetworkPerformanceFeed;	// 80 = 0x50
}

+ (_Bool)isNetworkStoreReady;	// IMP=0x0000000100124c58
+ (id)sharedWiFiNetworkStoreController;	// IMP=0x0000000100124b4c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQForNetworkPerformanceFeed; // @synthesize serialQForNetworkPerformanceFeed=_serialQForNetworkPerformanceFeed;
@property(retain, nonatomic) NetworkPerformanceFeed *symptomsNetworkHistoryFeed; // @synthesize symptomsNetworkHistoryFeed=_symptomsNetworkHistoryFeed;
@property(retain, nonatomic) AnalyticsWorkspace *symptomsAnalyticsWorkspace; // @synthesize symptomsAnalyticsWorkspace=_symptomsAnalyticsWorkspace;
@property(retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(retain, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property(retain, nonatomic) NSManagedObjectContext *rootMOC; // @synthesize rootMOC=_rootMOC;
@property(retain, nonatomic) NSManagedObjectContext *childMOC; // @synthesize childMOC=_childMOC;
@property _Bool isDataLoadedFromDB; // @synthesize isDataLoadedFromDB=_isDataLoadedFromDB;
@property void *readyCallbackContext; // @synthesize readyCallbackContext=_readyCallbackContext;
@property(copy) CDUnknownBlockType readyCallback; // @synthesize readyCallback=_readyCallback;
- (void)mocDidSaveNotification:(id)arg1;	// IMP=0x000000010012e2bc
- (_Bool)saveChildContext;	// IMP=0x000000010012e0cc
- (void)saveMainContext;	// IMP=0x000000010012df04
- (void)saveChangesToStore;	// IMP=0x000000010012de5c
- (void)createChildMOC;	// IMP=0x000000010012dd80
- (void)createCoreDataStack;	// IMP=0x000000010012d624
- (void)removeAllUserAutoJoinEvents;	// IMP=0x000000010012d504
- (id)copyUserAutoJoinEvents;	// IMP=0x000000010012d348
- (void)saveUserAutoJoinEventWithUUID:(id)arg1 authFlags:(long long)arg2 location:(id)arg3;	// IMP=0x000000010012d094
- (_Bool)isHistoricallyBadLinkQualityNetwork:(struct __WiFiNetwork *)arg1;	// IMP=0x000000010012cddc
- (_Bool)isOmniPresentNetwork:(struct __WiFiNetwork *)arg1;	// IMP=0x000000010012cbc0
- (_Bool)isMovingNetwork:(struct __WiFiNetwork *)arg1;	// IMP=0x000000010012c9a8
- (void)updateScoreForNetwork:(struct __WiFiNetwork *)arg1;	// IMP=0x000000010012c8d4
- (id)copyPreferenceScoreDictionaryForNetwork:(struct __WiFiNetwork *)arg1;	// IMP=0x000000010012c49c
- (id)copyPreferenceScoreForNetwork:(struct __WiFiNetwork *)arg1;	// IMP=0x000000010012c268
- (long long)getTotalScoreForNetwork:(struct __WiFiNetwork *)arg1;	// IMP=0x000000010012c050
- (void)userSwitchedToNetwork:(struct __WiFiNetwork *)arg1 leavingNetwork:(struct __WiFiNetwork *)arg2;	// IMP=0x000000010012b8c8
- (_Bool)is5GNetworkAvailableAtLocation:(id)arg1;	// IMP=0x000000010012b44c
- (id)copyScoreSortedNetworksAvailableAtLocation:(id)arg1;	// IMP=0x000000010012aa60
- (unsigned char)copyHigherBandNetworksAvailableAtLocation:(id)arg1 intoArray:(id *)arg2;	// IMP=0x000000010012a1d0
- (id)copyNetworksAvailableAtLocation:(id)arg1;	// IMP=0x0000000100129970
- (id)copyLowerBandGeoTagsForNetwork:(struct __WiFiNetwork *)arg1;	// IMP=0x0000000100129668
- (id)copyHigherBandGeoTagsForNetwork:(struct __WiFiNetwork *)arg1;	// IMP=0x0000000100129360
- (id)copyGeoTagsForNetwork:(struct __WiFiNetwork *)arg1 currentLocation:(id)arg2;	// IMP=0x0000000100128b44
- (_Bool)isWithin:(double)arg1 fromLocation:(id)arg2 forNetwork:(struct __WiFiNetwork *)arg3;	// IMP=0x0000000100128550
- (id)copyLocationsForNetwork:(struct __WiFiNetwork *)arg1;	// IMP=0x0000000100127e78
- (void)setGeoTag:(id)arg1 forNetwork:(struct __WiFiNetwork *)arg2;	// IMP=0x0000000100126dd0
- (_Bool)didNetworkMove:(id)arg1;	// IMP=0x00000001001266c8
- (void)scoreSync;	// IMP=0x00000001001258f8
- (void)removeUnusedGeotags:(double)arg1;	// IMP=0x00000001001252b8
- (void)removeNetwork:(struct __WiFiNetwork *)arg1;	// IMP=0x0000000100125060
- (void)registerIsReadyCallbackContext:(void *)arg1;	// IMP=0x0000000100125018
- (void)registerIsReadyCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000100124fd0
- (void)dealloc;	// IMP=0x0000000100124f30
- (void)loadNetworksFromCoreData;	// IMP=0x0000000100124ca8
- (id)init;	// IMP=0x0000000100124bec

@end

