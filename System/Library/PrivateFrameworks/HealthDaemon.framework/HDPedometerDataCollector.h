/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:58 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDCoreMotionDataCollector.h>
#import <libobjc.A.dylib/HDUserCharacteristicsProfileObserver.h>

@class NSNumber, NSString;

@interface HDPedometerDataCollector : HDCoreMotionDataCollector <HDUserCharacteristicsProfileObserver> {

	NSNumber* _userCondition;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isPedometerDataCollectionSupported;
-(void)dealloc;
-(id)persistentIdentifier;
-(id)initWithProfile:(id)arg1 ;
-(void)userCharacteristicsManager:(id)arg1 didUpdateUserProfile:(id)arg2 ;
-(Class)coreMotionDatumClass;
-(id)collectedTypes;
-(id)queue_newDataSource;
-(double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3 ;
-(BOOL)queue_userConditionIsSet;
-(BOOL)queue_userIsAbleBodied;
@end

