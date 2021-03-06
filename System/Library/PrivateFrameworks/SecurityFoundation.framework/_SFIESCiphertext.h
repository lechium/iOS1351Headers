/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SecurityFoundation/_SFCiphertext.h>

@class _SFECPublicKey, NSData;

@interface _SFIESCiphertext : _SFCiphertext {

	id _iesCiphertextInternal;

}

@property (readonly) _SFECPublicKey * ephemeralSenderPublicKey; 
@property (readonly) NSData * authenticationCode; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)authenticationCode;
-(_SFECPublicKey *)ephemeralSenderPublicKey;
-(id)initWithCiphertext:(id)arg1 ephemeralSenderPublicKey:(id)arg2 authenticationCode:(id)arg3 ;
@end

