/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:38 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSMutableSet, NSArray;

@interface CKDraftManager : NSObject {

	NSMutableDictionary* _cachedDrafts;
	NSMutableSet* _dirtyDraftIDs;
	NSArray* _pendingRecipients;

}
+(id)sharedInstance;
-(void)dealloc;
-(void)save:(BOOL)arg1 ;
-(void)flushCache;
-(void)setDraftForPendingConversation:(id)arg1 withRecipients:(id)arg2 ;
-(void)clearDraftForPendingConversation;
-(void)_setDraft:(id)arg1 forKey:(id)arg2 ;
-(id)_draftForKey:(id)arg1 ;
-(void)_clearDraftForConversation:(id)arg1 ;
-(id)_pendingRecipients;
-(void)_setPendingRecipients:(id)arg1 ;
-(id)_pendingRecipientsURL;
-(id)draftForConversation:(id)arg1 ;
-(void)setDraft:(id)arg1 forConversation:(id)arg2 ;
-(id)draftForPendingConversationWithRecipients:(id*)arg1 ;
@end

