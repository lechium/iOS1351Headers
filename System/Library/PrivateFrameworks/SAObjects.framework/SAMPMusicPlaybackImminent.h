/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:18 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAMPMusicPlaybackImminent : SADomainCommand

@property (nonatomic,copy) NSString * preloadedUserSharedUserId; 
+(id)musicPlaybackImminent;
+(id)musicPlaybackImminentWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSString *)preloadedUserSharedUserId;
-(void)setPreloadedUserSharedUserId:(NSString *)arg1 ;
@end

