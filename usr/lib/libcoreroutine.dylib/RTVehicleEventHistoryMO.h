/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSNumber;

@interface RTVehicleEventHistoryMO : NSManagedObject

@property (nonatomic,retain) NSDate * date; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSDate * locDate; 
@property (nonatomic,retain) NSNumber * locLatitude; 
@property (nonatomic,retain) NSNumber * locLongitude; 
@property (nonatomic,retain) NSNumber * locUncertainty; 
+(id)managedObjectWithVehicleEvent:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

