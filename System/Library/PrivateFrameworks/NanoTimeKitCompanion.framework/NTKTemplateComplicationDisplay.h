/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NTKTemplateComplicationDisplay <NTKComplicationDisplay,NTKTimeTravel>
@optional
+(BOOL)supportsComplicationFamily:(long long)arg1;
-(long long)layoutOverride;
-(unsigned long long)timelineAnimationFadeTypeOverride;

@required
+(BOOL)handlesComplicationTemplate:(id)arg1;
-(id)complicationTemplate;
-(void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;

@end

