/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSXPCListenerEndpoint;

@interface NSXPCListener : NSObject {

	void* _xconnection;
	NSObject*<OS_dispatch_queue> _userQueue;
	void* reserved0;
	id _delegate;
	NSString* _serviceName;
	unsigned long long _state;
	id _reserved1;
	id _reserved2;

}

@property (__weak) id<NSXPCListenerDelegate> delegate; 
@property (retain,readonly) NSXPCListenerEndpoint * endpoint; 
+(id)anonymousListener;
+(id)_UUID;
+(id)serviceListener;
+(void)enableTransactions;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)_queue;
-(id<NSXPCListenerDelegate>)delegate;
-(void)setDelegate:(id<NSXPCListenerDelegate>)arg1 ;
-(void)resume;
-(void)_setQueue:(id)arg1 ;
-(void)stop;
-(id)initWithMachServiceName:(id)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(id)initWithServiceName:(id)arg1 ;
-(id)_xpcConnection;
-(void)suspend;
-(void)setOptions:(unsigned long long)arg1 ;
-(id)serviceName;
-(id)_initShared;
@end

