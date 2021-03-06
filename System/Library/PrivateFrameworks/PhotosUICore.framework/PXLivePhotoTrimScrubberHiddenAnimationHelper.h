/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PXLivePhotoTrimScrubberHiddenAnimationHelper : NSObject {

	long long _hideRequestCounter;
	BOOL _hidden;
	/*^block*/id _animationBlock;

}

@property (nonatomic,copy,readonly) id animationBlock;              //@synthesize animationBlock=_animationBlock - In the implementation block
@property (assign,nonatomic) BOOL hidden;                           //@synthesize hidden=_hidden - In the implementation block
-(void)setHidden:(BOOL)arg1 ;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)animationBlock;
-(BOOL)hidden;
-(id)initWithAnimationBlock:(/*^block*/id)arg1 ;
-(void)_setHidden:(BOOL)arg1 animated:(BOOL)arg2 afterDelay:(double)arg3 ;
-(void)_setHidden:(BOOL)arg1 animated:(BOOL)arg2 withRequstID:(long long)arg3 ;
@end

