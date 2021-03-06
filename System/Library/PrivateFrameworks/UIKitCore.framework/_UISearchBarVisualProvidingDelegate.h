/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:58 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UISearchBarTextField, UIView, _UINavigationControllerPalette, UISearchController;


@protocol _UISearchBarVisualProvidingDelegate <NSObject>
@property (assign,nonatomic,__weak) id<UISearchBarDelegate><UISearchBarDelegate_Private> delegate; 
@property (getter=_searchBarTextField,nonatomic,readonly) UISearchBarTextField * searchBarTextField; 
@property (nonatomic,readonly) UIView * _viewForChildViews; 
@property (nonatomic,readonly) _UINavigationControllerPalette * _containingNavigationPalette; 
@property (nonatomic,readonly) long long barPosition; 
@property (nonatomic,readonly) UISearchController * _searchController; 
@required
-(id<UISearchBarDelegate><UISearchBarDelegate_Private>)delegate;
-(void)setDelegate:(id)arg1;
-(long long)barPosition;
-(UISearchController *)_searchController;
-(id)_searchBarTextField;
-(id)textInputTraits;
-(UIView *)_viewForChildViews;
-(_UINavigationControllerPalette *)_containingNavigationPalette;

@end

