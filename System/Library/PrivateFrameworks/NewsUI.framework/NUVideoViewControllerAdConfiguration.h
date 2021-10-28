/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NUVideoViewControllerAdConfiguration : NSObject <NSCopying> {

	BOOL _adsEnabled;
	BOOL _allowLeadingAdSlot;

}

@property (getter=areAdsEnabled,nonatomic,readonly) BOOL adsEnabled;              //@synthesize adsEnabled=_adsEnabled - In the implementation block
@property (nonatomic,readonly) BOOL allowLeadingAdSlot;                           //@synthesize allowLeadingAdSlot=_allowLeadingAdSlot - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAdsEnabled:(BOOL)arg1 allowLeadingAdSlot:(BOOL)arg2 ;
-(BOOL)areAdsEnabled;
-(BOOL)allowLeadingAdSlot;
@end
