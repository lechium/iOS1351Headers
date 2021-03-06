/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXNavigationListItem.h>
@class NSString, PHCollection;


@protocol PXNavigationListItem <NSObject,NSCopying>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * accessoryTitle; 
@property (nonatomic,readonly) NSString * glyphImageName; 
@property (getter=isDraggable,nonatomic,readonly) BOOL draggable; 
@property (getter=isRemovable,nonatomic,readonly) BOOL removable; 
@property (getter=isRenamable,nonatomic,readonly) BOOL renamable; 
@property (getter=isExpandable,nonatomic,readonly) BOOL expandable; 
@property (getter=isGroup,nonatomic,readonly) BOOL group; 
@property (getter=isExpanded,nonatomic,readonly) BOOL expanded; 
@property (nonatomic,readonly) long long indentationLevel; 
@property (nonatomic,readonly) PHCollection * collection; 
@property (nonatomic,readonly) id representedObject; 
@property (nonatomic,readonly) NSString * visualDescription; 
@optional
-(id)viewControllerForCollectionWithGridPresentation:(id)arg1;
-(const CFStringRef)aggregateDictionaryKey;

@required
-(NSString *)identifier;
-(PHCollection *)collection;
-(NSString *)title;
-(BOOL)isRemovable;
-(NSString *)visualDescription;
-(BOOL)isGroup;
-(long long)indentationLevel;
-(BOOL)isExpanded;
-(id)representedObject;
-(BOOL)isDraggable;
-(BOOL)isExpandable;
-(NSString *)accessoryTitle;
-(NSString *)glyphImageName;
-(BOOL)isRenamable;

@end


@class NSString, PHCollection;

@interface PXNavigationListItem : NSObject <PXNavigationListItem> {

	NSString* _identifier;
	NSString* _title;
	NSString* _accessoryTitle;
	long long _itemCount;

}

@property (nonatomic,readonly) long long itemCount;                              //@synthesize itemCount=_itemCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * accessoryTitle;                        //@synthesize accessoryTitle=_accessoryTitle - In the implementation block
@property (nonatomic,readonly) NSString * glyphImageName; 
@property (getter=isDraggable,nonatomic,readonly) BOOL draggable; 
@property (getter=isRemovable,nonatomic,readonly) BOOL removable; 
@property (getter=isRenamable,nonatomic,readonly) BOOL renamable; 
@property (getter=isExpandable,nonatomic,readonly) BOOL expandable; 
@property (getter=isGroup,nonatomic,readonly) BOOL group; 
@property (getter=isExpanded,nonatomic,readonly) BOOL expanded; 
@property (nonatomic,readonly) long long indentationLevel; 
@property (nonatomic,readonly) PHCollection * collection; 
@property (nonatomic,readonly) id representedObject; 
@property (nonatomic,readonly) NSString * visualDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(PHCollection *)collection;
-(NSString *)title;
-(BOOL)isRemovable;
-(NSString *)visualDescription;
-(long long)itemCount;
-(BOOL)isGroup;
-(long long)indentationLevel;
-(BOOL)isExpanded;
-(id)representedObject;
-(BOOL)isDraggable;
-(BOOL)isExpandable;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 itemCount:(long long)arg3 ;
-(NSString *)accessoryTitle;
-(NSString *)glyphImageName;
-(BOOL)isRenamable;
-(BOOL)isEqualToNavigationListItem:(id)arg1 ;
@end

