/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMDaemonCore/IMDMessageHistoryIDSTransactionLogSyncTask.h>

@class IMDReplayController;

@interface IMDMessageHistoryFirstUnlockReplaySyncTask : IMDMessageHistoryIDSTransactionLogSyncTask {

	IMDReplayController* _replayController;

}
-(void)dealloc;
-(id)initWithReplayController:(id)arg1 accountController:(id)arg2 ;
-(void)_setupAndBeginSync;
-(unsigned long long)syncTaskType;
@end
