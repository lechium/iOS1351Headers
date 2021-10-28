/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:29 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOUserSessionEntity;

@interface GEOUserSessionSnapshot : NSObject {

	GEOUserSessionEntity* _shortSessionEntity;
	GEOUserSessionEntity* _longSessionEntity;
	GEOUserSessionEntity* _thirtyDayCountsSessionEntity;
	GEOUserSessionEntity* _navSessionEntity;
	GEOUserSessionEntity* _cohortSessionEntity;
	double _usageEventTime;

}

@property (nonatomic,retain) GEOUserSessionEntity * shortSessionEntity;                        //@synthesize shortSessionEntity=_shortSessionEntity - In the implementation block
@property (nonatomic,retain) GEOUserSessionEntity * longSessionEntity;                         //@synthesize longSessionEntity=_longSessionEntity - In the implementation block
@property (nonatomic,retain) GEOUserSessionEntity * thirtyDayCountsSessionEntity;              //@synthesize thirtyDayCountsSessionEntity=_thirtyDayCountsSessionEntity - In the implementation block
@property (nonatomic,retain) GEOUserSessionEntity * navSessionEntity;                          //@synthesize navSessionEntity=_navSessionEntity - In the implementation block
@property (nonatomic,retain) GEOUserSessionEntity * cohortSessionEntity;                       //@synthesize cohortSessionEntity=_cohortSessionEntity - In the implementation block
@property (assign,nonatomic) double usageEventTime;                                            //@synthesize usageEventTime=_usageEventTime - In the implementation block
-(id)initWithShortSessionEntity:(id)arg1 longSessionEntity:(id)arg2 thirtyDayCountsSessionEntity:(id)arg3 navSessionEntity:(id)arg4 cohortSessionEntity:(id)arg5 ;
-(GEOUserSessionEntity *)shortSessionEntity;
-(void)setShortSessionEntity:(GEOUserSessionEntity *)arg1 ;
-(GEOUserSessionEntity *)longSessionEntity;
-(void)setLongSessionEntity:(GEOUserSessionEntity *)arg1 ;
-(GEOUserSessionEntity *)thirtyDayCountsSessionEntity;
-(void)setThirtyDayCountsSessionEntity:(GEOUserSessionEntity *)arg1 ;
-(GEOUserSessionEntity *)navSessionEntity;
-(void)setNavSessionEntity:(GEOUserSessionEntity *)arg1 ;
-(GEOUserSessionEntity *)cohortSessionEntity;
-(void)setCohortSessionEntity:(GEOUserSessionEntity *)arg1 ;
-(double)usageEventTime;
-(void)setUsageEventTime:(double)arg1 ;
@end
