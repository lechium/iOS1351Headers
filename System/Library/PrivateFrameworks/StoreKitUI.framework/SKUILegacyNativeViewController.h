/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:50 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUICategoryControllerDelegate.h>

@class NSURL, SKUICategoryController, NSData, SSVLoadURLOperation, SKUIStorePageViewController, NSString;

@interface SKUILegacyNativeViewController : SKUIViewController <SKUICategoryControllerDelegate> {

	NSURL* _activeURL;
	SKUICategoryController* _categoryController;
	NSURL* _defaultURL;
	NSData* _initialData;
	SSVLoadURLOperation* _initialOperation;
	SKUIStorePageViewController* _storePageViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)reloadData;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)_storePageViewController;
-(id)initWithData:(id)arg1 fromOperation:(id)arg2 ;
-(id)activeMetricsController;
-(void)_reloadNavigationItem;
-(void)_finishLoadWithResult:(BOOL)arg1 error:(id)arg2 ;
-(id)_categoryController;
-(void)categoryController:(id)arg1 didSelectCategory:(id)arg2 ;
@end

