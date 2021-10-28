/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:45 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol REMSaveRequestTrackedValue;
@interface REMSaveRequestTrackedValueContainer : NSObject {

	id<REMSaveRequestTrackedValue> _weakValue;
	id<REMSaveRequestTrackedValue> _template;

}

@property (assign,nonatomic,__weak) id<REMSaveRequestTrackedValue> weakValue;              //@synthesize weakValue=_weakValue - In the implementation block
@property (nonatomic,retain) id<REMSaveRequestTrackedValue> template;                      //@synthesize template=_template - In the implementation block
-(id)initWithValue:(id)arg1 ;
-(void)setTemplate:(id<REMSaveRequestTrackedValue>)arg1 ;
-(id<REMSaveRequestTrackedValue>)template;
-(id<REMSaveRequestTrackedValue>)weakValue;
-(void)setWeakValue:(id<REMSaveRequestTrackedValue>)arg1 ;
-(id)valueForSaveRequest:(id)arg1 ;
-(id)valueWithoutPerformingCopy;
@end
