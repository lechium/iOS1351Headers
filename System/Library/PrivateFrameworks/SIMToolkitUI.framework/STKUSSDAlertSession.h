/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SIMToolkitUI/STKAlertSession.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/STKUSSDHostCommunication.h>

@class NSXPCListener, NSXPCConnection, NSMutableArray, NSString;

@interface STKUSSDAlertSession : STKAlertSession <NSXPCListenerDelegate, STKUSSDHostCommunication> {

	BOOL _hasReceivedContent;
	long long _event;
	NSXPCListener* _ussdListener;
	NSXPCConnection* _ussdConnection;
	NSMutableArray* _connectionQueue;

}

@property (nonatomic,readonly) NSXPCConnection * ussdConnection;              //@synthesize ussdConnection=_ussdConnection - In the implementation block
@property (nonatomic,readonly) NSMutableArray * connectionQueue;              //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,readonly) long long event;                               //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) NSXPCListener * ussdListener;                  //@synthesize ussdListener=_ussdListener - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedContent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(long long)event;
-(void)wakeup;
-(NSMutableArray *)connectionQueue;
-(NSXPCListener *)ussdListener;
-(id)initWithLogger:(id)arg1 responseProvider:(id)arg2 event:(long long)arg3 options:(id)arg4 sound:(id)arg5 ;
-(void)performUSSDUpdate:(/*^block*/id)arg1 ;
-(void)setHasReceivedContent:(BOOL)arg1 ;
-(BOOL)hasReceivedContent;
-(NSXPCConnection *)ussdConnection;
@end

