/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoWeatherComplicationsCompanion/NanoWeatherComplicationsCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKFullColorImageView.h>

@protocol CLKMonochromeFilterProvider;
@class CLKDevice, UILabel, NSString;

@interface NWCWindObservationsView : UIView <CLKFullColorImageView> {

	id<CLKMonochromeFilterProvider> _filterProvider;
	CLKDevice* _device;
	UILabel* _windDirectionAbbreviationLabel;
	UILabel* _windSpeedLabel;
	UILabel* _windUnitLabel;

}

@property (nonatomic,retain) CLKDevice * device;                                                 //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) UILabel * windDirectionAbbreviationLabel;                           //@synthesize windDirectionAbbreviationLabel=_windDirectionAbbreviationLabel - In the implementation block
@property (nonatomic,retain) UILabel * windSpeedLabel;                                           //@synthesize windSpeedLabel=_windSpeedLabel - In the implementation block
@property (nonatomic,retain) UILabel * windUnitLabel;                                            //@synthesize windUnitLabel=_windUnitLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
-(CLKDevice *)device;
-(void)setDevice:(CLKDevice *)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(id)initFullColorImageViewWithDevice:(id)arg1 ;
-(void)pauseLiveFullColorImageView;
-(void)resumeLiveFullColorImageView;
-(void)configureWithImageProvider:(id)arg1 reason:(long long)arg2 ;
-(UILabel *)windDirectionAbbreviationLabel;
-(UILabel *)windSpeedLabel;
-(UILabel *)windUnitLabel;
-(void)_applyConstraintsWithLayoutConstants:(SCD_Struct_NW3)arg1 ;
-(void)_processWindSpeed:(id)arg1 unit:(id)arg2 directionAbbreviation:(id)arg3 ;
-(void)setWindDirectionAbbreviationLabel:(UILabel *)arg1 ;
-(void)setWindSpeedLabel:(UILabel *)arg1 ;
-(void)setWindUnitLabel:(UILabel *)arg1 ;
@end

