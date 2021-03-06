//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ClientSession.h"

#import "FMFXPCInternalServerProtocol-Protocol.h"

@class NSMutableSet, NSObject, NSSet, NSString;
@protocol NSXPCProxyCreating><FMFXPCInternalClientProtocol, OS_dispatch_queue;

@interface FMFClientSession : ClientSession <FMFXPCInternalServerProtocol>
{
    _Bool _blockingDialogs;	// 8 = 0x8
    NSString *_clientBundleId;	// 16 = 0x10
    NSMutableSet *__handlesInternal;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_handlesQueue;	// 32 = 0x20
}

+ (id)sharedHandleTransactionQueue;	// IMP=0x0000000100016904
- (void).cxx_destruct;	// IMP=0x00000001000201fc
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handlesQueue; // @synthesize handlesQueue=_handlesQueue;
@property(nonatomic) _Bool blockingDialogs; // @synthesize blockingDialogs=_blockingDialogs;
@property(retain, nonatomic) NSMutableSet *_handlesInternal; // @synthesize _handlesInternal=__handlesInternal;
@property(retain, nonatomic) NSString *clientBundleId; // @synthesize clientBundleId=_clientBundleId;
- (oneway void)getFavoritesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002002c
- (oneway void)removeFavorite:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001fdd0
- (oneway void)addFavorite:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001faf0
- (oneway void)triggerWithUUID:(id)arg1 forFenceWithID:(id)arg2 withStatus:(id)arg3 forDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010001f8fc
- (oneway void)fencesForHandles:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001f79c
- (oneway void)getFences:(CDUnknownBlockType)arg1;	// IMP=0x000000010001f658
- (oneway void)deleteFence:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001f430
- (oneway void)addFence:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ef68
- (id)_encryptedData:(id)arg1 withKey:(id)arg2 error:(id *)arg3;	// IMP=0x000000010001eb18
- (id)_encryptPayload:(id)arg1;	// IMP=0x000000010001e6a4
- (oneway void)encryptPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001e448
- (id)_decryptedData:(id)arg1 withKey:(id)arg2 error:(id *)arg3;	// IMP=0x000000010001ded8
- (id)_decryptPayload:(id)arg1 withToken:(id)arg2;	// IMP=0x000000010001d964
- (oneway void)dataForPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001d488
- (oneway void)decryptPayload:(id)arg1 withToken:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001d108
- (oneway void)handleAndLocationForPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ccbc
- (oneway void)contactForPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c954
- (oneway void)getDataForPerformanceRequest:(CDUnknownBlockType)arg1;	// IMP=0x000000010001c674
- (oneway void)showAirDropImportErrorAlert;	// IMP=0x000000010001c660
- (oneway void)showAirDropImportAlertForId:(id)arg1;	// IMP=0x000000010001c64c
- (oneway void)notLoggedIntoiCloudAlert;	// IMP=0x000000010001c638
- (oneway void)showNetworkOfflineDuringStopOfferAlert;	// IMP=0x000000010001c624
- (oneway void)showNetworkOfflineDuringOfferAlert;	// IMP=0x000000010001c610
- (oneway void)upselliCloudAlert;	// IMP=0x000000010001c5fc
- (oneway void)showSwitchMeDeviceAlertUsingCurrentMeDeviceName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c52c
- (oneway void)showMeDeviceAlert;	// IMP=0x000000010001c434
- (oneway void)showGenericErrorAlert;	// IMP=0x000000010001c420
- (oneway void)show5XXDuringStopOfferAlert;	// IMP=0x000000010001c40c
- (oneway void)show5XXDuringStartOfferAlert;	// IMP=0x000000010001c3f8
- (oneway void)showForbiddenRegionAlert;	// IMP=0x000000010001c3e4
- (oneway void)showShareMyLocationiCloudSettingsOffAlert;	// IMP=0x000000010001c3d0
- (oneway void)showShareMyLocationSystemServiceOffAlert;	// IMP=0x000000010001c3bc
- (oneway void)showLocationServicesSwitchOffAlert;	// IMP=0x000000010001c3a8
- (oneway void)showMaxFollowersLimitReachedAlert;	// IMP=0x000000010001c394
- (oneway void)showRestrictedAlert;	// IMP=0x000000010001c314
- (oneway void)showActiveDeviceChangedAlert;	// IMP=0x000000010001c300
- (oneway void)includeDeviceInAutomations:(CDUnknownBlockType)arg1;	// IMP=0x000000010001c134
- (void)_refreshLocationsForHandles:(id)arg1;	// IMP=0x000000010001c034
- (oneway void)nearbyLocationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001bee0
- (oneway void)favoritesForMaxCount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001bd40
- (void)sendFMFIDSPacket:(id)arg1 toHandle:(id)arg2;	// IMP=0x000000010001ba30
- (void)sendFMFIDSPacketsForHandleIdToMappingIdentifiers:(id)arg1;	// IMP=0x000000010001b8ac
- (oneway void)sessionHandleReport:(CDUnknownBlockType)arg1;	// IMP=0x000000010001b5cc
- (oneway void)dumpStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001b18c
- (oneway void)sendIDSMessage:(id)arg1 toIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001b0b4
- (oneway void)sendIDSPacket:(id)arg1 toHandle:(id)arg2;	// IMP=0x000000010001b064
- (oneway void)isIn5XXGracePeriodWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001afe4
- (oneway void)exit5XXGracePeriod;	// IMP=0x000000010001af48
- (oneway void)crashDaemon;	// IMP=0x000000010001ae98
- (oneway void)setSessionClientBundleId:(id)arg1;	// IMP=0x000000010001ae8c
- (oneway void)iCloudAccountNameWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001adfc
- (oneway void)removeDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ad6c
- (oneway void)setActiveDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ac80
- (oneway void)getRecordIdForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001aba4
- (oneway void)getPrettyNameForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001aaf8
- (oneway void)canOfferToHandles:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001aa5c
- (oneway void)isNetworkReachable:(CDUnknownBlockType)arg1;	// IMP=0x000000010001a990
- (oneway void)getMaxLocatingInterval:(CDUnknownBlockType)arg1;	// IMP=0x000000010001a910
- (oneway void)allDevices:(CDUnknownBlockType)arg1;	// IMP=0x000000010001a878
- (oneway void)deviceSharingLocation:(CDUnknownBlockType)arg1;	// IMP=0x000000010001a3fc
- (oneway void)getPendingMappingPacketsForHandle:(id)arg1 groupId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001a344
- (oneway void)setExpiredInitTimestamp;	// IMP=0x000000010001a2fc
- (oneway void)sessionWasCreatedRefresh;	// IMP=0x000000010001a140
- (oneway void)forceRefresh;	// IMP=0x0000000100019f9c
- (oneway void)getAllLocations:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019e1c
- (oneway void)getAccountEmailAddress:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019d84
- (oneway void)isAllowFriendRequestsEnabled:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019d00
- (oneway void)setAllowFriendRequestsEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100019c78
- (oneway void)isMyLocationEnabled:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019bf4
- (oneway void)setHideMyLocationEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100019b6c
- (oneway void)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100019a0c
- (oneway void)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000198ec
- (oneway void)getHandlesSharingMyLocationWithGroupId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100019860
- (oneway void)getHandlesSharingMyLocation:(CDUnknownBlockType)arg1;	// IMP=0x00000001000197f0
- (oneway void)getHandlesSharingLocationsWithMeWithGroupId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100019764
- (oneway void)getHandlesSharingLocationsWithMe:(CDUnknownBlockType)arg1;	// IMP=0x00000001000196f4
- (oneway void)locationForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100019644
- (oneway void)fetchLocationForHandles:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010001943c
- (oneway void)fetchLocationForHandle:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100019214
- (oneway void)getHandlesWithPendingOffers:(CDUnknownBlockType)arg1;	// IMP=0x00000001000191a4
- (oneway void)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100019010
- (oneway void)getPendingFriendshipRequestsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100018fa0
- (oneway void)stopSharingMyLocationWithHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100018b98
- (oneway void)stopSharingMyLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100018778
- (oneway void)declineFriendshipRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100018680
- (oneway void)approveFriendshipRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100018588
- (oneway void)sendFriendshipInviteToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010001835c
- (oneway void)extendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100018130
- (void)dispayOfferAlertDialogsWithoutRepeatForError:(id)arg1;	// IMP=0x0000000100017ea8
- (oneway void)sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100017c60
- (oneway void)sendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100017b64
- (oneway void)getCurrentTrackedHandles:(CDUnknownBlockType)arg1;	// IMP=0x00000001000179b4
- (oneway void)removeFriendHandles:(id)arg1;	// IMP=0x0000000100017818
- (oneway void)addFriendHandles:(id)arg1;	// IMP=0x0000000100017290
@property(readonly, nonatomic) NSSet *handles;
- (double)_alertTimeoutInterval;	// IMP=0x0000000100017080
- (void)upselliCloudIfNeeded;	// IMP=0x0000000100016f00
- (oneway void)importMappingPacket:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016bd4
- (oneway void)invalidateMappingPackets:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016aec
@property(readonly, nonatomic) id <NSXPCProxyCreating><FMFXPCInternalClientProtocol> clientProxy;
@property(readonly, copy) NSString *description;
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000100016974

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

