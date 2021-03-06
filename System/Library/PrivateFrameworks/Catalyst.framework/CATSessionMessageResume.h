/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATSessionMessage.h>

@class NSUUID, NSDictionary;

@interface CATSessionMessageResume : CATSessionMessage {

	NSUUID* _sessionUUID;
	NSDictionary* _clientUserInfo;

}

@property (nonatomic,copy) NSUUID * sessionUUID;                       //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (nonatomic,copy) NSDictionary * clientUserInfo;              //@synthesize clientUserInfo=_clientUserInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)sessionUUID;
-(void)setSessionUUID:(NSUUID *)arg1 ;
-(NSDictionary *)clientUserInfo;
-(id)initWithSessionUUID:(id)arg1 ;
-(void)setClientUserInfo:(NSDictionary *)arg1 ;
@end

