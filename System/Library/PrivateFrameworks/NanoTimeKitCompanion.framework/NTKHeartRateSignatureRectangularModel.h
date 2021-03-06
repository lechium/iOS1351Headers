/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKHeartRateModel.h>

@class HKHeartRateSummary;

@interface NTKHeartRateSignatureRectangularModel : NTKHeartRateModel {

	HKHeartRateSummary* _mostRecentHeartRateSummary;

}

@property (nonatomic,retain) HKHeartRateSummary * mostRecentHeartRateSummary;              //@synthesize mostRecentHeartRateSummary=_mostRecentHeartRateSummary - In the implementation block
-(void)manager:(id)arg1 receivedLatestHeartRateSummary:(id)arg2 ;
-(HKHeartRateSummary *)mostRecentHeartRateSummary;
-(void)setMostRecentHeartRateSummary:(HKHeartRateSummary *)arg1 ;
@end

