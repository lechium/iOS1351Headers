/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleAccount/AAFamilyRequest.h>

@class NSNumber, SSAccount, NSString;

@interface FAFamilyMemberPhotoRequest : AAFamilyRequest {

	NSNumber* _familyMemberDSID;
	SSAccount* _iTunesAccount;
	NSString* _serverCacheTag;

}

@property (nonatomic,copy) NSNumber * familyMemberDSID;                                       //@synthesize familyMemberDSID=_familyMemberDSID - In the implementation block
@property (setter=setiTunesAccount:,nonatomic,retain) SSAccount * iTunesAccount;              //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
@property (nonatomic,copy) NSString * serverCacheTag;                                         //@synthesize serverCacheTag=_serverCacheTag - In the implementation block
+(Class)responseClass;
-(id)urlRequest;
-(id)urlString;
-(SSAccount *)iTunesAccount;
-(NSString *)serverCacheTag;
-(void)setServerCacheTag:(NSString *)arg1 ;
-(void)setiTunesAccount:(id)arg1 ;
-(void)setFamilyMemberDSID:(NSNumber *)arg1 ;
-(NSNumber *)familyMemberDSID;
@end

