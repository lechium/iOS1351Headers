/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EDMessageQueryHelperDelegate.h>

@protocol EFScheduler;
@class NSMutableArray, NSConditionLock, NSString;

@interface _EDMessageItemIDCollector : NSObject <EDMessageQueryHelperDelegate> {

	id<EFScheduler> _scheduler;
	NSMutableArray* _messageItemIDs;
	NSConditionLock* _collectionLock;
	NSString* _errorString;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)queryHelper:(id)arg1 didFindMessages:(id)arg2 ;
-(void)queryHelperDidFindAllMessages:(id)arg1 ;
-(void)queryHelper:(id)arg1 didAddMessages:(id)arg2 ;
-(void)queryHelper:(id)arg1 messageFlagsDidChangeForMessages:(id)arg2 ;
-(void)queryHelper:(id)arg1 conversationIDDidChangeForMessages:(id)arg2 fromConversationID:(long long)arg3 ;
-(void)queryHelper:(id)arg1 conversationNotificationLevelDidChangeForConversation:(long long)arg2 conversationID:(long long)arg3 ;
-(void)queryHelper:(id)arg1 objectIDDidChangeForMessage:(id)arg2 oldObjectID:(id)arg3 oldConversationID:(long long)arg4 ;
-(void)queryHelper:(id)arg1 didUpdateMessages:(id)arg2 forKeyPaths:(id)arg3 ;
-(void)queryHelper:(id)arg1 didDeleteMessages:(id)arg2 ;
-(void)queryHelperDidFinishRemoteSearch:(id)arg1 ;
-(void)queryHelperNeedsRestart:(id)arg1 ;
-(id)collectItemIDsWithQuery:(id)arg1 messagePersistence:(id)arg2 hookRegistry:(id)arg3 remoteSearchProvider:(id)arg4 errorString:(id*)arg5 ;
@end

