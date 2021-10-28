/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NTKCircularAnalogDialColorPalette <NSObject>
@property (nonatomic,readonly) BOOL isMulticolorPalette; 
@required
-(id)circularDialFillColor;
-(BOOL)isMulticolorPalette;
-(id)colorForCircularTicksForMinute:(unsigned long long)arg1;
-(id)circularDialSubtickColor;
-(id)colorForCircularTicksForHour:(unsigned long long)arg1;
-(id)circularDialTickColor;

@end
