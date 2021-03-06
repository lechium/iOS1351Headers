/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDateFormatter;

@interface EMStatusUpdateProvider : NSObject {

	NSDateFormatter* _timeFormatter;
	NSDateFormatter* _weekdayFormatter;
	NSDateFormatter* _dateFormatter;

}
-(id)statusUpdateStringWithDate:(id)arg1 now:(id)arg2 nextTransition:(id*)arg3 ;
-(unsigned long long)statusUpdateWithDate:(id)arg1 now:(id)arg2 nextTransition:(id*)arg3 ;
-(id)_statusUpdatedMinutesAgoWithDate:(id)arg1 now:(id)arg2 ;
-(id)_statusUpdatedAtTimeWithDate:(id)arg1 ;
-(id)_statusUpdatedOnDayWithDate:(id)arg1 ;
-(id)_statusUpdatedOnDateWithDate:(id)arg1 ;
@end

