/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/SKUIShelfViewElement.h>
#import <libobjc.A.dylib/_SKUIMenuBarViewElementConfigurationReloadDelegate.h>
#import <libobjc.A.dylib/SKUIMenuBarViewElement.h>

@class NSArray, SKUIMenuBarViewElementConfiguration, NSString;

@interface SKUIShelfMenuBarViewElement : SKUIShelfViewElement <_SKUIMenuBarViewElementConfigurationReloadDelegate, SKUIMenuBarViewElement> {

	NSArray* _focusedViewElements;
	NSArray* _regularViewElements;
	SKUIMenuBarViewElementConfiguration* _configuration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIMenuBarViewElementConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(id)supportedFeatures;
-(void)setConfiguration:(SKUIMenuBarViewElementConfiguration *)arg1 ;
-(SKUIMenuBarViewElementConfiguration *)configuration;
-(unsigned long long)elementType;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(void)_menuBarViewElementConfigurationRequestsReload:(id)arg1 ;
-(void)_reloadMenuItems;
-(id)regularViewElementForMenuItemAtIndex:(unsigned long long)arg1 ;
-(id)focusedViewElementForMenuItemAtIndex:(unsigned long long)arg1 ;
@end

