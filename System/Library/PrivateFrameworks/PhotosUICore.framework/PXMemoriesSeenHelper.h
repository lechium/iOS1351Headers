/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface PXMemoriesSeenHelper : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
+(id)defaultHelper;
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)clearAnyPendingNotificationsFromMemories:(id)arg1 inLibrary:(id)arg2 ;
-(void)clearAnyPendingStateFromMemories:(id)arg1 inLibrary:(id)arg2 ;
-(void)_clearPendingNotificationForMemory:(id)arg1 inLibrary:(id)arg2 ;
@end

