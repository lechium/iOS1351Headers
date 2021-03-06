/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentBlueprint.h>

@class NSDictionary;

@interface SXTextComponentBlueprint : SXComponentBlueprint {

	NSDictionary* _exclusionPaths;

}

@property (nonatomic,readonly) NSDictionary * exclusionPaths;              //@synthesize exclusionPaths=_exclusionPaths - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)exclusionPaths;
-(void)addExclusionPath:(id)arg1 forIdentifier:(id)arg2 ;
-(void)invalidateSize;
@end

