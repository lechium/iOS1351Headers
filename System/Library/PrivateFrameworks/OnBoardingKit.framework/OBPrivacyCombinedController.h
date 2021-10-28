/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OnBoardingKit/OBTableWelcomeController.h>

@class NSString;

@interface OBPrivacyCombinedController : OBTableWelcomeController {

	BOOL _allowsOpeningSafari;
	BOOL _presentedFromPrivacyPane;
	NSString* _displayLanguage;

}

@property (assign) BOOL allowsOpeningSafari;                   //@synthesize allowsOpeningSafari=_allowsOpeningSafari - In the implementation block
@property (retain) NSString * displayLanguage;                 //@synthesize displayLanguage=_displayLanguage - In the implementation block
@property (assign) BOOL presentedFromPrivacyPane;              //@synthesize presentedFromPrivacyPane=_presentedFromPrivacyPane - In the implementation block
+(id)new;
+(void)presentPrivacyCombinedControllerOverController:(id)arg1 dismissHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithIdentifiers:(id)arg1 ;
-(NSString *)displayLanguage;
-(void)setAllowsOpeningSafari:(BOOL)arg1 ;
-(BOOL)allowsOpeningSafari;
-(void)setDisplayLanguage:(NSString *)arg1 ;
-(BOOL)presentedFromPrivacyPane;
-(void)setPresentedFromPrivacyPane:(BOOL)arg1 ;
@end
