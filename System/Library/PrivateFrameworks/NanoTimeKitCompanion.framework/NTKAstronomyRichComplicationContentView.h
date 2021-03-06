/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKAstronomyVistaViewObserver.h>
#import <libobjc.A.dylib/NTKTimeTravel.h>

@class NTKAstronomyVistaView, NTKAstronomyLocationDot, CLKDevice, NSDate, NTKDelayedBlock, CLLocation, CLKUIQuadView;

@interface NTKAstronomyRichComplicationContentView : UIView <NTKAstronomyVistaViewObserver, NTKTimeTravel> {

	NTKAstronomyVistaView* _astronomyVistaView;
	NTKAstronomyLocationDot* _locationDot;
	CLKDevice* _device;
	NSDate* _timelineDate;
	NSDate* _timeTravelDate;
	unsigned _isPaused : 1;
	unsigned _isAnimating : 1;
	unsigned _isRenderOneFrame : 1;
	NTKDelayedBlock* _stopAnimationDelayedBlock;
	CLLocation* _currentLocation;

}

@property (nonatomic,readonly) CLKUIQuadView * quadView; 
-(void)layoutSubviews;
-(void)_stopAnimating;
-(void)_startAnimating;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2 ;
-(CLKUIQuadView *)quadView;
-(void)prepareWristRaiseAnimation;
-(BOOL)_shouldAnimateWithTemplateUpdateReason:(long long)arg1 ;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)handleWristRaiseScreenWake;
-(void)handleOrdinaryScreenWake;
-(void)astronomyVistaViewContentsAnimationFinished:(id)arg1 ;
-(void)astronomyVistaViewWillDisplay:(id)arg1 forTime:(double)arg2 ;
-(id)initForDevice:(id)arg1 diameter:(double)arg2 ;
-(void)applyPausedUpdate:(BOOL)arg1 ;
-(void)handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)_showLocationDot;
-(void)_hideLocationDot;
@end

