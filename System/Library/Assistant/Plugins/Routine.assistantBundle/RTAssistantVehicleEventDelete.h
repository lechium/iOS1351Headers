/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Assistant/Plugins/Routine.assistantBundle/Routine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SALocalSearchVehicleEventDelete.h>

@class RTRoutineManager;

@interface RTAssistantVehicleEventDelete : SALocalSearchVehicleEventDelete {

	RTRoutineManager* _routineManager;

}

@property (nonatomic,retain) RTRoutineManager * routineManager;              //@synthesize routineManager=_routineManager - In the implementation block
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(RTRoutineManager *)routineManager;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
@end

