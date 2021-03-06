/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PLAssetContainerList.h>

@class NSString, NSOrderedSet;

@interface PXFeedAssetContainerList : NSObject <PLAssetContainerList> {

	NSString* _transientIdentifier;
	NSOrderedSet* _sectionInfos;

}

@property (nonatomic,copy) NSOrderedSet * sectionInfos;                         //@synthesize sectionInfos=_sectionInfos - In the implementation block
@property (nonatomic,readonly) NSString * transientIdentifier;                  //@synthesize transientIdentifier=_transientIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long containersCount; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEmpty;
-(id)managedObjectContext;
-(id)photoLibrary;
-(id)containers;
-(BOOL)canEditContainers;
-(id)containersRelationshipName;
-(unsigned long long)containersCount;
-(NSString *)transientIdentifier;
-(NSOrderedSet *)sectionInfos;
-(void)setSectionInfos:(NSOrderedSet *)arg1 ;
@end

