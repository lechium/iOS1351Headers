/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CMHealthTrackerInternal;

@interface CMHealthTracker : NSObject {

	CMHealthTrackerInternal* _internal;

}

@property (nonatomic,readonly) CMHealthTrackerInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isMetMinutesAvailable;
+(long long)isAuthorizedForMetMinutes;
+(BOOL)isVO2MaxDataAvailable;
+(long long)isAuthorizedForVO2MaxData;
-(id)init;
-(void)dealloc;
-(CMHealthTrackerInternal *)_internal;
-(void)queryMetMinutesFromDate:(id)arg1 toDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)queryVO2MaxInputsFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

