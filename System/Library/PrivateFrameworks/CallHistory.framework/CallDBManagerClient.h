/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CallHistory/CallDBManager.h>

@class NSXPCConnection;

@interface CallDBManagerClient : CallDBManager {

	NSXPCConnection* _helperConnection;
	id _syncHelperReadyNotificationRef;

}

@property (retain) NSXPCConnection * helperConnection;              //@synthesize helperConnection=_helperConnection - In the implementation block
@property (retain) id syncHelperReadyNotificationRef;               //@synthesize syncHelperReadyNotificationRef=_syncHelperReadyNotificationRef - In the implementation block
-(id)tempDBLocation:(unsigned char*)arg1 ;
-(void)handlePermanentCreated;
-(NSXPCConnection *)helperConnection;
-(void)setHelperConnection:(NSXPCConnection *)arg1 ;
-(void)moveCallsFromTempDatabase;
-(id)permDBLocation:(unsigned char*)arg1 ;
-(void)pokeSyncHelperToInitDB;
-(BOOL)willMoveCallsFromTempDatabase;
-(void)createHelperConnection;
-(BOOL)validatePermDatabase;
-(void)createPermanent;
-(void)createTemporary;
-(BOOL)validateTempDatabase;
-(id)syncHelperReadyNotificationRef;
-(void)setSyncHelperReadyNotificationRef:(id)arg1 ;
@end

