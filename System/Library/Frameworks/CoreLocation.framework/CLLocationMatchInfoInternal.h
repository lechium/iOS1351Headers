/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CLLocationMatchInfoInternal : NSObject <NSCopying> {

	long long fMatchQuality;
	CLLocationCoordinate2D fMatchCoordinate;
	double fMatchCourse;
	int fMatchFormOfWay;
	int fMatchRoadClass;
	BOOL fMatchShifted;
	NSData* fMatchDataArray;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMatchQuality:(long long)arg1 matchCoordinate:(CLLocationCoordinate2D)arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(BOOL)arg6 matchDataArray:(id)arg7 ;
@end
