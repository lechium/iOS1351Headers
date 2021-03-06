/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/REAutomaticExportedInterface.h>

@class NSArray;

@interface _RERoutineData : NSObject <REAutomaticExportedInterface> {

	long long _mode;
	NSArray* _locationsOfInterest;

}

@property (assign,nonatomic) long long mode;                             //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSArray * locationsOfInterest;              //@synthesize locationsOfInterest=_locationsOfInterest - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(NSArray *)locationsOfInterest;
-(void)setLocationsOfInterest:(NSArray *)arg1 ;
-(BOOL)isEqualToRoutineData:(id)arg1 ;
@end

