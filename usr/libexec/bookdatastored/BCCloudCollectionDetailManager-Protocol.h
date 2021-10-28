//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BDSCloudKitSupportSignOutDissociate-Protocol.h"
#import "NSObject-Protocol.h"

@class BCMutableCloudSyncVersions, BCMutableCollectionDetail, NSArray, NSDictionary, NSString;

@protocol BCCloudCollectionDetailManager <NSObject, BDSCloudKitSupportSignOutDissociate>
- (void)getCollectionDetailChangesSince:(BCMutableCloudSyncVersions *)arg1 completion:(void (^)(NSSet *, NSSet *, BCMutableCloudSyncVersions *, NSError *, _Bool))arg2;
- (void)fetchCollectionDetailsIncludingDeleted:(_Bool)arg1 completion:(void (^)(NSArray *, BCMutableCloudSyncVersions *, NSError *))arg2;
- (void)collectionDetailsForCollectionIDs:(NSArray *)arg1 completion:(void (^)(NSArray *, BCMutableCloudSyncVersions *, NSError *))arg2;
- (void)collectionDetailForCollectionID:(NSString *)arg1 completion:(void (^)(BCMutableCollectionDetail *, NSError *))arg2;
- (void)deleteCollectionDetailForCollectionIDs:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)deleteCollectionDetailForCollectionID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)setCollectionDetails:(NSDictionary *)arg1 completion:(void (^)(_Bool, _Bool, NSError *))arg2;
- (void)setCollectionDetail:(BCMutableCollectionDetail *)arg1 completion:(void (^)(_Bool, _Bool, NSError *))arg2;
- (void)currentCollectionDetailCloudSyncVersions:(void (^)(BCMutableCloudSyncVersions *))arg1;
@end
