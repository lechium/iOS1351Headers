/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:45 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface _REMInProgressSaveRequestsContainer : NSObject {

	NSMutableArray* _inProgressSaveRequests;

}

@property (nonatomic,retain) NSMutableArray * inProgressSaveRequests;              //@synthesize inProgressSaveRequests=_inProgressSaveRequests - In the implementation block
-(id)init;
-(id)latestSaveInProgressAccount:(id)arg1 ;
-(id)latestSaveInProgressList:(id)arg1 ;
-(id)latestSaveInProgressReminder:(id)arg1 ;
-(id)latestSaveInProgressReminderForReminderChangeItem:(id)arg1 ;
-(void)saveRequestSaveDidStart:(id)arg1 ;
-(void)saveRequestSaveDidFinish:(id)arg1 ;
-(NSMutableArray *)inProgressSaveRequests;
-(id)_latestSaveInProgressAccountForObjectID:(id)arg1 saveRequest:(id)arg2 ;
-(id)_firstMatchInSaveRequests:(/*^block*/id)arg1 ;
-(id)_latestSaveInProgressListForObjectID:(id)arg1 fallbackAccount:(id)arg2 fallbackParentList:(id)arg3 saveRequest:(id)arg4 ;
-(id)_latestSaveInProgressReminderForObjectID:(id)arg1 fallbackAccount:(id)arg2 fallbackList:(id)arg3 fallbackParentList:(id)arg4 fallbackParentReminder:(id)arg5 saveRequest:(id)arg6 ;
-(void)setInProgressSaveRequests:(NSMutableArray *)arg1 ;
@end

