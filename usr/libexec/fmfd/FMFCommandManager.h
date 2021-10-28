//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FMFServerInteractionController, NSArray, NSCountedSet, NSDate, NSDictionary, NSMutableSet, NSTimer;
@protocol OS_dispatch_queue;

@interface FMFCommandManager : NSObject
{
    _Bool _hasModelInitialized;	// 8 = 0x8
    _Bool _isPendingRefresh;	// 9 = 0x9
    _Bool _isRefreshInProgress;	// 10 = 0xa
    NSDictionary *_cachedRedirects;	// 16 = 0x10
    NSDictionary *_commandDataContext;	// 24 = 0x18
    FMFServerInteractionController *_serverInteractionController;	// 32 = 0x20
    NSMutableSet *_handlesToBeLocated;	// 40 = 0x28
    NSArray *_enumToStringMap;	// 48 = 0x30
    long long _preferredColeasedRefreshPriority;	// 56 = 0x38
    NSCountedSet *_skippedRefreshReasons;	// 64 = 0x40
    NSTimer *_registrationCheckTimer;	// 72 = 0x48
    long long _registrationRetries;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_redirectsUpdaterQueue;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_serverContextQueue;	// 96 = 0x60
    NSDate *_latest5XXTS;	// 104 = 0x68
    NSDictionary *__serverContext;	// 112 = 0x70
    NSDate *_lastRefreshDate;	// 120 = 0x78
}

