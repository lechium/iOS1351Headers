/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface NTKInfinityListingAttributes : NSObject {

	NSMutableDictionary* _attributes;

}

@property (nonatomic,retain) NSMutableDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
+(id)attributesWithDictionary:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(NSMutableDictionary *)attributes;
-(void)setAttributes:(NSMutableDictionary *)arg1 ;
-(id)colorForKey:(id)arg1 ;
-(void)addAttribute:(id)arg1 forKey:(id)arg2 ;
-(BOOL)containsAttributes:(id)arg1 ignoreKeys:(id)arg2 ;
@end

