/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DNDSScheduleManagerDataSource;
@class DNDSModeAssertionManager, DNDSScheduleSettings;

@interface DNDSScheduleManager : NSObject {

	DNDSModeAssertionManager* _modeAssertionManager;
	DNDSScheduleSettings* _currentScheduleSettings;
	id<DNDSScheduleManagerDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<DNDSScheduleManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id<DNDSScheduleManagerDataSource>)dataSource;
-(void)setDataSource:(id<DNDSScheduleManagerDataSource>)arg1 ;
-(void)refresh;
-(void)_refreshWithScheduleSettings:(id)arg1 context:(id)arg2 ;
-(id)initWithModeAssertionManager:(id)arg1 ;
@end

