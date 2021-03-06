/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterFoundation/GKChallenge.h>

@class GKAchievement;

@interface GKAchievementChallenge : GKChallenge {

	GKAchievement* _achievement;

}

@property (nonatomic,retain) GKAchievement * achievement;              //@synthesize achievement=_achievement - In the implementation block
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
-(id)iconURLString;
-(id)iconSource;
-(id)detailGoalText;
-(id)composeGoalText;
-(id)alertGoalText;
-(id)smallIconURLString;
-(id)listTitleText;
-(id)listGoalText;
-(void)dealloc;
-(id)description;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setInternal:(id)arg1 ;
-(id)titleText;
-(GKAchievement *)achievement;
-(BOOL)detailsLoaded;
-(void)loadDetailsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setAchievement:(GKAchievement *)arg1 ;
-(id)detailGoalTextForPlayer:(id)arg1 withAchievement:(id)arg2 ;
@end

