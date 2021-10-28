/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSString, HMDAccessoryVersion, NSArray;

@interface HMDVendorModelEntry : HMFObject {

	NSString* _model;
	NSString* _manufacturer;
	NSString* _appBundleID;
	NSString* _appStoreID;
	HMDAccessoryVersion* _firmwareVersion;
	NSString* _productData;
	NSArray* _productDataAlternates;

}

@property (nonatomic,readonly) NSString * model;                                   //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) NSString * manufacturer;                            //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) NSString * appBundleID;                             //@synthesize appBundleID=_appBundleID - In the implementation block
@property (nonatomic,readonly) NSString * appStoreID;                              //@synthesize appStoreID=_appStoreID - In the implementation block
@property (nonatomic,readonly) HMDAccessoryVersion * firmwareVersion;              //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,readonly) NSString * productData;                             //@synthesize productData=_productData - In the implementation block
@property (nonatomic,readonly) NSArray * productDataAlternates;                    //@synthesize productDataAlternates=_productDataAlternates - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)appBundleID;
-(NSString *)model;
-(HMDAccessoryVersion *)firmwareVersion;
-(NSString *)manufacturer;
-(id)attributeDescriptions;
-(NSString *)productData;
-(NSString *)appStoreID;
-(NSArray *)productDataAlternates;
-(id)initWithManufacturer:(id)arg1 model:(id)arg2 appBundleID:(id)arg3 appStoreID:(id)arg4 firmwareVersion:(id)arg5 productData:(id)arg6 productDataAlternates:(id)arg7 ;
@end
