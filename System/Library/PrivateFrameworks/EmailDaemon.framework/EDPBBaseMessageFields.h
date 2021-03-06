/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol EDPBBaseMessageFields
@property (assign,nonatomic) long long accountId; 
@property (assign,nonatomic) long long mailboxId; 
@property (assign,nonatomic) int mailboxType; 
@property (assign,nonatomic) long long conversationId; 
@property (assign,nonatomic) long long messageId; 
@required
-(long long)messageId;
-(void)setMessageId:(long long)arg1;
-(long long)accountId;
-(void)setAccountId:(long long)arg1;
-(int)mailboxType;
-(void)setMailboxType:(int)arg1;
-(long long)conversationId;
-(long long)mailboxId;
-(void)setMailboxId:(long long)arg1;
-(void)setConversationId:(long long)arg1;

@end

