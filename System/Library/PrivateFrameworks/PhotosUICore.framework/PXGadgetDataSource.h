/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedDataSource.h>

@class NSArray;

@interface PXGadgetDataSource : PXSectionedDataSource {

	NSArray* _gadgets;

}

@property (nonatomic,copy,readonly) NSArray * gadgets;              //@synthesize gadgets=_gadgets - In the implementation block
@property (readonly) BOOL hasNoContentGadget; 
-(id)init;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
-(NSArray *)gadgets;
-(id)initWithGadgets:(id)arg1 ;
-(id)gadgetAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)indexPathForGadget:(id)arg1 ;
-(id)gadgetsOfType:(unsigned long long)arg1 ;
-(id)gadgetsOfClass:(Class)arg1 ;
-(id)gadgetWithId:(id)arg1 ;
-(BOOL)hasNoContentGadget;
@end

