/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <BiometricKit/BiometricKit-Structs.h>
@class NSArray;

@interface BKEnrollPearlProgressInfo : NSObject {

	long long _percentageCompleted;
	NSArray* _enrolledPoses;

}

@property (assign,nonatomic) long long percentageCompleted;              //@synthesize percentageCompleted=_percentageCompleted - In the implementation block
@property (nonatomic,retain) NSArray * enrolledPoses;                    //@synthesize enrolledPoses=_enrolledPoses - In the implementation block
-(id)dictionary;
-(id)initFromDictionary:(id)arg1 ;
-(id)initWithPercents:(long long)arg1 ;
-(id)initFromEnrollInfo:(const SCD_Struct_BK11*)arg1 ;
-(long long)percentageCompleted;
-(void)setPercentageCompleted:(long long)arg1 ;
-(NSArray *)enrolledPoses;
-(void)setEnrolledPoses:(NSArray *)arg1 ;
@end

