/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATMessage.h>

@class NSUUID, NSString, NSDictionary;

@interface CATNotificationMessage : CATMessage {

	NSUUID* _taskUUID;
	NSString* _name;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy) NSUUID * taskUUID;                    //@synthesize taskUUID=_taskUUID - In the implementation block
@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSUUID *)taskUUID;
-(id)initWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)setTaskUUID:(NSUUID *)arg1 ;
-(id)initWithTaskUUID:(id)arg1 name:(id)arg2 userInfo:(id)arg3 ;
@end

