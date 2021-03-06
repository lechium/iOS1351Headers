/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class RMConfiguration, NSString;

@interface RMPolicy : NSObject <NSSecureCoding> {

	RMConfiguration* _configuration;

}

@property (nonatomic,retain) RMConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSString * policyKey; 
+(BOOL)supportsSecureCoding;
+(id)policyKeyForConfiguration:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setConfiguration:(RMConfiguration *)arg1 ;
-(RMConfiguration *)configuration;
-(NSString *)policyKey;
-(BOOL)isEqualToPolicy:(id)arg1 ;
@end

