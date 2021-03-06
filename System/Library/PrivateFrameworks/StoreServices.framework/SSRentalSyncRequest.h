/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:33 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSArray, NSNumber, NSString;

@interface SSRentalSyncRequest : SSRequest <SSXPCCoding> {

	NSArray* _sinfs;
	NSNumber* _accountIdentifier;
	NSNumber* _rentalKeyIdentifier;

}

@property (readonly) NSArray * sinfs;                               //@synthesize sinfs=_sinfs - In the implementation block
@property (readonly) NSNumber * accountIdentifier;                  //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (readonly) NSNumber * rentalKeyIdentifier;                //@synthesize rentalKeyIdentifier=_rentalKeyIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)accountIdentifier;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2 ;
-(NSArray *)sinfs;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithConnectionResponseBlock:(/*^block*/id)arg1 ;
-(id)initWithSinfs:(id)arg1 ;
-(NSNumber *)rentalKeyIdentifier;
@end

