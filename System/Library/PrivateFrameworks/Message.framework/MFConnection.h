/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:35 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/ECAuthenticatableConnection.h>
#import <libobjc.A.dylib/MFDiagnosticsGenerator.h>

@protocol ECSASLSecurityLayer, ECNWConnectionWrapper;
@class NSArray, NSString, MFConnectionSettings;

@interface MFConnection : NSObject <ECAuthenticatableConnection, MFDiagnosticsGenerator> {

	id<ECSASLSecurityLayer> _securityLayer;
	MFConnectionSettings* _connectionSettings;
	id<ECNWConnectionWrapper> _socket;
	double _lastUsedTime;
	char* _buffer;
	long long _bufferRemainingBytes;
	unsigned long long _bufferStart;
	unsigned long long _bufferLength;
	unsigned long long _desiredBufferLength;
	z_stream_s* _deflater;
	z_stream_s* _inflater;
	char* _zbuffer;
	unsigned _readBytesNotLogged;
	AB _isFetching;
	BOOL _compressionEnabled;
	NSString* _accountLogString;

}

@property (assign) BOOL isFetching; 
@property (nonatomic,readonly) double lastUsedTime; 
@property (nonatomic,readonly) NSArray * capabilities; 
@property (nonatomic,readonly) NSArray * authenticationMechanisms; 
@property (nonatomic,readonly) NSString * securityProtocol; 
@property (nonatomic,readonly) NSString * accountLogString;                     //@synthesize accountLogString=_accountLogString - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL hasBytesAvailable; 
@property (nonatomic,readonly) BOOL isCellularConnection; 
@property (nonatomic,readonly) BOOL isConstrained; 
@property (nonatomic,readonly) BOOL loginDisabled; 
@property (nonatomic,readonly) BOOL usesOpportunisticSockets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)shouldTryFallbacksAfterError:(id)arg1 ;
+(void)readLoggingDefaults;
+(void)logConnection:(id)arg1 type:(long long)arg2 data:(id)arg3 ;
+(void)flushLog;
+(id)logClasses;
+(void)setLogClasses:(id)arg1 ;
+(BOOL)logAllSocketActivity;
+(void)setLogAllSocketActivity:(BOOL)arg1 ;
+(id)logActivityOnPorts;
+(void)setLogActivityOnPorts:(id)arg1 ;
+(id)logActivityOnHosts;
+(void)setLogActivityOnHosts:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(BOOL)isValid;
-(BOOL)hasBytesAvailable;
-(BOOL)writeData:(id)arg1 ;
-(void)disconnect;
-(BOOL)isConstrained;
-(double)lastUsedTime;
-(NSArray *)capabilities;
-(BOOL)isCellularConnection;
-(BOOL)connectUsingFallbacksForAccount:(id)arg1 ;
-(BOOL)authenticateUsingAccount:(id)arg1 ;
-(id)copyDiagnosticInformation;
-(BOOL)connectUsingAccount:(id)arg1 ;
-(NSString *)securityProtocol;
-(void)enableThroughputMonitoring:(BOOL)arg1 ;
-(BOOL)usesOpportunisticSockets;
-(BOOL)_evaluateTrust:(SecTrustRef)arg1 errorPtr:(id*)arg2 ;
-(void)_setupSocketWithSettings:(id)arg1 ;
-(BOOL)connectUsingSettings:(id)arg1 ;
-(NSArray *)authenticationMechanisms;
-(BOOL)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2 ;
-(BOOL)writeBytes:(const char*)arg1 length:(unsigned long long)arg2 dontLogBytesInRange:(NSRange)arg3 ;
-(BOOL)writeData:(id)arg1 dontLogBytesInRange:(NSRange)arg2 ;
-(void)endCompression;
-(BOOL)_certificateIsTrustedForAccount:(id)arg1 ;
-(void)_setCertificateIsTrusted:(BOOL)arg1 forAccount:(id)arg2 ;
-(BOOL)loginDisabled;
-(BOOL)isFetching;
-(void)setIsFetching:(BOOL)arg1 ;
-(void)setDesiredReadBufferLength:(unsigned long long)arg1 ;
-(void)logReadChars:(const char*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)readLineIntoData:(id)arg1 ;
-(BOOL)readBytesIntoData:(id)arg1 desiredLength:(unsigned long long)arg2 ;
-(BOOL)startTLSForAccount:(id)arg1 ;
-(BOOL)startCompression;
-(id)connectionSettings;
-(void)setConnectionSettings:(id)arg1 ;
-(NSString *)accountLogString;
@end
