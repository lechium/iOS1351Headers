/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICStoreRequestContext, NSUUID;

@interface ICMusicSubscriptionStatusRequest : NSObject <NSCopying, NSSecureCoding> {

	BOOL _shouldIgnoreCache;
	BOOL _allowsFallbackToExpiredStatus;
	BOOL _allowsFallbackToStatusNeedingReload;
	BOOL _shouldReturnLastKnownStatusOnly;
	ICStoreRequestContext* _storeRequestContext;
	long long _reason;
	long long _carrierBundleProvisioningStyle;
	NSUUID* _requestIdentifier;

}

@property (nonatomic,copy) ICStoreRequestContext * storeRequestContext;              //@synthesize storeRequestContext=_storeRequestContext - In the implementation block
@property (assign,nonatomic) long long reason;                                       //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreCache;                                 //@synthesize shouldIgnoreCache=_shouldIgnoreCache - In the implementation block
@property (assign,nonatomic) BOOL allowsFallbackToExpiredStatus;                     //@synthesize allowsFallbackToExpiredStatus=_allowsFallbackToExpiredStatus - In the implementation block
@property (assign,nonatomic) BOOL allowsFallbackToStatusNeedingReload;               //@synthesize allowsFallbackToStatusNeedingReload=_allowsFallbackToStatusNeedingReload - In the implementation block
@property (assign,nonatomic) BOOL shouldReturnLastKnownStatusOnly;                   //@synthesize shouldReturnLastKnownStatusOnly=_shouldReturnLastKnownStatusOnly - In the implementation block
@property (assign,nonatomic) long long carrierBundleProvisioningStyle;               //@synthesize carrierBundleProvisioningStyle=_carrierBundleProvisioningStyle - In the implementation block
@property (nonatomic,readonly) NSUUID * requestIdentifier;                           //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)reason;
-(void)setReason:(long long)arg1 ;
-(NSUUID *)requestIdentifier;
-(BOOL)shouldIgnoreCache;
-(void)setShouldIgnoreCache:(BOOL)arg1 ;
-(id)initWithStoreRequestContext:(id)arg1 ;
-(void)setCarrierBundleProvisioningStyle:(long long)arg1 ;
-(long long)carrierBundleProvisioningStyle;
-(void)setAllowsFallbackToExpiredStatus:(BOOL)arg1 ;
-(void)setAllowsFallbackToStatusNeedingReload:(BOOL)arg1 ;
-(ICStoreRequestContext *)storeRequestContext;
-(void)setStoreRequestContext:(ICStoreRequestContext *)arg1 ;
-(BOOL)allowsFallbackToExpiredStatus;
-(BOOL)allowsFallbackToStatusNeedingReload;
-(BOOL)shouldReturnLastKnownStatusOnly;
-(void)setShouldReturnLastKnownStatusOnly:(BOOL)arg1 ;
@end

