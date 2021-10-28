/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_CNBufferingStrategy.h>

@protocol CNScheduler, CNCancelable;
@class NSString;

@interface _CNTemporalBufferingStrategy : NSObject <_CNBufferingStrategy> {

	double _interval;
	id<CNScheduler> _scheduler;
	id<CNCancelable> _sendToken;

}

@property (retain) id<CNCancelable> sendToken;                      //@synthesize sendToken=_sendToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)buffer:(id)arg1 didReceiveResults:(id)arg2 forObserver:(id)arg3 ;
-(void)bufferDidSendResults:(id)arg1 ;
-(id)initWithTimeInterval:(double)arg1 scheduler:(id)arg2 ;
-(id<CNCancelable>)sendToken;
-(void)setSendToken:(id<CNCancelable>)arg1 ;
@end
