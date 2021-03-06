/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UILongPressGestureRecognizer.h>

@class CKActionMenuGestureVelocitySample;

@interface CKActionMenuGestureRecognizer : UILongPressGestureRecognizer {

	CKActionMenuGestureVelocitySample* _velocitySample;
	CKActionMenuGestureVelocitySample* _previousVelocitySample;
	double _lastTouchTime;
	CGPoint _lastScreenLocation;

}
+(id)actionMenuGestureRecognizer;
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setAllowableMovement:(double)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(CGPoint)_convertVelocitySample:(id)arg1 fromScreenCoordinatesToView:(id)arg2 ;
@end

