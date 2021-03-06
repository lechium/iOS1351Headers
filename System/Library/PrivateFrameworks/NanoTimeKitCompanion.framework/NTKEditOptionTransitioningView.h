/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NTKEditOptionTransitioningViewDelegate;
@class UIView, UIImageView, NTKEditOption;

@interface NTKEditOptionTransitioningView : UIView {

	UIView* _transitionContainer;
	UIView* _transitionDimmingView;
	double _breathScaleModifier;
	double _rubberBandScaleModifier;
	UIImageView* _toTransitionImageView;
	UIImageView* _fromTransitionImageView;
	id<NTKEditOptionTransitioningViewDelegate> _delegate;
	NTKEditOption* _toEditOption;
	NTKEditOption* _fromEditOption;

}

@property (nonatomic,retain) NTKEditOption * toEditOption;                                            //@synthesize toEditOption=_toEditOption - In the implementation block
@property (nonatomic,retain) NTKEditOption * fromEditOption;                                          //@synthesize fromEditOption=_fromEditOption - In the implementation block
@property (assign,nonatomic,__weak) id<NTKEditOptionTransitioningViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NTKEditOptionTransitioningViewDelegate>)delegate;
-(void)setDelegate:(id<NTKEditOptionTransitioningViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(void)setOption:(id)arg1 ;
-(void)_updateUnifiedScaleTransform;
-(void)setFromEditOption:(NTKEditOption *)arg1 ;
-(void)setToEditOption:(NTKEditOption *)arg1 ;
-(void)_resetTransitionImageView:(id)arg1 ;
-(void)setBreatheFraction:(double)arg1 ;
-(void)setRubberBandingFraction:(double)arg1 ;
-(void)setDimmingAlpha:(double)arg1 ;
-(void)setTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 ;
-(NTKEditOption *)toEditOption;
-(NTKEditOption *)fromEditOption;
@end

