/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HCHeardControllerProtocol.h>

@protocol OS_xpc_object;
@class NSObject, NSArray, NSDictionary, NSString;

@interface AXHeardController : NSObject <HCHeardControllerProtocol> {

	NSObject*<OS_xpc_object> _service;
	NSArray* _clients;
	NSDictionary* _handlers;

}

@property (nonatomic,retain) NSArray * clients;                     //@synthesize clients=_clients - In the implementation block
@property (nonatomic,retain) NSDictionary * handlers;               //@synthesize handlers=_handlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
+(id)entitlementsForMessageID:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(NSArray *)clients;
-(NSDictionary *)handlers;
-(void)setHandlers:(NSDictionary *)arg1 ;
-(void)handleNewConnection:(id)arg1 ;
-(void)setClients:(NSArray *)arg1 ;
-(BOOL)sendMessage:(id)arg1 withError:(id*)arg2 ;
-(void)sendUpdateMessage:(id)arg1 forIdentifier:(unsigned long long)arg2 ;
-(void)sendClientsMessageWithPayload:(id)arg1 excluding:(id)arg2 ;
-(unsigned long long)countOfClientsListeningForIdentifier:(unsigned long long)arg1 ;
-(void)addHandler:(id)arg1 andBlock:(/*^block*/id)arg2 forMessageIdentifier:(unsigned long long)arg3 ;
-(BOOL)connection:(id)arg1 hasEntitlementForMessage:(unsigned long long)arg2 ;
-(void)handleMessage:(id)arg1 forIdentifier:(unsigned long long)arg2 ;
-(void)startServer;
-(void)registerFakeClient:(id)arg1 ;
@end

