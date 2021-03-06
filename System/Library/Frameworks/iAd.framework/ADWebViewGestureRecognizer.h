/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/iAd.framework/iAd
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iAd/iAd-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@interface ADWebViewGestureRecognizer : UIGestureRecognizer {

	BOOL _shouldBlockNavigation;
	BOOL _pointIsInsideView;
	long long _lastTrackedTouch;
	double _mostRecentTapTimestamp;
	CGPoint _mostRecentTapLocation;
	CGPoint _location;

}

@property (assign,nonatomic) long long lastTrackedTouch;                   //@synthesize lastTrackedTouch=_lastTrackedTouch - In the implementation block
@property (assign,nonatomic) double mostRecentTapTimestamp;                //@synthesize mostRecentTapTimestamp=_mostRecentTapTimestamp - In the implementation block
@property (nonatomic,readonly) CGPoint location;                           //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL pointIsInsideView;                     //@synthesize pointIsInsideView=_pointIsInsideView - In the implementation block
@property (nonatomic,readonly) BOOL shouldBlockNavigation;                 //@synthesize shouldBlockNavigation=_shouldBlockNavigation - In the implementation block
@property (nonatomic,readonly) CGPoint mostRecentTapLocation;              //@synthesize mostRecentTapLocation=_mostRecentTapLocation - In the implementation block
@property (nonatomic,readonly) BOOL wasViewTappedRecently; 
-(void)reset;
-(CGPoint)location;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)wasViewTappedRecently;
-(CGPoint)mostRecentTapLocation;
-(BOOL)shouldBlockNavigation;
-(void)setLastTrackedTouch:(long long)arg1 ;
-(void)setMostRecentTapTimestamp:(double)arg1 ;
-(long long)lastTrackedTouch;
-(double)mostRecentTapTimestamp;
-(BOOL)pointIsInsideView;
@end

