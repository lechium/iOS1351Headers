/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NUSpace;

@interface _NUTaggedSpace : NSObject <NSCopying> {

	NSMutableArray* _tagNodes;
	NUSpace* _space;

}

@property (readonly) NUSpace * space;              //@synthesize space=_space - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NUSpace *)space;
-(id)initWithSpace:(id)arg1 ;
-(BOOL)hasTransform;
-(id)tagNodes;
-(void)addTagNode:(id)arg1 ;
-(void)addTagNodes:(id)arg1 ;
-(void)mergeSpace:(id)arg1 ;
-(BOOL)isEqualToTaggedImageSpace:(id)arg1 ;
@end

