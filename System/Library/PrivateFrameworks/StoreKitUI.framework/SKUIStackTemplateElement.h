/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/SKUIViewElement.h>

@class NSMutableArray, SKUIViewElement, NSArray, SKUIIndexBarViewElement, SKUINavigationBarViewElement, SKUIToolbarViewElement;

@interface SKUIStackTemplateElement : SKUIViewElement {

	NSMutableArray* _collectionElements;
	SKUIViewElement* _collectionHeaderViewElement;
	BOOL _needsStateReset;

}

@property (nonatomic,readonly) NSArray * collectionElements; 
@property (nonatomic,readonly) SKUIViewElement * collectionHeaderViewElement; 
@property (nonatomic,readonly) SKUIIndexBarViewElement * indexBarViewElement; 
@property (nonatomic,readonly) SKUINavigationBarViewElement * navigationBarElement; 
@property (nonatomic,readonly) SKUIToolbarViewElement * toolbarElement; 
@property (nonatomic,readonly) long long numberOfSplits; 
@property (nonatomic,readonly) BOOL needsStateReset;                                             //@synthesize needsStateReset=_needsStateReset - In the implementation block
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(SKUINavigationBarViewElement *)navigationBarElement;
-(SKUIToolbarViewElement *)toolbarElement;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)numberOfSplits;
-(BOOL)needsStateReset;
-(SKUIIndexBarViewElement *)indexBarViewElement;
-(SKUIViewElement *)collectionHeaderViewElement;
-(NSArray *)collectionElements;
@end

