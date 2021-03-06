/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:58 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <HealthDaemon/HealthDaemon-Structs.h>
@class HDSourceEntity, NSString;

@interface HDSourceRevision : NSObject {

	HDSourceEntity* _sourceEntity;
	NSString* _version;
	NSString* _productType;
	SCD_Struct_HD6 _operatingSystemVersion;

}

@property (nonatomic,readonly) HDSourceEntity * sourceEntity;                      //@synthesize sourceEntity=_sourceEntity - In the implementation block
@property (nonatomic,readonly) NSString * version;                                 //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSString * productType;                             //@synthesize productType=_productType - In the implementation block
@property (nonatomic,readonly) SCD_Struct_HD6 operatingSystemVersion;              //@synthesize operatingSystemVersion=_operatingSystemVersion - In the implementation block
-(NSString *)version;
-(SCD_Struct_HD6)operatingSystemVersion;
-(NSString *)productType;
-(HDSourceEntity *)sourceEntity;
-(id)initWithSource:(id)arg1 version:(id)arg2 productType:(id)arg3 operatingSystemVersion:(SCD_Struct_HD6)arg4 ;
@end

