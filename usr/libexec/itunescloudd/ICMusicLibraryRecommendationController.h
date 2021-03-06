//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICEnvironmentMonitorObserver-Protocol.h"

@class ICMusicLibraryArtistAffinityAnalyzer, NSNumber, NSString;
@protocol NSCopying, OS_dispatch_queue;

@interface ICMusicLibraryRecommendationController : NSObject <ICEnvironmentMonitorObserver>
{
    ICMusicLibraryArtistAffinityAnalyzer *_affinityAnalyzer;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_accessQueue;	// 16 = 0x10
    _Bool _userHasOptedIn;	// 24 = 0x18
    _Bool _userHasEverToggledOptInSwitch;	// 25 = 0x19
    id <NSCopying> _subscriptionObservationToken;	// 32 = 0x20
    _Bool _isSystemService;	// 40 = 0x28
    _Bool _failedToPerformAnalysis;	// 41 = 0x29
    NSNumber *_lastSeenDSID;	// 48 = 0x30
    double _lastTimePeriodicXPCFired;	// 56 = 0x38
    double _refreshIntervalFromBag;	// 64 = 0x40
}

+ (id)sharedLibraryRecommendationController;	// IMP=0x0000000100078e74
- (void).cxx_destruct;	// IMP=0x0000000100081bd4
- (id)_createLocalNotificationDictionaryForRecommendationResult:(id)arg1 storePlatformMetadata:(id)arg2 recommendationID:(id)arg3 identifier:(id)arg4;	// IMP=0x0000000100080ce4
- (void)_updateOptInIfNecessary;	// IMP=0x000000010007fca8
- (void)_optInMessageForPriorityMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007f90c
- (id)_optInMessageContentForPriorityMessageContent:(id)arg1;	// IMP=0x000000010007f754
- (void)_createApplicationMessagesForResult:(id)arg1 artistNewContentResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010007dd50
- (void)_cleanupExpiredApplicationMessages;	// IMP=0x000000010007d874
- (id)_retrievePreviousRecommendationMatchesFromCache;	// IMP=0x000000010007d574
- (id)_cacheDirectoryPath;	// IMP=0x000000010007d4f0
- (id)_getNetworkConstraints;	// IMP=0x000000010007d498
- (id)_storeRequestContext;	// IMP=0x000000010007d390
- (id)_wrapAndCacheResponseModelWithCompiledMLModel:(id)arg1;	// IMP=0x000000010007cc9c
- (_Bool)_setupCacheDirectoryStructureWithPath:(id)arg1;	// IMP=0x000000010007cae0
- (void)_clearMLModelCache;	// IMP=0x000000010007c900
- (void)_fetchRecommendationsSetAndModelWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010007c664
- (void)_computeLibraryRecommendationWithResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010007bd68
- (void)_handleRecommendationsResponseModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007b36c
- (void)_performRecommendationsRequest;	// IMP=0x000000010007acd4
- (void)_performRecommendationsUpdate;	// IMP=0x000000010007a7e4
- (void)_cacheMatchedRecommendations:(id)arg1;	// IMP=0x000000010007a320
- (void)_clearRecommendationsData;	// IMP=0x000000010007a050
- (void)_handleNewArtistContentResponseNotification:(id)arg1;	// IMP=0x0000000100079d54
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;	// IMP=0x0000000100079c58
- (void)handleAccountStateChange:(id)arg1;	// IMP=0x0000000100079b74
- (void)scheduleRecommendationsRefreshTimer;	// IMP=0x0000000100079690
- (void)stopSystemService;	// IMP=0x00000001000794ec
- (void)startSystemService;	// IMP=0x0000000100079118
- (void)dealloc;	// IMP=0x000000010007907c
- (id)init;	// IMP=0x0000000100078ee0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

