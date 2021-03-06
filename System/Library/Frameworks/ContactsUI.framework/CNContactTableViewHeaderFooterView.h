/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class NSAttributedString, UILabel;

@interface CNContactTableViewHeaderFooterView : UITableViewHeaderFooterView {

	NSAttributedString* _attributedString;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(void)prepareForReuse;
-(NSAttributedString *)attributedString;
-(UILabel *)titleLabel;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

