/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKScoreInternal, GKGame, NSString, NSDate, GKPlayer;

@interface GKScore : NSObject <NSCopying, NSCoding, NSSecureCoding> {

	BOOL _shouldSetDefaultLeaderboard;
	GKScoreInternal* _internal;
	GKGame* _game;

}

@property (nonatomic,copy) NSString * category; 
@property (retain) GKScoreInternal * internal;                                   //@synthesize internal=_internal - In the implementation block
@property (retain,readonly) NSString * playerID; 
@property (assign,nonatomic) long long rank; 
@property (nonatomic,copy) NSString * formattedValue; 
@property (nonatomic,retain) NSString * groupLeaderboardIdentifier; 
@property (assign) BOOL valueSet; 
@property (nonatomic,retain) GKGame * game;                                      //@synthesize game=_game - In the implementation block
@property (assign,nonatomic) long long value; 
@property (nonatomic,copy) NSString * leaderboardIdentifier; 
@property (assign,nonatomic) unsigned long long context; 
@property (nonatomic,retain,readonly) NSDate * date; 
@property (nonatomic,retain,readonly) GKPlayer * player; 
@property (assign,nonatomic) BOOL shouldSetDefaultLeaderboard;                   //@synthesize shouldSetDefaultLeaderboard=_shouldSetDefaultLeaderboard - In the implementation block
+(void)reportScores:(id)arg1 withEligibleChallenges:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(BOOL)supportsSecureCoding;
+(void)reportScores:(id)arg1 whileScreeningChallenges:(BOOL)arg2 withEligibleChallenges:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
+(void)reportScores:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)activityViewControllerPlaceholderItems:(id)arg1 ;
-(id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2 ;
-(long long)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2 ;
-(id)activityViewControllerSubject:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2 ;
-(id)activityViewControllerOperation:(id)arg1 ;
-(BOOL)canBeShared;
-(void)_gkSetSharingInfo:(id)arg1 ;
-(id)fetchSharingInfo;
-(id)_gkSharingInfo;
-(id)challengeComposeControllerWithMessage:(id)arg1 players:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)challengeComposeControllerWithPlayers:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)issueChallengeToPlayers:(id)arg1 message:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(GKScoreInternal *)internal;
-(void)setInternal:(GKScoreInternal *)arg1 ;
-(id)initWithCategory:(id)arg1 ;
-(GKPlayer *)player;
-(NSString *)playerID;
-(GKGame *)game;
-(void)setGame:(GKGame *)arg1 ;
-(id)initWithLeaderboardIdentifier:(id)arg1 player:(id)arg2 ;
-(id)initWithInternalRepresentation:(id)arg1 playerID:(id)arg2 ;
-(id)initWithInternalRepresentation:(id)arg1 playerInternal:(id)arg2 ;
-(id)initWithLeaderboardIdentifier:(id)arg1 ;
-(BOOL)shouldSetDefaultLeaderboard;
-(id)initWithLeaderboardIdentifier:(id)arg1 forPlayer:(id)arg2 ;
-(void)reportScoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setShouldSetDefaultLeaderboard:(BOOL)arg1 ;
@end

