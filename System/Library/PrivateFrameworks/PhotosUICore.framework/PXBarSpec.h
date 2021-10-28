/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PXExtendedTraitCollection;

@interface PXBarSpec : NSObject <NSCopying> {

	PXExtendedTraitCollection* _extendedTraitCollection;

}

@property (nonatomic,readonly) PXExtendedTraitCollection * extendedTraitCollection;              //@synthesize extendedTraitCollection=_extendedTraitCollection - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg1 ;
-(id)sortedBarItemsByPlacement:(id)arg1 ;
-(PXExtendedTraitCollection *)extendedTraitCollection;
@end
