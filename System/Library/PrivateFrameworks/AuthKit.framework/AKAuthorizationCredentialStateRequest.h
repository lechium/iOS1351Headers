/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AKAuthorizationCredentialStateRequest : NSObject <NSSecureCoding> {

	BOOL _shouldIgnoreUserID;
	BOOL _shouldIgnoreTeamID;
	NSString* _userID;
	NSString* _teamID;
	NSString* _clientID;
	NSString* _altDSID;

}

@property (nonatomic,copy) NSString * teamID;                      //@synthesize teamID=_teamID - In the implementation block
@property (nonatomic,copy) NSString * clientID;                    //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                     //@synthesize altDSID=_altDSID - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreUserID;              //@synthesize shouldIgnoreUserID=_shouldIgnoreUserID - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreTeamID;              //@synthesize shouldIgnoreTeamID=_shouldIgnoreTeamID - In the implementation block
@property (nonatomic,copy) NSString * userID;                      //@synthesize userID=_userID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)userID;
-(NSString *)teamID;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(void)setUserID:(NSString *)arg1 ;
-(void)setClientID:(NSString *)arg1 ;
-(NSString *)clientID;
-(void)setTeamID:(NSString *)arg1 ;
-(BOOL)shouldIgnoreUserID;
-(void)setShouldIgnoreUserID:(BOOL)arg1 ;
-(BOOL)shouldIgnoreTeamID;
-(void)setShouldIgnoreTeamID:(BOOL)arg1 ;
@end
