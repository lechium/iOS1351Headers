/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateCircularSmallStackImage : CLKComplicationTemplate {

	CLKImageProvider* _line1ImageProvider;
	CLKTextProvider* _line2TextProvider;

}

@property (nonatomic,copy) CLKImageProvider * line1ImageProvider;              //@synthesize line1ImageProvider=_line1ImageProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * line2TextProvider;                //@synthesize line2TextProvider=_line2TextProvider - In the implementation block
+(CGSize)_imageSize;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(CLKTextProvider *)line2TextProvider;
-(void)setLine2TextProvider:(CLKTextProvider *)arg1 ;
-(CLKImageProvider *)line1ImageProvider;
-(void)setLine1ImageProvider:(CLKImageProvider *)arg1 ;
@end
