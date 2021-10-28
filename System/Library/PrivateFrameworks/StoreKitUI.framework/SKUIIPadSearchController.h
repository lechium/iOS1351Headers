/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SKUISearchFieldDelegate.h>

@class SKUISearchFieldController, UIViewController, SKUIClientContext, NSString;

@interface SKUIIPadSearchController : NSObject <SKUISearchFieldDelegate> {

	SKUISearchFieldController* _searchFieldController;
	UIViewController* _parentViewController;
	SKUIClientContext* _clientContext;

}

@property (nonatomic,__weak,readonly) UIViewController * parentViewController;                 //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) SKUISearchFieldController * searchFieldController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)lastSearchTerm;
+(void)setLastSearchTerm:(id)arg1 ;
-(void)dealloc;
-(UIViewController *)parentViewController;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(id)initWithParentViewController:(id)arg1 ;
-(void)reloadSearchField;
-(id)newSearchFieldBarItem;
-(void)_termDidChangeNotification:(id)arg1 ;
-(id)_searchFieldController;
-(void)setSearchFieldText:(id)arg1 ;
-(void)setNumberOfSearchResults:(long long)arg1 ;
-(void)searchFieldController:(id)arg1 requestSearch:(id)arg2 ;
-(SKUISearchFieldController *)searchFieldController;
-(void)setSearchFieldPlaceholderText:(id)arg1 ;
@end
