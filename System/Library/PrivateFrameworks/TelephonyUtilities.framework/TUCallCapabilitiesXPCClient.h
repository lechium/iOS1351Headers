/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:17 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TUCallCapabilitiesXPCClient.h>

@protocol TUCallCapabilitiesXPCClient <NSObject>
@required
-(oneway void)capabilityStateUpdated:(id)arg1;

@end

#import <libobjc.A.dylib/TUCallCapabilitiesXPCServerActions.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSMapTable, TUCallCapabilitiesState, NSString;

@interface TUCallCapabilitiesXPCClient : NSObject <TUCallCapabilitiesXPCClient, TUCallCapabilitiesXPCServerActions> {

	int _token;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _xpcConnection;
	NSMapTable* _delegateToQueue;
	TUCallCapabilitiesState* _state;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                   //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) int token;                                       //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSMapTable * delegateToQueue;                    //@synthesize delegateToQueue=_delegateToQueue - In the implementation block
@property (nonatomic,retain) TUCallCapabilitiesState * state;                   //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)callCapabilitiesServerXPCInterface;
+(id)callCapabilitiesClientXPCInterface;
+(id)asynchronousServer;
+(void)setAsynchronousServer:(id)arg1 ;
+(id)synchronousServer;
+(void)setSynchronousServer:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(int)token;
-(TUCallCapabilitiesState *)state;
-(NSXPCConnection *)xpcConnection;
-(void)setState:(TUCallCapabilitiesState *)arg1 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(NSMapTable *)delegateToQueue;
-(void)handleServerDisconnect;
-(oneway void)setVoLTECallingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2 ;
-(oneway void)setWiFiCallingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2 ;
-(oneway void)setWiFiCallingRoamingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2 ;
-(oneway void)invalidateAndRefreshWiFiCallingProvisioningURLForSenderIdentityWithUUID:(id)arg1 ;
-(oneway void)setThumperCallingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2 ;
-(oneway void)invalidateAndRefreshThumperCallingProvisioningURLForSenderIdentityWithUUID:(id)arg1 ;
-(oneway void)setThumperCallingAllowed:(BOOL)arg1 onSecondaryDeviceWithID:(id)arg2 forSenderIdentityWithUUID:(id)arg3 ;
-(oneway void)setThumperCallingAllowedOnDefaultPairedDevice:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2 ;
-(oneway void)requestPinFromPrimaryDevice;
-(oneway void)cancelPinRequestFromPrimaryDevice;
-(void)performDelegateCallbackBlock:(/*^block*/id)arg1 ;
-(oneway void)setRelayCallingEnabled:(BOOL)arg1 ;
-(oneway void)setRelayCallingEnabled:(BOOL)arg1 forDeviceWithID:(id)arg2 ;
-(oneway void)endEmergencyCallbackMode;
-(void)_retrieveState;
-(id)asynchronousServer;
-(void)_updateState:(id)arg1 ;
-(id)synchronousServerWithErrorHandler:(/*^block*/id)arg1 ;
-(oneway void)capabilityStateUpdated:(id)arg1 ;
-(id)asynchronousServerWithErrorHandler:(/*^block*/id)arg1 ;
@end
