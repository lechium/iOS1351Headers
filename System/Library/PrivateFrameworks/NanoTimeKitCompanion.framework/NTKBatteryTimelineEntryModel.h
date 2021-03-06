/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@interface NTKBatteryTimelineEntryModel : NTKTimelineEntryModel {

	float _level;
	long long _state;

}

@property (assign,nonatomic) float level;                  //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) long long state;              //@synthesize state=_state - In the implementation block
-(float)level;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setLevel:(float)arg1 ;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(id)_newUtilitarianSmallFlatTemplate;
-(id)_newUtilitarianLargeTemplate;
-(id)_signatureCircularTemplate;
-(id)_signatureBezelTemplate;
-(id)_signatureCornerTemplate;
-(id)_newBatteryTemplateForFamily:(long long)arg1 ;
-(id)_levelTintColor;
-(id)_ringTextProvider;
@end

