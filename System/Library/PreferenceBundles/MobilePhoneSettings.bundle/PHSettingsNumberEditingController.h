/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobilePhoneSettings/MobilePhoneSettings-Structs.h>
#import <Preferences/PSListController.h>

@class NSString;

@interface PHSettingsNumberEditingController : PSListController {

	NSString* _previousString;
	NSString* _previousStringSuggestion;

}

@property (nonatomic,copy) NSString * previousString;                        //@synthesize previousString=_previousString - In the implementation block
@property (nonatomic,copy) NSString * previousStringSuggestion;              //@synthesize previousStringSuggestion=_previousStringSuggestion - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(SCD_Struct_PH3)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
-(id)specifiers;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(BOOL)shouldSelectResponderOnAppearance;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void)setPreviousString:(NSString *)arg1 ;
-(NSString *)previousStringSuggestion;
-(void)setPreviousStringSuggestion:(NSString *)arg1 ;
-(NSString *)previousString;
@end
