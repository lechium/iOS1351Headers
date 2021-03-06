/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobileSafariSettings/SafariAutoFillListController.h>
#import <libobjc.A.dylib/_SFSettingsAuthenticationRequiring.h>

@class NSArray, NSString;

@interface SafariSavedCreditCardsController : SafariAutoFillListController <_SFSettingsAuthenticationRequiring> {

	NSArray* _specifiersForAddItem;
	NSArray* _virtualCards;
	NSArray* _specifiersForVirtualCardSection;
	BOOL _hasBeenAuthenticated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * authenticationPrompt; 
@property (nonatomic,readonly) BOOL showsAuthenticationPromptAsTitle; 
@property (assign,nonatomic) BOOL hasBeenAuthenticated;                            //@synthesize hasBeenAuthenticated=_hasBeenAuthenticated - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_addItem:(id)arg1 ;
-(id)specifiers;
-(void)setHasBeenAuthenticated:(BOOL)arg1 ;
-(BOOL)hasBeenAuthenticated;
-(BOOL)showsAuthenticationPromptAsTitle;
-(NSString *)authenticationPrompt;
-(BOOL)isSpecifierForAutoFillItem:(id)arg1 ;
-(id)deleteConfirmationTitle;
-(id)deleteConfirmationMessage;
-(void)deleteItemsForSpecifiers:(id)arg1 ;
-(id)_specifiersForVirtualCardSection;
-(id)titleForAddItem;
-(Class)controllerClassForAddItem;
-(id)_specifiersForAddItem;
-(void)_createVirtualCardSectionSpecifiers;
-(id)_specifiersToAddOrRemoveWhenTogglingEditButton;
-(void)_viewVirtualCardInWallet:(id)arg1 ;
@end

