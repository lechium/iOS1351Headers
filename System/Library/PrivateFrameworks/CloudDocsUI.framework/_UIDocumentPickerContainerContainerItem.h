/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <CloudDocsUI/_UIDocumentPickerContainerItem.h>

@class NSString, BRContainer;

@interface _UIDocumentPickerContainerContainerItem : _UIDocumentPickerContainerItem {

	NSString* _cachedSubtitle;
	BRContainer* _container;

}

@property (nonatomic,readonly) BRContainer * container; 
-(BRContainer *)container;
-(long long)type;
-(id)url;
-(id)title;
-(id)modificationDate;
-(id)subtitle;
-(id)initWithContainer:(id)arg1 ;
-(void)_modelChanged;
-(id)sortPath;
-(id)_blockingThumbnailWithSize:(CGSize)arg1 scale:(double)arg2 wantsBorder:(BOOL*)arg3 ;
@end

