/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class EKAlarm;

@interface EKUIAlarm : NSObject {

	BOOL _isLeaveNowAlarm;
	EKAlarm* _alarm;

}

@property (nonatomic,readonly) BOOL isLeaveNowAlarm;              //@synthesize isLeaveNowAlarm=_isLeaveNowAlarm - In the implementation block
@property (nonatomic,readonly) EKAlarm * alarm;                   //@synthesize alarm=_alarm - In the implementation block
-(id)description;
-(EKAlarm *)alarm;
-(id)localizedDescriptionAllDay:(BOOL)arg1 ;
-(BOOL)isLeaveNowAlarm;
-(id)initWithAlarm:(id)arg1 ;
-(id)initLeaveNowAlarm;
-(BOOL)isEqualToUIAlarm:(id)arg1 ;
@end

