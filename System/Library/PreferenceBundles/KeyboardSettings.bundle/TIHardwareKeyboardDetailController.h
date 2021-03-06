/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSListController.h>

@class NSString;

@interface TIHardwareKeyboardDetailController : PSListController {

	NSString* _inputMode;

}

@property (nonatomic,readonly) NSString * inputMode;              //@synthesize inputMode=_inputMode - In the implementation block
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setHardwareLayout:(id)arg1 ;
-(NSString *)inputMode;
-(id)specifiers;
-(id)newSpecifiers;
@end

