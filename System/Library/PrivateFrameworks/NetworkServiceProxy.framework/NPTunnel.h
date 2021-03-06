/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_data, OS_nw_parameters, OS_nw_endpoint, OS_nw_path, NPTunnelDelegate;
#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
@class NSObject, NSUUID, NSMutableDictionary, NSPAppRule, NSDate;

@interface NPTunnel : NSObject {

	nw_protocol* _protocol;
	NSObject*<OS_dispatch_data> _savedData;
	void* _idleTimer;
	BOOL _isTFOProbeSucceeded;
	BOOL _isCancelled;
	BOOL _isReadyForData;
	BOOL _eof;
	BOOL _handledDisconnected;
	BOOL _disableIdleTimeout;
	int _error;
	NSUUID* _identifier;
	NSObject*<OS_nw_parameters> _parameters;
	NSObject*<OS_nw_endpoint> _endpoint;
	NSObject*<OS_nw_endpoint> _localEndpoint;
	NSObject*<OS_nw_path> _path;
	id<NPTunnelDelegate> _delegate;
	NSMutableDictionary* _flows;
	NSPAppRule* _appRule;
	NSDate* _connectionStartDate;
	double _timeToFirstRequest;
	double _timeToFirstByte;
	long long _connectionState;
	long long _fallbackReason;
	unsigned long long* _timestamps;

}

@property (assign,nonatomic) BOOL eof;                                                  //@synthesize eof=_eof - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_endpoint> localEndpoint;                   //@synthesize localEndpoint=_localEndpoint - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_path> path;                                //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) BOOL handledDisconnected;                                  //@synthesize handledDisconnected=_handledDisconnected - In the implementation block
@property (assign,nonatomic) BOOL disableIdleTimeout;                                   //@synthesize disableIdleTimeout=_disableIdleTimeout - In the implementation block
@property (assign,nonatomic) long long connectionState;                                 //@synthesize connectionState=_connectionState - In the implementation block
@property (nonatomic,retain) NSDate * connectionStartDate;                              //@synthesize connectionStartDate=_connectionStartDate - In the implementation block
@property (assign,nonatomic) int error;                                                 //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) long long fallbackReason;                                  //@synthesize fallbackReason=_fallbackReason - In the implementation block
@property (assign,nonatomic) double timeToFirstRequest;                                 //@synthesize timeToFirstRequest=_timeToFirstRequest - In the implementation block
@property (assign,nonatomic) double timeToFirstByte;                                    //@synthesize timeToFirstByte=_timeToFirstByte - In the implementation block
@property (assign,nonatomic) BOOL isCancelled;                                          //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) nw_protocol* protocol; 
@property (nonatomic,readonly) NSObject*<OS_nw_parameters> parameters;                  //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_nw_endpoint> endpoint;                      //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_nw_interface> outputInterface; 
@property (nonatomic,__weak,readonly) id<NPTunnelDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * flows;                             //@synthesize flows=_flows - In the implementation block
@property (nonatomic,readonly) NSPAppRule * appRule;                                    //@synthesize appRule=_appRule - In the implementation block
@property (nonatomic,readonly) BOOL canHandleMoreData; 
@property (nonatomic,readonly) unsigned long long initialWindowSize; 
@property (nonatomic,readonly) BOOL isConnectionAlive; 
@property (nonatomic,readonly) unsigned long long* timestamps;                          //@synthesize timestamps=_timestamps - In the implementation block
@property (nonatomic,readonly) BOOL isTFOProbeSucceeded;                                //@synthesize isTFOProbeSucceeded=_isTFOProbeSucceeded - In the implementation block
@property (nonatomic,readonly) BOOL isReadyForData;                                     //@synthesize isReadyForData=_isReadyForData - In the implementation block
+(void)initializeProtocol;
-(void)dealloc;
-(id<NPTunnelDelegate>)delegate;
-(NSUUID *)identifier;
-(int)error;
-(NSObject*<OS_nw_path>)path;
-(nw_protocol*)protocol;
-(BOOL)start;
-(NSObject*<OS_nw_endpoint>)endpoint;
-(BOOL)isCancelled;
-(void)setError:(int)arg1 ;
-(void)setPath:(NSObject*<OS_nw_path>)arg1 ;
-(NSObject*<OS_nw_parameters>)parameters;
-(unsigned long long*)timestamps;
-(NSMutableDictionary *)flows;
-(void)write:(id)arg1 ;
-(NSObject*<OS_nw_endpoint>)localEndpoint;
-(void)setLocalEndpoint:(NSObject*<OS_nw_endpoint>)arg1 ;
-(long long)connectionState;
-(void)setIsCancelled:(BOOL)arg1 ;
-(void)closeFlow:(id)arg1 ;
-(long long)fallbackReason;
-(void)setFallbackReason:(long long)arg1 ;
-(void)setConnectionState:(long long)arg1 ;
-(void)destroyConnection;
-(void)setTimeToFirstByte:(double)arg1 ;
-(double)timeToFirstByte;
-(BOOL)isTFOProbeSucceeded;
-(unsigned long long)initialWindowSize;
-(void)cancelConnection;
-(void)removeFlow:(unsigned long long)arg1 ;
-(NSPAppRule *)appRule;
-(BOOL)addNewFlow:(id)arg1 ;
-(BOOL)hasFlow:(unsigned long long)arg1 ;
-(BOOL)isConnectionAlive;
-(NSDate *)connectionStartDate;
-(id)createConnectionInfo;
-(void)setConnectionStartDate:(NSDate *)arg1 ;
-(id)handleFlowClosed:(unsigned long long)arg1 withFallbackReason:(long long)arg2 ;
-(void)sendData:(id)arg1 toClientFlow:(unsigned long long)arg2 ;
-(void)increaseWindowSizeForFlow:(unsigned long long)arg1 byBytes:(unsigned long long)arg2 ;
-(BOOL)flowIsFirstFlow:(id)arg1 ;
-(void)acknowledgeData:(unsigned long long)arg1 sentToFlow:(id)arg2 ;
-(long long)sendData:(id)arg1 forFlow:(id)arg2 ;
-(void)handleFlowUsedTunnel;
-(void)handleFallbackForFlow:(id)arg1 ;
-(double)timeToFirstRequest;
-(BOOL)disableIdleTimeout;
-(void)setDisableIdleTimeout:(BOOL)arg1 ;
-(unsigned long long)maxDataSendSizeForFlow:(id)arg1 ;
-(BOOL)isReadyForData;
-(void)handleConnected;
-(void)setTimeToFirstRequest:(double)arg1 ;
-(void)handleDisconnected;
-(NSObject*<OS_nw_interface>)outputInterface;
-(void)readMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 ;
-(BOOL)canHandleMoreData;
-(void)handleCanHandleMoreData;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 appRule:(id)arg3 flowProperties:(id)arg4 delegate:(id)arg5 ;
-(void)handleReady;
-(void)handleInputAvailable;
-(void)handleReadData:(nw_frame_array_s*)arg1 ;
-(void)handleEOF;
-(void)handleDataWrittenWithError:(int)arg1 ;
-(void)writeInitialData;
-(unsigned long long)allocateFlowID;
-(void)startIdleTimer;
-(void)teardownOutputHandler;
-(void)handleConnectionIsDisconnected;
-(void)handleOutputAvailable;
-(BOOL)eof;
-(void)setEof:(BOOL)arg1 ;
-(BOOL)handledDisconnected;
-(void)setHandledDisconnected:(BOOL)arg1 ;
@end

