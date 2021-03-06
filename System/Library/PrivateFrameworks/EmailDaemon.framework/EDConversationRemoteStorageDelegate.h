/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol EDConversationRemoteStorageDelegate <NSObject>
@optional
-(void)conversationRemoteStorageDidInitialize:(id)arg1;
-(void)conversationRemoteStorageWillResetData:(id)arg1;
-(void)conversationRemoteStorageDidResetData:(id)arg1;

@required
-(void)conversationRemoteStorage:(id)arg1 didChangeEntries:(id)arg2 reason:(long long)arg3;

@end

