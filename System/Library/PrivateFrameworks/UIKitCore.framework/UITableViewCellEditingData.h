/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UITableViewCell, UITableViewCellEditControl, UITableViewCellReorderControl, UIView;

@interface UITableViewCellEditingData : NSObject {

	UITableViewCell* _cell;
	long long _editingStyle;
	UITableViewCellEditControl* _editControl;
	UITableViewCellReorderControl* _reorderControl;
	UIView* _reorderSeparatorView;

}

@property (getter=isDataRequired,nonatomic,readonly) BOOL dataRequired; 
@property (nonatomic,readonly) BOOL wantsMaskingWhileAnimatingDisabled; 
-(void)dealloc;
-(id)editControl:(BOOL)arg1 ;
-(id)reorderControl:(BOOL)arg1 ;
-(id)reorderSeparatorView:(BOOL)arg1 ;
-(id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2 ;
-(BOOL)wantsMaskingWhileAnimatingDisabled;
-(BOOL)isDataRequired;
@end
