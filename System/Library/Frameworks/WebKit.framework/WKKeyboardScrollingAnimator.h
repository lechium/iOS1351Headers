/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:47 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WKKeyboardScrollableInternal;
#import <WebKit/WebKit-Structs.h>
@interface WKKeyboardScrollingAnimator : NSObject {

	id<WKKeyboardScrollableInternal> _scrollable;
	RetainPtr<CADisplayLink>* _displayLink;
	Optional<WebKit::KeyboardScroll> _currentScroll;
	BOOL _scrollTriggeringKeyIsPressed;
	FloatSize _velocity;
	FloatPoint _idealPosition;
	FloatPoint _currentPosition;
	FloatPoint _idealPositionForMinimumTravel;

}
-(id)init;
-(void)invalidate;
-(const KeyboardScrollParameters*)parameters;
-(void)handleKeyEvent:(id)arg1 ;
-(void)displayLinkFired:(id)arg1 ;
-(void)stopAnimatedScroll;
-(void)stopDisplayLink;
-(Optional<WebKit::KeyboardScroll>)keyboardScrollForEvent:(id)arg1 ;
-(void)startDisplayLinkIfNeeded;
-(id)initWithScrollable:(id)arg1 ;
-(BOOL)beginWithEvent:(id)arg1 ;
-(BOOL)scrollTriggeringKeyIsPressed;
-(void)willStartInteractiveScroll;
@end

