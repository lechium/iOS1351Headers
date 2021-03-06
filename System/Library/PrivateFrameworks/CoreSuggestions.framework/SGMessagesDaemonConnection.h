/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SGDSuggestManagerMessagesProtocol;
@class NSMutableDictionary;

@interface SGMessagesDaemonConnection : NSObject {

	NSMutableDictionary* _contextSent;
	id<SGDSuggestManagerMessagesProtocol> _remoteSuggestionManager;

}
-(void)dealloc;
-(void)connectionInterrupted;
-(id)initWithDaemonConnection:(id)arg1 ;
-(void)setManagerForTesting:(id)arg1 ;
-(BOOL)hasContextBeenSentForConversation:(id)arg1 ;
-(void)didSendContextForConversation:(id)arg1 ;
-(id)remoteSuggestionManager;
@end

