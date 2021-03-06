/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class PKPaymentPass, NSError;

@interface NPKPaymentProvisioningFlowControllerProvisioningResultStepContext : NPKPaymentProvisioningFlowStepContext {

	BOOL _cardAdded;
	PKPaymentPass* _provisionedPass;
	NSError* _error;

}

@property (assign,nonatomic) BOOL cardAdded;                               //@synthesize cardAdded=_cardAdded - In the implementation block
@property (nonatomic,retain) PKPaymentPass * provisionedPass;              //@synthesize provisionedPass=_provisionedPass - In the implementation block
@property (nonatomic,retain) NSError * error;                              //@synthesize error=_error - In the implementation block
-(id)description;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(PKPaymentPass *)provisionedPass;
-(void)setProvisionedPass:(PKPaymentPass *)arg1 ;
-(void)setCardAdded:(BOOL)arg1 ;
-(BOOL)cardAdded;
@end

