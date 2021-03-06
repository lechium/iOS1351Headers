/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber, CKRecord;

@interface FCTagSettingsEntry : NSObject {

	BOOL _webAccessOptIn;
	NSString* _identifier;
	NSString* _tagID;
	NSNumber* _fontMultiplier;
	NSNumber* _fontMultiplierMacOS;
	NSNumber* _contentScale;
	NSNumber* _contentScaleMacOS;
	NSString* _accessToken;

}

@property (nonatomic,copy,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * tagID;                            //@synthesize tagID=_tagID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * fontMultiplier;                   //@synthesize fontMultiplier=_fontMultiplier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * fontMultiplierMacOS;              //@synthesize fontMultiplierMacOS=_fontMultiplierMacOS - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * contentScale;                     //@synthesize contentScale=_contentScale - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * contentScaleMacOS;                //@synthesize contentScaleMacOS=_contentScaleMacOS - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessToken;                      //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,readonly) BOOL webAccessOptIn;                              //@synthesize webAccessOptIn=_webAccessOptIn - In the implementation block
@property (nonatomic,readonly) CKRecord * asCKRecord; 
-(NSString *)identifier;
-(id)dictionaryRepresentation;
-(NSNumber *)contentScale;
-(NSString *)tagID;
-(NSString *)accessToken;
-(CKRecord *)asCKRecord;
-(NSNumber *)fontMultiplier;
-(NSNumber *)fontMultiplierMacOS;
-(NSNumber *)contentScaleMacOS;
-(BOOL)webAccessOptIn;
-(id)initWithEntryID:(id)arg1 tagID:(id)arg2 fontMultiplier:(id)arg3 fontMultiplierMacOS:(id)arg4 contentScale:(id)arg5 contentScaleMacOS:(id)arg6 accessToken:(id)arg7 webAccessOptIn:(BOOL)arg8 ;
-(id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2 ;
@end

