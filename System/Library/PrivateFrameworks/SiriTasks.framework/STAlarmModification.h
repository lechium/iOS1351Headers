/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:54 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/STSiriModelObject.h>

@class NSURL, NSNumber, NSString;

@interface STAlarmModification : STSiriModelObject {

	long long _addedFrequency;
	NSURL* _alarmId;
	NSNumber* _enabled;
	NSNumber* _hour;
	NSString* _label;
	NSNumber* _minute;
	long long _removedFrequency;

}
+(BOOL)supportsSecureCoding;
-(id)enabled;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)hour;
-(id)minute;
-(id)label;
-(id)alarmId;
-(long long)addedFrequency;
-(long long)removedFrequency;
-(id)_initWithAddedFrequency:(long long)arg1 alarmId:(id)arg2 enabled:(id)arg3 hour:(id)arg4 label:(id)arg5 minute:(id)arg6 removedFrequency:(long long)arg7 ;
@end
