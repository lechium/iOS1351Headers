/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString, NSDate;

@interface NNMKRequestContext : NSObject {

	BOOL _hasProtectedMessages;
	NSArray* _mailboxes;
	NSString* _conversationId;
	NSDate* _beforeDate;
	unsigned long long _count;
	unsigned long long _resendInterval;
	unsigned long long _messagesForSpecialMailbox;

}

@property (assign,nonatomic) unsigned long long resendInterval;                         //@synthesize resendInterval=_resendInterval - In the implementation block
@property (nonatomic,retain) NSArray * mailboxes;                                       //@synthesize mailboxes=_mailboxes - In the implementation block
@property (nonatomic,retain) NSString * conversationId;                                 //@synthesize conversationId=_conversationId - In the implementation block
@property (nonatomic,retain) NSDate * beforeDate;                                       //@synthesize beforeDate=_beforeDate - In the implementation block
@property (assign,nonatomic) unsigned long long count;                                  //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long messagesForSpecialMailbox;              //@synthesize messagesForSpecialMailbox=_messagesForSpecialMailbox - In the implementation block
@property (assign,nonatomic) BOOL hasProtectedMessages;                                 //@synthesize hasProtectedMessages=_hasProtectedMessages - In the implementation block
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(NSArray *)mailboxes;
-(NSString *)conversationId;
-(void)setMailboxes:(NSArray *)arg1 ;
-(void)setConversationId:(NSString *)arg1 ;
-(unsigned long long)resendInterval;
-(void)setResendInterval:(unsigned long long)arg1 ;
-(NSDate *)beforeDate;
-(BOOL)hasProtectedMessages;
-(unsigned long long)messagesForSpecialMailbox;
-(void)setBeforeDate:(NSDate *)arg1 ;
-(void)setMessagesForSpecialMailbox:(unsigned long long)arg1 ;
-(void)setHasProtectedMessages:(BOOL)arg1 ;
@end
