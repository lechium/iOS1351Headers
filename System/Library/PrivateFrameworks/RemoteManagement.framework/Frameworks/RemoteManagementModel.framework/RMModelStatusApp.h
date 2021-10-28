/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelStatusBase.h>

@class NSString, NSNumber;

@interface RMModelStatusApp : RMModelStatusBase {

	NSString* _statusBundleId;
	NSString* _statusName;
	NSString* _statusVersion;
	NSNumber* _statusIsSystem;
	NSNumber* _statusIsManaged;

}

@property (nonatomic,copy) NSString * statusBundleId;               //@synthesize statusBundleId=_statusBundleId - In the implementation block
@property (nonatomic,copy) NSString * statusName;                   //@synthesize statusName=_statusName - In the implementation block
@property (nonatomic,copy) NSString * statusVersion;                //@synthesize statusVersion=_statusVersion - In the implementation block
@property (nonatomic,copy) NSNumber * statusIsSystem;               //@synthesize statusIsSystem=_statusIsSystem - In the implementation block
@property (nonatomic,copy) NSNumber * statusIsManaged;              //@synthesize statusIsManaged=_statusIsManaged - In the implementation block
+(id)allowedStatusKeys;
+(id)buildWithBundleId:(id)arg1 name:(id)arg2 version:(id)arg3 isSystem:(id)arg4 isManaged:(id)arg5 ;
+(id)buildRequiredOnlyWithBundleId:(id)arg1 isSystem:(id)arg2 isManaged:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStatusVersion:(NSString *)arg1 ;
-(NSString *)statusVersion;
-(void)setStatusName:(NSString *)arg1 ;
-(NSString *)statusName;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(void)setStatusBundleId:(NSString *)arg1 ;
-(void)setStatusIsSystem:(NSNumber *)arg1 ;
-(void)setStatusIsManaged:(NSNumber *)arg1 ;
-(NSString *)statusBundleId;
-(NSNumber *)statusIsSystem;
-(NSNumber *)statusIsManaged;
@end
