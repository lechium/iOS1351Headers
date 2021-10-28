/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class _PASLRUCache;

@interface SGTextMessageConversationTracker : NSObject {

	opaque_pthread_mutex_t _lock;
	_PASLRUCache* _conversations;

}
+(id)instance;
-(id)init;
-(void)clear;
-(id)addItem:(id)arg1 ;
-(id)addMessage:(id)arg1 ;
-(id)conversationForIdentifier:(id)arg1 ;
-(id)addMessage:(id)arg1 withDetectedData:(id)arg2 ;
@end
