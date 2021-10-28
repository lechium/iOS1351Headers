/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:27 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKitUI/EKEventDetailCell.h>

@protocol EKIdentityProtocol;
@class NSString, EKUILabeledAvatarView, UILabel;

@interface EKEventDetailOrganizerCell : EKEventDetailCell {

	NSString* _organizerName;
	EKUILabeledAvatarView* _organizerView;
	UILabel* _organizerLabel;
	UILabel* _titleView;
	id<EKIdentityProtocol> _organizerOverride;
	BOOL _hideDisclosureIndicator;

}

@property (assign,nonatomic) BOOL hideDisclosureIndicator;              //@synthesize hideDisclosureIndicator=_hideDisclosureIndicator - In the implementation block
+(id)_titleFont;
+(id)_organizerFont;
-(BOOL)update;
-(id)_titleView;
-(BOOL)shouldDisplayForEvent;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 organizerOverride:(id)arg3 ;
-(void)_updateDisclosureIndicator;
-(void)setHideDisclosureIndicator:(BOOL)arg1 ;
-(BOOL)hideDisclosureIndicator;
-(id)_organizerView;
-(id)_organizerLabel;
@end
