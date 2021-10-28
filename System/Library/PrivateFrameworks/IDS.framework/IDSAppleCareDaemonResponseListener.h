/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:41 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDS/IDSDaemonListenerProtocol.h>

@class IDSDaemonRequestTimer, NSString;

@interface IDSAppleCareDaemonResponseListener : NSObject <IDSDaemonListenerProtocol> {

	IDSDaemonRequestTimer* _requestTimer;
	/*^block*/id _disconnectedBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonDisconnected;
-(void)applecareResponseForRequestID:(id)arg1 withError:(id)arg2 ;
-(id)initWithRequestTimer:(id)arg1 ;
-(id)initWithDisconnectedBlockAndNoTimeout:(/*^block*/id)arg1 ;
@end
