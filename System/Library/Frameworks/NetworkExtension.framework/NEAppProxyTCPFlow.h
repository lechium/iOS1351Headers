/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:54 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEAppProxyFlow.h>

@class NWEndpoint;

@interface NEAppProxyTCPFlow : NEAppProxyFlow {

	NWEndpoint* _remoteEndpoint;

}

@property (readonly) NWEndpoint * remoteEndpoint;              //@synthesize remoteEndpoint=_remoteEndpoint - In the implementation block
-(id)description;
-(NWEndpoint *)remoteEndpoint;
-(id)initWithNEFlow:(NEFlowRef)arg1 queue:(id)arg2 ;
-(void)readDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)writeData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

