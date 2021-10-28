/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PXBasicTileAnimationOptions;

@interface _PXWidgetCompositionUIViewElementTileTransitionContext : NSObject {

	PXBasicTileAnimationOptions* _animationOptions;
	/*^block*/id _alongsideAnimation;
	/*^block*/id _alongsideAnimationCompletion;

}

@property (nonatomic,retain) PXBasicTileAnimationOptions * animationOptions;              //@synthesize animationOptions=_animationOptions - In the implementation block
@property (nonatomic,copy) id alongsideAnimation;                                         //@synthesize alongsideAnimation=_alongsideAnimation - In the implementation block
@property (nonatomic,copy) id alongsideAnimationCompletion;                               //@synthesize alongsideAnimationCompletion=_alongsideAnimationCompletion - In the implementation block
-(PXBasicTileAnimationOptions *)animationOptions;
-(void)setAnimationOptions:(PXBasicTileAnimationOptions *)arg1 ;
-(void)setAlongsideAnimationCompletion:(id)arg1 ;
-(id)alongsideAnimationCompletion;
-(void)setAlongsideAnimation:(id)arg1 ;
-(id)alongsideAnimation;
@end
