/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiKit/WiFiKit-Structs.h>
#import <libobjc.A.dylib/WFWiFiJoinProxy.h>

@class NSString;

@interface WFJoinProxy : NSObject <WFWiFiJoinProxy> {

	WiFiDeviceClientRef _device;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;                                //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) WiFiDeviceClientRef device;              //@synthesize device=_device - In the implementation block
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(WiFiDeviceClientRef)device;
-(void)setDevice:(WiFiDeviceClientRef)arg1 ;
-(void)joinNetwork:(WiFiNetworkRef)arg1 handler:(/*^block*/id)arg2 ;
-(void)_joinComplete:(int)arg1 userInfo:(CFDictionaryRef)arg2 network:(WiFiNetworkRef)arg3 ;
@end

