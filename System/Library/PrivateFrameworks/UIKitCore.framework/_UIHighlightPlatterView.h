/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UITargetedPreview, _UIPortalView, UIView, _UIPlatterSoftShadowView;

@interface _UIHighlightPlatterView : UIView {

	double _shadowAlpha;
	double _backgroundAlpha;
	UITargetedPreview* _targetedPreview;
	_UIPortalView* _portalView;
	UIView* _backgroundView;
	_UIPlatterSoftShadowView* _shadowView;

}

@property (nonatomic,retain) UITargetedPreview * targetedPreview;                //@synthesize targetedPreview=_targetedPreview - In the implementation block
@property (nonatomic,retain) _UIPortalView * portalView;                         //@synthesize portalView=_portalView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                            //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) _UIPlatterSoftShadowView * shadowView;              //@synthesize shadowView=_shadowView - In the implementation block
@property (assign,nonatomic) double shadowAlpha;                                 //@synthesize shadowAlpha=_shadowAlpha - In the implementation block
@property (assign,nonatomic) double backgroundAlpha;                             //@synthesize backgroundAlpha=_backgroundAlpha - In the implementation block
-(UIView *)backgroundView;
-(double)backgroundAlpha;
-(void)setBackgroundAlpha:(double)arg1 ;
-(void)setShadowAlpha:(double)arg1 ;
-(double)shadowAlpha;
-(void)setBackgroundView:(UIView *)arg1 ;
-(_UIPlatterSoftShadowView *)shadowView;
-(void)setShadowView:(_UIPlatterSoftShadowView *)arg1 ;
-(UITargetedPreview *)targetedPreview;
-(void)setTargetedPreview:(UITargetedPreview *)arg1 ;
-(_UIPortalView *)portalView;
-(void)setPortalView:(_UIPortalView *)arg1 ;
-(id)initWithTargetedPreview:(id)arg1 ;
@end

