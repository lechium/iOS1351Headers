/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface NUFeedBlueprint : NSObject {

	NSMutableArray* _sections;

}

@property (nonatomic,readonly) NSMutableArray * sections;                        //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfSections; 
@property (nonatomic,readonly) unsigned long long numberOfItems; 
-(id)init;
-(unsigned long long)numberOfSections;
-(NSMutableArray *)sections;
-(unsigned long long)numberOfItems;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
@end

