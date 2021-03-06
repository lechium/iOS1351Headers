/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUTitleValueCell.h>
#import <libobjc.A.dylib/HUEditableTextCellProtocol.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@class UITextField, NSString;

@interface HUEditableTextCell : HUTitleValueCell <HUEditableTextCellProtocol, HUDisableableCellProtocol> {

	UITextField* _textField;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITextField * textField;                    //@synthesize textField=_textField - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
-(void)prepareForReuse;
-(UITextField *)textField;
-(void)setDisabled:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

