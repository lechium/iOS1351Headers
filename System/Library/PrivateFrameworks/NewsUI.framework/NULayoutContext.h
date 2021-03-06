/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NULayoutContext.h>
@class UITraitCollection;


@protocol NULayoutContext <NSObject>
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (getter=isLandscape,nonatomic,readonly) BOOL landscape; 
@property (nonatomic,readonly) CGRect bounds; 
@required
-(CGRect)bounds;
-(UITraitCollection *)traitCollection;
-(BOOL)isLandscape;

@end


@class UITraitCollection, NSString;

@interface NULayoutContext : NSObject <NULayoutContext> {

	UITraitCollection* _traitCollection;
	CGRect _bounds;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (getter=isLandscape,nonatomic,readonly) BOOL landscape; 
@property (nonatomic,readonly) CGRect bounds;                                    //@synthesize bounds=_bounds - In the implementation block
-(NSString *)description;
-(CGRect)bounds;
-(UITraitCollection *)traitCollection;
-(BOOL)isLandscape;
-(id)initWithTraitCollection:(id)arg1 bounds:(CGRect)arg2 ;
@end

