/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SecurityFoundation/SFSymmetricEncryptionOperation.h>

@class _SFTripleDESKeySpecifier;

@interface SFTripleDESEncryptionOperation : SFSymmetricEncryptionOperation {

	id _tripleDESEncryptionOperationInternal;

}

@property (nonatomic,copy) _SFTripleDESKeySpecifier * encryptionKeySpecifier; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithKeySpecifier:(id)arg1 mode:(long long)arg2 ;
-(id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
@end
