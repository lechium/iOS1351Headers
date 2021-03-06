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

@interface RMModelStatusAccountIncomingMail : RMModelStatusBase {

	NSString* _statusIdentifier;
	NSString* _statusDescription;
	NSString* _statusHostname;
	NSNumber* _statusPort;
	NSString* _statusUsername;
	NSNumber* _statusAuthenticated;
	NSNumber* _statusIsMailEnabled;
	NSNumber* _statusAreNotesEnabled;

}

@property (nonatomic,copy) NSString * statusIdentifier;                   //@synthesize statusIdentifier=_statusIdentifier - In the implementation block
@property (nonatomic,copy) NSString * statusDescription;                  //@synthesize statusDescription=_statusDescription - In the implementation block
@property (nonatomic,copy) NSString * statusHostname;                     //@synthesize statusHostname=_statusHostname - In the implementation block
@property (nonatomic,copy) NSNumber * statusPort;                         //@synthesize statusPort=_statusPort - In the implementation block
@property (nonatomic,copy) NSString * statusUsername;                     //@synthesize statusUsername=_statusUsername - In the implementation block
@property (nonatomic,copy) NSNumber * statusAuthenticated;                //@synthesize statusAuthenticated=_statusAuthenticated - In the implementation block
@property (nonatomic,copy) NSNumber * statusIsMailEnabled;                //@synthesize statusIsMailEnabled=_statusIsMailEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusAreNotesEnabled;              //@synthesize statusAreNotesEnabled=_statusAreNotesEnabled - In the implementation block
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedStatusKeys;
+(id)buildWithIdentifier:(id)arg1 description:(id)arg2 hostname:(id)arg3 port:(id)arg4 username:(id)arg5 authenticated:(id)arg6 isMailEnabled:(id)arg7 areNotesEnabled:(id)arg8 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)statusDescription;
-(void)setStatusDescription:(NSString *)arg1 ;
-(void)setStatusIdentifier:(NSString *)arg1 ;
-(NSString *)statusIdentifier;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(void)setStatusHostname:(NSString *)arg1 ;
-(void)setStatusPort:(NSNumber *)arg1 ;
-(void)setStatusUsername:(NSString *)arg1 ;
-(void)setStatusAuthenticated:(NSNumber *)arg1 ;
-(NSString *)statusHostname;
-(NSNumber *)statusPort;
-(NSString *)statusUsername;
-(NSNumber *)statusAuthenticated;
-(void)setStatusIsMailEnabled:(NSNumber *)arg1 ;
-(void)setStatusAreNotesEnabled:(NSNumber *)arg1 ;
-(NSNumber *)statusIsMailEnabled;
-(NSNumber *)statusAreNotesEnabled;
@end

