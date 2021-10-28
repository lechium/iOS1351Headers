/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EFLoggable.h>

@class EMRemoteConnection, NSString;

@interface EMOutgoingMessageRepository : NSObject <EFLoggable> {

	EMRemoteConnection* _connection;

}

@property (retain) EMRemoteConnection * connection;                 //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)remoteInterface;
+(id)signpostLog;
-(EMRemoteConnection *)connection;
-(void)setConnection:(EMRemoteConnection *)arg1 ;
-(unsigned long long)signpostID;
-(BOOL)isProcessing;
-(id)initWithRemoteConnection:(id)arg1 ;
-(void)suspendDeliveryQueue;
-(void)resumeDeliveryQueue;
-(void)processAllQueuedMessages;
-(id)saveDraftMessage:(id)arg1 mailboxObjectID:(id)arg2 previousDraftObjectID:(id)arg3 ;
-(void)deleteDraftsInMailbox:(id)arg1 documentID:(id)arg2 previousDraftObjectID:(id)arg3 ;
-(id)deliverMessage:(id)arg1 usingMailDrop:(BOOL)arg2 ;
-(BOOL)outboxContainsMessageFromAccount:(id)arg1 ;
-(unsigned long long)numberOfPendingMessages;
@end
