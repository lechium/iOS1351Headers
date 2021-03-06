/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:09 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INSpeakableString, NSNumber;


@protocol INStartWorkoutIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * workoutName; 
@property (nonatomic,copy) NSNumber * goalValue; 
@property (assign,nonatomic) long long workoutGoalUnitType; 
@property (assign,nonatomic) long long workoutLocationType; 
@property (nonatomic,copy) NSNumber * isOpenEnded; 
@required
-(id)init;
-(INSpeakableString *)workoutName;
-(void)setWorkoutName:(id)arg1;
-(NSNumber *)goalValue;
-(void)setGoalValue:(id)arg1;
-(NSNumber *)isOpenEnded;
-(void)setIsOpenEnded:(id)arg1;
-(long long)workoutGoalUnitType;
-(void)setWorkoutGoalUnitType:(long long)arg1;
-(long long)workoutLocationType;
-(void)setWorkoutLocationType:(long long)arg1;

@end

