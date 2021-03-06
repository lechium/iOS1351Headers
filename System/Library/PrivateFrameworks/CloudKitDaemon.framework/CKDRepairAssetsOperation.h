/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKUploadRequestConfiguration, NSDictionary, NSArray, CKDOperation, NSMutableDictionary, NSSet;

@interface CKDRepairAssetsOperation : CKDDatabaseOperation {

	/*^block*/id _assetOrPackageRepairedBlock;
	CKUploadRequestConfiguration* _uploadRequestConfiguration;
	NSDictionary* _UUIDToAssetOrPackage;
	NSDictionary* _assetOrPackageUUIDToMetadata;
	NSArray* _unavailableAssetsAndPackages;
	CKDOperation* _fetchOperation;
	CKDOperation* _uploadOperation;
	CKDOperation* _updateOperation;
	NSMutableDictionary* _assetOrPackageUUIDToOriginalRecord;
	NSDictionary* _assetOrPackageUUIDToUploadError;
	NSSet* _uploadedAssetOrPackageUUIDs;

}

@property (nonatomic,retain) CKUploadRequestConfiguration * uploadRequestConfiguration;              //@synthesize uploadRequestConfiguration=_uploadRequestConfiguration - In the implementation block
@property (nonatomic,retain) NSDictionary * UUIDToAssetOrPackage;                                    //@synthesize UUIDToAssetOrPackage=_UUIDToAssetOrPackage - In the implementation block
@property (nonatomic,retain) NSDictionary * assetOrPackageUUIDToMetadata;                            //@synthesize assetOrPackageUUIDToMetadata=_assetOrPackageUUIDToMetadata - In the implementation block
@property (nonatomic,retain) NSArray * unavailableAssetsAndPackages;                                 //@synthesize unavailableAssetsAndPackages=_unavailableAssetsAndPackages - In the implementation block
@property (nonatomic,retain) CKDOperation * fetchOperation;                                          //@synthesize fetchOperation=_fetchOperation - In the implementation block
@property (nonatomic,retain) CKDOperation * uploadOperation;                                         //@synthesize uploadOperation=_uploadOperation - In the implementation block
@property (nonatomic,retain) CKDOperation * updateOperation;                                         //@synthesize updateOperation=_updateOperation - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetOrPackageUUIDToOriginalRecord;               //@synthesize assetOrPackageUUIDToOriginalRecord=_assetOrPackageUUIDToOriginalRecord - In the implementation block
@property (nonatomic,retain) NSDictionary * assetOrPackageUUIDToUploadError;                         //@synthesize assetOrPackageUUIDToUploadError=_assetOrPackageUUIDToUploadError - In the implementation block
@property (nonatomic,retain) NSSet * uploadedAssetOrPackageUUIDs;                                    //@synthesize uploadedAssetOrPackageUUIDs=_uploadedAssetOrPackageUUIDs - In the implementation block
@property (nonatomic,copy) id assetOrPackageRepairedBlock;                                           //@synthesize assetOrPackageRepairedBlock=_assetOrPackageRepairedBlock - In the implementation block
-(void)main;
-(CKUploadRequestConfiguration *)uploadRequestConfiguration;
-(void)setUploadRequestConfiguration:(CKUploadRequestConfiguration *)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(CKDOperation *)updateOperation;
-(void)setUpdateOperation:(CKDOperation *)arg1 ;
-(CKDOperation *)fetchOperation;
-(void)setFetchOperation:(CKDOperation *)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setAssetOrPackageRepairedBlock:(id)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(BOOL)makeStateTransition;
-(id)repairContext;
-(void)_fetchAssetMetadata;
-(void)_uploadAssetsModify;
-(void)_updateMissingAssetServerStatus;
-(NSDictionary *)assetOrPackageUUIDToMetadata;
-(NSMutableDictionary *)assetOrPackageUUIDToOriginalRecord;
-(NSDictionary *)UUIDToAssetOrPackage;
-(id)assetOrPackageForMetadata:(id)arg1 inRecord:(id)arg2 ;
-(id)assetOrPackageRepairedBlock;
-(void)setAssetOrPackageUUIDToUploadError:(NSDictionary *)arg1 ;
-(void)setUploadedAssetOrPackageUUIDs:(NSSet *)arg1 ;
-(void)setUploadOperation:(CKDOperation *)arg1 ;
-(NSSet *)uploadedAssetOrPackageUUIDs;
-(NSDictionary *)assetOrPackageUUIDToUploadError;
-(NSArray *)unavailableAssetsAndPackages;
-(void)setUUIDToAssetOrPackage:(NSDictionary *)arg1 ;
-(void)setAssetOrPackageUUIDToMetadata:(NSDictionary *)arg1 ;
-(void)setUnavailableAssetsAndPackages:(NSArray *)arg1 ;
-(CKDOperation *)uploadOperation;
-(void)setAssetOrPackageUUIDToOriginalRecord:(NSMutableDictionary *)arg1 ;
@end

