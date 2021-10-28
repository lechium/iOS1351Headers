/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:51 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/SKUIPageComponent.h>
#import <libobjc.A.dylib/SSMetricsEventFieldProvider.h>

@class NSArray, SKUICarouselViewElement, NSString;

@interface SKUICarouselPageComponent : SKUIPageComponent <SSMetricsEventFieldProvider> {

	NSArray* _carouselItems;
	double _cycleInterval;
	long long _missingItemCount;

}

@property (nonatomic,readonly) NSArray * carouselItems;                            //@synthesize carouselItems=_carouselItems - In the implementation block
@property (nonatomic,readonly) SKUICarouselViewElement * viewElement; 
@property (nonatomic,readonly) double cycleInterval;                               //@synthesize cycleInterval=_cycleInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)componentType;
-(id)valueForMetricsField:(id)arg1 ;
-(id)initWithViewElement:(id)arg1 ;
-(id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2 ;
-(void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)isMissingItemData;
-(id)metricsElementName;
-(void)updateWithMissingItems:(id)arg1 ;
-(NSArray *)carouselItems;
-(double)cycleInterval;
@end
