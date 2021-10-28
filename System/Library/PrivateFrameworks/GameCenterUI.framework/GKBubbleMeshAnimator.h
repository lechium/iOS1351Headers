/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, CADisplayLink;

@interface GKBubbleMeshAnimator : NSObject {

	NSMutableSet* _animatingViews;
	CADisplayLink* _displayLink;
	double _lastUpdateTime;

}

@property (nonatomic,retain) NSMutableSet * animatingViews;              //@synthesize animatingViews=_animatingViews - In the implementation block
@property (assign,nonatomic) CADisplayLink * displayLink;                //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) double lastUpdateTime;                      //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
+(id)sharedAnimator;
-(id)init;
-(void)dealloc;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(double)lastUpdateTime;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)update:(id)arg1 ;
-(void)setLastUpdateTime:(double)arg1 ;
-(void)addAnimatingBubbleView:(id)arg1 ;
-(void)removeAnimatingBubbleView:(id)arg1 ;
-(NSMutableSet *)animatingViews;
-(void)setAnimatingViews:(NSMutableSet *)arg1 ;
@end
