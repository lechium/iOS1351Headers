/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAML/SAMLBaseElement.h>

@class SAMLDSAKeyValue, SAMLRSAKeyValue;

@interface SAMLSignatureKeyValue : SAMLBaseElement

@property (nonatomic,readonly) SAMLDSAKeyValue * dsaKeyValue; 
@property (nonatomic,readonly) SAMLRSAKeyValue * rsaKeyValue; 
+(id)createElement:(id*)arg1 ;
-(SAMLDSAKeyValue *)dsaKeyValue;
-(SAMLRSAKeyValue *)rsaKeyValue;
@end

