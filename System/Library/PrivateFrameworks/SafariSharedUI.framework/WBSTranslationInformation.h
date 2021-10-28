/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface WBSTranslationInformation : NSObject {

	NSString* _urlString;
	NSString* _sourceLanguage;
	NSString* _targetLanguage;

}

@property (nonatomic,copy,readonly) NSString * urlString;                   //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceLanguage;              //@synthesize sourceLanguage=_sourceLanguage - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetLanguage;              //@synthesize targetLanguage=_targetLanguage - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)urlString;
-(NSString *)sourceLanguage;
-(NSString *)targetLanguage;
-(id)initWithURLString:(id)arg1 sourceLanguage:(id)arg2 targetLanguage:(id)arg3 ;
@end
