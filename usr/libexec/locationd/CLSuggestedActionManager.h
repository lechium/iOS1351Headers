//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

@class ATXHeroAppPredictionClient, CLLocation, CLTimer, NSMutableArray, NSMutableDictionary, NSString, NSUserActivity;
@protocol CLAppTileDataProviderProtocol, CLClientAuthorizationCacheProtocol, CLTilesManagerProtocol;

@interface CLSuggestedActionManager : CLIntersiloService
{
    struct unique_ptr<CLBundleLocationProvider, std::__1::default_delete<CLBundleLocationProvider>> _appStoreBundleLocationProvider;	// 8 = 0x8
    struct unique_ptr<CLBundleLocationProvider_Type::Client, std::__1::default_delete<CLBundleLocationProvider_Type::Client>> _appStoreBundleLocationProviderClient;	// 16 = 0x10
    struct CLServiceLocationProvider *_appSuggestionsServiceLocationProvider;	// 24 = 0x18
    struct unique_ptr<CLServiceLocationProvider_Type::Client, std::__1::default_delete<CLServiceLocationProvider_Type::Client>> _appSuggestionsServiceLocationProviderClient;	// 32 = 0x20
    struct unique_ptr<CLDarwinNotifier_Type::Client, std::__1::default_delete<CLDarwinNotifier_Type::Client>> _darwinNotifierClient;	// 40 = 0x28
    struct unique_ptr<CLSuggestedActionDatabase, std::__1::default_delete<CLSuggestedActionDatabase>> _suggestedActionDatabse;	// 48 = 0x30
    struct unique_ptr<CLBTLEFenceManager_Type::Client, std::__1::default_delete<CLBTLEFenceManager_Type::Client>> _btleFenceClient;	// 56 = 0x38
    struct unique_ptr<CLDaemonStatus_Type::Client, std::__1::default_delete<CLDaemonStatus_Type::Client>> _daemonStatusClient;	// 64 = 0x40
    _Bool _isInstalledAppSuggestionsAllowed;	// 72 = 0x48
    _Bool _isUninstalledAppSuggestionsAllowed;	// 73 = 0x49
    _Bool _shouldUpdateRegionalRecommendationState;	// 74 = 0x4a
    _Bool _zeroKeywordEnabled;	// 75 = 0x4b
    _Bool _applicationPredictionExtensionEnabled;	// 76 = 0x4c
    int _state;	// 80 = 0x50
    int _spotlightPrefsChangedNotifyToken;	// 84 = 0x54
    id _context;	// 88 = 0x58
    NSUserActivity *_activity;	// 96 = 0x60
    CDUnknownBlockType _nudgeHandler;	// 104 = 0x68
    id <CLClientAuthorizationCacheProtocol> _clientAuthorizationCache;	// 112 = 0x70
    NSString *_mostRecentBundleIdentifier;	// 120 = 0x78
    id <CLTilesManagerProtocol> _tilesManagerProxy;	// 128 = 0x80
    id <CLAppTileDataProviderProtocol> _appTileDataProviderProxy;	// 136 = 0x88
    CLLocation *_mostRecentSuggestLocation;	// 144 = 0x90
    CLTimer *_purgeTimer;	// 152 = 0x98
    NSMutableArray *_recentlySuggestedAdamIds;	// 160 = 0xa0
    NSMutableDictionary *_dateStartedSuggestingAdamIds;	// 168 = 0xa8
    CLLocation *_mostRecentCachedLocation;	// 176 = 0xb0
    NSMutableArray *_currentSuggestedApplications;	// 184 = 0xb8
    double _mostRecentLocationRequestTime;	// 192 = 0xc0
    id _driver;	// 200 = 0xc8
    ATXHeroAppPredictionClient *_atxClient;	// 208 = 0xd0
}

