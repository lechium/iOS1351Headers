/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:05 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSKeyedArchiverDelegate.h>

@class UIKBAutoFillTestArchive, UIViewController, NSString;

@interface UIKBAutoFillTestArchiveMaker : NSObject <NSKeyedArchiverDelegate> {

	UIKBAutoFillTestArchive* _testArchive;
	UIViewController* _viewControllerToSnapshot;
	long long _currentTableViewTag;
	long long _currentTextFieldTag;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)archiveMakerWithViewControllerToSnapshot:(id)arg1 ;
-(id)archiver:(id)arg1 willEncodeObject:(id)arg2 ;
-(id)initWithViewControllerToSnapshot:(id)arg1 ;
-(id)_cloneNavigationItem:(id)arg1 ;
-(id)_cloneViewHierarchyFromRootView:(id)arg1 ;
-(id)_cloneTextField:(id)arg1 ;
-(id)_cloneTextView:(id)arg1 ;
-(id)_cloneLabel:(id)arg1 ;
-(id)_cloneButton:(id)arg1 ;
-(id)_cloneGenericView:(id)arg1 ;
-(void)_applyPropertiesFromView:(id)arg1 toView:(id)arg2 ;
-(void)_applyPropertiesFromLabel:(id)arg1 toLabel:(id)arg2 ;
-(id)_makeCopyOfObject:(id)arg1 ;
-(id)_cloneTableView:(id)arg1 ;
-(id)_cloneView:(id)arg1 ;
-(id)_cloneBarButtonItem:(id)arg1 ;
-(id)makeArchive;
@end

