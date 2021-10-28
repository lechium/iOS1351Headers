/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNUINavigationListStyle;
@interface CNUINavigationListStyleApplier : NSObject {

	id<CNUINavigationListStyle> _navigationListStyle;

}

@property (nonatomic,readonly) id<CNUINavigationListStyle> navigationListStyle;              //@synthesize navigationListStyle=_navigationListStyle - In the implementation block
-(id<CNUINavigationListStyle>)navigationListStyle;
-(id)initWithNavigationListStyle:(id)arg1 ;
-(void)applyNavigationListStyleToCell:(id)arg1 ;
-(void)applyNavigationListStyleToDetailCell:(id)arg1 ;
-(void)applyExpandedBackgroundNavigationListStyleToCell:(id)arg1 ;
-(void)applyCollapsedBackgroundNavigationListStyleToCell:(id)arg1 ;
@end
