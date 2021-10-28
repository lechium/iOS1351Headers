/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FileProvider/FPItemCollection.h>

@class NSArray;

@interface FPUnionCollection : FPItemCollection {

	NSArray* _collections;

}

@property (nonatomic,retain) NSArray * collections;              //@synthesize collections=_collections - In the implementation block
-(id)description;
-(NSArray *)collections;
-(id)createDataSourceWithSortDescriptors:(id)arg1 ;
-(id)initWithCollections:(id)arg1 ;
-(void)setCollections:(NSArray *)arg1 ;
@end
