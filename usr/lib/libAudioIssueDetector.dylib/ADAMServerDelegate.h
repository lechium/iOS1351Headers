/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libAudioIssueDetector.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAudioIssueDetector.dylib/libAudioIssueDetector.dylib-Structs.h>
#import <libobjc.A.dylib/ADAMServerProtocol.h>

@class NSXPCConnection, NSString, NSMutableDictionary;

@interface ADAMServerDelegate : NSObject <ADAMServerProtocol> {

	NSXPCConnection* _connection;
	NSString* _clientName;
	NSMutableDictionary* _dataTypeStatus;
	long long _error_code;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerDelegate:(unsigned)arg1 ;
-(void)startMeasuringAudioSampleTypeWithIdentifier:(id)arg1 type:(unsigned)arg2 withConfiguration:(id)arg3 andReply:(/*^block*/id)arg4 ;
-(void)stopMeasuringAudioSampleTypeWithIdentifier:(id)arg1 type:(unsigned)arg2 andReply:(/*^block*/id)arg3 ;
-(void)configureAudioSampleTypeWithIdentifier:(id)arg1 type:(unsigned)arg2 configuration:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(void)startListeningToAudioSampleWithIdentifier:(id)arg1 type:(unsigned)arg2 withReply:(/*^block*/id)arg3 ;
-(void)stopListeningToAudioSampleTypeWithIdentifier:(id)arg1 type:(unsigned)arg2 withReply:(/*^block*/id)arg3 ;
-(id)initWithConnection:(id)arg1 andErrorCode:(long long)arg2 ;
-(void)setupConnection:(id)arg1 ;
-(void)sendAudioSample:(id)arg1 withType:(unsigned)arg2 metadata:(id)arg3 ;
-(BOOL)isActive:(unsigned)arg1 ;
-(void)deactivateAll;
-(void)unregisterDelegate;
-(BOOL)datatypeSupportsONOFF:(unsigned)arg1 ;
-(id)DatatypeTo4CC:(unsigned)arg1 ;
-(id)errorWithCode:(long long)arg1 andReason:(id)arg2 ;
-(BOOL)verifyInvariantsWithReply:(/*^block*/id)arg1 ;
-(id)describeErrorCode:(long long)arg1 ;
@end

