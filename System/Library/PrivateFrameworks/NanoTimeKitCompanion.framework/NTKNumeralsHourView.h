/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIImageView.h>

@class NTKNumeralsAnalogFaceConfiguration, UIColor;

@interface NTKNumeralsHourView : UIImageView {

	long long _hour;
	unsigned long long _style;
	NTKNumeralsAnalogFaceConfiguration* _faceConfiguration;
	UIColor* _appliedColor;
	BOOL _isLoaded;

}

@property (readonly) BOOL isLoaded;              //@synthesize isLoaded=_isLoaded - In the implementation block
-(void)load;
-(BOOL)isLoaded;
-(void)layoutSubviews;
-(id)initUnloadedHourViewForHour:(long long)arg1 style:(unsigned long long)arg2 faceConfiguration:(id)arg3 ;
-(id)_imageNameForStyle:(unsigned long long)arg1 hour:(long long)arg2 ;
-(void)applyFaceColorFromFaceConfiguration:(id)arg1 ;
-(id)_hourColorForDevice:(id)arg1 faceColor:(unsigned long long)arg2 colorSchemeUnits:(unsigned long long)arg3 ;
-(void)_applyTintColor:(id)arg1 ;
-(id)initForHour:(long long)arg1 style:(unsigned long long)arg2 faceConfiguration:(id)arg3 ;
-(void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 faceConfiguration:(id)arg4 ;
@end

