/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/CNPropertyPostalAddressCell.h>
#import <libobjc.A.dylib/CNStarkActionViewDelegate.h>

@class CNStarkActionView, NSLayoutConstraint, NSString;

@interface CNStarkContactAddressPropertyCell : CNPropertyPostalAddressCell <CNStarkActionViewDelegate> {

	CNStarkActionView* _actionView;
	NSLayoutConstraint* _labelViewFirstBaselineAnchorConstraint;
	NSLayoutConstraint* _valueViewFirstBaselineAnchorConstraint;
	NSLayoutConstraint* _contentViewBottomAnchorConstraint;

}

@property (nonatomic,readonly) CNStarkActionView * actionView;                                         //@synthesize actionView=_actionView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelViewFirstBaselineAnchorConstraint;              //@synthesize labelViewFirstBaselineAnchorConstraint=_labelViewFirstBaselineAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * valueViewFirstBaselineAnchorConstraint;              //@synthesize valueViewFirstBaselineAnchorConstraint=_valueViewFirstBaselineAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomAnchorConstraint;                   //@synthesize contentViewBottomAnchorConstraint=_contentViewBottomAnchorConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setSeparatorStyle:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CNStarkActionView *)actionView;
-(id)variableConstraints;
-(id)constantConstraints;
-(void)performDefaultAction;
-(NSLayoutConstraint *)contentViewBottomAnchorConstraint;
-(void)setContentViewBottomAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_cnui_applyContactStyle;
-(void)actionViewTapped:(id)arg1 ;
-(BOOL)supportsTintColorValue;
-(BOOL)shouldShowStar;
-(void)updateTransportButtons;
-(BOOL)supportsValueColorUsesLabelColor;
-(NSLayoutConstraint *)labelViewFirstBaselineAnchorConstraint;
-(void)setLabelViewFirstBaselineAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)valueViewFirstBaselineAnchorConstraint;
-(void)setValueViewFirstBaselineAnchorConstraint:(NSLayoutConstraint *)arg1 ;
@end

