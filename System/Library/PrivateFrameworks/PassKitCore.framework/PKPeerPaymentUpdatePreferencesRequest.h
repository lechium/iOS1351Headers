/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:44 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class PKPeerPaymentPreferences;

@interface PKPeerPaymentUpdatePreferencesRequest : PKPeerPaymentWebServiceRequest {

	PKPeerPaymentPreferences* _peerPaymentPreferences;

}

@property (nonatomic,retain) PKPeerPaymentPreferences * peerPaymentPreferences;              //@synthesize peerPaymentPreferences=_peerPaymentPreferences - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(PKPeerPaymentPreferences *)peerPaymentPreferences;
-(id)initWithPeerPaymentPreferences:(id)arg1 ;
-(void)setPeerPaymentPreferences:(PKPeerPaymentPreferences *)arg1 ;
@end
