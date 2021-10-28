/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PXResultRecord, PHFetchResultChangeDetails;

@interface PXResultRecordChangeDetails : NSObject {

	PXResultRecord* _resultRecordBeforeChanges;
	PXResultRecord* _resultRecordAfterChanges;
	PHFetchResultChangeDetails* _exposedFetchResultChangeDetails;
	PHFetchResultChangeDetails* _keyAssetsFetchResultChangeDetails;

}

@property (nonatomic,readonly) PXResultRecord * resultRecordBeforeChanges;                                  //@synthesize resultRecordBeforeChanges=_resultRecordBeforeChanges - In the implementation block
@property (nonatomic,readonly) PXResultRecord * resultRecordAfterChanges;                                   //@synthesize resultRecordAfterChanges=_resultRecordAfterChanges - In the implementation block
@property (nonatomic,readonly) PHFetchResultChangeDetails * exposedFetchResultChangeDetails;                //@synthesize exposedFetchResultChangeDetails=_exposedFetchResultChangeDetails - In the implementation block
@property (nonatomic,readonly) PHFetchResultChangeDetails * keyAssetsFetchResultChangeDetails;              //@synthesize keyAssetsFetchResultChangeDetails=_keyAssetsFetchResultChangeDetails - In the implementation block
+(id)resultRecordChangeDetailsFor:(id)arg1 withChange:(id)arg2 ;
-(id)description;
-(PXResultRecord *)resultRecordAfterChanges;
-(PHFetchResultChangeDetails *)keyAssetsFetchResultChangeDetails;
-(PHFetchResultChangeDetails *)exposedFetchResultChangeDetails;
-(id)initWithResultRecordBeforeChanges:(id)arg1 resultRecordAfterChanges:(id)arg2 exposedFetchResultChangeDetails:(id)arg3 keyAssetsFetchResultChangeDetails:(id)arg4 ;
-(PXResultRecord *)resultRecordBeforeChanges;
@end
