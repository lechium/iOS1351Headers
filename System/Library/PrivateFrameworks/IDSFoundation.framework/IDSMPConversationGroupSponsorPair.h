/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:41 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class IDSMPConversationKey, NSString;

@interface IDSMPConversationGroupSponsorPair : NSObject {

	IDSMPConversationKey* _conversationKey;
	NSString* _sponsorAlias;

}

@property (nonatomic,readonly) IDSMPConversationKey * conversationKey;              //@synthesize conversationKey=_conversationKey - In the implementation block
@property (nonatomic,readonly) NSString * sponsorAlias;                             //@synthesize sponsorAlias=_sponsorAlias - In the implementation block
-(NSString *)sponsorAlias;
-(id)initWithConversationKey:(id)arg1 sponsorAlias:(id)arg2 ;
-(IDSMPConversationKey *)conversationKey;
@end

