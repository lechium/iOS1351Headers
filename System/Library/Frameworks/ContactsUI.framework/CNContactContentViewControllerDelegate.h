/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNContactContentViewControllerDelegate <CNContactViewControllerDelegate>
@optional
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4;
-(void)contactViewController:(id)arg1 didChangeToEditMode:(BOOL)arg2;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
-(id)contactPresentedViewController:(id)arg1;

@end

