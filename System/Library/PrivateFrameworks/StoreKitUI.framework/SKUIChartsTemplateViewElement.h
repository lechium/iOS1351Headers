/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUIActivityIndicatorViewElement, NSArray, SKUINavigationBarViewElement;

@interface SKUIChartsTemplateViewElement : SKUIViewElement {

	NSString* _type;

}

@property (nonatomic,readonly) SKUIActivityIndicatorViewElement * activityIndicator; 
@property (nonatomic,readonly) NSArray * columns; 
@property (nonatomic,readonly) SKUINavigationBarViewElement * navigationBarElement; 
@property (nonatomic,readonly) NSString * type; 
-(NSString *)type;
-(NSArray *)columns;
-(SKUIActivityIndicatorViewElement *)activityIndicator;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(SKUINavigationBarViewElement *)navigationBarElement;
@end

