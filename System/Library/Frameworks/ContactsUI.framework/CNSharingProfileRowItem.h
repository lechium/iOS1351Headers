/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, UIView;

@interface CNSharingProfileRowItem : NSObject {

	BOOL _isSelected;
	NSString* _label;
	UIView* _accessoryView;

}

@property (nonatomic,readonly) NSString * label;                    //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIView * accessoryView;              //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) BOOL isSelected;                       //@synthesize isSelected=_isSelected - In the implementation block
-(NSString *)label;
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1 ;
-(UIView *)accessoryView;
-(id)initWithLabel:(id)arg1 accessoryView:(id)arg2 ;
@end

