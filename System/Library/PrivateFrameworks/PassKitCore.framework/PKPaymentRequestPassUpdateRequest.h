/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:43 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass, PKPassUpgradeRequest;

@interface PKPaymentRequestPassUpdateRequest : PKPaymentWebServiceRequest {

	PKPaymentPass* _pass;
	PKPassUpgradeRequest* _request;

}

@property (nonatomic,readonly) PKPaymentPass * pass;                        //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) PKPassUpgradeRequest * request;              //@synthesize request=_request - In the implementation block
-(PKPassUpgradeRequest *)request;
-(PKPaymentPass *)pass;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)initWithPaymentPass:(id)arg1 updateRequest:(id)arg2 ;
@end
