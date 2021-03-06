//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BDSServiceProtocol-Protocol.h"
#import "MCProfileConnectionObserver-Protocol.h"

@class BCCloudAssetManager, BCCloudCollectionsManager, BDSNBController, NSString;
@protocol BCCloudSecureUserDataManager;

@interface BDSService : NSObject <MCProfileConnectionObserver, BDSServiceProtocol>
{
    _Bool _paused;	// 8 = 0x8
    BCCloudAssetManager *_assetManager;	// 16 = 0x10
    BCCloudCollectionsManager *_cloudCollectionsManager;	// 24 = 0x18
    id <BCCloudSecureUserDataManager> _secureUserDataManager;	// 32 = 0x20
    BDSNBController *_nanoBooksController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010001d408
@property(retain, nonatomic) BDSNBController *nanoBooksController; // @synthesize nanoBooksController=_nanoBooksController;
@property(nonatomic) __weak id <BCCloudSecureUserDataManager> secureUserDataManager; // @synthesize secureUserDataManager=_secureUserDataManager;
@property(nonatomic) __weak BCCloudCollectionsManager *cloudCollectionsManager; // @synthesize cloudCollectionsManager=_cloudCollectionsManager;
@property(nonatomic) __weak BCCloudAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
- (void)audiobookStoreEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001d278
- (void)setUserDataValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001d1cc
- (void)userDataValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001d144
- (void)resolvedUserDataValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001d0bc
- (void)getUserDataChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001d034
- (void)fetchUserDataIncludingDeleted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001cfc0
- (void)userDatumIncludingDeleted:(_Bool)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001cf28
- (void)userDatumForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001cea0
- (void)deleteUserDatumForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ce18
- (void)setUserData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001cd90
- (void)setUserDatum:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001cd08
- (void)currentCloudSyncVersions:(CDUnknownBlockType)arg1;	// IMP=0x000000010001cc9c
- (void)updateBitrateForItemWithAdamID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001cb74
- (id)updateReadingNowWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001ca8c
- (id)updateWantToReadWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001c9a4
- (id)updateWantToReadAndReadingNowWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001c8bc
- (void)fetchMostRecentAudiobookWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001c84c
- (void)fetchMaxSortOrderInCollectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c7a4
- (void)setCollectionMembers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c6fc
- (void)setCollectionMember:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c654
- (void)getCollectionMemberChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c5ac
- (void)fetchCollectionMembersInCollectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c504
- (void)fetchCollectionMembersIncludingDeleted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c470
- (void)deleteCollectionMemberForCollectionMemberIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c3c8
- (void)deleteCollectionMemberForCollectionMemberID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c320
- (void)currentCollectionMemberCloudSyncVersions:(CDUnknownBlockType)arg1;	// IMP=0x000000010001c294
- (void)collectionMemberForCollectionMemberID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c1ec
- (void)setCollectionDetails:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c144
- (void)setCollectionDetail:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c09c
- (void)getCollectionDetailChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001bf04
- (void)fetchCollectionDetailsIncludingDeleted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001be70
- (void)deleteCollectionDetailForCollectionIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001bdc8
- (void)deleteCollectionDetailForCollectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001bd20
- (void)currentCollectionDetailCloudSyncVersions:(CDUnknownBlockType)arg1;	// IMP=0x000000010001bc94
- (void)collectionDetailsForCollectionIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001bbec
- (void)collectionDetailForCollectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001bb44
- (void)storeItemForStoreID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ba9c
- (void)getStoreItemChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b9f4
- (void)fetchStoreItemsIncludingDeleted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b960
- (void)deleteStoreItemsWithStoreIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b8b8
- (void)deleteStoreItemWithStoreID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b810
- (void)addStoreItems:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b768
- (void)addStoreItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b6c0
- (void)setAssetReviews:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b618
- (void)setAssetReview:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b570
- (void)getAssetReviewChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b4c8
- (void)fetchAssetReviewsForUserID:(id)arg1 includingDeleted:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001b410
- (void)deleteAssetReviewForAssetReviewIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b368
- (void)deleteAssetReviewForAssetReviewID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b2c0
- (void)assetReviewsForAssetReviewIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b218
- (void)assetReviewForAssetReviewID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b170
- (void)setReadingNowDetails:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b0c8
- (void)getReadingNowDetailChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b020
- (void)deleteReadingNowDetailForAssetID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001af78
- (void)currentReadingNowDetailCloudSyncVersions:(CDUnknownBlockType)arg1;	// IMP=0x000000010001aeec
- (void)readingNowDetailsForAssetIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ae44
- (void)fetchFinishedAssetCountByYearWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001adb8
- (void)fetchFinishedDatesByAssetIDForYear:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ad24
- (void)fetchAssetDetailsForUnsyncedTastes:(CDUnknownBlockType)arg1;	// IMP=0x000000010001ac98
- (void)setAssetDetails:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001abf0
- (void)setAssetDetail:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ab48
- (void)getAssetDetailChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001aaa0
- (void)fetchAssetDetailsIncludingDeleted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001aa0c
- (void)deleteAssetDetailForAssetID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001a964
- (void)currentAssetDetailCloudSyncVersions:(CDUnknownBlockType)arg1;	// IMP=0x000000010001a8d8
- (void)resolvedAssetDetailForAssetID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001a830
- (void)assetDetailsForAssetIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001a788
- (void)assetDetailForAssetID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001a6e0
- (void)signalFetchChangesTransaction:(id)arg1;	// IMP=0x000000010001a5f4
- (void)deleteCloudDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001a4c4
- (void)dissociateCloudDataFromSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001a424
- (void)setCloudSyncPaused:(_Bool)arg1;	// IMP=0x000000010001a31c
- (void)setEnableSecureUserDataCloudSync:(_Bool)arg1;	// IMP=0x000000010001a2d4
- (void)setEnableCloudSync:(_Bool)arg1 enableReadingNowSync:(_Bool)arg2;	// IMP=0x000000010001a27c
- (void)setEnableCollectionSync:(_Bool)arg1;	// IMP=0x000000010001a234
- (void)tccAccessChanged:(id)arg1;	// IMP=0x000000010001a228
- (void)enableSyncChanged:(id)arg1;	// IMP=0x000000010001a21c
- (void)_updateEnableSync;	// IMP=0x0000000100019f58
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000100019ea4
- (void)_BCCloudCollectionMemberManagerChanged:(id)arg1;	// IMP=0x0000000100019db8
- (void)_BCCloudReadingNowDetailManagerChanged:(id)arg1;	// IMP=0x0000000100019ccc
- (void)dealloc;	// IMP=0x0000000100019bb8
- (id)init;	// IMP=0x00000001000198a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

