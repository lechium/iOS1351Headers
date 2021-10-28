/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:18 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class NSString, NSURL, NSNumber;

@interface SAMicroblogTwitterPostAuthor : SADomainObject

@property (assign,nonatomic) long long followersCount; 
@property (nonatomic,copy) NSString * fullName; 
@property (nonatomic,copy) NSURL * profileImageUrl; 
@property (nonatomic,copy) NSString * screenName; 
@property (nonatomic,copy) NSNumber * userId; 
@property (assign,nonatomic) BOOL verified; 
+(id)twitterPostAuthor;
+(id)twitterPostAuthorWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(void)setVerified:(BOOL)arg1 ;
-(id)encodedClassName;
-(BOOL)verified;
-(NSNumber *)userId;
-(void)setUserId:(NSNumber *)arg1 ;
-(long long)followersCount;
-(void)setFollowersCount:(long long)arg1 ;
-(NSURL *)profileImageUrl;
-(void)setProfileImageUrl:(NSURL *)arg1 ;
-(NSString *)screenName;
-(void)setScreenName:(NSString *)arg1 ;
@end
