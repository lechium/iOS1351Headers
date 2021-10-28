/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:41 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IDSLinkDelegate <NSObject>
@optional
-(void)link:(id)arg1 didDisconnectOverCloud:(id)arg2 cbuuid:(id)arg3;
-(void)link:(id)arg1 didAddQREvent:(id)arg2;
-(void)link:(id)arg1 didConnectUnderlyingLink:(char)arg2 linkUUID:(id)arg3 localAttributes:(id)arg4 remoteAttributes:(id)arg5;
-(void)link:(id)arg1 didDisconnectUnderlyingLinkID:(char)arg2 linkUUID:(id)arg3;
-(void)link:(id)arg1 didDefaultUnderlyingLinkChangeSucceeded:(BOOL)arg2 currentDefaultLinkID:(char)arg3;
-(void)link:(id)arg1 didFailToConnectOverCloud:(id)arg2 cbuuid:(id)arg3;
-(void)link:(id)arg1 didConnectOverCloud:(id)arg2 cbuuid:(id)arg3;
-(void)link:(id)arg1 didReceiveSKEData:(id)arg2;
-(void)link:(id)arg1 didRATChange:(unsigned char)arg2;
-(void)link:(id)arg1 didCellularMTUChange:(unsigned short)arg2;
-(void)link:(id)arg1 didReceiveReportEvent:(id)arg2;
-(void)link:(id)arg1 didReceiveSessionInfo:(id)arg2 relayGroupID:(id)arg3 relaySessionID:(id)arg4 success:(BOOL)arg5;
-(void)link:(id)arg1 hostAwakeDidChange:(BOOL)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4;
-(void)link:(id)arg1 hasSpaceAvailable:(BOOL)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4;

@required
-(BOOL)link:(id)arg1 didReceivePacket:(/*function pointer*/void**)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;
-(void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
-(void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;

@end
