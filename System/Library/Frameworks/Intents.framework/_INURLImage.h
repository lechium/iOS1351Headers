/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:09 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INImage.h>

@class NSData, NSURL;

@interface _INURLImage : INImage {

	NSData* _sandboxExtensionData;
	NSURL* _imageURL;

}

@property (nonatomic,copy,readonly) NSURL * imageURL;                                                    //@synthesize imageURL=_imageURL - In the implementation block
@property (setter=_setSandboxExtensionData:,nonatomic,copy) NSData * _sandboxExtensionData;              //@synthesize sandboxExtensionData=_sandboxExtensionData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_identifier;
-(BOOL)_requiresRetrieval;
-(id)_uri;
-(id)_dictionaryRepresentation;
-(id)initWithImageURL:(id)arg1 ;
-(NSURL *)imageURL;
-(id)_copyWithSubclass:(Class)arg1 ;
-(BOOL)_isEligibleForProxying;
-(void)_setUri:(id)arg1 ;
-(id)_initWithURLRepresentation:(id)arg1 ;
-(id)_URLRepresentation;
-(BOOL)_isSupportedForDonation;
-(NSData *)_sandboxExtensionData;
-(void)_setSandboxExtensionData:(id)arg1 ;
-(void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
