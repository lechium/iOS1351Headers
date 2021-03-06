/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SequenceEntry : NSObject {

	/*^block*/id _handler;
	BOOL _running;
	BOOL _detached;

}

@property (copy) id handler;                   //@synthesize handler=_handler - In the implementation block
@property (assign) BOOL running;               //@synthesize running=_running - In the implementation block
@property (assign) BOOL detached;              //@synthesize detached=_detached - In the implementation block
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(BOOL)running;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(BOOL)detached;
-(void)setDetached:(BOOL)arg1 ;
@end

