/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:57 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PSLanguage : NSObject {

	NSString* _languageCode;
	NSString* _languageName;
	NSString* _localizedLanguageName;

}

@property (nonatomic,retain) NSString * languageCode;                       //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,retain) NSString * languageName;                       //@synthesize languageName=_languageName - In the implementation block
@property (nonatomic,retain) NSString * localizedLanguageName;              //@synthesize localizedLanguageName=_localizedLanguageName - In the implementation block
+(id)languageWithCode:(id)arg1 name:(id)arg2 localizedName:(id)arg3 ;
-(NSString *)languageCode;
-(NSString *)localizedLanguageName;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)setLanguageName:(NSString *)arg1 ;
-(void)setLocalizedLanguageName:(NSString *)arg1 ;
-(NSString *)languageName;
-(BOOL)displayNamesAreEqual;
@end
