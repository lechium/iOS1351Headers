/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKComplicationTemplateGraphicCircular, CLKTextProvider;

@interface CLKComplicationTemplateGraphicBezelCircularText : CLKComplicationTemplate {

	CLKComplicationTemplateGraphicCircular* _circularTemplate;
	CLKTextProvider* _textProvider;

}

@property (nonatomic,copy) CLKComplicationTemplateGraphicCircular * circularTemplate;              //@synthesize circularTemplate=_circularTemplate - In the implementation block
@property (nonatomic,copy) CLKTextProvider * textProvider;                                         //@synthesize textProvider=_textProvider - In the implementation block
-(CLKTextProvider *)textProvider;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateEmbeddedTemplateKeysWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
-(CLKComplicationTemplateGraphicCircular *)circularTemplate;
-(void)setCircularTemplate:(CLKComplicationTemplateGraphicCircular *)arg1 ;
@end
