/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface INIntentSummary : NSObject {

	NSString* _intentIdentifier;
	NSString* _originatingBundleId;
	NSString* _languageCode;
	unsigned long long _containedProperties;
	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,copy,readonly) NSString * intentIdentifier;                    //@synthesize intentIdentifier=_intentIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * originatingBundleId;                 //@synthesize originatingBundleId=_originatingBundleId - In the implementation block
@property (nonatomic,copy,readonly) NSString * languageCode;                        //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) unsigned long long containedProperties;              //@synthesize containedProperties=_containedProperties - In the implementation block
@property (nonatomic,copy) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                     //@synthesize subtitle=_subtitle - In the implementation block
-(NSString *)languageCode;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)initWithIntentIdentifier:(id)arg1 originatingBundleId:(id)arg2 languageCode:(id)arg3 ;
-(NSString *)intentIdentifier;
-(NSString *)originatingBundleId;
-(unsigned long long)containedProperties;
@end

