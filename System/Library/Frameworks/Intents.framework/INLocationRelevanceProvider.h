/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INRelevanceProvider.h>

@class CLRegion;

@interface INLocationRelevanceProvider : INRelevanceProvider {

	CLRegion* _region;

}

@property (nonatomic,copy,readonly) CLRegion * region;              //@synthesize region=_region - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLRegion *)region;
-(id)initWithRegion:(id)arg1 ;
@end

