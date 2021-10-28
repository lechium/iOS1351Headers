/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMClient.SearchFilterDevice : NSObject <NSSecureCoding> {

	 ownerName;
	 ownerDsid;
	 deviceName;
	 deviceClass;
	 productName;
	 productType;

}

@property (readonly,nonatomic) NSString * ownerName; 
@property (readonly,nonatomic) NSString * ownerDsid; 
@property (readonly,nonatomic) NSString * deviceName; 
@property (readonly,nonatomic) NSString * deviceClass; 
@property (readonly,nonatomic) NSString * productName; 
@property (readonly,nonatomic) NSString * productType; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)ownerName;
-(NSString *)deviceName;
-(NSString *)productType;
-(NSString *)deviceClass;
-(NSString *)productName;
-(NSString *)ownerDsid;
-(id)initWithOwnerName:(id)arg1 ownerDsid:(id)arg2 deviceName:(id)arg3 deviceClass:(id)arg4 productName:(id)arg5 productType:(id)arg6 ;
@end
