/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsDonation/_CNDExtensionContext.h>
#import <libobjc.A.dylib/_CNDRemoteExtensionContextProtocol.h>

@class CNDonationExtensionRequestHandler, NSString;

@interface _CNDRemoteExtensionContext : _CNDExtensionContext <_CNDRemoteExtensionContextProtocol> {

	CNDonationExtensionRequestHandler* _requestHandler;

}

@property (nonatomic,retain) CNDonationExtensionRequestHandler * requestHandler;              //@synthesize requestHandler=_requestHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNDonationExtensionRequestHandler *)requestHandler;
-(void)setRequestHandler:(CNDonationExtensionRequestHandler *)arg1 ;
-(id)hostContext;
-(void)renewExpirationDateForDonatedValue:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)redonateAllValuesWithReason:(unsigned long long)arg1 ;
@end

