/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:50 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/SKUIPageComponent.h>

@class SKUILink, SKUIAccountButtonsViewElement;

@interface SKUIAccountButtonsComponent : SKUIPageComponent {

	SKUILink* _ecommerceLink;
	BOOL _hidesTermsAndConditions;

}

@property (nonatomic,readonly) SKUIAccountButtonsViewElement * viewElement; 
@property (nonatomic,retain) SKUILink * ECommerceLink;                                   //@synthesize ecommerceLink=_ecommerceLink - In the implementation block
@property (assign,nonatomic) BOOL hidesTermsAndConditions;                               //@synthesize hidesTermsAndConditions=_hidesTermsAndConditions - In the implementation block
-(long long)componentType;
-(id)initWithCustomPageContext:(id)arg1 ;
-(id)initWithViewElement:(id)arg1 ;
-(id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2 ;
-(void)setECommerceLink:(SKUILink *)arg1 ;
-(SKUILink *)ECommerceLink;
-(BOOL)hidesTermsAndConditions;
-(void)setHidesTermsAndConditions:(BOOL)arg1 ;
@end

