/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class IMChat, NSArray;

@interface IMAssistantRelevantChatMatchingRecipients : NSObject {

	IMChat* _chat;
	NSArray* _resolvedPersons;

}

@property (nonatomic,retain) IMChat * chat;                        //@synthesize chat=_chat - In the implementation block
@property (nonatomic,copy) NSArray * resolvedPersons;              //@synthesize resolvedPersons=_resolvedPersons - In the implementation block
-(id)description;
-(void)setChat:(IMChat *)arg1 ;
-(IMChat *)chat;
-(NSArray *)resolvedPersons;
-(id)initWithChat:(id)arg1 resolvedPersons:(id)arg2 ;
-(void)setResolvedPersons:(NSArray *)arg1 ;
@end

