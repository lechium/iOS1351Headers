/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/CRKIdentity.h>

@protocol CRKCertificate, CRKPrivateKey;
@class NSString;

@interface CRKInMemoryIdentity : NSObject <CRKIdentity> {

	id<CRKCertificate> _certificate;
	id<CRKPrivateKey> _privateKey;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CRKCertificate> certificate;                 //@synthesize certificate=_certificate - In the implementation block
@property (nonatomic,readonly) id<CRKPrivateKey> privateKey;                   //@synthesize privateKey=_privateKey - In the implementation block
@property (nonatomic,readonly) SecIdentityRef underlyingIdentity; 
+(id)identityWithConfiguration:(id)arg1 validityDateInterval:(id)arg2 ;
-(id<CRKCertificate>)certificate;
-(id<CRKPrivateKey>)privateKey;
-(SecIdentityRef)underlyingIdentity;
-(id)initWithCertificate:(id)arg1 privateKey:(id)arg2 ;
@end

