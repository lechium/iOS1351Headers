/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXCuratedLibraryActionPerformer.h>

@class PXGLayout, PXGSpriteReference;

@interface _PXCuratedLibraryNavigateToNextZoomLevelActionPerformer : PXCuratedLibraryActionPerformer {

	PXGLayout* _layout;
	PXGSpriteReference* _hitSpriteReference;

}

@property (nonatomic,readonly) PXGLayout * layout;                                   //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) PXGSpriteReference * hitSpriteReference;              //@synthesize hitSpriteReference=_hitSpriteReference - In the implementation block
-(PXGLayout *)layout;
-(void)performUserInteractionTask;
-(id)initWithActionType:(id)arg1 viewModel:(id)arg2 layout:(id)arg3 hitSpriteReference:(id)arg4 ;
-(id)initWithActionType:(id)arg1 viewModel:(id)arg2 ;
-(PXGSpriteReference *)hitSpriteReference;
@end

