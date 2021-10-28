/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:54 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEExtensionTunnelProviderContext.h>
#import <libobjc.A.dylib/NEExtensionPacketTunnelProviderProtocol.h>
#import <libobjc.A.dylib/NEExtensionPacketTunnelProviderHostProtocol.h>

@class NSString;

@interface NEExtensionPacketTunnelProviderContext : NEExtensionTunnelProviderContext <NEExtensionPacketTunnelProviderProtocol, NEExtensionPacketTunnelProviderHostProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)extensionPoint;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopWithReason:(int)arg1 ;
-(void)setTunnelConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setVirtualInterfaceSocket:(id)arg1 ;
-(void)fetchVirtualInterfaceTypeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestSocket:(BOOL)arg1 interface:(id)arg2 local:(id)arg3 remote:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)completeSession;
@end
