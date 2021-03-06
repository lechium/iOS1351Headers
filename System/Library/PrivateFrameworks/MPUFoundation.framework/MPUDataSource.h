/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSString;

@interface MPUDataSource : NSObject <NSCoding> {

	long long _invalidationIgnoreCount;
	long long _numberOfIgnoredInvalidations;
	long long _entityType;

}

@property (nonatomic,readonly) long long entityType;                               //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) BOOL usesSections; 
@property (nonatomic,readonly) BOOL showsIndexBar; 
@property (nonatomic,readonly) unsigned long long numberOfSections; 
@property (nonatomic,readonly) NSArray * localizedSectionIndexTitles; 
@property (nonatomic,readonly) BOOL showsEntityCountFooter; 
@property (nonatomic,readonly) NSString * entityCountFormat; 
+(Class)invalidationContextClass;
-(unsigned long long)count;
-(void)invalidate;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)entities;
-(unsigned long long)numberOfSections;
-(unsigned long long)_globalIndexForIndexPath:(id)arg1 ;
-(id)_indexPathForGlobalIndex:(unsigned long long)arg1 ;
-(long long)entityType;
-(NSArray *)localizedSectionIndexTitles;
-(id)initWithEntityType:(long long)arg1 ;
-(BOOL)isIgnoringInvalidation;
-(id)entityAtIndex:(unsigned long long)arg1 ;
-(void)_invalidateCalculatedEntities;
-(BOOL)usesSections;
-(void)invalidateWithContext:(id)arg1 ;
-(BOOL)canEditEntityAtIndex:(unsigned long long)arg1 ;
-(BOOL)canSelectEntityAtIndex:(unsigned long long)arg1 ;
-(void)deleteEntityAtIndex:(unsigned long long)arg1 ;
-(long long)editingTypeForEntityAtIndex:(unsigned long long)arg1 ;
-(BOOL)showsIndexBar;
-(id)localizedSectionTitleAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfSectionForSectionTitleAtIndex:(unsigned long long)arg1 ;
-(NSRange)rangeOfSectionAtIndex:(unsigned long long)arg1 ;
-(BOOL)showsEntityCountFooter;
-(void)_willInvalidateWithContext:(id)arg1 ;
-(void)_didInvalidateWithContext:(id)arg1 ;
-(id)sectionEntities;
-(id)anyEntity;
-(BOOL)canEditEntityAtIndexPath:(id)arg1 ;
-(void)deleteEntityAtIndexPath:(id)arg1 ;
-(long long)editingTypeForEntityAtIndexPath:(id)arg1 ;
-(id)entityAtIndexPath:(id)arg1 ;
-(NSString *)entityCountFormat;
-(BOOL)entityIsNowPlayingAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfEntity:(id)arg1 ;
-(void)beginIgnoringInvalidation;
-(void)endIgnoringInvalidation;
-(id)playbackContextForIndex:(unsigned long long)arg1 ;
-(void)preloadEntities;
-(void)preloadSectionEntities;
-(id)sectionEntityAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfSectionEntity:(id)arg1 ;
@end

