/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuartzCore/CALayer.h>

@class AVPlayerLayer;

@interface NewsFeed.PlayerLayer : CALayer {

	 stillImageLayer;
	 playerLayer;
	 looper;
	 readyToDisplayObservation;
	 statusObservation;
	 nonAnimatingDelegate;

}

@property (readonly,nonatomic) AVPlayerLayer * playerLayer; 
+(id)defaultActionForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
-(AVPlayerLayer *)playerLayer;
-(void)applicationWillEnterForeground;
-(void)applicationDidEnterBackground;
-(void)reduceMotionStatusDidChange;
@end

