/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIStatusBarAnimationParameters.h>

@interface UIStatusBarHideAnimationParameters : UIStatusBarAnimationParameters {

	int _hideAnimation;
	double _additionalSlideHeight;

}

@property (assign,nonatomic) int hideAnimation;                         //@synthesize hideAnimation=_hideAnimation - In the implementation block
@property (assign,nonatomic) double additionalSlideHeight;              //@synthesize additionalSlideHeight=_additionalSlideHeight - In the implementation block
-(id)initWithDefaultParameters;
-(int)hideAnimation;
-(void)setHideAnimation:(int)arg1 ;
-(BOOL)shouldAnimate;
-(double)additionalSlideHeight;
-(void)setAdditionalSlideHeight:(double)arg1 ;
@end

