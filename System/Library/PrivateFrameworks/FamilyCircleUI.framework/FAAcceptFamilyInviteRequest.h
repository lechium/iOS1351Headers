/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleAccount/AAFamilyRequest.h>

@class NSString;

@interface FAAcceptFamilyInviteRequest : AAFamilyRequest {

	NSString* _inviteCode;

}

@property (nonatomic,copy) NSString * inviteCode;              //@synthesize inviteCode=_inviteCode - In the implementation block
-(BOOL)isUserInitiated;
-(id)urlRequest;
-(id)urlString;
-(NSString *)inviteCode;
-(void)setInviteCode:(NSString *)arg1 ;
@end

