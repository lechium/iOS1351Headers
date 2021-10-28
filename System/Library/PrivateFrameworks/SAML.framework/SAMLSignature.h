/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAML/SAMLBaseElement.h>

@class NSString, SAMLSignedInfo, NSData, SAMLKeyInfo;

@interface SAMLSignature : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) SAMLSignedInfo * signedInfo; 
@property (nonatomic,readonly) NSData * signatureValue; 
@property (nonatomic,readonly) NSString * signatureValueId; 
@property (nonatomic,readonly) SAMLKeyInfo * keyInfo; 
+(id)createElement:(id*)arg1 ;
-(BOOL)isValid;
-(NSString *)identifier;
-(SAMLKeyInfo *)keyInfo;
-(SAMLSignedInfo *)signedInfo;
-(NSData *)signatureValue;
-(NSString *)signatureValueId;
@end
