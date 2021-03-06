/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKGaugeProvider, CLKTextProvider, CLKFullColorImageProvider;

@interface CLKComplicationTemplateGraphicCornerMeteredGaugeText : CLKComplicationTemplate {

	CLKGaugeProvider* _gaugeProvider;
	CLKTextProvider* _leadingTextProvider;
	CLKTextProvider* _trailingTextProvider;
	CLKTextProvider* _outerTextProvider;
	CLKFullColorImageProvider* _outerImageProvider;

}

@property (nonatomic,copy) CLKGaugeProvider * gaugeProvider;                            //@synthesize gaugeProvider=_gaugeProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * leadingTextProvider;                       //@synthesize leadingTextProvider=_leadingTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * trailingTextProvider;                      //@synthesize trailingTextProvider=_trailingTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * outerTextProvider;                         //@synthesize outerTextProvider=_outerTextProvider - In the implementation block
@property (nonatomic,copy) CLKFullColorImageProvider * outerImageProvider;              //@synthesize outerImageProvider=_outerImageProvider - In the implementation block
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(CLKGaugeProvider *)gaugeProvider;
-(void)setGaugeProvider:(CLKGaugeProvider *)arg1 ;
-(CLKTextProvider *)leadingTextProvider;
-(void)setLeadingTextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)trailingTextProvider;
-(void)setTrailingTextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)outerTextProvider;
-(void)setOuterTextProvider:(CLKTextProvider *)arg1 ;
-(CLKFullColorImageProvider *)outerImageProvider;
-(void)setOuterImageProvider:(CLKFullColorImageProvider *)arg1 ;
@end

