/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/CoreAccessories/PlugIns/Transports/USBHost.transport/USBHost
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACCPlatformUSBHostPluginProtocol <NSObject,ACCPlatformPluginProtocol>
@optional
-(BOOL)setUSBHostHIDInterface:(unsigned char)arg1 withHIDFunction:(unsigned)arg2 forConnectionUUID:(id)arg3;
-(BOOL)clearUSBHostHIDInterfacesForConnectionUUID:(id)arg1;
-(BOOL)configureUSBHostNCMInterface:(unsigned char)arg1 asCarPlay:(BOOL)arg2 forConnectionUUID:(id)arg3;
-(BOOL)setNeedOutZLP:(BOOL)arg1 maxOutLength:(unsigned)arg2 forConnectionUUID:(id)arg3;

@required
-(BOOL)unlockUSBHostInterfacesForConnectionUUID:(id)arg1;
-(BOOL)lockUSBHostInterfacesForConnectionUUID:(id)arg1;

@end
