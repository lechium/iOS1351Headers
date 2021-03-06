/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <SpotlightUI/SPUILegibilitySceneSettings.h>
#import <libobjc.A.dylib/SPUISearchBarSceneSettings.h>

@protocol SPUISearchBarSceneSettings <NSObject>
@property (nonatomic,readonly) double scrollProgress; 
@property (nonatomic,readonly) BOOL animated; 
@required
-(BOOL)animated;
-(double)scrollProgress;

@end


@class NSString;

@interface SPUISearchBarSceneSettings : SPUILegibilitySceneSettings <SPUISearchBarSceneSettings>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double scrollProgress; 
@property (nonatomic,readonly) BOOL animated; 
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)animated;
-(double)scrollProgress;
@end

