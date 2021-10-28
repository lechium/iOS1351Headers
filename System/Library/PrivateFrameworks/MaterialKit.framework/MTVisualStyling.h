/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MTCoreMaterialVisualStyling, UIColor, CAFilter, NSString;

@interface MTVisualStyling : NSObject {

	MTCoreMaterialVisualStyling* _coreMaterialVisualStyling;

}

@property (nonatomic,copy,readonly) UIColor * color; 
@property (nonatomic,readonly) double alpha; 
@property (nonatomic,readonly) CAFilter * composedFilter; 
@property (nonatomic,copy,readonly) NSString * visualStyleSetName; 
@property (nonatomic,copy,readonly) NSString * visualStyleName; 
@property (getter=_coreMaterialVisualStyling,nonatomic,retain) MTCoreMaterialVisualStyling * coreMaterialVisualStyling;              //@synthesize coreMaterialVisualStyling=_coreMaterialVisualStyling - In the implementation block
-(UIColor *)color;
-(double)alpha;
-(id)visualEffect;
-(NSString *)visualStyleSetName;
-(NSString *)visualStyleName;
-(id)initWithCoreMaterialVisualStyling:(id)arg1 ;
-(id)_layerConfig;
-(id)_coreMaterialVisualStyling;
-(void)setCoreMaterialVisualStyling:(MTCoreMaterialVisualStyling *)arg1 ;
-(CAFilter *)composedFilter;
@end
