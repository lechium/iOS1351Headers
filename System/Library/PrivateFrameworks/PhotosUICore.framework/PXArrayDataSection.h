/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXDataSection.h>

@class NSArray;

@interface PXArrayDataSection : PXDataSection {

	NSArray* _sectionContent;

}

@property (nonatomic,copy,readonly) NSArray * sectionContent;              //@synthesize sectionContent=_sectionContent - In the implementation block
-(long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PX43*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndex:(long long)arg1 ;
-(long long)indexOfObject:(id)arg1 ;
-(id)initWithOutlineObject:(id)arg1 ;
-(id)initWithOutlineObject:(id)arg1 sectionContent:(id)arg2 ;
-(id)initWithSectionContent:(id)arg1 ;
-(long long)validatedIndexOfObject:(id)arg1 hintIndex:(long long)arg2 ;
-(NSArray *)sectionContent;
@end
