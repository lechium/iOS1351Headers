/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Email/EMMailbox.h>

@class EMMailboxScope;

@interface EMSmartMailbox : EMMailbox {

	/*^block*/id _predicateGenerator;
	EMMailboxScope* _mailboxScope;
	long long _smartMailboxType;

}

@property (nonatomic,readonly) EMMailboxScope * mailboxScope;              //@synthesize mailboxScope=_mailboxScope - In the implementation block
@property (nonatomic,readonly) long long smartMailboxType;                 //@synthesize smartMailboxType=_smartMailboxType - In the implementation block
+(id)unifiedMailboxOfType:(long long)arg1 name:(id)arg2 additionalPredicate:(id)arg3 ;
+(id)vipMailboxWithMailboxScope:(id)arg1 ;
+(id)flaggedMailboxWithMailboxScope:(id)arg1 ;
+(id)unreadMailboxWithMailboxScope:(id)arg1 ;
+(id)hasAttachmentsMailboxWithMailboxScope:(id)arg1 ;
+(id)notifyThreadsMailboxWithMailboxScope:(id)arg1 ;
+(id)todayMailboxWithMailboxScope:(id)arg1 ;
+(id)muteThreadsMailboxWithMailboxScope:(id)arg1 ;
+(id)includesMeMailboxWithMailboxScope:(id)arg1 ;
+(id)unifiedMailboxOfType:(long long)arg1 name:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(EMMailboxScope *)mailboxScope;
-(BOOL)isSmartMailbox;
-(long long)smartMailboxType;
-(BOOL)supportsSelectAll;
-(BOOL)_shouldArchiveByDefault;
-(id)makePredicate;
-(id)initWithType:(long long)arg1 mailboxType:(long long)arg2 name:(id)arg3 mailboxScope:(id)arg4 predicateGenerator:(/*^block*/id)arg5 ;
@end

