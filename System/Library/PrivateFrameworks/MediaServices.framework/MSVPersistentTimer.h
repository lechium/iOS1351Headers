/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PCPersistentTimer, NSString, NSDate;

@interface MSVPersistentTimer : NSObject {

	PCPersistentTimer* _timer;
	NSString* _name;
	/*^block*/id _block;
	NSDate* _startDate;
	double _interval;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(void)invalidateWithReason:(id)arg1 ;
-(void)_handleTimerElapsed:(id)arg1 ;
-(id)initWithInterval:(double)arg1 name:(id)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
@end
