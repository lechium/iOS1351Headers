/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Security.framework/Security
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSNumber;

@interface SFAnalyticsActivityTracker : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _name;
	Class _clientClass;
	unsigned long long _start;
	BOOL _canceled;
	NSNumber* _measurement;

}

@property (retain) NSNumber * measurement;              //@synthesize measurement=_measurement - In the implementation block
-(void)dealloc;
-(void)cancel;
-(void)stop;
-(void)start;
-(NSNumber *)measurement;
-(void)setMeasurement:(NSNumber *)arg1 ;
-(id)initWithName:(id)arg1 clientClass:(Class)arg2 ;
-(void)performAction:(/*^block*/id)arg1 ;
-(void)stopWithEvent:(id)arg1 result:(id)arg2 ;
@end
