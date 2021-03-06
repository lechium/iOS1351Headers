/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNContactListStyle;
@interface CNContactListStyleApplier : NSObject {

	id<CNContactListStyle> _contactListStyle;

}

@property (nonatomic,readonly) id<CNContactListStyle> contactListStyle;                       //@synthesize contactListStyle=_contactListStyle - In the implementation block
@property (nonatomic,readonly) double cellEstimatedHeight; 
@property (nonatomic,readonly) unsigned long long tableNoContactsAvailableStyle; 
+(void)applyDefaultStyleToContact:(id)arg1 usingFormatter:(id)arg2 ofCell:(id)arg3 ;
-(id)initWithContactListStyle:(id)arg1 ;
-(double)cellEstimatedHeight;
-(unsigned long long)tableNoContactsAvailableStyle;
-(void)applyContactListStyleToCell:(id)arg1 ;
-(void)applyContactListStyleToHeaderFooter:(id)arg1 ;
-(void)applyContactListStyleToNavigationBar:(id)arg1 ;
-(void)applyContactListStyleToSearchBar:(id)arg1 ;
-(void)applyContactListStyleToTableView:(id)arg1 ;
-(void)applyContactListStyleToContact:(id)arg1 usingFormatter:(id)arg2 ofCell:(id)arg3 ;
-(void)applyContactListStyleToText:(id)arg1 ofHighlightedCell:(id)arg2 ;
-(void)applyContactListStyleToText:(id)arg1 ofUnhighlightedCell:(id)arg2 ;
-(void)applyContactListStyleToText:(id)arg1 ofSearchResultCell:(id)arg2 ;
-(void)applyContactListStyleToMeContactLabel:(id)arg1 ofCell:(id)arg2 ;
-(void)applyContactListStyleToEmergencyIcon:(id)arg1 ofCell:(id)arg2 ;
-(void)applyContactListStyleToBannerTitle:(id)arg1 primaryAppearance:(BOOL)arg2 ;
-(void)applyContactListStyleToBannerFootnote:(id)arg1 primaryAppearance:(BOOL)arg2 ;
-(id<CNContactListStyle>)contactListStyle;
@end

