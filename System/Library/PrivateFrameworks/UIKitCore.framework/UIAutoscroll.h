/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIAutoscrollContainer;
#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, NSTimer;

@interface UIAutoscroll : NSObject {

	id m_target;
	CGPoint m_point;
	UIView*<UIAutoscrollContainer> m_scrollContainer;
	int m_directions;
	double m_repeatInterval;
	NSTimer* m_timer;
	unsigned long long m_count;
	BOOL m_active;
	BOOL m_disabled;
	id _target;

}

@property (assign,nonatomic,__weak) id target;                                            //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) UIView*<UIAutoscrollContainer> scrollContainer; 
@property (assign,nonatomic) CGPoint point; 
@property (assign,nonatomic) int directions; 
@property (assign,nonatomic) double repeatInterval; 
@property (assign,nonatomic) unsigned long long count; 
@property (assign,nonatomic) BOOL active; 
@property (assign,nonatomic) BOOL disabled; 
-(void)dealloc;
-(unsigned long long)count;
-(void)invalidate;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setCount:(unsigned long long)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(BOOL)disabled;
-(double)repeatInterval;
-(BOOL)active;
-(void)setDisabled:(BOOL)arg1 ;
-(void)timerFired:(id)arg1 ;
-(void)setRepeatInterval:(double)arg1 ;
-(UIView*<UIAutoscrollContainer>)scrollContainer;
-(int)directions;
-(BOOL)startAutoscroll:(id)arg1 scrollContainer:(id)arg2 point:(CGPoint)arg3 directions:(int)arg4 repeatInterval:(double)arg5 ;
-(void)setScrollContainer:(UIView*<UIAutoscrollContainer>)arg1 ;
-(void)setDirections:(int)arg1 ;
@end

