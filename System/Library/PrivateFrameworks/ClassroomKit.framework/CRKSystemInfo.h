/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate;

@interface CRKSystemInfo : NSObject {

	NSString* _buildVersion;
	NSString* _systemVersion;

}

@property (nonatomic,copy,readonly) NSString * buildVersion;                                     //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * systemVersion;                                    //@synthesize systemVersion=_systemVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long platform; 
@property (nonatomic,copy,readonly) NSDate * bootDate; 
@property (getter=isEphemeralMultiUser,nonatomic,readonly) BOOL ephemeralMultiUser; 
+(id)sharedSystemInfo;
-(id)init;
-(NSString *)systemVersion;
-(unsigned long long)platform;
-(BOOL)isEphemeralMultiUser;
-(NSString *)buildVersion;
-(void)populateVersions;
-(NSDate *)bootDate;
@end
