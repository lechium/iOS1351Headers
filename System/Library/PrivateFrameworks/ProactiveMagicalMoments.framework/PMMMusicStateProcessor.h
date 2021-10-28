/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, PMMMusicContainer;

@interface PMMMusicStateProcessor : NSObject {

	BOOL _inCar;
	NSObject*<OS_dispatch_queue> _queue;
	PMMMusicContainer* _lastPlayed;
	PMMMusicContainer* _lastPlayedInCar;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL inCar;                                       //@synthesize inCar=_inCar - In the implementation block
@property (nonatomic,retain) PMMMusicContainer * lastPlayed;                   //@synthesize lastPlayed=_lastPlayed - In the implementation block
@property (nonatomic,retain) PMMMusicContainer * lastPlayedInCar;              //@synthesize lastPlayedInCar=_lastPlayedInCar - In the implementation block
+(id)shared;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)_init;
-(void)_handlePause;
-(void)_handlePlay;
-(void)_persist;
-(void)_initStarkConnect;
-(void)_initStarkDisconnect;
-(void)_initNowPlayingPause;
-(void)_initNowPlayingPlay;
-(void)lastPlayedWithHandler:(/*^block*/id)arg1 ;
-(void)lastPlayedInCarWithHandler:(/*^block*/id)arg1 ;
-(BOOL)inCar;
-(void)setInCar:(BOOL)arg1 ;
-(PMMMusicContainer *)lastPlayed;
-(void)setLastPlayed:(PMMMusicContainer *)arg1 ;
-(PMMMusicContainer *)lastPlayedInCar;
-(void)setLastPlayedInCar:(PMMMusicContainer *)arg1 ;
@end
