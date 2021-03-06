//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FMFDStoreController, FMFDevice, FMFFavoritesSequencer, FMFFenceManager, FMFFenceSequencer, NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString, NSTimer;

@interface FMFDataManager : NSObject
{
    _Bool _followersInfoReceived;	// 8 = 0x8
    _Bool _followersFullyInited;	// 9 = 0x9
    _Bool _followingInfoReceived;	// 10 = 0xa
    _Bool _followingFullyInited;	// 11 = 0xb
    _Bool _storedConfigLoaded;	// 12 = 0xc
    NSArray *_cachedTapMessages;	// 16 = 0x10
    NSDictionary *__configFromServer;	// 24 = 0x18
    FMFFenceSequencer *_fenceSequencer;	// 32 = 0x20
    FMFFenceManager *_fenceManager;	// 40 = 0x28
    FMFFavoritesSequencer *_favoritesSequencer;	// 48 = 0x30
    NSSet *_pendingOfferHandles;	// 56 = 0x38
    NSString *_modelVersion;	// 64 = 0x40
    NSSet *__devices;	// 72 = 0x48
    FMFDevice *__meDevice;	// 80 = 0x50
    NSDictionary *__features;	// 88 = 0x58
    NSDictionary *__preferences;	// 96 = 0x60
    NSDictionary *__myInfo;	// 104 = 0x68
    NSDictionary *__followingHandleMapWithIdentifier;	// 112 = 0x70
    NSDictionary *__followingHandleMapWithServerId;	// 120 = 0x78
    NSDictionary *__followerHandleMapWithIdentifier;	// 128 = 0x80
    NSDictionary *__followerHandleMapWithServerId;	// 136 = 0x88
    NSSet *__followingHandlesInternal;	// 144 = 0x90
    NSSet *__followerHandlesInternal;	// 152 = 0x98
    NSSet *__futureFollowingRequestsInternal;	// 160 = 0xa0
    NSSet *__futureFollowerRequestsInternal;	// 168 = 0xa8
    NSDictionary *__futureFollowerRequestMapWithIdentifier;	// 176 = 0xb0
    NSMutableDictionary *__locationDictionary;	// 184 = 0xb8
    NSMutableDictionary *_changesToBeNotified;	// 192 = 0xc0
    NSTimer *_sanitizeLocationsCacheTimer;	// 200 = 0xc8
    FMFDStoreController *_storeController;	// 208 = 0xd0
    NSString *_lastLoggedInPrsIdInternal;	// 216 = 0xd8
}

