//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BDSCloudKitSupportSignOutDeleteWithoutInstance-Protocol.h"
#import "BDSCloudKitSupportSignOutDissociate-Protocol.h"

@class BCCloudChangeTokenController, BCCloudDataSource, NSManagedObjectModel;
@protocol BCCloudCollectionDetailManager, BCCloudCollectionMemberManager;

@interface BCCloudCollectionsManager : NSObject <BDSCloudKitSupportSignOutDissociate, BDSCloudKitSupportSignOutDeleteWithoutInstance>
{
    _Bool _proxyMode;	// 8 = 0x8
    NSManagedObjectModel *_objectModel;	// 16 = 0x10
    BCCloudDataSource *_collectionDataSource;	// 24 = 0x18
    NSObject<BCCloudCollectionDetailManager> *_collectionDetailManager;	// 32 = 0x20
    NSObject<BCCloudCollectionMemberManager> *_collectionMemberManager;	// 40 = 0x28
    BCCloudChangeTokenController *_changeTokenController;	// 48 = 0x30
}

+ (void)deleteCloudDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004e4dc
+ (id)sharedService;	// IMP=0x000000010004decc
+ (id)sharedManager;	// IMP=0x000000010004deb0
- (void).cxx_destruct;	// IMP=0x000000010004e55c
@property(nonatomic) _Bool proxyMode; // @synthesize proxyMode=_proxyMode;
@property(retain, nonatomic) BCCloudChangeTokenController *changeTokenController; // @synthesize changeTokenController=_changeTokenController;
@property(retain, nonatomic) NSObject<BCCloudCollectionMemberManager> *collectionMemberManager; // @synthesize collectionMemberManager=_collectionMemberManager;
@property(retain, nonatomic) NSObject<BCCloudCollectionDetailManager> *collectionDetailManager; // @synthesize collectionDetailManager=_collectionDetailManager;
@property(retain, nonatomic) BCCloudDataSource *collectionDataSource; // @synthesize collectionDataSource=_collectionDataSource;
@property(retain, nonatomic) NSManagedObjectModel *objectModel; // @synthesize objectModel=_objectModel;
- (void)dissociateCloudDataFromSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004e3d0
@property(nonatomic) _Bool enableCloudSync; // @dynamic enableCloudSync;
- (id)collectionMemberManagerInstance;	// IMP=0x000000010004e290
- (id)collectionDetailManagerInstance;	// IMP=0x000000010004e224
- (id)initService;	// IMP=0x000000010004df44

@end

