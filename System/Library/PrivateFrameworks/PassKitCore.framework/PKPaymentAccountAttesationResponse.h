/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:44 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSData;

@interface PKPaymentAccountAttesationResponse : PKPaymentWebServiceResponse {

	NSData* _attestation;

}

@property (nonatomic,readonly) NSData * attestation;              //@synthesize attestation=_attestation - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSData *)attestation;
@end

