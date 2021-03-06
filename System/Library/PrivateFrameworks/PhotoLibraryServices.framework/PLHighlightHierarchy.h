/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:59 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet;

@interface PLHighlightHierarchy : NSObject {

	NSMutableSet* _moments;
	NSMutableSet* _dayHighlights;
	NSMutableSet* _dayGroupHighlights;

}

@property (nonatomic,readonly) NSMutableSet * moments;                         //@synthesize moments=_moments - In the implementation block
@property (nonatomic,readonly) NSMutableSet * dayHighlights;                   //@synthesize dayHighlights=_dayHighlights - In the implementation block
@property (nonatomic,readonly) NSMutableSet * dayGroupHighlights;              //@synthesize dayGroupHighlights=_dayGroupHighlights - In the implementation block
-(id)init;
-(NSMutableSet *)moments;
-(NSMutableSet *)dayGroupHighlights;
-(NSMutableSet *)dayHighlights;
-(void)addMoment:(id)arg1 ;
-(void)addDayHighlight:(id)arg1 ;
-(void)addDayGroupHighlight:(id)arg1 ;
-(void)_addMoment:(id)arg1 ;
-(void)_addDayHighlight:(id)arg1 ;
@end

