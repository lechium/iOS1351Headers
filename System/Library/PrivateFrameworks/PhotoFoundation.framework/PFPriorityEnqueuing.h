/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PFPriorityEnqueuing
@required
-(void)enqueueWithPriority:(unsigned long long)arg1 qos:(unsigned)arg2 block:(/*^block*/id)arg3;
-(void)enqueueWithPriority:(unsigned long long)arg1 block:(/*^block*/id)arg2;
-(void)enqueueEmptyNotification:(/*^block*/id)arg1;
-(unsigned long long)schedulingLimitForPriorityLevel:(unsigned long long)arg1;
-(void)suspendScheduling;
-(void)resumeScheduling;

@end

