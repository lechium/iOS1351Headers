/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUViewModel.h>

@protocol PUDisplayAsset;
@class PUOperationStatus, NSProgress, PUAssetSharedViewModelChange;

@interface PUAssetSharedViewModel : PUViewModel {

	id<PUDisplayAsset> _asset;
	PUOperationStatus* _loadingStatus;
	NSProgress* _saveProgress;
	long long _saveState;
	long long _flippingFullSizeRenderState;

}

@property (nonatomic,readonly) PUAssetSharedViewModelChange * currentChange; 
@property (nonatomic,readonly) id<PUDisplayAsset> asset;                                  //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) PUOperationStatus * loadingStatus;                           //@synthesize loadingStatus=_loadingStatus - In the implementation block
@property (nonatomic,retain) NSProgress * saveProgress;                                   //@synthesize saveProgress=_saveProgress - In the implementation block
@property (assign,nonatomic) long long saveState;                                         //@synthesize saveState=_saveState - In the implementation block
@property (assign,nonatomic) long long flippingFullSizeRenderState;                       //@synthesize flippingFullSizeRenderState=_flippingFullSizeRenderState - In the implementation block
-(id)init;
-(id<PUDisplayAsset>)asset;
-(id)initWithAsset:(id)arg1 ;
-(void)registerChangeObserver:(id)arg1 ;
-(void)unregisterChangeObserver:(id)arg1 ;
-(long long)saveState;
-(PUOperationStatus *)loadingStatus;
-(id)newViewModelChange;
-(PUAssetSharedViewModelChange *)currentChange;
-(void)setLoadingStatus:(PUOperationStatus *)arg1 ;
-(void)setSaveProgress:(NSProgress *)arg1 ;
-(void)setSaveState:(long long)arg1 ;
-(void)setFlippingFullSizeRenderState:(long long)arg1 ;
-(NSProgress *)saveProgress;
-(long long)flippingFullSizeRenderState;
@end
