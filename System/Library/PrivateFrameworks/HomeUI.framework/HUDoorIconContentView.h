/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUPrimaryStateIconContentView.h>

@class HUShapeLayerView, HUVisualEffectContainerView, UIVisualEffectView, UIViewPropertyAnimator;

@interface HUDoorIconContentView : HUPrimaryStateIconContentView {

	HUShapeLayerView* _frameView;
	HUVisualEffectContainerView* _frameContainerView;
	HUShapeLayerView* _doorView;
	UIVisualEffectView* _doorContainerView;
	UIViewPropertyAnimator* _doorAnimator;

}

@property (nonatomic,retain) HUShapeLayerView * frameView;                                  //@synthesize frameView=_frameView - In the implementation block
@property (nonatomic,retain) HUVisualEffectContainerView * frameContainerView;              //@synthesize frameContainerView=_frameContainerView - In the implementation block
@property (nonatomic,retain) HUShapeLayerView * doorView;                                   //@synthesize doorView=_doorView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * doorContainerView;                        //@synthesize doorContainerView=_doorContainerView - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * doorAnimator;                         //@synthesize doorAnimator=_doorAnimator - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(HUShapeLayerView *)frameView;
-(void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(BOOL)arg3 ;
-(void)updateColorsForDisplayStyle:(unsigned long long)arg1 ;
-(BOOL)wantsManagedVibrancyEffect;
-(id)managedVisualEffectViews;
-(void)setFrameContainerView:(HUVisualEffectContainerView *)arg1 ;
-(HUVisualEffectContainerView *)frameContainerView;
-(void)setFrameView:(HUShapeLayerView *)arg1 ;
-(void)setDoorContainerView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)doorContainerView;
-(void)setDoorView:(HUShapeLayerView *)arg1 ;
-(HUShapeLayerView *)doorView;
-(void)setDoorAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UIViewPropertyAnimator *)doorAnimator;
-(CATransform3D)doorTransformForAngle:(double)arg1 ;
@end

