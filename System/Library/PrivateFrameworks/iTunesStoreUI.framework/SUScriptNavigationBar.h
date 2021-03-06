/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:51 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptNavigationItem, NSArray, SUScriptButton, NSString;

@interface SUScriptNavigationBar : SUScriptObject

@property (readonly) SUScriptNavigationItem * backNavigationItem; 
@property (assign) long long barStyle; 
@property (readonly) NSArray * navigationItems; 
@property (copy) id translucent; 
@property (readonly) SUScriptNavigationItem * topNavigationItem; 
@property (readonly) long long barStyleBlack; 
@property (readonly) long long barStyleDefault; 
@property (retain) SUScriptButton * leftButton; 
@property (retain) id<SUScriptNavigationItem> leftItem; 
@property (retain) NSString * prompt; 
@property (retain) SUScriptButton * rightButton; 
@property (retain) id<SUScriptNavigationItem> rightItem; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)init;
-(id)_className;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(void)setTranslucent:(id)arg1 ;
-(NSString *)prompt;
-(NSArray *)navigationItems;
-(void)setNavigationItems:(NSArray *)arg1 ;
-(void)setPrompt:(NSString *)arg1 ;
-(SUScriptButton *)leftButton;
-(void)setLeftButton:(SUScriptButton *)arg1 ;
-(id)attributeKeys;
-(SUScriptButton *)rightButton;
-(void)setRightButton:(SUScriptButton *)arg1 ;
-(id<SUScriptNavigationItem>)leftItem;
-(void)setLeftItem:(id<SUScriptNavigationItem>)arg1 ;
-(id<SUScriptNavigationItem>)rightItem;
-(void)setRightItem:(id<SUScriptNavigationItem>)arg1 ;
-(id)scriptAttributeKeys;
-(id)translucent;
-(void)setLeftButton:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightButton:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithNativeNavigationBar:(id)arg1 ;
-(id)_nativeNavigationBar;
-(void)tearDownUserInterface;
-(id)_topNavigationItem;
-(void)setLeftItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)_copyTopNavigationItem;
-(id)buttonWithTitle:(id)arg1 style:(id)arg2 target:(id)arg3 action:(id)arg4 ;
-(SUScriptNavigationItem *)backNavigationItem;
-(void)setBackNavigationItem:(SUScriptNavigationItem *)arg1 ;
-(void)setTopNavigationItem:(SUScriptNavigationItem *)arg1 ;
-(SUScriptNavigationItem *)topNavigationItem;
-(long long)barStyleBlack;
-(long long)barStyleDefault;
@end