+ (id)getSilo;	// IMP=0x000000010052e780
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x000000010052e75c
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100cdef54
+ (_Bool)isSupported;	// IMP=0x000000010052e398
- (id).cxx_construct;	// IMP=0x00000001005374c4
- (void).cxx_destruct;	// IMP=0x00000001005373cc
@property(retain, nonatomic) ATXHeroAppPredictionClient *atxClient; // @synthesize atxClient=_atxClient;
@property(nonatomic) _Bool applicationPredictionExtensionEnabled; // @synthesize applicationPredictionExtensionEnabled=_applicationPredictionExtensionEnabled;
@property(nonatomic) _Bool zeroKeywordEnabled; // @synthesize zeroKeywordEnabled=_zeroKeywordEnabled;
@property(retain, nonatomic) id driver; // @synthesize driver=_driver;
@property(nonatomic) int spotlightPrefsChangedNotifyToken; // @synthesize spotlightPrefsChangedNotifyToken=_spotlightPrefsChangedNotifyToken;
@property(nonatomic) double mostRecentLocationRequestTime; // @synthesize mostRecentLocationRequestTime=_mostRecentLocationRequestTime;
@property(retain, nonatomic) NSMutableArray *currentSuggestedApplications; // @synthesize currentSuggestedApplications=_currentSuggestedApplications;
@property(retain, nonatomic) CLLocation *mostRecentCachedLocation; // @synthesize mostRecentCachedLocation=_mostRecentCachedLocation;
@property(retain, nonatomic) NSMutableDictionary *dateStartedSuggestingAdamIds; // @synthesize dateStartedSuggestingAdamIds=_dateStartedSuggestingAdamIds;
@property(retain, nonatomic) NSMutableArray *recentlySuggestedAdamIds; // @synthesize recentlySuggestedAdamIds=_recentlySuggestedAdamIds;
@property(nonatomic) _Bool shouldUpdateRegionalRecommendationState; // @synthesize shouldUpdateRegionalRecommendationState=_shouldUpdateRegionalRecommendationState;
@property(retain, nonatomic) CLTimer *purgeTimer; // @synthesize purgeTimer=_purgeTimer;
@property(copy, nonatomic) CLLocation *mostRecentSuggestLocation; // @synthesize mostRecentSuggestLocation=_mostRecentSuggestLocation;
@property(retain, nonatomic) id <CLAppTileDataProviderProtocol> appTileDataProviderProxy; // @synthesize appTileDataProviderProxy=_appTileDataProviderProxy;
@property(retain, nonatomic) id <CLTilesManagerProtocol> tilesManagerProxy; // @synthesize tilesManagerProxy=_tilesManagerProxy;
@property(nonatomic) _Bool isUninstalledAppSuggestionsAllowed; // @synthesize isUninstalledAppSuggestionsAllowed=_isUninstalledAppSuggestionsAllowed;
@property(nonatomic) _Bool isInstalledAppSuggestionsAllowed; // @synthesize isInstalledAppSuggestionsAllowed=_isInstalledAppSuggestionsAllowed;
@property(copy, nonatomic) NSString *mostRecentBundleIdentifier; // @synthesize mostRecentBundleIdentifier=_mostRecentBundleIdentifier;
@property(retain, nonatomic) id <CLClientAuthorizationCacheProtocol> clientAuthorizationCache; // @synthesize clientAuthorizationCache=_clientAuthorizationCache;
@property(copy, nonatomic) CDUnknownBlockType nudgeHandler; // @synthesize nudgeHandler=_nudgeHandler;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSUserActivity *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) id context; // @synthesize context=_context;
- (void)onDaemonStatusDisplayOff;	// IMP=0x0000000100537004
- (void)onPurgeTimer;	// IMP=0x0000000100536dcc
- (_Bool)isAppSuggestionsAllowed;	// IMP=0x0000000100536d84
- (void)_updateAppSuggestionsAllowed;	// IMP=0x0000000100536964
- (void)beaconRegion:(struct MonitoredRegion)arg1 didTransitionToState:(int)arg2;	// IMP=0x00000001005367c0
- (void)suggestBeaconAppWithBundleIdentifierSet:(id)arg1;	// IMP=0x0000000100536220
- (void)onUAUserActivityDidContinueToAppStoreNotification:(id)arg1;	// IMP=0x0000000100535dd8
- (id)identifierForAdamId:(id)arg1 atLocation:(id)arg2;	// IMP=0x0000000100535b68
- (_Bool)shouldSuggestActionWithIdentifier:(id)arg1;	// IMP=0x0000000100535900
- (void)actionWithIdentifier:(id)arg1 wasSuggested:(_Bool)arg2;	// IMP=0x00000001005357b4
- (void)_suggestWithLocation:(id)arg1;	// IMP=0x00000001005331f4
- (id)_filterAppRecommendationResults:(id)arg1 touristMode:(_Bool)arg2;	// IMP=0x0000000100532638
- (id)_appRecommendationResultsFromCandidateList:(id)arg1 atLocation:(id)arg2;	// IMP=0x0000000100531c04
- (void)onLocation:(id)arg1;	// IMP=0x00000001005315ec
- (void)suggestLocationApp;	// IMP=0x0000000100530f50
- (void)handleNudge;	// IMP=0x0000000100530650
- (void)_updatePredictedApplicationExtensions:(id)arg1 error:(id)arg2;	// IMP=0x00000001005301bc
- (void)_determinePredictedApplicationExtensionEnabled;	// IMP=0x000000010052fff4
- (void)_registerForZeroKeywordDisabledNotification;	// IMP=0x000000010052fd28
- (_Bool)_determineZeroKeywordEnabled;	// IMP=0x000000010052fc64
- (void)endService;	// IMP=0x000000010052f800
- (void)beginService;	// IMP=0x000000010052e83c
- (id)init;	// IMP=0x000000010052e7f8

@end
