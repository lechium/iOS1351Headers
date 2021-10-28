//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BCCloudAssetReviewManager-Protocol.h"
#import "BCCloudDataSyncManagerDelegate-Protocol.h"

@class BCCloudDataManager, BCCloudDataSource, BCCloudDataSyncManager, BCCloudKitController, NSString;

@interface BCCloudAssetReviewManager : NSObject <BCCloudDataSyncManagerDelegate, BCCloudAssetReviewManager>
{
    _Bool _enableCloudSync;	// 8 = 0x8
    BCCloudKitController *_cloudKitController;	// 16 = 0x10
    BCCloudDataSource *_assetReviewDataSource;	// 24 = 0x18
    BCCloudDataSyncManager *_syncManager;	// 32 = 0x20
    BCCloudDataManager *_dataManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100042b50
@property(retain, nonatomic) BCCloudDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) BCCloudDataSyncManager *syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) BCCloudDataSource *assetReviewDataSource; // @synthesize assetReviewDataSource=_assetReviewDataSource;
@property(nonatomic) __weak BCCloudKitController *cloudKitController; // @synthesize cloudKitController=_cloudKitController;
@property(nonatomic) _Bool enableCloudSync; // @synthesize enableCloudSync=_enableCloudSync;
- (void)getAssetReviewChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100042a4c
- (void)fetchAssetReviewsForUserID:(id)arg1 includingDeleted:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004296c
- (void)assetReviewsForAssetReviewIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000428a4
- (void)assetReviewForAssetReviewID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000427d8
- (void)deleteAssetReviewForAssetReviewIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100042710
- (void)deleteAssetReviewForAssetReviewID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100042648
- (void)updateSyncGenerationFromCloudData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100042544
- (void)removeAssetReviewsForSaltedHashedRecordIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004243c
- (void)setAssetReviews:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100042338
- (void)setAssetReview:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004223c
- (void)dissociateCloudDataFromSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000421d0
- (id)entityName;	// IMP=0x0000000100042024
- (void)syncManager:(id)arg1 failedRecordIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100041f0c
- (void)syncManager:(id)arg1 resolveConflictsForRecords:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100041df0
- (void)syncManager:(id)arg1 updateSyncGenerationFromCloudData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100041be0
- (void)syncManager:(id)arg1 removeCloudDataForIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000419d8
- (void)signalSyncToCKForSyncManager:(id)arg1;	// IMP=0x00000001000418f4
- (void)syncManager:(id)arg1 startSyncToCKWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004186c
- (id)initWithCloudDataSource:(id)arg1 cloudKitController:(id)arg2;	// IMP=0x00000001000416c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
