/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWFilterRendererParameters <NSObject,NSCopying>
@property (nonatomic,readonly) short type; 
@property (nonatomic,readonly) float interpolationFractionComplete; 
@required
-(short)type;
-(int)prepareForRenderingWithInputVideoFormat:(id)arg1;
-(float)interpolationFractionComplete;
-(void)updateByInterpolatingFromParameters:(id)arg1 toParameters:(id)arg2 withFractionComplete:(float)arg3;

@end
