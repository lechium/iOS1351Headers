/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HAPSecuritySessionDelegate <NSObject>
@optional
-(void)securitySessionIsOpening:(id)arg1;
-(void)securitySessionDidOpen:(id)arg1;
-(void)securitySession:(id)arg1 didCloseWithError:(id)arg2;

@required
-(id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id*)arg2;
-(id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id*)arg3;
-(void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;

@end