+ (id)sharedInstance;	// IMP=0x000000010002860c
- (void).cxx_destruct;	// IMP=0x00000001000321c4
@property(retain, nonatomic) NSString *lastLoggedInPrsIdInternal; // @synthesize lastLoggedInPrsIdInternal=_lastLoggedInPrsIdInternal;
@property(retain, nonatomic) FMFDStoreController *storeController; // @synthesize storeController=_storeController;
@property(nonatomic) _Bool storedConfigLoaded; // @synthesize storedConfigLoaded=_storedConfigLoaded;
@property(nonatomic) _Bool followingFullyInited; // @synthesize followingFullyInited=_followingFullyInited;
@property(nonatomic) _Bool followingInfoReceived; // @synthesize followingInfoReceived=_followingInfoReceived;
@property(nonatomic) _Bool followersFullyInited; // @synthesize followersFullyInited=_followersFullyInited;
@property(nonatomic) _Bool followersInfoReceived; // @synthesize followersInfoReceived=_followersInfoReceived;
@property(retain, nonatomic) NSTimer *sanitizeLocationsCacheTimer; // @synthesize sanitizeLocationsCacheTimer=_sanitizeLocationsCacheTimer;
@property(retain, nonatomic) NSMutableDictionary *changesToBeNotified; // @synthesize changesToBeNotified=_changesToBeNotified;
@property(retain, nonatomic) NSMutableDictionary *_locationDictionary; // @synthesize _locationDictionary=__locationDictionary;
@property(retain, nonatomic) NSDictionary *_futureFollowerRequestMapWithIdentifier; // @synthesize _futureFollowerRequestMapWithIdentifier=__futureFollowerRequestMapWithIdentifier;
@property(retain, nonatomic) NSSet *_futureFollowerRequestsInternal; // @synthesize _futureFollowerRequestsInternal=__futureFollowerRequestsInternal;
@property(retain, nonatomic) NSSet *_futureFollowingRequestsInternal; // @synthesize _futureFollowingRequestsInternal=__futureFollowingRequestsInternal;
@property(retain, nonatomic) NSSet *_followerHandlesInternal; // @synthesize _followerHandlesInternal=__followerHandlesInternal;
@property(retain, nonatomic) NSSet *_followingHandlesInternal; // @synthesize _followingHandlesInternal=__followingHandlesInternal;
@property(retain, nonatomic) NSDictionary *_followerHandleMapWithServerId; // @synthesize _followerHandleMapWithServerId=__followerHandleMapWithServerId;
@property(retain, nonatomic) NSDictionary *_followerHandleMapWithIdentifier; // @synthesize _followerHandleMapWithIdentifier=__followerHandleMapWithIdentifier;
@property(retain, nonatomic) NSDictionary *_followingHandleMapWithServerId; // @synthesize _followingHandleMapWithServerId=__followingHandleMapWithServerId;
@property(retain, nonatomic) NSDictionary *_followingHandleMapWithIdentifier; // @synthesize _followingHandleMapWithIdentifier=__followingHandleMapWithIdentifier;
@property(retain, nonatomic) NSDictionary *_myInfo; // @synthesize _myInfo=__myInfo;
@property(retain, nonatomic) NSDictionary *_preferences; // @synthesize _preferences=__preferences;
@property(retain, nonatomic) NSDictionary *_features; // @synthesize _features=__features;
@property(retain, nonatomic) FMFDevice *_meDevice; // @synthesize _meDevice=__meDevice;
@property(retain, nonatomic) NSSet *_devices; // @synthesize _devices=__devices;
@property(retain, nonatomic) NSString *modelVersion; // @synthesize modelVersion=_modelVersion;
@property(retain, nonatomic) NSSet *pendingOfferHandles; // @synthesize pendingOfferHandles=_pendingOfferHandles;
@property(retain, nonatomic) FMFFavoritesSequencer *favoritesSequencer; // @synthesize favoritesSequencer=_favoritesSequencer;
@property(retain, nonatomic) FMFFenceManager *fenceManager; // @synthesize fenceManager=_fenceManager;
@property(retain, nonatomic) FMFFenceSequencer *fenceSequencer; // @synthesize fenceSequencer=_fenceSequencer;
- (void)updateClientsWithLocallyStoredModelCache;	// IMP=0x0000000100031934
- (void)clearTapMessagesCache;	// IMP=0x0000000100031878
- (void)storeTapMessagesToDefaults;	// IMP=0x00000001000317e8
- (id)tapMessagesFromDefaults;	// IMP=0x000000010003173c
- (void)updateTapMessagesCache:(id)arg1;	// IMP=0x0000000100031650
@property(retain, nonatomic) NSArray *cachedTapMessages; // @synthesize cachedTapMessages=_cachedTapMessages;
- (_Bool)isActiveAutoMeDevice;	// IMP=0x0000000100031568
- (_Bool)isThisDeviceRegistered;	// IMP=0x0000000100031374
- (void)cleanupCachedPendingOfferHandles;	// IMP=0x0000000100031290
- (_Bool)hasPendingOfferToHandle:(id)arg1 withGroupId:(id)arg2;	// IMP=0x000000010003105c
- (double)lazyInitTimeoutInSec;	// IMP=0x0000000100030f60
- (double)graceInterval5XXInSec;	// IMP=0x0000000100030ee4
- (double)graceInterval401InSec;	// IMP=0x0000000100030e68
- (id)maxTriesToRegisterDevice;	// IMP=0x0000000100030e0c
- (double)maxWaitTimeForRegisterMS;	// IMP=0x0000000100030d90
- (double)systemInactivityTimeoutInSec;	// IMP=0x0000000100030d14
- (double)upsellTimeoutInSeconds;	// IMP=0x0000000100030c98
- (double)userLocateWaitIntervalInMS;	// IMP=0x0000000100030bec
- (double)locationTTL;	// IMP=0x0000000100030b54
- (double)maxLocatingInterval;	// IMP=0x0000000100030abc
- (double)heartbeatIntervalInSec;	// IMP=0x0000000100030a10
- (double)minCallbackInterval;	// IMP=0x000000010003091c
- (_Bool)transcriptDelegateStopEnabled;	// IMP=0x000000010003089c
- (_Bool)transcriptDelegateStartEnabled;	// IMP=0x000000010003081c
- (_Bool)canAddFriend;	// IMP=0x0000000100030764
- (_Bool)canAddFollower;	// IMP=0x00000001000306ac
- (_Bool)showAirDropImportViewOniCloudAlert;	// IMP=0x0000000100030628
- (_Bool)showAirDropImportUseFMFAppAlert;	// IMP=0x00000001000305a4
- (_Bool)showAirDropImportAlert;	// IMP=0x0000000100030520
- (_Bool)blockFMFChannel;	// IMP=0x00000001000304a8
- (_Bool)sendOnlyFMFChannel;	// IMP=0x0000000100030430
- (id)offerExpireDateForHandle:(id)arg1 withGroupId:(id)arg2;	// IMP=0x0000000100030320
- (id)allLocations;	// IMP=0x00000001000302b4
- (void)removeFutureFollowerRequest:(id)arg1;	// IMP=0x0000000100030160
- (void)getHandlesWithPendingOffers:(CDUnknownBlockType)arg1;	// IMP=0x00000001000300ec
- (id)getHandlesWithPendingOffersSync;	// IMP=0x00000001000300e0
- (void)getPendingFriendshipRequestsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002ff6c
- (void)getHandlesSharingMyLocationWithGroupId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002fde8
- (void)getHandlesSharingMyLocation:(CDUnknownBlockType)arg1;	// IMP=0x000000010002fd74
- (void)getHandlesSharingLocationsWithMeWithGroupId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002fbf0
- (void)getHandlesSharingLocationsWithMe:(CDUnknownBlockType)arg1;	// IMP=0x000000010002fb80
- (id)followerHandleForServerId:(id)arg1;	// IMP=0x000000010002fb00
- (id)followingHandleForServerId:(id)arg1;	// IMP=0x000000010002fa80
- (id)friendshipRequestForIdentifier:(id)arg1;	// IMP=0x000000010002fa00
- (id)locationsForHandles:(id)arg1;	// IMP=0x000000010002f874
- (id)getAccountEmailAddress;	// IMP=0x000000010002f774
- (_Bool)isAllowFriendRequestsEnabled;	// IMP=0x000000010002f65c
- (_Bool)locationHidden;	// IMP=0x000000010002f544
- (id)locationForHandle:(id)arg1;	// IMP=0x000000010002f154
- (id)followerHandleForIdentifier:(id)arg1;	// IMP=0x000000010002f0d4
- (id)followingHandleForIdentifier:(id)arg1;	// IMP=0x000000010002f054
- (id)futureFollowerRequests;	// IMP=0x000000010002f008
- (id)futureFollowingRequests;	// IMP=0x000000010002efbc
@property(readonly, nonatomic) NSSet *followerHandles;
@property(readonly, nonatomic) NSSet *followingHandles;
- (void)setLocationsFromData:(id)arg1;	// IMP=0x000000010002ec10
- (void)setFutureFollowerRequests:(id)arg1;	// IMP=0x000000010002ea20
- (void)setFollowerHandles:(id)arg1;	// IMP=0x000000010002e710
- (void)setFollowingHandles:(id)arg1;	// IMP=0x000000010002e42c
- (id)maxLocationRefreshTimeout;	// IMP=0x000000010002e350
- (id)companionDeviceId;	// IMP=0x000000010002e228
- (id)thisDeviceId;	// IMP=0x000000010002e128
- (id)allDevices;	// IMP=0x000000010002e11c
- (id)deviceSharingLocation;	// IMP=0x000000010002e110
- (void)sanitizeLocationsCache:(id)arg1;	// IMP=0x000000010002df78
- (void)updateInited;	// IMP=0x000000010002de48
- (void)notifyClientOfUpdates:(id)arg1;	// IMP=0x000000010002ca74
- (void)updateSessionCaches:(id)arg1 forSessions:(id)arg2 pushAllData:(_Bool)arg3;	// IMP=0x000000010002bf30
- (void)deltasFromExisting:(id)arg1 usingLatest:(id)arg2 forKey:(id)arg3;	// IMP=0x000000010002bc0c
- (void)digestCommand:(id)arg1;	// IMP=0x0000000100029060
- (void)updateLastLoggedInPrsId:(id)arg1;	// IMP=0x0000000100028f04
- (id)lastLoggedInPrsId;	// IMP=0x0000000100028e88
@property(retain, nonatomic) NSDictionary *_configFromServer; // @synthesize _configFromServer=__configFromServer;
- (void)determineNewMeDevice;	// IMP=0x0000000100028ad0
- (void)accountWasRemoved;	// IMP=0x0000000100028a50
- (void)cleanupOldModel;	// IMP=0x00000001000289d0
- (void)dealloc;	// IMP=0x0000000100028914
- (void)cleanupCaches;	// IMP=0x00000001000281ec
- (id)followedHandleForFence:(id)arg1;	// IMP=0x00000001000106dc
- (id)followerHandleForFence:(id)arg1;	// IMP=0x0000000100010470

@end

