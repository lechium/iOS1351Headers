/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:00 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@interface VCAudioPowerSpectrumBin : NSObject {

	VCRange _frequencyRange;
	float _powerLevel;

}

@property (assign,nonatomic) VCRange frequencyRange;              //@synthesize frequencyRange=_frequencyRange - In the implementation block
@property (assign,nonatomic) float powerLevel;                    //@synthesize powerLevel=_powerLevel - In the implementation block
-(id)description;
-(float)powerLevel;
-(void)setPowerLevel:(float)arg1 ;
-(VCRange)frequencyRange;
-(id)initWithFrequencyRange:(VCRange)arg1 ;
-(void)setFrequencyRange:(VCRange)arg1 ;
@end

