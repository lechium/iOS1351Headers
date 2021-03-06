/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:45 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface REMMigrationResult : NSObject <NSSecureCoding> {

	BOOL _isObserver;
	NSString* _state;
	double _timeElapsed;
	unsigned long long _listsMigrated;
	unsigned long long _remindersMigrated;
	NSString* _log;

}

@property (nonatomic,readonly) NSString * state;                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL isObserver;                                   //@synthesize isObserver=_isObserver - In the implementation block
@property (nonatomic,readonly) double timeElapsed;                                //@synthesize timeElapsed=_timeElapsed - In the implementation block
@property (nonatomic,readonly) unsigned long long listsMigrated;                  //@synthesize listsMigrated=_listsMigrated - In the implementation block
@property (nonatomic,readonly) unsigned long long remindersMigrated;              //@synthesize remindersMigrated=_remindersMigrated - In the implementation block
@property (nonatomic,readonly) NSString * log;                                    //@synthesize log=_log - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)state;
-(NSString *)log;
-(double)timeElapsed;
-(BOOL)isObserver;
-(unsigned long long)listsMigrated;
-(unsigned long long)remindersMigrated;
-(id)initWithState:(id)arg1 IsObserver:(BOOL)arg2 timeElapsed:(double)arg3 listsMigrated:(unsigned long long)arg4 remindersMigrated:(unsigned long long)arg5 log:(id)arg6 ;
@end

