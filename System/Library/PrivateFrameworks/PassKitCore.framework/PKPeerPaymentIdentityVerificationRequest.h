/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:44 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSArray, NSString;

@interface PKPeerPaymentIdentityVerificationRequest : PKPeerPaymentWebServiceRequest {

	BOOL _devSigned;
	NSArray* _certificates;
	NSString* _prerequisiteIdentifier;

}

@property (nonatomic,copy) NSArray * certificates;                         //@synthesize certificates=_certificates - In the implementation block
@property (assign,nonatomic) BOOL devSigned;                               //@synthesize devSigned=_devSigned - In the implementation block
@property (nonatomic,copy) NSString * prerequisiteIdentifier;              //@synthesize prerequisiteIdentifier=_prerequisiteIdentifier - In the implementation block
-(NSArray *)certificates;
-(void)setCertificates:(NSArray *)arg1 ;
-(BOOL)devSigned;
-(void)setDevSigned:(BOOL)arg1 ;
-(NSString *)prerequisiteIdentifier;
-(void)setPrerequisiteIdentifier:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5 ;
@end
