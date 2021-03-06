/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DeviceManagement/DMFTaskRequest.h>

@class NSArray;

@interface DMFFetchSecurityInformationRequest : DMFTaskRequest {

	NSArray* _infoKeys;

}

@property (nonatomic,copy) NSArray * infoKeys;              //@synthesize infoKeys=_infoKeys - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
+(id)allPlatformSecurityInfoKeys;
+(id)iOSSecurityInfoKeys;
+(id)currentPlatformSecurityInfoKeys;
+(id)macOSSecurityInfoKeys;
+(id)tvOSSecurityInfoKeys;
+(id)watchOSSecurityInfoKeys;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)infoKeys;
-(void)setInfoKeys:(NSArray *)arg1 ;
@end

