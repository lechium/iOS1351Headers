/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NNMKResendSchedulerDelegate <NNMKDeviceRegistryHolder>
@required
-(unsigned long long)resendScheduler:(id)arg1 didRequestNewResendIntervalForPreviousResendInterval:(unsigned long long)arg2 errorCode:(long long)arg3;
-(void)resendScheduler:(id)arg1 didRequestDequeueIDSIdentifierForResend:(id)arg2;
-(void)resendScheduler:(id)arg1 didRequestEnqueueIDSIdentifiersForResend:(id)arg2;
-(void)resendScheduler:(id)arg1 didRequestRetrySendingMessageWithIds:(id)arg2;
-(void)resendScheduler:(id)arg1 didRequestRetrySendingAccountWithId:(id)arg2;
-(void)resendScheduler:(id)arg1 didRequestRetrySendingContentForMessageId:(id)arg2 highPriority:(BOOL)arg3;
-(void)resendScheduler:(id)arg1 didRequestRetrySendingComposeMessageProgress:(long long)arg2 messageId:(id)arg3 resendInterval:(unsigned long long)arg4;
-(void)resendScheduler:(id)arg1 didRequestEnqueueIDSIdentifierForResend:(id)arg2 date:(id)arg3 silent:(BOOL)arg4;
-(void)resendScheduler:(id)arg1 didRequestRetrySendingMailboxSelectionWithResendInterval:(unsigned long long)arg2;
-(void)resendScheduler:(id)arg1 didRequestRetrySendingAccountIdentifier:(id)arg2 resendInterval:(unsigned long long)arg3;
-(void)resendScheduler:(id)arg1 didRequestRetrySendingVIPListWithResendInterval:(unsigned long long)arg2;
-(void)resendScheduler:(id)arg1 didRequestRetryFullSyncForMailboxes:(id)arg2;
-(void)resendScheduler:(id)arg1 didRequestRetrySendingMessageDeletions:(id)arg2 deletionsMessageIds:(id)arg3 resendInterval:(unsigned long long)arg4;
-(void)resendScheduler:(id)arg1 didRequestRetrySendingDeletionForAccountWithId:(id)arg2 resendInterval:(unsigned long long)arg3;

@end

