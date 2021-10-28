/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXGHitTestResult.h>

@class PXAssetReference, PXAssetCollectionReference;

@interface PXCuratedLibraryHitTestResult : PXGHitTestResult {

	long long _control;
	PXAssetReference* _assetReference;
	PXAssetCollectionReference* _assetCollectionReference;

}

@property (nonatomic,readonly) long long control;                                                  //@synthesize control=_control - In the implementation block
@property (nonatomic,readonly) PXAssetReference * assetReference;                                  //@synthesize assetReference=_assetReference - In the implementation block
@property (nonatomic,readonly) PXAssetCollectionReference * assetCollectionReference;              //@synthesize assetCollectionReference=_assetCollectionReference - In the implementation block
-(PXAssetReference *)assetReference;
-(long long)control;
-(PXAssetCollectionReference *)assetCollectionReference;
-(id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3 ;
-(id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3 assetReference:(id)arg4 ;
-(id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3 assetCollectionReference:(id)arg4 ;
-(id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3 assetReference:(id)arg4 assetCollectionReference:(id)arg5 ;
-(id)initWithSpriteReference:(id)arg1 layout:(id)arg2 identifier:(id)arg3 userData:(id)arg4 ;
@end
