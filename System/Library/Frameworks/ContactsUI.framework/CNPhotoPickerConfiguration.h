/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CNPhotoPickerConfiguration : NSObject {

	BOOL _includeContactImage;
	BOOL _includeUnifiedContactImages;
	BOOL _includeFaces;
	BOOL _includeMonograms;
	BOOL _includeAnimoji;
	BOOL _includeRecents;
	BOOL _allowPhotoCapture;
	BOOL _allowAnimojiCreation;
	BOOL _allowRotation;

}

@property (nonatomic,readonly) BOOL includeContactImage;                      //@synthesize includeContactImage=_includeContactImage - In the implementation block
@property (nonatomic,readonly) BOOL includeUnifiedContactImages;              //@synthesize includeUnifiedContactImages=_includeUnifiedContactImages - In the implementation block
@property (nonatomic,readonly) BOOL includeFaces;                             //@synthesize includeFaces=_includeFaces - In the implementation block
@property (nonatomic,readonly) BOOL includeMonograms;                         //@synthesize includeMonograms=_includeMonograms - In the implementation block
@property (nonatomic,readonly) BOOL includeAnimoji;                           //@synthesize includeAnimoji=_includeAnimoji - In the implementation block
@property (nonatomic,readonly) BOOL includeRecents;                           //@synthesize includeRecents=_includeRecents - In the implementation block
@property (nonatomic,readonly) BOOL allowPhotoCapture;                        //@synthesize allowPhotoCapture=_allowPhotoCapture - In the implementation block
@property (nonatomic,readonly) BOOL allowAnimojiCreation;                     //@synthesize allowAnimojiCreation=_allowAnimojiCreation - In the implementation block
@property (nonatomic,readonly) BOOL allowRotation;                            //@synthesize allowRotation=_allowRotation - In the implementation block
+(id)defaultConfiguration;
+(id)contactsConfiguration;
+(id)gameCenterConfiguration;
-(BOOL)includeFaces;
-(BOOL)allowRotation;
-(BOOL)includeUnifiedContactImages;
-(BOOL)includeContactImage;
-(BOOL)includeMonograms;
-(BOOL)includeAnimoji;
-(BOOL)includeRecents;
-(id)configurationBySettingAllowsPhotoCapture:(BOOL)arg1 ;
-(id)initWithIncludeContactImage:(BOOL)arg1 includeUnifiedContactImages:(BOOL)arg2 includeFaces:(BOOL)arg3 includeMonograms:(BOOL)arg4 includeAnimoji:(BOOL)arg5 includeRecents:(BOOL)arg6 allowPhotoCapture:(BOOL)arg7 allowAnimojiCreation:(BOOL)arg8 allowRotation:(BOOL)arg9 ;
-(BOOL)allowPhotoCapture;
-(BOOL)allowAnimojiCreation;
@end

