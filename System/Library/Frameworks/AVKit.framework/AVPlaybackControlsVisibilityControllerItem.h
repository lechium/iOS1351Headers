/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:27 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIView;

@interface AVPlaybackControlsVisibilityControllerItem : NSObject {

	BOOL _hidden;
	BOOL _viewLoaded;
	double _alpha;
	UIView* _view;

}

@property (assign,getter=isViewLoaded,nonatomic) BOOL viewLoaded;              //@synthesize viewLoaded=_viewLoaded - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                      //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) double alpha;                                     //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic,__weak) UIView * view;                             //@synthesize view=_view - In the implementation block
-(id)init;
-(BOOL)isHidden;
-(double)alpha;
-(UIView *)view;
-(void)setHidden:(BOOL)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(BOOL)isViewLoaded;
-(BOOL)wantsAnimatedTransitionToHidden:(BOOL)arg1 alpha:(double)arg2 ;
-(BOOL)needsTransitionToHidden:(BOOL)arg1 alpha:(double)arg2 ;
-(void)setViewLoaded:(BOOL)arg1 ;
@end

