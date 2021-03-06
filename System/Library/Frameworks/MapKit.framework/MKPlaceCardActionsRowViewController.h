/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MKActionRowItemViewDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@class NSArray, MKPlaceSectionItemView, UILayoutGuide, MKPlaceholderGridCache, MKPlaceActionManager, NSString;

@interface MKPlaceCardActionsRowViewController : UIViewController <MKActionRowItemViewDelegate, MKModuleViewControllerProtocol> {

	NSArray* _actionButtons;
	NSArray* _constraints;
	NSArray* _actionRowsArray;
	unsigned long long _maxButtonsPerRow;
	MKPlaceSectionItemView* _hairlineView;
	unsigned long long _style;
	UILayoutGuide* _marginLayoutguide;
	MKPlaceholderGridCache* _placeholderGridCache;
	NSArray* _items;
	MKPlaceActionManager* _actionManager;

}

@property (nonatomic,copy) NSArray * items;                                            //@synthesize items=_items - In the implementation block
@property (assign,nonatomic,__weak) MKPlaceActionManager * actionManager;              //@synthesize actionManager=_actionManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)loadView;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLayoutSubviews;
-(void)createConstraints;
-(void)infoCardThemeChanged;
-(MKPlaceActionManager *)actionManager;
-(void)setActionManager:(MKPlaceActionManager *)arg1 ;
-(void)createActionViews;
-(unsigned long long)maxButtonsPerRow;
-(void)layoutButtons;
-(void)actionRowSelected:(id)arg1 ;
-(void)createActions;
@end

