/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:09 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RPCompanionLinkXPCClientInterface
@optional
-(void)companionLinkPromptForPasswordType:(int)arg1 flags:(unsigned)arg2 throttleSeconds:(int)arg3;
-(void)companionLinkAuthCompleted:(id)arg1;
-(void)companionLinkFoundDevice:(id)arg1;
-(void)companionLinkLostDevice:(id)arg1;
-(void)companionLinkChangedDevice:(id)arg1 changes:(unsigned)arg2;
-(void)companionLinkLocalDeviceUpdated:(id)arg1;
-(void)companionLinkReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3;
-(void)companionLinkReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4;
-(void)xpcDiscoveryFoundEndpoint:(id)arg1;
-(void)xpcDiscoveryLostEndpoint:(id)arg1;
-(void)xpcDiscoveryChangedEndpoint:(id)arg1;
-(void)xpcServerAcceptSession:(id)arg1 completion:(/*^block*/id)arg2;
-(void)xpcServerShowPassword:(id)arg1 flags:(unsigned)arg2;
-(void)xpcServerHidePassword:(unsigned)arg1;

@end

