/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:32 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface SSVSAPSignaturePolicy : NSObject <NSCopying> {

	long long _policyType;
	NSArray* _signatureComponents;

}

@property (nonatomic,readonly) long long policyType;                            //@synthesize policyType=_policyType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * signatureComponents;              //@synthesize signatureComponents=_signatureComponents - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPolicyType:(long long)arg1 ;
-(id)initWithSignedActionsDictionary:(id)arg1 ;
-(id)initWithPolicyType:(long long)arg1 signatureComponents:(id)arg2 ;
-(id)dataToSignWithURLResponse:(id)arg1 responseData:(id)arg2 ;
-(long long)policyType;
-(id)dataToSignWithURLRequest:(id)arg1 ;
-(id)_dataToSignWithDataSource:(id)arg1 ;
-(id)dataToSignWithRequestProperties:(id)arg1 ;
-(NSArray *)signatureComponents;
@end
