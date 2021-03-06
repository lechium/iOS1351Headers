/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUICore/ContactsUICore-Structs.h>
#import <libobjc.A.dylib/CNUIPRLikenessProvider.h>

@class CNCache, NSString;

@interface CNUIPRLikenessPlaceholderProvider : NSObject <CNUIPRLikenessProvider> {

	CNCache* _cache;

}

@property (nonatomic,readonly) CNCache * cache;                     //@synthesize cache=_cache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageNameForDiameter:(double)arg1 ;
+(id)companyImageNameForDiameter:(double)arg1 ;
-(id)init;
-(CNCache *)cache;
-(id)_cnui_likenessForSize:(CGSize)arg1 scale:(double)arg2 ;
-(CGImageRef)_cnui_roundedRectImageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(CGImageRef)_cnui_circularImageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(CGImageRef)renderCircularImageForSilhouetteImage:(CGImageRef)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(CGImageRef)renderRoundedRectImageForSilhouetteImage:(CGImageRef)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(unsigned long long)_cnui_likenessType;
@end