+ (id)sharedInstance;	// IMP=0x0000000100040ac0
- (void).cxx_destruct;	// IMP=0x000000010004941c
@property(retain, nonatomic) NSDate *lastRefreshDate; // @synthesize lastRefreshDate=_lastRefreshDate;
@property(retain, nonatomic) NSDictionary *_serverContext; // @synthesize _serverContext=__serverContext;
@property(retain, nonatomic) NSDate *latest5XXTS; // @synthesize latest5XXTS=_latest5XXTS;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serverContextQueue; // @synthesize serverContextQueue=_serverContextQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *redirectsUpdaterQueue; // @synthesize redirectsUpdaterQueue=_redirectsUpdaterQueue;
@property(nonatomic) long long registrationRetries; // @synthesize registrationRetries=_registrationRetries;
@property(retain, nonatomic) NSTimer *registrationCheckTimer; // @synthesize registrationCheckTimer=_registrationCheckTimer;
@property(retain, nonatomic) NSCountedSet *skippedRefreshReasons; // @synthesize skippedRefreshReasons=_skippedRefreshReasons;
@property(nonatomic) long long preferredColeasedRefreshPriority; // @synthesize preferredColeasedRefreshPriority=_preferredColeasedRefreshPriority;
@property(retain, nonatomic) NSArray *enumToStringMap; // @synthesize enumToStringMap=_enumToStringMap;
@property(retain, nonatomic) NSMutableSet *handlesToBeLocated; // @synthesize handlesToBeLocated=_handlesToBeLocated;
@property(nonatomic) _Bool isRefreshInProgress; // @synthesize isRefreshInProgress=_isRefreshInProgress;
@property(nonatomic) _Bool isPendingRefresh; // @synthesize isPendingRefresh=_isPendingRefresh;
@property(retain, nonatomic) FMFServerInteractionController *serverInteractionController; // @synthesize serverInteractionController=_serverInteractionController;
@property(nonatomic) _Bool hasModelInitialized; // @synthesize hasModelInitialized=_hasModelInitialized;
@property(retain, nonatomic) NSDictionary *commandDataContext; // @synthesize commandDataContext=_commandDataContext;
- (void)saveFavorites:(id)arg1 clientSession:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100048f10
- (void)updateFence:(id)arg1 clientSession:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100048b30
- (void)saveNotificationToken;	// IMP=0x0000000100048730
@property(retain, nonatomic) NSDictionary *commandServerContext;
- (double)graceInterval5XXInSec;	// IMP=0x0000000100048330
- (_Bool)isIn5XXGracePeriod;	// IMP=0x00000001000480f0
- (void)exit5XXGracePeriod;	// IMP=0x000000010004806c
- (void)enter5XXGracePeriod;	// IMP=0x0000000100047fc0
- (id)alertActionInfoForAction:(id)arg1 andURL:(id)arg2;	// IMP=0x0000000100047c30
- (void)showAlertFromServerResponse:(id)arg1;	// IMP=0x00000001000466a0
- (void)clearRedirectsCache;	// IMP=0x0000000100046568
- (void)storeRedirectsToDefaults;	// IMP=0x0000000100046444
- (void)updateRedirectsCache:(id)arg1;	// IMP=0x0000000100046410
- (id)cachedRedirectsFromDefaults;	// IMP=0x0000000100046364
- (void)hostRedirected:(id)arg1;	// IMP=0x0000000100046024
@property(retain, nonatomic) NSDictionary *cachedRedirects; // @synthesize cachedRedirects=_cachedRedirects;
- (void)invalidateMappingPackets:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100045db4
- (void)importMappingPacket:(id)arg1 forSession:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000459f8
- (void)getPendingMappingPacketsForHandle:(id)arg1 groupId:(id)arg2 forSession:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010004576c
- (void)checkStatusForHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 forSession:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100045484
- (void)stopSharingMyLocationWithHandles:(id)arg1 forSession:(id)arg2 groupId:(id)arg3 callerId:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100045278
- (void)declineFriendshipRequest:(id)arg1 forSession:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100045080
- (void)approveFriendshipRequest:(id)arg1 forSession:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100044d10
- (void)sendFriendshipInviteRequest:(id)arg1 forSession:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100044938
- (void)extendFriendshipOfferRequest:(id)arg1 forSession:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000446c4
- (void)sendFriendshipOfferRequest:(id)arg1 forSession:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000440c4
- (void)canOfferToHandles:(id)arg1 forSession:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100043b40
- (void)removeDevice:(id)arg1 forSession:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000439ec
- (void)setActiveDevice:(id)arg1 forSession:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100043898
- (void)setAllowFriendRequestsEnabled:(_Bool)arg1 forSession:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100043760
- (void)setHideMyLocationEnabled:(_Bool)arg1 forSession:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100043628
- (void)getLocationForHandles:(id)arg1 forSession:(id)arg2 callerId:(id)arg3 priority:(long long)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000100042c78
- (void)fetchLocationForHandles:(id)arg1 forSession:(id)arg2 callerId:(id)arg3 priority:(long long)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000100042a18
- (void)refreshDueToTapWithMessage:(id)arg1;	// IMP=0x0000000100042918
- (void)refreshForSession:(id)arg1 withReason:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000428c0
- (void)checkHeartbeat;	// IMP=0x00000001000428a8
- (void)sendCommand:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000424d8
- (void)resetModelToUninitialized;	// IMP=0x0000000100042454
- (void)clearDataAndServerContext;	// IMP=0x00000001000423bc
- (void)_refreshForSession:(id)arg1 withReason:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100041cdc
- (id)_filterLocatableHandles:(id)arg1;	// IMP=0x0000000100041a54
- (void)_sendInitForSession:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000416f4
- (id)stringForReasonCode:(long long)arg1;	// IMP=0x0000000100041698
- (void)_performDeviceRegistrationCheck:(id)arg1;	// IMP=0x0000000100041548
- (void)_scheduleRegistrationSanityCheck;	// IMP=0x00000001000411dc
- (_Bool)sendInitWithLazyCheckForReason:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100041094
- (void)initializeModelForSession:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100041040
- (void)cloudKitRecordsChanged:(id)arg1;	// IMP=0x0000000100041028
- (void)sendLogoutCommand;	// IMP=0x0000000100041024
- (void)accountWasRemoved;	// IMP=0x0000000100040fd4
- (double)lastSuccessfulResponseTimestamp;	// IMP=0x0000000100040f80
- (void)dealloc;	// IMP=0x0000000100040ef4

@end
